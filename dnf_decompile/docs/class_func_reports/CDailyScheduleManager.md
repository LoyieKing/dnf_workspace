# CDailyScheduleManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 19

---

## AddDailSchedule

```asm
// === 08125c3c CDailyScheduleManager::AddDailSchedule  [0x08125c3c-0x8125c93] ===
 8125c3c:	55                   	push   %ebp
 8125c3d:	89 e5                	mov    %esp,%ebp
 8125c3f:	83 ec 28             	sub    $0x28,%esp
 8125c42:	8b 45 0c             	mov    0xc(%ebp),%eax
 8125c45:	89 04 24             	mov    %eax,(%esp)
 8125c48:	e8 b9 16 00 00       	call   8127306 <_ZNKSt6vectorI14_DailyScheduleSaIS0_EE4sizeEv>
 8125c4d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8125c50:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8125c57:	eb 2b                	jmp    8125c84 <_ZN21CDailyScheduleManager15AddDailScheduleERKSt6vectorI14_DailyScheduleSaIS1_EE+0x48>
 8125c59:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8125c5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8125c60:	8b 45 0c             	mov    0xc(%ebp),%eax
 8125c63:	89 04 24             	mov    %eax,(%esp)
 8125c66:	e8 bd 16 00 00       	call   8127328 <_ZNKSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8125c6b:	8b 55 08             	mov    0x8(%ebp),%edx
 8125c6e:	81 c2 d8 00 00 00    	add    $0xd8,%edx
 8125c74:	89 44 24 04          	mov    %eax,0x4(%esp)
 8125c78:	89 14 24             	mov    %edx,(%esp)
 8125c7b:	e8 c2 16 00 00       	call   8127342 <_ZNSt6vectorI14_DailyScheduleSaIS0_EE9push_backERKS0_>
 8125c80:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8125c84:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8125c87:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8125c8a:	0f 92 c0             	setb   %al
 8125c8d:	84 c0                	test   %al,%al
 8125c8f:	75 c8                	jne    8125c59 <_ZN21CDailyScheduleManager15AddDailScheduleERKSt6vectorI14_DailyScheduleSaIS1_EE+0x1d>
 8125c91:	c9                   	leave
 8125c92:	c3                   	ret
 8125c93:	90                   	nop

```

```c
// CDailyScheduleManager::AddDailSchedule @ 0x8125c3c

/* CDailyScheduleManager::AddDailSchedule(std::vector<_DailySchedule, std::allocator<_DailySchedule>
   > const&) */

void __thiscall CDailyScheduleManager::AddDailSchedule(CDailyScheduleManager *this,vector *param_1)

{
  uint uVar1;
  _DailySchedule *p_Var2;
  uint local_10;
  
  uVar1 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size
                    ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)param_1);
  for (local_10 = 0; local_10 < uVar1; local_10 = local_10 + 1) {
    p_Var2 = (_DailySchedule *)
             std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                       ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)param_1,local_10);
    std::vector<_DailySchedule,std::allocator<_DailySchedule>>::push_back
              ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),p_Var2);
  }
  return;
}

```

---

## CDailyScheduleManager

```asm
// === 08125c0c CDailyScheduleManager::CDailyScheduleManager  [0x08125c0c-0x8125c23] ===
 8125c0c:	55                   	push   %ebp
 8125c0d:	89 e5                	mov    %esp,%ebp
 8125c0f:	83 ec 18             	sub    $0x18,%esp
 8125c12:	8b 45 08             	mov    0x8(%ebp),%eax
 8125c15:	05 d8 00 00 00       	add    $0xd8,%eax
 8125c1a:	89 04 24             	mov    %eax,(%esp)
 8125c1d:	e8 72 16 00 00       	call   8127294 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEC1Ev>
 8125c22:	c9                   	leave
 8125c23:	c3                   	ret

```

```c
// CDailyScheduleManager::CDailyScheduleManager @ 0x8125c0c

/* CDailyScheduleManager::CDailyScheduleManager() */

void __thiscall CDailyScheduleManager::CDailyScheduleManager(CDailyScheduleManager *this)

{
  std::vector<_DailySchedule,std::allocator<_DailySchedule>>::vector
            ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8));
  return;
}

```

---

## CheckAndSendToAllUserSchedule

```asm
// === 08125c94 CDailyScheduleManager::CheckAndSendToAllUserSchedule  [0x08125c94-0x8125cb7] ===
 8125c94:	55                   	push   %ebp
 8125c95:	89 e5                	mov    %esp,%ebp
 8125c97:	83 ec 18             	sub    $0x18,%esp
 8125c9a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8125ca1:	00 
 8125ca2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8125ca9:	00 
 8125caa:	8b 45 08             	mov    0x8(%ebp),%eax
 8125cad:	89 04 24             	mov    %eax,(%esp)
 8125cb0:	e8 25 00 00 00       	call   8125cda <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb>
 8125cb5:	c9                   	leave
 8125cb6:	c3                   	ret
 8125cb7:	90                   	nop

```

```c
// CDailyScheduleManager::CheckAndSendToAllUserSchedule @ 0x8125c94

/* CDailyScheduleManager::CheckAndSendToAllUserSchedule() */

void __thiscall CDailyScheduleManager::CheckAndSendToAllUserSchedule(CDailyScheduleManager *this)

{
  CheckAndSendToUserSchedule((CUser *)this,false);
  return;
}

```

---

## CheckAndSendToOneUserSchedule

```asm
// === 08125cb8 CDailyScheduleManager::CheckAndSendToOneUserSchedule  [0x08125cb8-0x8125cd9] ===
 8125cb8:	55                   	push   %ebp
 8125cb9:	89 e5                	mov    %esp,%ebp
 8125cbb:	83 ec 18             	sub    $0x18,%esp
 8125cbe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8125cc5:	00 
 8125cc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8125cc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8125ccd:	8b 45 08             	mov    0x8(%ebp),%eax
 8125cd0:	89 04 24             	mov    %eax,(%esp)
 8125cd3:	e8 02 00 00 00       	call   8125cda <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb>
 8125cd8:	c9                   	leave
 8125cd9:	c3                   	ret

```

```c
// CDailyScheduleManager::CheckAndSendToOneUserSchedule @ 0x8125cb8

/* CDailyScheduleManager::CheckAndSendToOneUserSchedule(CUser&) */

void __thiscall
CDailyScheduleManager::CheckAndSendToOneUserSchedule(CDailyScheduleManager *this,CUser *param_1)

{
  CheckAndSendToUserSchedule((CUser *)this,SUB41(param_1,0));
  return;
}

```

---

## CheckAndSendToUserSchedule

```asm
// === 08125cda CDailyScheduleManager::CheckAndSendToUserSchedule  [0x08125cda-0x8125ff3] ===
 8125cda:	55                   	push   %ebp
 8125cdb:	89 e5                	mov    %esp,%ebp
 8125cdd:	56                   	push   %esi
 8125cde:	53                   	push   %ebx
 8125cdf:	81 ec b0 00 00 00    	sub    $0xb0,%esp
 8125ce5:	8b 45 10             	mov    0x10(%ebp),%eax
 8125ce8:	88 85 64 ff ff ff    	mov    %al,-0x9c(%ebp)
 8125cee:	8b 45 08             	mov    0x8(%ebp),%eax
 8125cf1:	05 d8 00 00 00       	add    $0xd8,%eax
 8125cf6:	89 04 24             	mov    %eax,(%esp)
 8125cf9:	e8 08 16 00 00       	call   8127306 <_ZNKSt6vectorI14_DailyScheduleSaIS0_EE4sizeEv>
 8125cfe:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8125d01:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8125d08:	e8 91 5f fa ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8125d0d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8125d10:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8125d16:	89 44 24 04          	mov    %eax,0x4(%esp)
 8125d1a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8125d1d:	89 04 24             	mov    %eax,(%esp)
 8125d20:	e8 3b 86 f5 ff       	call   807e360 <localtime_r@plt>
 8125d25:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8125d28:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8125d2b:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8125d32:	e9 a2 02 00 00       	jmp    8125fd9 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0x2ff>
 8125d37:	8b 45 08             	mov    0x8(%ebp),%eax
 8125d3a:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8125d40:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8125d43:	89 44 24 04          	mov    %eax,0x4(%esp)
 8125d47:	89 14 24             	mov    %edx,(%esp)
 8125d4a:	e8 67 16 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8125d4f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8125d52:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8125d59:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8125d5d:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8125d61:	75 66                	jne    8125dc9 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0xef>
 8125d63:	0f b6 85 64 ff ff ff 	movzbl -0x9c(%ebp),%eax
 8125d6a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8125d6e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8125d71:	89 44 24 08          	mov    %eax,0x8(%esp)
 8125d75:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8125d78:	89 44 24 04          	mov    %eax,0x4(%esp)
 8125d7c:	8b 45 08             	mov    0x8(%ebp),%eax
 8125d7f:	89 04 24             	mov    %eax,(%esp)
 8125d82:	e8 6d 02 00 00       	call   8125ff4 <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb>
 8125d87:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8125d8a:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8125d8e:	75 1a                	jne    8125daa <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0xd0>
 8125d90:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8125d93:	8b 40 20             	mov    0x20(%eax),%eax
 8125d96:	85 c0                	test   %eax,%eax
 8125d98:	75 2f                	jne    8125dc9 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0xef>
 8125d9a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8125d9d:	c7 40 20 01 00 00 00 	movl   $0x1,0x20(%eax)
 8125da4:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 8125da8:	eb 1f                	jmp    8125dc9 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0xef>
 8125daa:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8125dae:	75 19                	jne    8125dc9 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0xef>
 8125db0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8125db3:	8b 40 20             	mov    0x20(%eax),%eax
 8125db6:	83 f8 01             	cmp    $0x1,%eax
 8125db9:	75 0e                	jne    8125dc9 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0xef>
 8125dbb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8125dbe:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 8125dc5:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 8125dc9:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8125dcd:	74 73                	je     8125e42 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0x168>
 8125dcf:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8125dd6:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8125ddd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8125de0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8125de4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8125de7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8125deb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8125dee:	89 44 24 04          	mov    %eax,0x4(%esp)
 8125df2:	8b 45 08             	mov    0x8(%ebp),%eax
 8125df5:	89 04 24             	mov    %eax,(%esp)
 8125df8:	e8 ab 03 00 00       	call   81261a8 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_>
 8125dfd:	84 c0                	test   %al,%al
 8125dff:	74 41                	je     8125e42 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0x168>
 8125e01:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8125e04:	8b 40 20             	mov    0x20(%eax),%eax
 8125e07:	85 c0                	test   %eax,%eax
 8125e09:	75 17                	jne    8125e22 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0x148>
 8125e0b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8125e0e:	85 c0                	test   %eax,%eax
 8125e10:	74 0a                	je     8125e1c <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0x142>
 8125e12:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8125e15:	c7 40 20 01 00 00 00 	movl   $0x1,0x20(%eax)
 8125e1c:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8125e20:	eb 20                	jmp    8125e42 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0x168>
 8125e22:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8125e25:	8b 40 20             	mov    0x20(%eax),%eax
 8125e28:	83 f8 01             	cmp    $0x1,%eax
 8125e2b:	75 15                	jne    8125e42 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0x168>
 8125e2d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8125e30:	85 c0                	test   %eax,%eax
 8125e32:	74 0a                	je     8125e3e <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0x164>
 8125e34:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8125e37:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 8125e3e:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8125e42:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8125e46:	0f 84 b5 00 00 00    	je     8125f01 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0x227>
 8125e4c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8125e4f:	89 04 24             	mov    %eax,(%esp)
 8125e52:	e8 f5 7e 46 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8125e57:	c7 44 24 08 ed 01 00 	movl   $0x1ed,0x8(%esp)
 8125e5e:	00 
 8125e5f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8125e66:	00 
 8125e67:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8125e6a:	89 04 24             	mov    %eax,(%esp)
 8125e6d:	e8 8a 5a fa ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8125e72:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8125e75:	8b 40 04             	mov    0x4(%eax),%eax
 8125e78:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8125e7b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8125e7e:	8b 40 20             	mov    0x20(%eax),%eax
 8125e81:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8125e84:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8125e87:	8b 40 08             	mov    0x8(%eax),%eax
 8125e8a:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8125e8d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8125e90:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8125e93:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8125e96:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8125e9d:	00 
 8125e9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8125ea2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8125ea5:	89 04 24             	mov    %eax,(%esp)
 8125ea8:	e8 5b 80 ff ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8125ead:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8125eb4:	00 
 8125eb5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8125eb8:	89 04 24             	mov    %eax,(%esp)
 8125ebb:	e8 98 5a fa ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8125ec0:	e8 e2 44 fb ff       	call   80da3a7 <_Z11G_GameWorldv>
 8125ec5:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8125ec8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8125ecc:	89 04 24             	mov    %eax,(%esp)
 8125ecf:	e8 40 2d 5a 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 8125ed4:	eb 1b                	jmp    8125ef1 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0x217>
 8125ed6:	89 d3                	mov    %edx,%ebx
 8125ed8:	89 c6                	mov    %eax,%esi
 8125eda:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8125edd:	89 04 24             	mov    %eax,(%esp)
 8125ee0:	e8 9b 7f 46 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8125ee5:	89 f0                	mov    %esi,%eax
 8125ee7:	89 da                	mov    %ebx,%edx
 8125ee9:	89 04 24             	mov    %eax,(%esp)
 8125eec:	e8 5f d8 9b 00       	call   8ae3750 <_Unwind_Resume>
 8125ef1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8125ef4:	89 04 24             	mov    %eax,(%esp)
 8125ef7:	e8 84 7f 46 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8125efc:	e9 d4 00 00 00       	jmp    8125fd5 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0x2fb>
 8125f01:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8125f05:	83 f0 01             	xor    $0x1,%eax
 8125f08:	84 c0                	test   %al,%al
 8125f0a:	0f 84 c5 00 00 00    	je     8125fd5 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0x2fb>
 8125f10:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8125f13:	8b 40 20             	mov    0x20(%eax),%eax
 8125f16:	83 f8 01             	cmp    $0x1,%eax
 8125f19:	0f 85 b6 00 00 00    	jne    8125fd5 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0x2fb>
 8125f1f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8125f23:	0f 84 ac 00 00 00    	je     8125fd5 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0x2fb>
 8125f29:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8125f2c:	89 04 24             	mov    %eax,(%esp)
 8125f2f:	e8 18 7e 46 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8125f34:	c7 44 24 08 ed 01 00 	movl   $0x1ed,0x8(%esp)
 8125f3b:	00 
 8125f3c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8125f43:	00 
 8125f44:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8125f47:	89 04 24             	mov    %eax,(%esp)
 8125f4a:	e8 ad 59 fa ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8125f4f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8125f52:	8b 40 04             	mov    0x4(%eax),%eax
 8125f55:	89 45 98             	mov    %eax,-0x68(%ebp)
 8125f58:	c7 45 9c 02 00 00 00 	movl   $0x2,-0x64(%ebp)
 8125f5f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8125f62:	8b 40 08             	mov    0x8(%eax),%eax
 8125f65:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8125f68:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8125f6b:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8125f6e:	8d 45 98             	lea    -0x68(%ebp),%eax
 8125f71:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8125f78:	00 
 8125f79:	89 44 24 04          	mov    %eax,0x4(%esp)
 8125f7d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8125f80:	89 04 24             	mov    %eax,(%esp)
 8125f83:	e8 80 7f ff ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8125f88:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8125f8f:	00 
 8125f90:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8125f93:	89 04 24             	mov    %eax,(%esp)
 8125f96:	e8 bd 59 fa ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8125f9b:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8125f9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8125fa2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8125fa5:	89 04 24             	mov    %eax,(%esp)
 8125fa8:	e8 0d 26 52 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8125fad:	eb 1b                	jmp    8125fca <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0x2f0>
 8125faf:	89 d3                	mov    %edx,%ebx
 8125fb1:	89 c6                	mov    %eax,%esi
 8125fb3:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8125fb6:	89 04 24             	mov    %eax,(%esp)
 8125fb9:	e8 c2 7e 46 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8125fbe:	89 f0                	mov    %esi,%eax
 8125fc0:	89 da                	mov    %ebx,%edx
 8125fc2:	89 04 24             	mov    %eax,(%esp)
 8125fc5:	e8 86 d7 9b 00       	call   8ae3750 <_Unwind_Resume>
 8125fca:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8125fcd:	89 04 24             	mov    %eax,(%esp)
 8125fd0:	e8 ab 7e 46 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8125fd5:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8125fd9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8125fdc:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8125fdf:	0f 92 c0             	setb   %al
 8125fe2:	84 c0                	test   %al,%al
 8125fe4:	0f 85 4d fd ff ff    	jne    8125d37 <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb+0x5d>
 8125fea:	81 c4 b0 00 00 00    	add    $0xb0,%esp
 8125ff0:	5b                   	pop    %ebx
 8125ff1:	5e                   	pop    %esi
 8125ff2:	5d                   	pop    %ebp
 8125ff3:	c3                   	ret

```

```c
// CDailyScheduleManager::CheckAndSendToUserSchedule @ 0x8125cda

/* CDailyScheduleManager::CheckAndSendToUserSchedule(CUser*, bool) */

void CDailyScheduleManager::CheckAndSendToUserSchedule(CUser *param_1,bool param_2)

{
  char cVar1;
  GameWorld *this;
  undefined3 in_stack_00000009;
  tm local_98;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  PacketGuard local_5c [12];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  PacketGuard local_40 [12];
  _DailySchedule *local_34;
  _DailySchedule *local_30;
  undefined4 local_2c;
  time_t local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  _DailySchedule *local_18;
  char local_11;
  int local_10;
  
  local_24 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size
                       ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(param_1 + 0xd8));
  local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_28,&local_98);
  local_20 = local_98.tm_wday;
  for (local_1c = 0; local_1c < local_24; local_1c = local_1c + 1) {
    local_18 = (_DailySchedule *)
               std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                         ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(param_1 + 0xd8),
                          local_1c);
    local_2c = 0;
    local_11 = '\0';
    if (_param_2 == (CUser *)0x0) {
      local_10 = CheckScheduleState((_DailySchedule *)param_1,(uint *)local_18,SUB41(&local_2c,0));
      if (local_10 == 1) {
        if (*(uint *)(local_18 + 0x20) == 0) {
          *(uint *)(local_18 + 0x20) = 1;
          local_11 = '\x01';
        }
      }
      else if ((local_10 == 0) && (*(uint *)(local_18 + 0x20) == 1)) {
        *(uint *)(local_18 + 0x20) = 0;
        local_11 = '\x01';
      }
    }
    if (local_11 != '\0') {
      local_30 = (_DailySchedule *)0x0;
      local_34 = (_DailySchedule *)0x0;
      cVar1 = CheckContinueSchedule((CDailyScheduleManager *)param_1,local_18,&local_30,&local_34);
      if (cVar1 != '\0') {
        if (*(int *)(local_18 + 0x20) == 0) {
          if (local_34 != (_DailySchedule *)0x0) {
            *(undefined4 *)(local_34 + 0x20) = 1;
          }
          local_11 = '\0';
        }
        else if (*(int *)(local_18 + 0x20) == 1) {
          if (local_30 != (_DailySchedule *)0x0) {
            *(undefined4 *)(local_30 + 0x20) = 0;
          }
          local_11 = '\0';
        }
      }
    }
    if (local_11 == '\0') {
      if ((*(int *)(local_18 + 0x20) == 1) && (_param_2 != (CUser *)0x0)) {
        PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 08125f4a to 08125fac has its CatchHandler @ 08125faf */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_5c,0,0x1ed);
        local_6c = *(undefined4 *)(local_18 + 4);
        local_68 = 2;
        local_64 = *(undefined4 *)(local_18 + 8);
        local_60 = local_2c;
        InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_5c,(char *)&local_6c,0x10);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_5c,true);
        CUser::Send(_param_2,local_5c);
        PacketGuard::~PacketGuard(local_5c);
      }
    }
    else {
      PacketGuard::PacketGuard(local_40);
                    /* try { // try from 08125e6d to 08125ed3 has its CatchHandler @ 08125ed6 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0x1ed);
      local_50 = *(undefined4 *)(local_18 + 4);
      local_4c = *(undefined4 *)(local_18 + 0x20);
      local_48 = *(undefined4 *)(local_18 + 8);
      local_44 = local_2c;
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_40,(char *)&local_50,0x10);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
      this = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this,local_40);
      PacketGuard::~PacketGuard(local_40);
    }
  }
  return;
}

```

---

## CheckContinueSchedule

```asm
// === 081261a8 CDailyScheduleManager::CheckContinueSchedule  [0x081261a8-0x81266e1] ===
 81261a8:	55                   	push   %ebp
 81261a9:	89 e5                	mov    %esp,%ebp
 81261ab:	53                   	push   %ebx
 81261ac:	81 ec 24 01 00 00    	sub    $0x124,%esp
 81261b2:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81261b9:	e8 e0 5a fa ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81261be:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81261c1:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81261c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81261c8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81261cb:	89 04 24             	mov    %eax,(%esp)
 81261ce:	e8 8d 81 f5 ff       	call   807e360 <localtime_r@plt>
 81261d3:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81261d6:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81261d9:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 81261e0:	00 
 81261e1:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81261e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81261e8:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81261ee:	89 04 24             	mov    %eax,(%esp)
 81261f1:	e8 aa 76 f5 ff       	call   807d8a0 <memcpy@plt>
 81261f6:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 81261fd:	00 
 81261fe:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8126201:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126205:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 812620b:	89 04 24             	mov    %eax,(%esp)
 812620e:	e8 8d 76 f5 ff       	call   807d8a0 <memcpy@plt>
 8126213:	8b 45 0c             	mov    0xc(%ebp),%eax
 8126216:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 812621a:	0f b6 c0             	movzbl %al,%eax
 812621d:	89 45 80             	mov    %eax,-0x80(%ebp)
 8126220:	8b 45 0c             	mov    0xc(%ebp),%eax
 8126223:	0f b6 40 19          	movzbl 0x19(%eax),%eax
 8126227:	0f b6 c0             	movzbl %al,%eax
 812622a:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 8126230:	8b 45 0c             	mov    0xc(%ebp),%eax
 8126233:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 8126237:	0f b6 c0             	movzbl %al,%eax
 812623a:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8126240:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8126246:	89 04 24             	mov    %eax,(%esp)
 8126249:	e8 d2 85 f5 ff       	call   807e820 <mktime@plt>
 812624e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8126251:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8126254:	83 e8 01             	sub    $0x1,%eax
 8126257:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 812625a:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8126260:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126264:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8126267:	89 04 24             	mov    %eax,(%esp)
 812626a:	e8 f1 80 f5 ff       	call   807e360 <localtime_r@plt>
 812626f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8126272:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 8126276:	0f b6 c0             	movzbl %al,%eax
 8126279:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 812627f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8126282:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 8126286:	0f b6 c0             	movzbl %al,%eax
 8126289:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 812628f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8126292:	0f b6 40 1d          	movzbl 0x1d(%eax),%eax
 8126296:	0f b6 c0             	movzbl %al,%eax
 8126299:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 812629f:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 81262a5:	89 04 24             	mov    %eax,(%esp)
 81262a8:	e8 73 85 f5 ff       	call   807e820 <mktime@plt>
 81262ad:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81262b0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81262b3:	83 c0 01             	add    $0x1,%eax
 81262b6:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81262b9:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 81262bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81262c3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81262c6:	89 04 24             	mov    %eax,(%esp)
 81262c9:	e8 92 80 f5 ff       	call   807e360 <localtime_r@plt>
 81262ce:	8b 45 08             	mov    0x8(%ebp),%eax
 81262d1:	05 d8 00 00 00       	add    $0xd8,%eax
 81262d6:	89 04 24             	mov    %eax,(%esp)
 81262d9:	e8 28 10 00 00       	call   8127306 <_ZNKSt6vectorI14_DailyScheduleSaIS0_EE4sizeEv>
 81262de:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81262e1:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81262e8:	e9 bc 03 00 00       	jmp    81266a9 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x501>
 81262ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 81262f0:	8b 58 08             	mov    0x8(%eax),%ebx
 81262f3:	8b 45 08             	mov    0x8(%ebp),%eax
 81262f6:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 81262fc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81262ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126303:	89 14 24             	mov    %edx,(%esp)
 8126306:	e8 ab 10 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 812630b:	8b 40 08             	mov    0x8(%eax),%eax
 812630e:	39 c3                	cmp    %eax,%ebx
 8126310:	75 27                	jne    8126339 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x191>
 8126312:	8b 45 0c             	mov    0xc(%ebp),%eax
 8126315:	8b 40 04             	mov    0x4(%eax),%eax
 8126318:	89 c3                	mov    %eax,%ebx
 812631a:	8b 45 08             	mov    0x8(%ebp),%eax
 812631d:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126323:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8126326:	89 44 24 04          	mov    %eax,0x4(%esp)
 812632a:	89 14 24             	mov    %edx,(%esp)
 812632d:	e8 84 10 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126332:	8b 40 04             	mov    0x4(%eax),%eax
 8126335:	39 c3                	cmp    %eax,%ebx
 8126337:	74 07                	je     8126340 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x198>
 8126339:	b8 01 00 00 00       	mov    $0x1,%eax
 812633e:	eb 05                	jmp    8126345 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x19d>
 8126340:	b8 00 00 00 00       	mov    $0x0,%eax
 8126345:	84 c0                	test   %al,%al
 8126347:	0f 85 54 03 00 00    	jne    81266a1 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x4f9>
 812634d:	8b 45 08             	mov    0x8(%ebp),%eax
 8126350:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126356:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8126359:	89 44 24 04          	mov    %eax,0x4(%esp)
 812635d:	89 14 24             	mov    %edx,(%esp)
 8126360:	e8 51 10 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126365:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8126368:	0f 94 c0             	sete   %al
 812636b:	84 c0                	test   %al,%al
 812636d:	0f 85 31 03 00 00    	jne    81266a4 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x4fc>
 8126373:	c6 45 ea 00          	movb   $0x0,-0x16(%ebp)
 8126377:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 812637b:	8b 45 0c             	mov    0xc(%ebp),%eax
 812637e:	8b 40 20             	mov    0x20(%eax),%eax
 8126381:	85 c0                	test   %eax,%eax
 8126383:	0f 85 98 00 00 00    	jne    8126421 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x279>
 8126389:	8b 9d 54 ff ff ff    	mov    -0xac(%ebp),%ebx
 812638f:	8b 45 08             	mov    0x8(%ebp),%eax
 8126392:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126398:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812639b:	89 44 24 04          	mov    %eax,0x4(%esp)
 812639f:	89 14 24             	mov    %edx,(%esp)
 81263a2:	e8 0f 10 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 81263a7:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 81263ab:	0f b6 c0             	movzbl %al,%eax
 81263ae:	39 c3                	cmp    %eax,%ebx
 81263b0:	75 59                	jne    812640b <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x263>
 81263b2:	8b 9d 50 ff ff ff    	mov    -0xb0(%ebp),%ebx
 81263b8:	8b 45 08             	mov    0x8(%ebp),%eax
 81263bb:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 81263c1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81263c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81263c8:	89 14 24             	mov    %edx,(%esp)
 81263cb:	e8 e6 0f 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 81263d0:	0f b6 40 19          	movzbl 0x19(%eax),%eax
 81263d4:	0f b6 c0             	movzbl %al,%eax
 81263d7:	39 c3                	cmp    %eax,%ebx
 81263d9:	75 30                	jne    812640b <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x263>
 81263db:	8b 9d 4c ff ff ff    	mov    -0xb4(%ebp),%ebx
 81263e1:	8b 45 08             	mov    0x8(%ebp),%eax
 81263e4:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 81263ea:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81263ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 81263f1:	89 14 24             	mov    %edx,(%esp)
 81263f4:	e8 bd 0f 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 81263f9:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 81263fd:	0f b6 c0             	movzbl %al,%eax
 8126400:	39 c3                	cmp    %eax,%ebx
 8126402:	75 07                	jne    812640b <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x263>
 8126404:	b8 01 00 00 00       	mov    $0x1,%eax
 8126409:	eb 05                	jmp    8126410 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x268>
 812640b:	b8 00 00 00 00       	mov    $0x0,%eax
 8126410:	84 c0                	test   %al,%al
 8126412:	0f 84 a4 00 00 00    	je     81264bc <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x314>
 8126418:	c6 45 eb 01          	movb   $0x1,-0x15(%ebp)
 812641c:	e9 9b 00 00 00       	jmp    81264bc <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x314>
 8126421:	8b 45 0c             	mov    0xc(%ebp),%eax
 8126424:	8b 40 20             	mov    0x20(%eax),%eax
 8126427:	83 f8 01             	cmp    $0x1,%eax
 812642a:	0f 85 8c 00 00 00    	jne    81264bc <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x314>
 8126430:	8b 5d 80             	mov    -0x80(%ebp),%ebx
 8126433:	8b 45 08             	mov    0x8(%ebp),%eax
 8126436:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 812643c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812643f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126443:	89 14 24             	mov    %edx,(%esp)
 8126446:	e8 6b 0f 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 812644b:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 812644f:	0f b6 c0             	movzbl %al,%eax
 8126452:	39 c3                	cmp    %eax,%ebx
 8126454:	75 59                	jne    81264af <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x307>
 8126456:	8b 9d 7c ff ff ff    	mov    -0x84(%ebp),%ebx
 812645c:	8b 45 08             	mov    0x8(%ebp),%eax
 812645f:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126465:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8126468:	89 44 24 04          	mov    %eax,0x4(%esp)
 812646c:	89 14 24             	mov    %edx,(%esp)
 812646f:	e8 42 0f 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126474:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 8126478:	0f b6 c0             	movzbl %al,%eax
 812647b:	39 c3                	cmp    %eax,%ebx
 812647d:	75 30                	jne    81264af <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x307>
 812647f:	8b 9d 78 ff ff ff    	mov    -0x88(%ebp),%ebx
 8126485:	8b 45 08             	mov    0x8(%ebp),%eax
 8126488:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 812648e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8126491:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126495:	89 14 24             	mov    %edx,(%esp)
 8126498:	e8 19 0f 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 812649d:	0f b6 40 1d          	movzbl 0x1d(%eax),%eax
 81264a1:	0f b6 c0             	movzbl %al,%eax
 81264a4:	39 c3                	cmp    %eax,%ebx
 81264a6:	75 07                	jne    81264af <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x307>
 81264a8:	b8 01 00 00 00       	mov    $0x1,%eax
 81264ad:	eb 05                	jmp    81264b4 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x30c>
 81264af:	b8 00 00 00 00       	mov    $0x0,%eax
 81264b4:	84 c0                	test   %al,%al
 81264b6:	74 04                	je     81264bc <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x314>
 81264b8:	c6 45 ea 01          	movb   $0x1,-0x16(%ebp)
 81264bc:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
 81264c0:	0f 84 b6 01 00 00    	je     812667c <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x4d4>
 81264c6:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 81264cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81264d0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81264d3:	89 04 24             	mov    %eax,(%esp)
 81264d6:	e8 85 7e f5 ff       	call   807e360 <localtime_r@plt>
 81264db:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 81264e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81264e5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81264e8:	89 04 24             	mov    %eax,(%esp)
 81264eb:	e8 70 7e f5 ff       	call   807e360 <localtime_r@plt>
 81264f0:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 81264f6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81264f9:	8b 45 08             	mov    0x8(%ebp),%eax
 81264fc:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126502:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8126505:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126509:	89 14 24             	mov    %edx,(%esp)
 812650c:	e8 a5 0e 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126511:	8b 40 14             	mov    0x14(%eax),%eax
 8126514:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8126517:	74 20                	je     8126539 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x391>
 8126519:	8b 45 08             	mov    0x8(%ebp),%eax
 812651c:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126522:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8126525:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126529:	89 14 24             	mov    %edx,(%esp)
 812652c:	e8 85 0e 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126531:	8b 40 14             	mov    0x14(%eax),%eax
 8126534:	83 f8 07             	cmp    $0x7,%eax
 8126537:	75 07                	jne    8126540 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x398>
 8126539:	b8 01 00 00 00       	mov    $0x1,%eax
 812653e:	eb 05                	jmp    8126545 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x39d>
 8126540:	b8 00 00 00 00       	mov    $0x0,%eax
 8126545:	84 c0                	test   %al,%al
 8126547:	0f 84 58 01 00 00    	je     81266a5 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x4fd>
 812654d:	8b 45 08             	mov    0x8(%ebp),%eax
 8126550:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126556:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8126559:	89 44 24 04          	mov    %eax,0x4(%esp)
 812655d:	89 14 24             	mov    %edx,(%esp)
 8126560:	e8 51 0e 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126565:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 8126569:	0f b6 c0             	movzbl %al,%eax
 812656c:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 8126572:	8b 45 08             	mov    0x8(%ebp),%eax
 8126575:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 812657b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812657e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126582:	89 14 24             	mov    %edx,(%esp)
 8126585:	e8 2c 0e 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 812658a:	0f b6 40 19          	movzbl 0x19(%eax),%eax
 812658e:	0f b6 c0             	movzbl %al,%eax
 8126591:	89 85 f8 fe ff ff    	mov    %eax,-0x108(%ebp)
 8126597:	8b 45 08             	mov    0x8(%ebp),%eax
 812659a:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 81265a0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81265a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81265a7:	89 14 24             	mov    %edx,(%esp)
 81265aa:	e8 07 0e 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 81265af:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 81265b3:	0f b6 c0             	movzbl %al,%eax
 81265b6:	89 85 f4 fe ff ff    	mov    %eax,-0x10c(%ebp)
 81265bc:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 81265c2:	89 04 24             	mov    %eax,(%esp)
 81265c5:	e8 56 82 f5 ff       	call   807e820 <mktime@plt>
 81265ca:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81265cd:	8b 45 08             	mov    0x8(%ebp),%eax
 81265d0:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 81265d6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81265d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81265dd:	89 14 24             	mov    %edx,(%esp)
 81265e0:	e8 d1 0d 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 81265e5:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 81265e9:	0f b6 c0             	movzbl %al,%eax
 81265ec:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 81265f2:	8b 45 08             	mov    0x8(%ebp),%eax
 81265f5:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 81265fb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81265fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126602:	89 14 24             	mov    %edx,(%esp)
 8126605:	e8 ac 0d 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 812660a:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 812660e:	0f b6 c0             	movzbl %al,%eax
 8126611:	89 85 f8 fe ff ff    	mov    %eax,-0x108(%ebp)
 8126617:	8b 45 08             	mov    0x8(%ebp),%eax
 812661a:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126620:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8126623:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126627:	89 14 24             	mov    %edx,(%esp)
 812662a:	e8 87 0d 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 812662f:	0f b6 40 1d          	movzbl 0x1d(%eax),%eax
 8126633:	0f b6 c0             	movzbl %al,%eax
 8126636:	89 85 f4 fe ff ff    	mov    %eax,-0x10c(%ebp)
 812663c:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 8126642:	89 04 24             	mov    %eax,(%esp)
 8126645:	e8 d6 81 f5 ff       	call   807e820 <mktime@plt>
 812664a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812664d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8126650:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8126653:	7c 50                	jl     81266a5 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x4fd>
 8126655:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8126658:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 812665b:	7f 48                	jg     81266a5 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x4fd>
 812665d:	8b 45 08             	mov    0x8(%ebp),%eax
 8126660:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126666:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8126669:	89 44 24 04          	mov    %eax,0x4(%esp)
 812666d:	89 14 24             	mov    %edx,(%esp)
 8126670:	e8 41 0d 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126675:	8b 55 14             	mov    0x14(%ebp),%edx
 8126678:	89 02                	mov    %eax,(%edx)
 812667a:	eb 29                	jmp    81266a5 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x4fd>
 812667c:	80 7d ea 00          	cmpb   $0x0,-0x16(%ebp)
 8126680:	74 23                	je     81266a5 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x4fd>
 8126682:	8b 45 08             	mov    0x8(%ebp),%eax
 8126685:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 812668b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812668e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126692:	89 14 24             	mov    %edx,(%esp)
 8126695:	e8 1c 0d 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 812669a:	8b 55 10             	mov    0x10(%ebp),%edx
 812669d:	89 02                	mov    %eax,(%edx)
 812669f:	eb 04                	jmp    81266a5 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x4fd>
 81266a1:	90                   	nop
 81266a2:	eb 01                	jmp    81266a5 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x4fd>
 81266a4:	90                   	nop
 81266a5:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 81266a9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81266ac:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 81266af:	0f 92 c0             	setb   %al
 81266b2:	84 c0                	test   %al,%al
 81266b4:	0f 85 33 fc ff ff    	jne    81262ed <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x145>
 81266ba:	8b 45 14             	mov    0x14(%ebp),%eax
 81266bd:	8b 00                	mov    (%eax),%eax
 81266bf:	85 c0                	test   %eax,%eax
 81266c1:	75 09                	jne    81266cc <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x524>
 81266c3:	8b 45 10             	mov    0x10(%ebp),%eax
 81266c6:	8b 00                	mov    (%eax),%eax
 81266c8:	85 c0                	test   %eax,%eax
 81266ca:	74 07                	je     81266d3 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x52b>
 81266cc:	b8 01 00 00 00       	mov    $0x1,%eax
 81266d1:	eb 05                	jmp    81266d8 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_+0x530>
 81266d3:	b8 00 00 00 00       	mov    $0x0,%eax
 81266d8:	81 c4 24 01 00 00    	add    $0x124,%esp
 81266de:	5b                   	pop    %ebx
 81266df:	5d                   	pop    %ebp
 81266e0:	c3                   	ret
 81266e1:	90                   	nop

```

```c
// CDailyScheduleManager::CheckContinueSchedule @ 0x81261a8

/* CDailyScheduleManager::CheckContinueSchedule(_DailySchedule const&, _DailySchedule**,
   _DailySchedule**) */

undefined4 __thiscall
CDailyScheduleManager::CheckContinueSchedule
          (CDailyScheduleManager *this,_DailySchedule *param_1,_DailySchedule **param_2,
          _DailySchedule **param_3)

{
  bool bVar1;
  time_t tVar2;
  int iVar3;
  _DailySchedule *p_Var4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  tm local_110;
  tm local_e4;
  tm local_b8;
  tm local_8c;
  tm local_60;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  char local_1a;
  char local_19;
  int local_18;
  time_t local_14;
  time_t local_10;
  
  local_2c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_2c,&local_60);
  local_28 = local_60.tm_wday;
  memcpy(&local_8c,&local_60,0x2c);
  memcpy(&local_b8,&local_60,0x2c);
  local_8c.tm_hour = (int)(byte)param_1[0x18];
  local_8c.tm_min = (int)(byte)param_1[0x19];
  local_8c.tm_sec = (int)(byte)param_1[0x1a];
  tVar2 = mktime(&local_8c);
  local_30 = tVar2 + -1;
  localtime_r(&local_30,&local_8c);
  local_b8.tm_hour = (int)(byte)param_1[0x1b];
  local_b8.tm_min = (int)(byte)param_1[0x1c];
  local_b8.tm_sec = (int)(byte)param_1[0x1d];
  tVar2 = mktime(&local_b8);
  local_34 = tVar2 + 1;
  localtime_r(&local_34,&local_b8);
  local_24 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size
                       ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8));
  for (local_20 = 0; local_20 < local_24; local_20 = local_20 + 1) {
    iVar6 = *(int *)(param_1 + 8);
    iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                      ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                       local_20);
    if ((iVar6 == *(int *)(iVar3 + 8)) &&
       (iVar6 = *(int *)(param_1 + 4),
       iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                         ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                          local_20), iVar6 == *(int *)(iVar3 + 4))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) &&
       (p_Var4 = (_DailySchedule *)
                 std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                           ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                            local_20), iVar3 = local_8c.tm_hour, iVar6 = local_b8.tm_hour,
       p_Var4 != param_1)) {
      local_1a = '\0';
      local_19 = '\0';
      if (*(int *)(param_1 + 0x20) == 0) {
        iVar5 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_20);
        iVar3 = local_b8.tm_min;
        if (((iVar6 == (uint)*(byte *)(iVar5 + 0x18)) &&
            (iVar5 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                               ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                (this + 0xd8),local_20), iVar6 = local_b8.tm_sec,
            iVar3 == (uint)*(byte *)(iVar5 + 0x19))) &&
           (iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                              ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                               (this + 0xd8),local_20), iVar6 == (uint)*(byte *)(iVar3 + 0x1a))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_19 = '\x01';
        }
      }
      else if (*(int *)(param_1 + 0x20) == 1) {
        iVar5 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_20);
        iVar6 = local_8c.tm_min;
        if (((iVar3 == (uint)*(byte *)(iVar5 + 0x1b)) &&
            (iVar5 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                               ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                (this + 0xd8),local_20), iVar3 = local_8c.tm_sec,
            iVar6 == (uint)*(byte *)(iVar5 + 0x1c))) &&
           (iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                              ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                               (this + 0xd8),local_20), iVar3 == (uint)*(byte *)(iVar6 + 0x1d))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_1a = '\x01';
        }
      }
      if (local_19 == '\0') {
        if (local_1a != '\0') {
          p_Var4 = (_DailySchedule *)
                   std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                             ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8)
                              ,local_20);
          *param_2 = p_Var4;
        }
      }
      else {
        localtime_r(&local_2c,&local_e4);
        localtime_r(&local_2c,&local_110);
        local_18 = local_e4.tm_wday;
        iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_20);
        if ((*(int *)(iVar6 + 0x14) == local_18) ||
           (iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                              ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                               (this + 0xd8),local_20), *(int *)(iVar6 + 0x14) == 7)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                            ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                             local_20);
          local_110.tm_hour = (int)*(byte *)(iVar6 + 0x18);
          iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                            ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                             local_20);
          local_110.tm_min = (int)*(byte *)(iVar6 + 0x19);
          iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                            ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                             local_20);
          local_110.tm_sec = (int)*(byte *)(iVar6 + 0x1a);
          local_14 = mktime(&local_110);
          iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                            ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                             local_20);
          local_110.tm_hour = (int)*(byte *)(iVar6 + 0x1b);
          iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                            ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                             local_20);
          local_110.tm_min = (int)*(byte *)(iVar6 + 0x1c);
          iVar6 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                            ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                             local_20);
          local_110.tm_sec = (int)*(byte *)(iVar6 + 0x1d);
          local_10 = mktime(&local_110);
          if ((local_14 <= local_2c) && (local_2c <= local_10)) {
            p_Var4 = (_DailySchedule *)
                     std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                               ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                (this + 0xd8),local_20);
            *param_3 = p_Var4;
          }
        }
      }
    }
  }
  if ((*param_3 == (_DailySchedule *)0x0) && (*param_2 == (_DailySchedule *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}

```

---

## CheckScheduleState

```asm
// === 08125ff4 CDailyScheduleManager::CheckScheduleState  [0x08125ff4-0x81261a7] ===
 8125ff4:	55                   	push   %ebp
 8125ff5:	89 e5                	mov    %esp,%ebp
 8125ff7:	83 ec 68             	sub    $0x68,%esp
 8125ffa:	8b 45 14             	mov    0x14(%ebp),%eax
 8125ffd:	88 45 b4             	mov    %al,-0x4c(%ebp)
 8126000:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8126007:	e8 92 5c fa ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 812600c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 812600f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8126012:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126016:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8126019:	89 04 24             	mov    %eax,(%esp)
 812601c:	e8 3f 83 f5 ff       	call   807e360 <localtime_r@plt>
 8126021:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8126024:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8126027:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 812602e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8126031:	8b 00                	mov    (%eax),%eax
 8126033:	85 c0                	test   %eax,%eax
 8126035:	0f 84 8e 00 00 00    	je     81260c9 <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb+0xd5>
 812603b:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8126040:	85 c0                	test   %eax,%eax
 8126042:	74 1c                	je     8126060 <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb+0x6c>
 8126044:	8b 45 0c             	mov    0xc(%ebp),%eax
 8126047:	8b 00                	mov    (%eax),%eax
 8126049:	89 c2                	mov    %eax,%edx
 812604b:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8126050:	89 54 24 04          	mov    %edx,0x4(%esp)
 8126054:	89 04 24             	mov    %eax,(%esp)
 8126057:	e8 3c f9 fe ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 812605c:	85 c0                	test   %eax,%eax
 812605e:	75 07                	jne    8126067 <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb+0x73>
 8126060:	b8 01 00 00 00       	mov    $0x1,%eax
 8126065:	eb 05                	jmp    812606c <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb+0x78>
 8126067:	b8 00 00 00 00       	mov    $0x0,%eax
 812606c:	84 c0                	test   %al,%al
 812606e:	74 13                	je     8126083 <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb+0x8f>
 8126070:	8b 45 10             	mov    0x10(%ebp),%eax
 8126073:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8126079:	b8 00 00 00 00       	mov    $0x0,%eax
 812607e:	e9 22 01 00 00       	jmp    81261a5 <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb+0x1b1>
 8126083:	8b 45 0c             	mov    0xc(%ebp),%eax
 8126086:	8b 00                	mov    (%eax),%eax
 8126088:	89 c2                	mov    %eax,%edx
 812608a:	a1 30 f7 41 09       	mov    0x941f730,%eax
 812608f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8126093:	89 04 24             	mov    %eax,(%esp)
 8126096:	e8 fd f8 fe ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 812609b:	8b 10                	mov    (%eax),%edx
 812609d:	83 c2 34             	add    $0x34,%edx
 81260a0:	8b 12                	mov    (%edx),%edx
 81260a2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81260a9:	00 
 81260aa:	89 04 24             	mov    %eax,(%esp)
 81260ad:	ff d2                	call   *%edx
 81260af:	83 f0 01             	xor    $0x1,%eax
 81260b2:	84 c0                	test   %al,%al
 81260b4:	74 13                	je     81260c9 <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb+0xd5>
 81260b6:	8b 45 10             	mov    0x10(%ebp),%eax
 81260b9:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 81260bf:	b8 00 00 00 00       	mov    $0x0,%eax
 81260c4:	e9 dc 00 00 00       	jmp    81261a5 <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb+0x1b1>
 81260c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81260cc:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 81260d0:	0f b6 c0             	movzbl %al,%eax
 81260d3:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81260d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81260d9:	0f b6 40 19          	movzbl 0x19(%eax),%eax
 81260dd:	0f b6 c0             	movzbl %al,%eax
 81260e0:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81260e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81260e6:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 81260ea:	0f b6 c0             	movzbl %al,%eax
 81260ed:	89 45 b8             	mov    %eax,-0x48(%ebp)
 81260f0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81260f3:	89 04 24             	mov    %eax,(%esp)
 81260f6:	e8 25 87 f5 ff       	call   807e820 <mktime@plt>
 81260fb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81260fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8126101:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 8126105:	0f b6 c0             	movzbl %al,%eax
 8126108:	89 45 c0             	mov    %eax,-0x40(%ebp)
 812610b:	8b 45 0c             	mov    0xc(%ebp),%eax
 812610e:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 8126112:	0f b6 c0             	movzbl %al,%eax
 8126115:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8126118:	8b 45 0c             	mov    0xc(%ebp),%eax
 812611b:	0f b6 40 1d          	movzbl 0x1d(%eax),%eax
 812611f:	0f b6 c0             	movzbl %al,%eax
 8126122:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8126125:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8126128:	89 04 24             	mov    %eax,(%esp)
 812612b:	e8 f0 86 f5 ff       	call   807e820 <mktime@plt>
 8126130:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8126133:	8b 45 0c             	mov    0xc(%ebp),%eax
 8126136:	8b 50 0c             	mov    0xc(%eax),%edx
 8126139:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812613c:	39 c2                	cmp    %eax,%edx
 812613e:	7f 3e                	jg     812617e <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb+0x18a>
 8126140:	8b 45 0c             	mov    0xc(%ebp),%eax
 8126143:	8b 50 10             	mov    0x10(%eax),%edx
 8126146:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8126149:	39 c2                	cmp    %eax,%edx
 812614b:	7c 31                	jl     812617e <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb+0x18a>
 812614d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8126150:	8b 40 14             	mov    0x14(%eax),%eax
 8126153:	89 c2                	mov    %eax,%edx
 8126155:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8126158:	39 c2                	cmp    %eax,%edx
 812615a:	74 0b                	je     8126167 <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb+0x173>
 812615c:	8b 45 0c             	mov    0xc(%ebp),%eax
 812615f:	8b 40 14             	mov    0x14(%eax),%eax
 8126162:	83 f8 07             	cmp    $0x7,%eax
 8126165:	75 17                	jne    812617e <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb+0x18a>
 8126167:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812616a:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 812616d:	7c 0f                	jl     812617e <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb+0x18a>
 812616f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8126172:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8126175:	7f 07                	jg     812617e <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb+0x18a>
 8126177:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 812617e:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8126182:	75 0b                	jne    812618f <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb+0x19b>
 8126184:	8b 45 10             	mov    0x10(%ebp),%eax
 8126187:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 812618d:	eb 13                	jmp    81261a2 <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb+0x1ae>
 812618f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8126192:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8126195:	89 d1                	mov    %edx,%ecx
 8126197:	29 c1                	sub    %eax,%ecx
 8126199:	89 c8                	mov    %ecx,%eax
 812619b:	89 c2                	mov    %eax,%edx
 812619d:	8b 45 10             	mov    0x10(%ebp),%eax
 81261a0:	89 10                	mov    %edx,(%eax)
 81261a2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81261a5:	c9                   	leave
 81261a6:	c3                   	ret
 81261a7:	90                   	nop

```

```c
// CDailyScheduleManager::CheckScheduleState @ 0x8125ff4

/* CDailyScheduleManager::CheckScheduleState(_DailySchedule const&, unsigned int&, bool) const */

int CDailyScheduleManager::CheckScheduleState(_DailySchedule *param_1,uint *param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  time_t tVar5;
  time_t tVar6;
  undefined3 in_stack_0000000d;
  tm local_4c;
  int local_20;
  uint local_1c;
  int iVar7;
  
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_20,&local_4c);
  local_1c = local_4c.tm_wday;
  iVar7 = 0;
  if (*param_2 != 0) {
    if ((GlobalData::s_event_manager == (CEventManager *)0x0) ||
       (iVar3 = CEventManager::GetRepeatEvent(GlobalData::s_event_manager,*param_2), iVar3 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      *_param_3 = 0;
      return 0;
    }
    piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,*param_2);
    cVar2 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
    if (cVar2 != '\x01') {
      *_param_3 = 0;
      return 0;
    }
  }
  local_4c.tm_hour = (int)(byte)param_2[6];
  local_4c.tm_min = (int)*(byte *)((int)param_2 + 0x19);
  local_4c.tm_sec = (int)*(byte *)((int)param_2 + 0x1a);
  tVar5 = mktime(&local_4c);
  local_4c.tm_hour = (int)*(byte *)((int)param_2 + 0x1b);
  local_4c.tm_min = (int)(byte)param_2[7];
  local_4c.tm_sec = (int)*(byte *)((int)param_2 + 0x1d);
  tVar6 = mktime(&local_4c);
  if (((((int)param_2[3] <= local_20) && (local_20 <= (int)param_2[4])) &&
      ((param_2[5] == local_1c || (param_2[5] == 7)))) &&
     ((tVar5 <= local_20 && (local_20 <= tVar6)))) {
    iVar7 = 1;
  }
  if (iVar7 == 0) {
    *_param_3 = 0;
  }
  else {
    *_param_3 = tVar6 - local_20;
  }
  return iVar7;
}

```

---

## GM_CloseAdvanceAltar

```asm
// === 08126d90 CDailyScheduleManager::GM_CloseAdvanceAltar  [0x08126d90-0x8126dbf] ===
 8126d90:	55                   	push   %ebp
 8126d91:	89 e5                	mov    %esp,%ebp
 8126d93:	83 ec 18             	sub    $0x18,%esp
 8126d96:	8b 45 08             	mov    0x8(%ebp),%eax
 8126d99:	05 b4 00 00 00       	add    $0xb4,%eax
 8126d9e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8126da2:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8126da9:	00 
 8126daa:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8126db1:	00 
 8126db2:	8b 45 08             	mov    0x8(%ebp),%eax
 8126db5:	89 04 24             	mov    %eax,(%esp)
 8126db8:	e8 bf 02 00 00       	call   812707c <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule>
 8126dbd:	c9                   	leave
 8126dbe:	c3                   	ret
 8126dbf:	90                   	nop

```

```c
// CDailyScheduleManager::GM_CloseAdvanceAltar @ 0x8126d90

/* CDailyScheduleManager::GM_CloseAdvanceAltar() */

void __thiscall CDailyScheduleManager::GM_CloseAdvanceAltar(CDailyScheduleManager *this)

{
  GM_CloseSchedule(this,10,4,this + 0xb4);
  return;
}

```

---

## GM_CloseBossTower

```asm
// === 08126d0c CDailyScheduleManager::GM_CloseBossTower  [0x08126d0c-0x8126d5f] ===
 8126d0c:	55                   	push   %ebp
 8126d0d:	89 e5                	mov    %esp,%ebp
 8126d0f:	83 ec 18             	sub    $0x18,%esp
 8126d12:	8b 45 08             	mov    0x8(%ebp),%eax
 8126d15:	83 c0 6c             	add    $0x6c,%eax
 8126d18:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8126d1c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8126d23:	00 
 8126d24:	c7 44 24 04 b1 0d 00 	movl   $0xdb1,0x4(%esp)
 8126d2b:	00 
 8126d2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8126d2f:	89 04 24             	mov    %eax,(%esp)
 8126d32:	e8 45 03 00 00       	call   812707c <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule>
 8126d37:	8b 45 08             	mov    0x8(%ebp),%eax
 8126d3a:	05 90 00 00 00       	add    $0x90,%eax
 8126d3f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8126d43:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8126d4a:	00 
 8126d4b:	c7 44 24 04 5a 50 00 	movl   $0x505a,0x4(%esp)
 8126d52:	00 
 8126d53:	8b 45 08             	mov    0x8(%ebp),%eax
 8126d56:	89 04 24             	mov    %eax,(%esp)
 8126d59:	e8 1e 03 00 00       	call   812707c <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule>
 8126d5e:	c9                   	leave
 8126d5f:	c3                   	ret

```

```c
// CDailyScheduleManager::GM_CloseBossTower @ 0x8126d0c

/* CDailyScheduleManager::GM_CloseBossTower() */

void __thiscall CDailyScheduleManager::GM_CloseBossTower(CDailyScheduleManager *this)

{
  GM_CloseSchedule(this,0xdb1,0,this + 0x6c);
  GM_CloseSchedule(this,0x505a,1,this + 0x90);
  return;
}

```

---

## GM_CloseKingHorn

```asm
// === 08126c8a CDailyScheduleManager::GM_CloseKingHorn  [0x08126c8a-0x8126cb7] ===
 8126c8a:	55                   	push   %ebp
 8126c8b:	89 e5                	mov    %esp,%ebp
 8126c8d:	83 ec 18             	sub    $0x18,%esp
 8126c90:	8b 45 08             	mov    0x8(%ebp),%eax
 8126c93:	83 c0 48             	add    $0x48,%eax
 8126c96:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8126c9a:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8126ca1:	00 
 8126ca2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8126ca9:	00 
 8126caa:	8b 45 08             	mov    0x8(%ebp),%eax
 8126cad:	89 04 24             	mov    %eax,(%esp)
 8126cb0:	e8 c7 03 00 00       	call   812707c <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule>
 8126cb5:	c9                   	leave
 8126cb6:	c3                   	ret
 8126cb7:	90                   	nop

```

```c
// CDailyScheduleManager::GM_CloseKingHorn @ 0x8126c8a

/* CDailyScheduleManager::GM_CloseKingHorn() */

void __thiscall CDailyScheduleManager::GM_CloseKingHorn(CDailyScheduleManager *this)

{
  GM_CloseSchedule(this,1,3,this + 0x48);
  return;
}

```

---

## GM_CloseSchedule

```asm
// === 0812707c CDailyScheduleManager::GM_CloseSchedule  [0x0812707c-0x8127236] ===
 812707c:	55                   	push   %ebp
 812707d:	89 e5                	mov    %esp,%ebp
 812707f:	53                   	push   %ebx
 8127080:	83 ec 24             	sub    $0x24,%esp
 8127083:	8b 45 08             	mov    0x8(%ebp),%eax
 8127086:	05 d8 00 00 00       	add    $0xd8,%eax
 812708b:	89 04 24             	mov    %eax,(%esp)
 812708e:	e8 73 02 00 00       	call   8127306 <_ZNKSt6vectorI14_DailyScheduleSaIS0_EE4sizeEv>
 8127093:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8127096:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 812709d:	e9 cf 00 00 00       	jmp    8127171 <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule+0xf5>
 81270a2:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 81270a5:	8b 45 08             	mov    0x8(%ebp),%eax
 81270a8:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 81270ae:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81270b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81270b5:	89 14 24             	mov    %edx,(%esp)
 81270b8:	e8 f9 02 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 81270bd:	8b 40 08             	mov    0x8(%eax),%eax
 81270c0:	39 c3                	cmp    %eax,%ebx
 81270c2:	75 34                	jne    81270f8 <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x7c>
 81270c4:	8b 45 08             	mov    0x8(%ebp),%eax
 81270c7:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 81270cd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81270d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81270d4:	89 14 24             	mov    %edx,(%esp)
 81270d7:	e8 da 02 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 81270dc:	8b 40 04             	mov    0x4(%eax),%eax
 81270df:	3b 45 10             	cmp    0x10(%ebp),%eax
 81270e2:	75 14                	jne    81270f8 <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x7c>
 81270e4:	8b 55 0c             	mov    0xc(%ebp),%edx
 81270e7:	8b 45 14             	mov    0x14(%ebp),%eax
 81270ea:	8b 40 08             	mov    0x8(%eax),%eax
 81270ed:	39 c2                	cmp    %eax,%edx
 81270ef:	75 07                	jne    81270f8 <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x7c>
 81270f1:	b8 01 00 00 00       	mov    $0x1,%eax
 81270f6:	eb 05                	jmp    81270fd <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x81>
 81270f8:	b8 00 00 00 00       	mov    $0x0,%eax
 81270fd:	84 c0                	test   %al,%al
 81270ff:	74 6c                	je     812716d <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule+0xf1>
 8127101:	8b 45 08             	mov    0x8(%ebp),%eax
 8127104:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 812710a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812710d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8127111:	89 14 24             	mov    %edx,(%esp)
 8127114:	e8 9d 02 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8127119:	8b 40 20             	mov    0x20(%eax),%eax
 812711c:	83 f8 01             	cmp    $0x1,%eax
 812711f:	0f 94 c0             	sete   %al
 8127122:	84 c0                	test   %al,%al
 8127124:	74 0c                	je     8127132 <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule+0xb6>
 8127126:	8b 45 14             	mov    0x14(%ebp),%eax
 8127129:	c7 40 20 01 00 00 00 	movl   $0x1,0x20(%eax)
 8127130:	eb 0a                	jmp    812713c <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule+0xc0>
 8127132:	8b 45 14             	mov    0x14(%ebp),%eax
 8127135:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 812713c:	8b 45 08             	mov    0x8(%ebp),%eax
 812713f:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8127145:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8127148:	89 44 24 04          	mov    %eax,0x4(%esp)
 812714c:	89 14 24             	mov    %edx,(%esp)
 812714f:	e8 62 02 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8127154:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 812715b:	00 
 812715c:	8b 55 14             	mov    0x14(%ebp),%edx
 812715f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8127163:	89 04 24             	mov    %eax,(%esp)
 8127166:	e8 35 67 f5 ff       	call   807d8a0 <memcpy@plt>
 812716b:	eb 15                	jmp    8127182 <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x106>
 812716d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8127171:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8127174:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8127177:	0f 92 c0             	setb   %al
 812717a:	84 c0                	test   %al,%al
 812717c:	0f 85 20 ff ff ff    	jne    81270a2 <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x26>
 8127182:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8127189:	e9 92 00 00 00       	jmp    8127220 <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x1a4>
 812718e:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8127191:	8b 45 08             	mov    0x8(%ebp),%eax
 8127194:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 812719a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812719d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81271a1:	89 14 24             	mov    %edx,(%esp)
 81271a4:	e8 0d 02 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 81271a9:	8b 40 08             	mov    0x8(%eax),%eax
 81271ac:	39 c3                	cmp    %eax,%ebx
 81271ae:	75 34                	jne    81271e4 <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x168>
 81271b0:	8b 45 08             	mov    0x8(%ebp),%eax
 81271b3:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 81271b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81271bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81271c0:	89 14 24             	mov    %edx,(%esp)
 81271c3:	e8 ee 01 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 81271c8:	8b 40 04             	mov    0x4(%eax),%eax
 81271cb:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81271ce:	75 14                	jne    81271e4 <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x168>
 81271d0:	8b 55 0c             	mov    0xc(%ebp),%edx
 81271d3:	8b 45 14             	mov    0x14(%ebp),%eax
 81271d6:	8b 40 08             	mov    0x8(%eax),%eax
 81271d9:	39 c2                	cmp    %eax,%edx
 81271db:	75 07                	jne    81271e4 <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x168>
 81271dd:	b8 01 00 00 00       	mov    $0x1,%eax
 81271e2:	eb 05                	jmp    81271e9 <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x16d>
 81271e4:	b8 00 00 00 00       	mov    $0x0,%eax
 81271e9:	84 c0                	test   %al,%al
 81271eb:	74 2f                	je     812721c <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x1a0>
 81271ed:	8b 45 08             	mov    0x8(%ebp),%eax
 81271f0:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 81271f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81271f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81271fd:	89 14 24             	mov    %edx,(%esp)
 8127200:	e8 b1 01 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8127205:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 812720c:	00 
 812720d:	8b 55 14             	mov    0x14(%ebp),%edx
 8127210:	89 54 24 04          	mov    %edx,0x4(%esp)
 8127214:	89 04 24             	mov    %eax,(%esp)
 8127217:	e8 84 66 f5 ff       	call   807d8a0 <memcpy@plt>
 812721c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8127220:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8127223:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8127226:	0f 92 c0             	setb   %al
 8127229:	84 c0                	test   %al,%al
 812722b:	0f 85 5d ff ff ff    	jne    812718e <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x112>
 8127231:	83 c4 24             	add    $0x24,%esp
 8127234:	5b                   	pop    %ebx
 8127235:	5d                   	pop    %ebp
 8127236:	c3                   	ret

```

```c
// CDailyScheduleManager::GM_CloseSchedule @ 0x812707c

/* CDailyScheduleManager::GM_CloseSchedule(int, _DailyScheduleType, _DailySchedule&) */

void __thiscall
CDailyScheduleManager::GM_CloseSchedule
          (CDailyScheduleManager *this,int param_1,int param_3,void *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint local_14;
  uint local_10;
  
  uVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size
                    ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8));
  for (local_14 = 0; local_14 < uVar2; local_14 = local_14 + 1) {
    iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                      ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                       local_14);
    if (param_1 == *(int *)(iVar3 + 8)) {
      iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      if ((*(int *)(iVar3 + 4) != param_3) || (param_1 != *(int *)((int)param_4 + 8)))
      goto LAB_081270f8;
      bVar1 = true;
    }
    else {
LAB_081270f8:
      bVar1 = false;
    }
    if (bVar1) {
      iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      if (*(int *)(iVar3 + 0x20) == 1) {
        *(undefined4 *)((int)param_4 + 0x20) = 1;
      }
      else {
        *(undefined4 *)((int)param_4 + 0x20) = 0;
      }
      pvVar4 = (void *)std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                                 ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                  (this + 0xd8),local_14);
      memcpy(pvVar4,param_4,0x24);
      break;
    }
  }
  local_10 = 0;
  do {
    if (uVar2 <= local_10) {
      return;
    }
    iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                      ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                       local_10);
    if (param_1 == *(int *)(iVar3 + 8)) {
      iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_10);
      if ((*(int *)(iVar3 + 4) != param_1) || (param_1 != *(int *)((int)param_4 + 8)))
      goto LAB_081271e4;
      bVar1 = true;
    }
    else {
LAB_081271e4:
      bVar1 = false;
    }
    if (bVar1) {
      pvVar4 = (void *)std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                                 ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                  (this + 0xd8),local_10);
      memcpy(pvVar4,param_4,0x24);
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## GM_CloseSouthernDale

```asm
// === 08126ad2 CDailyScheduleManager::GM_CloseSouthernDale  [0x08126ad2-0x8126c5b] ===
 8126ad2:	55                   	push   %ebp
 8126ad3:	89 e5                	mov    %esp,%ebp
 8126ad5:	53                   	push   %ebx
 8126ad6:	83 ec 34             	sub    $0x34,%esp
 8126ad9:	c7 45 e4 64 00 00 00 	movl   $0x64,-0x1c(%ebp)
 8126ae0:	c7 45 e8 45 50 00 00 	movl   $0x5045,-0x18(%ebp)
 8126ae7:	8b 45 08             	mov    0x8(%ebp),%eax
 8126aea:	05 d8 00 00 00       	add    $0xd8,%eax
 8126aef:	89 04 24             	mov    %eax,(%esp)
 8126af2:	e8 0f 08 00 00       	call   8127306 <_ZNKSt6vectorI14_DailyScheduleSaIS0_EE4sizeEv>
 8126af7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8126afa:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8126b01:	e9 8d 00 00 00       	jmp    8126b93 <_ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv+0xc1>
 8126b06:	8b 45 08             	mov    0x8(%ebp),%eax
 8126b09:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126b0f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8126b12:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126b16:	89 14 24             	mov    %edx,(%esp)
 8126b19:	e8 98 08 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126b1e:	8b 40 08             	mov    0x8(%eax),%eax
 8126b21:	83 f8 64             	cmp    $0x64,%eax
 8126b24:	75 31                	jne    8126b57 <_ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv+0x85>
 8126b26:	8b 45 08             	mov    0x8(%ebp),%eax
 8126b29:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126b2f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8126b32:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126b36:	89 14 24             	mov    %edx,(%esp)
 8126b39:	e8 78 08 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126b3e:	8b 40 04             	mov    0x4(%eax),%eax
 8126b41:	85 c0                	test   %eax,%eax
 8126b43:	75 12                	jne    8126b57 <_ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv+0x85>
 8126b45:	8b 45 08             	mov    0x8(%ebp),%eax
 8126b48:	8b 40 08             	mov    0x8(%eax),%eax
 8126b4b:	83 f8 64             	cmp    $0x64,%eax
 8126b4e:	75 07                	jne    8126b57 <_ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv+0x85>
 8126b50:	b8 01 00 00 00       	mov    $0x1,%eax
 8126b55:	eb 05                	jmp    8126b5c <_ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv+0x8a>
 8126b57:	b8 00 00 00 00       	mov    $0x0,%eax
 8126b5c:	84 c0                	test   %al,%al
 8126b5e:	74 2f                	je     8126b8f <_ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv+0xbd>
 8126b60:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8126b63:	8b 45 08             	mov    0x8(%ebp),%eax
 8126b66:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126b6c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8126b6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126b73:	89 14 24             	mov    %edx,(%esp)
 8126b76:	e8 3b 08 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126b7b:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8126b82:	00 
 8126b83:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8126b87:	89 04 24             	mov    %eax,(%esp)
 8126b8a:	e8 11 6d f5 ff       	call   807d8a0 <memcpy@plt>
 8126b8f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8126b93:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8126b96:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8126b99:	0f 92 c0             	setb   %al
 8126b9c:	84 c0                	test   %al,%al
 8126b9e:	0f 85 62 ff ff ff    	jne    8126b06 <_ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv+0x34>
 8126ba4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8126bab:	e9 95 00 00 00       	jmp    8126c45 <_ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv+0x173>
 8126bb0:	8b 45 08             	mov    0x8(%ebp),%eax
 8126bb3:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126bb9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8126bbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126bc0:	89 14 24             	mov    %edx,(%esp)
 8126bc3:	e8 ee 07 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126bc8:	8b 40 08             	mov    0x8(%eax),%eax
 8126bcb:	3d 45 50 00 00       	cmp    $0x5045,%eax
 8126bd0:	75 34                	jne    8126c06 <_ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv+0x134>
 8126bd2:	8b 45 08             	mov    0x8(%ebp),%eax
 8126bd5:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126bdb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8126bde:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126be2:	89 14 24             	mov    %edx,(%esp)
 8126be5:	e8 cc 07 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126bea:	8b 40 04             	mov    0x4(%eax),%eax
 8126bed:	83 f8 01             	cmp    $0x1,%eax
 8126bf0:	75 14                	jne    8126c06 <_ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv+0x134>
 8126bf2:	8b 45 08             	mov    0x8(%ebp),%eax
 8126bf5:	8b 40 2c             	mov    0x2c(%eax),%eax
 8126bf8:	3d 45 50 00 00       	cmp    $0x5045,%eax
 8126bfd:	75 07                	jne    8126c06 <_ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv+0x134>
 8126bff:	b8 01 00 00 00       	mov    $0x1,%eax
 8126c04:	eb 05                	jmp    8126c0b <_ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv+0x139>
 8126c06:	b8 00 00 00 00       	mov    $0x0,%eax
 8126c0b:	84 c0                	test   %al,%al
 8126c0d:	74 32                	je     8126c41 <_ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv+0x16f>
 8126c0f:	8b 45 08             	mov    0x8(%ebp),%eax
 8126c12:	8d 58 24             	lea    0x24(%eax),%ebx
 8126c15:	8b 45 08             	mov    0x8(%ebp),%eax
 8126c18:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126c1e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8126c21:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126c25:	89 14 24             	mov    %edx,(%esp)
 8126c28:	e8 89 07 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126c2d:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8126c34:	00 
 8126c35:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8126c39:	89 04 24             	mov    %eax,(%esp)
 8126c3c:	e8 5f 6c f5 ff       	call   807d8a0 <memcpy@plt>
 8126c41:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8126c45:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8126c48:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8126c4b:	0f 92 c0             	setb   %al
 8126c4e:	84 c0                	test   %al,%al
 8126c50:	0f 85 5a ff ff ff    	jne    8126bb0 <_ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv+0xde>
 8126c56:	83 c4 34             	add    $0x34,%esp
 8126c59:	5b                   	pop    %ebx
 8126c5a:	5d                   	pop    %ebp
 8126c5b:	c3                   	ret

```

```c
// CDailyScheduleManager::GM_CloseSouthernDale @ 0x8126ad2

/* CDailyScheduleManager::GM_CloseSouthernDale() */

void __thiscall CDailyScheduleManager::GM_CloseSouthernDale(CDailyScheduleManager *this)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint local_14;
  uint local_10;
  
  uVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size
                    ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8));
  for (local_14 = 0; local_14 < uVar2; local_14 = local_14 + 1) {
    iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                      ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                       local_14);
    if (*(int *)(iVar3 + 8) == 100) {
      iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      if ((*(int *)(iVar3 + 4) != 0) || (*(int *)(this + 8) != 100)) goto LAB_08126b57;
      bVar1 = true;
    }
    else {
LAB_08126b57:
      bVar1 = false;
    }
    if (bVar1) {
      pvVar4 = (void *)std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                                 ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                  (this + 0xd8),local_14);
      memcpy(pvVar4,this,0x24);
    }
  }
  local_10 = 0;
  do {
    if (uVar2 <= local_10) {
      return;
    }
    iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                      ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                       local_10);
    if (*(int *)(iVar3 + 8) == 0x5045) {
      iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_10);
      if ((*(int *)(iVar3 + 4) != 1) || (*(int *)(this + 0x2c) != 0x5045)) goto LAB_08126c06;
      bVar1 = true;
    }
    else {
LAB_08126c06:
      bVar1 = false;
    }
    if (bVar1) {
      pvVar4 = (void *)std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                                 ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                  (this + 0xd8),local_10);
      memcpy(pvVar4,this + 0x24,0x24);
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## GM_OpenAdvanceAltar

```asm
// === 08126d60 CDailyScheduleManager::GM_OpenAdvanceAltar  [0x08126d60-0x8126d8f] ===
 8126d60:	55                   	push   %ebp
 8126d61:	89 e5                	mov    %esp,%ebp
 8126d63:	83 ec 18             	sub    $0x18,%esp
 8126d66:	8b 45 08             	mov    0x8(%ebp),%eax
 8126d69:	05 b4 00 00 00       	add    $0xb4,%eax
 8126d6e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8126d72:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8126d79:	00 
 8126d7a:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8126d81:	00 
 8126d82:	8b 45 08             	mov    0x8(%ebp),%eax
 8126d85:	89 04 24             	mov    %eax,(%esp)
 8126d88:	e8 33 00 00 00       	call   8126dc0 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule>
 8126d8d:	c9                   	leave
 8126d8e:	c3                   	ret
 8126d8f:	90                   	nop

```

```c
// CDailyScheduleManager::GM_OpenAdvanceAltar @ 0x8126d60

/* CDailyScheduleManager::GM_OpenAdvanceAltar() */

void __thiscall CDailyScheduleManager::GM_OpenAdvanceAltar(CDailyScheduleManager *this)

{
  GM_OpenSchedule(this,10,4,this + 0xb4);
  return;
}

```

---

## GM_OpenBossTower

```asm
// === 08126cb8 CDailyScheduleManager::GM_OpenBossTower  [0x08126cb8-0x8126d0b] ===
 8126cb8:	55                   	push   %ebp
 8126cb9:	89 e5                	mov    %esp,%ebp
 8126cbb:	83 ec 18             	sub    $0x18,%esp
 8126cbe:	8b 45 08             	mov    0x8(%ebp),%eax
 8126cc1:	83 c0 6c             	add    $0x6c,%eax
 8126cc4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8126cc8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8126ccf:	00 
 8126cd0:	c7 44 24 04 b1 0d 00 	movl   $0xdb1,0x4(%esp)
 8126cd7:	00 
 8126cd8:	8b 45 08             	mov    0x8(%ebp),%eax
 8126cdb:	89 04 24             	mov    %eax,(%esp)
 8126cde:	e8 dd 00 00 00       	call   8126dc0 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule>
 8126ce3:	8b 45 08             	mov    0x8(%ebp),%eax
 8126ce6:	05 90 00 00 00       	add    $0x90,%eax
 8126ceb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8126cef:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8126cf6:	00 
 8126cf7:	c7 44 24 04 5a 50 00 	movl   $0x505a,0x4(%esp)
 8126cfe:	00 
 8126cff:	8b 45 08             	mov    0x8(%ebp),%eax
 8126d02:	89 04 24             	mov    %eax,(%esp)
 8126d05:	e8 b6 00 00 00       	call   8126dc0 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule>
 8126d0a:	c9                   	leave
 8126d0b:	c3                   	ret

```

```c
// CDailyScheduleManager::GM_OpenBossTower @ 0x8126cb8

/* CDailyScheduleManager::GM_OpenBossTower() */

void __thiscall CDailyScheduleManager::GM_OpenBossTower(CDailyScheduleManager *this)

{
  GM_OpenSchedule(this,0xdb1,0,this + 0x6c);
  GM_OpenSchedule(this,0x505a,1,this + 0x90);
  return;
}

```

---

## GM_OpenKingHorn

```asm
// === 08126c5c CDailyScheduleManager::GM_OpenKingHorn  [0x08126c5c-0x8126c89] ===
 8126c5c:	55                   	push   %ebp
 8126c5d:	89 e5                	mov    %esp,%ebp
 8126c5f:	83 ec 18             	sub    $0x18,%esp
 8126c62:	8b 45 08             	mov    0x8(%ebp),%eax
 8126c65:	83 c0 48             	add    $0x48,%eax
 8126c68:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8126c6c:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8126c73:	00 
 8126c74:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8126c7b:	00 
 8126c7c:	8b 45 08             	mov    0x8(%ebp),%eax
 8126c7f:	89 04 24             	mov    %eax,(%esp)
 8126c82:	e8 39 01 00 00       	call   8126dc0 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule>
 8126c87:	c9                   	leave
 8126c88:	c3                   	ret
 8126c89:	90                   	nop

```

```c
// CDailyScheduleManager::GM_OpenKingHorn @ 0x8126c5c

/* CDailyScheduleManager::GM_OpenKingHorn() */

void __thiscall CDailyScheduleManager::GM_OpenKingHorn(CDailyScheduleManager *this)

{
  GM_OpenSchedule(this,1,3,this + 0x48);
  return;
}

```

---

## GM_OpenSchedule

```asm
// === 08126dc0 CDailyScheduleManager::GM_OpenSchedule  [0x08126dc0-0x812707b] ===
 8126dc0:	55                   	push   %ebp
 8126dc1:	89 e5                	mov    %esp,%ebp
 8126dc3:	53                   	push   %ebx
 8126dc4:	83 ec 34             	sub    $0x34,%esp
 8126dc7:	c6 45 e9 00          	movb   $0x0,-0x17(%ebp)
 8126dcb:	c6 45 ea 00          	movb   $0x0,-0x16(%ebp)
 8126dcf:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 8126dd3:	c6 45 e6 17          	movb   $0x17,-0x1a(%ebp)
 8126dd7:	c6 45 e7 32          	movb   $0x32,-0x19(%ebp)
 8126ddb:	c6 45 e8 32          	movb   $0x32,-0x18(%ebp)
 8126ddf:	8b 45 08             	mov    0x8(%ebp),%eax
 8126de2:	05 d8 00 00 00       	add    $0xd8,%eax
 8126de7:	89 04 24             	mov    %eax,(%esp)
 8126dea:	e8 17 05 00 00       	call   8127306 <_ZNKSt6vectorI14_DailyScheduleSaIS0_EE4sizeEv>
 8126def:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8126df2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8126df9:	e9 25 01 00 00       	jmp    8126f23 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x163>
 8126dfe:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8126e01:	8b 45 08             	mov    0x8(%ebp),%eax
 8126e04:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126e0a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8126e0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126e11:	89 14 24             	mov    %edx,(%esp)
 8126e14:	e8 9d 05 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126e19:	8b 40 08             	mov    0x8(%eax),%eax
 8126e1c:	39 c3                	cmp    %eax,%ebx
 8126e1e:	75 27                	jne    8126e47 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x87>
 8126e20:	8b 45 08             	mov    0x8(%ebp),%eax
 8126e23:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126e29:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8126e2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126e30:	89 14 24             	mov    %edx,(%esp)
 8126e33:	e8 7e 05 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126e38:	8b 40 04             	mov    0x4(%eax),%eax
 8126e3b:	3b 45 10             	cmp    0x10(%ebp),%eax
 8126e3e:	75 07                	jne    8126e47 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x87>
 8126e40:	b8 01 00 00 00       	mov    $0x1,%eax
 8126e45:	eb 05                	jmp    8126e4c <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x8c>
 8126e47:	b8 00 00 00 00       	mov    $0x0,%eax
 8126e4c:	84 c0                	test   %al,%al
 8126e4e:	0f 84 cb 00 00 00    	je     8126f1f <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x15f>
 8126e54:	8b 55 0c             	mov    0xc(%ebp),%edx
 8126e57:	8b 45 14             	mov    0x14(%ebp),%eax
 8126e5a:	8b 40 08             	mov    0x8(%eax),%eax
 8126e5d:	39 c2                	cmp    %eax,%edx
 8126e5f:	74 39                	je     8126e9a <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule+0xda>
 8126e61:	8b 45 08             	mov    0x8(%ebp),%eax
 8126e64:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126e6a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8126e6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126e71:	89 14 24             	mov    %edx,(%esp)
 8126e74:	e8 3d 05 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126e79:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8126e80:	00 
 8126e81:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126e85:	8b 45 14             	mov    0x14(%ebp),%eax
 8126e88:	89 04 24             	mov    %eax,(%esp)
 8126e8b:	e8 10 6a f5 ff       	call   807d8a0 <memcpy@plt>
 8126e90:	8b 45 14             	mov    0x14(%ebp),%eax
 8126e93:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 8126e9a:	8b 45 08             	mov    0x8(%ebp),%eax
 8126e9d:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126ea3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8126ea6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126eaa:	89 14 24             	mov    %edx,(%esp)
 8126ead:	e8 04 05 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126eb2:	c7 40 14 07 00 00 00 	movl   $0x7,0x14(%eax)
 8126eb9:	8b 45 08             	mov    0x8(%ebp),%eax
 8126ebc:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126ec2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8126ec5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126ec9:	89 14 24             	mov    %edx,(%esp)
 8126ecc:	e8 e5 04 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126ed1:	8d 50 18             	lea    0x18(%eax),%edx
 8126ed4:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8126edb:	00 
 8126edc:	8d 45 e9             	lea    -0x17(%ebp),%eax
 8126edf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126ee3:	89 14 24             	mov    %edx,(%esp)
 8126ee6:	e8 b5 69 f5 ff       	call   807d8a0 <memcpy@plt>
 8126eeb:	8b 45 08             	mov    0x8(%ebp),%eax
 8126eee:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126ef4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8126ef7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126efb:	89 14 24             	mov    %edx,(%esp)
 8126efe:	e8 b3 04 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126f03:	8d 50 1b             	lea    0x1b(%eax),%edx
 8126f06:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8126f0d:	00 
 8126f0e:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8126f11:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126f15:	89 14 24             	mov    %edx,(%esp)
 8126f18:	e8 83 69 f5 ff       	call   807d8a0 <memcpy@plt>
 8126f1d:	eb 15                	jmp    8126f34 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x174>
 8126f1f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8126f23:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8126f26:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8126f29:	0f 92 c0             	setb   %al
 8126f2c:	84 c0                	test   %al,%al
 8126f2e:	0f 85 ca fe ff ff    	jne    8126dfe <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x3e>
 8126f34:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8126f3b:	e9 25 01 00 00       	jmp    8127065 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x2a5>
 8126f40:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8126f43:	8b 45 08             	mov    0x8(%ebp),%eax
 8126f46:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126f4c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8126f4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126f53:	89 14 24             	mov    %edx,(%esp)
 8126f56:	e8 5b 04 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126f5b:	8b 40 08             	mov    0x8(%eax),%eax
 8126f5e:	39 c3                	cmp    %eax,%ebx
 8126f60:	75 27                	jne    8126f89 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x1c9>
 8126f62:	8b 45 08             	mov    0x8(%ebp),%eax
 8126f65:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126f6b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8126f6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126f72:	89 14 24             	mov    %edx,(%esp)
 8126f75:	e8 3c 04 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126f7a:	8b 40 04             	mov    0x4(%eax),%eax
 8126f7d:	83 f8 01             	cmp    $0x1,%eax
 8126f80:	75 07                	jne    8126f89 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x1c9>
 8126f82:	b8 01 00 00 00       	mov    $0x1,%eax
 8126f87:	eb 05                	jmp    8126f8e <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x1ce>
 8126f89:	b8 00 00 00 00       	mov    $0x0,%eax
 8126f8e:	84 c0                	test   %al,%al
 8126f90:	0f 84 cb 00 00 00    	je     8127061 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x2a1>
 8126f96:	8b 55 0c             	mov    0xc(%ebp),%edx
 8126f99:	8b 45 14             	mov    0x14(%ebp),%eax
 8126f9c:	8b 40 08             	mov    0x8(%eax),%eax
 8126f9f:	39 c2                	cmp    %eax,%edx
 8126fa1:	74 39                	je     8126fdc <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x21c>
 8126fa3:	8b 45 08             	mov    0x8(%ebp),%eax
 8126fa6:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126fac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8126faf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126fb3:	89 14 24             	mov    %edx,(%esp)
 8126fb6:	e8 fb 03 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126fbb:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8126fc2:	00 
 8126fc3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126fc7:	8b 45 14             	mov    0x14(%ebp),%eax
 8126fca:	89 04 24             	mov    %eax,(%esp)
 8126fcd:	e8 ce 68 f5 ff       	call   807d8a0 <memcpy@plt>
 8126fd2:	8b 45 14             	mov    0x14(%ebp),%eax
 8126fd5:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 8126fdc:	8b 45 08             	mov    0x8(%ebp),%eax
 8126fdf:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126fe5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8126fe8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126fec:	89 14 24             	mov    %edx,(%esp)
 8126fef:	e8 c2 03 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126ff4:	c7 40 14 07 00 00 00 	movl   $0x7,0x14(%eax)
 8126ffb:	8b 45 08             	mov    0x8(%ebp),%eax
 8126ffe:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8127004:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8127007:	89 44 24 04          	mov    %eax,0x4(%esp)
 812700b:	89 14 24             	mov    %edx,(%esp)
 812700e:	e8 a3 03 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8127013:	8d 50 18             	lea    0x18(%eax),%edx
 8127016:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 812701d:	00 
 812701e:	8d 45 e9             	lea    -0x17(%ebp),%eax
 8127021:	89 44 24 04          	mov    %eax,0x4(%esp)
 8127025:	89 14 24             	mov    %edx,(%esp)
 8127028:	e8 73 68 f5 ff       	call   807d8a0 <memcpy@plt>
 812702d:	8b 45 08             	mov    0x8(%ebp),%eax
 8127030:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8127036:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8127039:	89 44 24 04          	mov    %eax,0x4(%esp)
 812703d:	89 14 24             	mov    %edx,(%esp)
 8127040:	e8 71 03 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8127045:	8d 50 1b             	lea    0x1b(%eax),%edx
 8127048:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 812704f:	00 
 8127050:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8127053:	89 44 24 04          	mov    %eax,0x4(%esp)
 8127057:	89 14 24             	mov    %edx,(%esp)
 812705a:	e8 41 68 f5 ff       	call   807d8a0 <memcpy@plt>
 812705f:	eb 15                	jmp    8127076 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x2b6>
 8127061:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8127065:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8127068:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 812706b:	0f 92 c0             	setb   %al
 812706e:	84 c0                	test   %al,%al
 8127070:	0f 85 ca fe ff ff    	jne    8126f40 <_ZN21CDailyScheduleManager15GM_OpenScheduleEi18_DailyScheduleTypeR14_DailySchedule+0x180>
 8127076:	83 c4 34             	add    $0x34,%esp
 8127079:	5b                   	pop    %ebx
 812707a:	5d                   	pop    %ebp
 812707b:	c3                   	ret

```

```c
// CDailyScheduleManager::GM_OpenSchedule @ 0x8126dc0

/* CDailyScheduleManager::GM_OpenSchedule(int, _DailyScheduleType, _DailySchedule&) */

void __thiscall
CDailyScheduleManager::GM_OpenSchedule
          (CDailyScheduleManager *this,int param_1,int param_3,void *param_4)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_1b = 0;
  local_1a = 0;
  local_19 = 0;
  local_1e = 0x17;
  local_1d = 0x32;
  local_1c = 0x32;
  local_18 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size
                       ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8));
  local_14 = 0;
  do {
    if (local_18 <= local_14) {
LAB_08126f34:
      local_10 = 0;
      while( true ) {
        if (local_18 <= local_10) {
          return;
        }
        iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_10);
        if ((param_1 == *(int *)(iVar2 + 8)) &&
           (iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                              ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                               (this + 0xd8),local_10), *(int *)(iVar2 + 4) == 1)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) break;
        local_10 = local_10 + 1;
      }
      if (param_1 != *(int *)((int)param_4 + 8)) {
        pvVar3 = (void *)std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                                   ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                    (this + 0xd8),local_10);
        memcpy(param_4,pvVar3,0x24);
        *(undefined4 *)((int)param_4 + 0x20) = 0;
      }
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_10);
      *(undefined4 *)(iVar2 + 0x14) = 7;
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_10);
      memcpy((void *)(iVar2 + 0x18),&local_1b,3);
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_10);
      memcpy((void *)(iVar2 + 0x1b),&local_1e,3);
      return;
    }
    iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                      ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                       local_14);
    if ((param_1 == *(int *)(iVar2 + 8)) &&
       (iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_14), *(int *)(iVar2 + 4) == param_3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      if (param_1 != *(int *)((int)param_4 + 8)) {
        pvVar3 = (void *)std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                                   ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                    (this + 0xd8),local_14);
        memcpy(param_4,pvVar3,0x24);
        *(undefined4 *)((int)param_4 + 0x20) = 0;
      }
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      *(undefined4 *)(iVar2 + 0x14) = 7;
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      memcpy((void *)(iVar2 + 0x18),&local_1b,3);
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      memcpy((void *)(iVar2 + 0x1b),&local_1e,3);
      goto LAB_08126f34;
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## GM_OpenSouthernDale

```asm
// === 081267bc CDailyScheduleManager::GM_OpenSouthernDale  [0x081267bc-0x8126ad1] ===
 81267bc:	55                   	push   %ebp
 81267bd:	89 e5                	mov    %esp,%ebp
 81267bf:	81 ec 98 00 00 00    	sub    $0x98,%esp
 81267c5:	c7 45 e4 64 00 00 00 	movl   $0x64,-0x1c(%ebp)
 81267cc:	c7 45 e8 45 50 00 00 	movl   $0x5045,-0x18(%ebp)
 81267d3:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81267da:	e8 bf 54 fa ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81267df:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81267e2:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81267e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81267e9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81267ec:	89 04 24             	mov    %eax,(%esp)
 81267ef:	e8 6c 7b f5 ff       	call   807e360 <localtime_r@plt>
 81267f4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81267f7:	05 58 02 00 00       	add    $0x258,%eax
 81267fc:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81267ff:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8126805:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126809:	8d 45 dc             	lea    -0x24(%ebp),%eax
 812680c:	89 04 24             	mov    %eax,(%esp)
 812680f:	e8 4c 7b f5 ff       	call   807e360 <localtime_r@plt>
 8126814:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8126817:	88 45 d9             	mov    %al,-0x27(%ebp)
 812681a:	8b 45 ac             	mov    -0x54(%ebp),%eax
 812681d:	88 45 da             	mov    %al,-0x26(%ebp)
 8126820:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8126823:	88 45 db             	mov    %al,-0x25(%ebp)
 8126826:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8126829:	88 45 d6             	mov    %al,-0x2a(%ebp)
 812682c:	8b 45 80             	mov    -0x80(%ebp),%eax
 812682f:	88 45 d7             	mov    %al,-0x29(%ebp)
 8126832:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8126838:	88 45 d8             	mov    %al,-0x28(%ebp)
 812683b:	8b 45 08             	mov    0x8(%ebp),%eax
 812683e:	05 d8 00 00 00       	add    $0xd8,%eax
 8126843:	89 04 24             	mov    %eax,(%esp)
 8126846:	e8 bb 0a 00 00       	call   8127306 <_ZNKSt6vectorI14_DailyScheduleSaIS0_EE4sizeEv>
 812684b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 812684e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8126855:	e9 20 01 00 00       	jmp    812697a <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv+0x1be>
 812685a:	8b 45 08             	mov    0x8(%ebp),%eax
 812685d:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126863:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8126866:	89 44 24 04          	mov    %eax,0x4(%esp)
 812686a:	89 14 24             	mov    %edx,(%esp)
 812686d:	e8 44 0b 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126872:	8b 40 08             	mov    0x8(%eax),%eax
 8126875:	83 f8 64             	cmp    $0x64,%eax
 8126878:	75 26                	jne    81268a0 <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv+0xe4>
 812687a:	8b 45 08             	mov    0x8(%ebp),%eax
 812687d:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126883:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8126886:	89 44 24 04          	mov    %eax,0x4(%esp)
 812688a:	89 14 24             	mov    %edx,(%esp)
 812688d:	e8 24 0b 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126892:	8b 40 04             	mov    0x4(%eax),%eax
 8126895:	85 c0                	test   %eax,%eax
 8126897:	75 07                	jne    81268a0 <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv+0xe4>
 8126899:	b8 01 00 00 00       	mov    $0x1,%eax
 812689e:	eb 05                	jmp    81268a5 <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv+0xe9>
 81268a0:	b8 00 00 00 00       	mov    $0x0,%eax
 81268a5:	84 c0                	test   %al,%al
 81268a7:	0f 84 c9 00 00 00    	je     8126976 <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv+0x1ba>
 81268ad:	8b 45 08             	mov    0x8(%ebp),%eax
 81268b0:	8b 40 08             	mov    0x8(%eax),%eax
 81268b3:	83 f8 64             	cmp    $0x64,%eax
 81268b6:	74 39                	je     81268f1 <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv+0x135>
 81268b8:	8b 45 08             	mov    0x8(%ebp),%eax
 81268bb:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 81268c1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81268c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81268c8:	89 14 24             	mov    %edx,(%esp)
 81268cb:	e8 e6 0a 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 81268d0:	8b 55 08             	mov    0x8(%ebp),%edx
 81268d3:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 81268da:	00 
 81268db:	89 44 24 04          	mov    %eax,0x4(%esp)
 81268df:	89 14 24             	mov    %edx,(%esp)
 81268e2:	e8 b9 6f f5 ff       	call   807d8a0 <memcpy@plt>
 81268e7:	8b 45 08             	mov    0x8(%ebp),%eax
 81268ea:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 81268f1:	8b 45 08             	mov    0x8(%ebp),%eax
 81268f4:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 81268fa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81268fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126901:	89 14 24             	mov    %edx,(%esp)
 8126904:	e8 ad 0a 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126909:	c7 40 14 07 00 00 00 	movl   $0x7,0x14(%eax)
 8126910:	8b 45 08             	mov    0x8(%ebp),%eax
 8126913:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126919:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812691c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126920:	89 14 24             	mov    %edx,(%esp)
 8126923:	e8 8e 0a 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126928:	8d 50 18             	lea    0x18(%eax),%edx
 812692b:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8126932:	00 
 8126933:	8d 45 d9             	lea    -0x27(%ebp),%eax
 8126936:	89 44 24 04          	mov    %eax,0x4(%esp)
 812693a:	89 14 24             	mov    %edx,(%esp)
 812693d:	e8 5e 6f f5 ff       	call   807d8a0 <memcpy@plt>
 8126942:	8b 45 08             	mov    0x8(%ebp),%eax
 8126945:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 812694b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812694e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126952:	89 14 24             	mov    %edx,(%esp)
 8126955:	e8 5c 0a 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 812695a:	8d 50 1b             	lea    0x1b(%eax),%edx
 812695d:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8126964:	00 
 8126965:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 8126968:	89 44 24 04          	mov    %eax,0x4(%esp)
 812696c:	89 14 24             	mov    %edx,(%esp)
 812696f:	e8 2c 6f f5 ff       	call   807d8a0 <memcpy@plt>
 8126974:	eb 15                	jmp    812698b <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv+0x1cf>
 8126976:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 812697a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812697d:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8126980:	0f 92 c0             	setb   %al
 8126983:	84 c0                	test   %al,%al
 8126985:	0f 85 cf fe ff ff    	jne    812685a <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv+0x9e>
 812698b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8126992:	e9 28 01 00 00       	jmp    8126abf <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv+0x303>
 8126997:	8b 45 08             	mov    0x8(%ebp),%eax
 812699a:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 81269a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81269a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81269a7:	89 14 24             	mov    %edx,(%esp)
 81269aa:	e8 07 0a 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 81269af:	8b 40 08             	mov    0x8(%eax),%eax
 81269b2:	3d 45 50 00 00       	cmp    $0x5045,%eax
 81269b7:	75 27                	jne    81269e0 <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv+0x224>
 81269b9:	8b 45 08             	mov    0x8(%ebp),%eax
 81269bc:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 81269c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81269c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81269c9:	89 14 24             	mov    %edx,(%esp)
 81269cc:	e8 e5 09 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 81269d1:	8b 40 04             	mov    0x4(%eax),%eax
 81269d4:	83 f8 01             	cmp    $0x1,%eax
 81269d7:	75 07                	jne    81269e0 <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv+0x224>
 81269d9:	b8 01 00 00 00       	mov    $0x1,%eax
 81269de:	eb 05                	jmp    81269e5 <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv+0x229>
 81269e0:	b8 00 00 00 00       	mov    $0x0,%eax
 81269e5:	84 c0                	test   %al,%al
 81269e7:	0f 84 ce 00 00 00    	je     8126abb <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv+0x2ff>
 81269ed:	8b 45 08             	mov    0x8(%ebp),%eax
 81269f0:	8b 40 2c             	mov    0x2c(%eax),%eax
 81269f3:	3d 45 50 00 00       	cmp    $0x5045,%eax
 81269f8:	74 3c                	je     8126a36 <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv+0x27a>
 81269fa:	8b 45 08             	mov    0x8(%ebp),%eax
 81269fd:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126a03:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8126a06:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126a0a:	89 14 24             	mov    %edx,(%esp)
 8126a0d:	e8 a4 09 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126a12:	8b 55 08             	mov    0x8(%ebp),%edx
 8126a15:	83 c2 24             	add    $0x24,%edx
 8126a18:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8126a1f:	00 
 8126a20:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126a24:	89 14 24             	mov    %edx,(%esp)
 8126a27:	e8 74 6e f5 ff       	call   807d8a0 <memcpy@plt>
 8126a2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8126a2f:	c7 40 44 00 00 00 00 	movl   $0x0,0x44(%eax)
 8126a36:	8b 45 08             	mov    0x8(%ebp),%eax
 8126a39:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126a3f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8126a42:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126a46:	89 14 24             	mov    %edx,(%esp)
 8126a49:	e8 68 09 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126a4e:	c7 40 14 07 00 00 00 	movl   $0x7,0x14(%eax)
 8126a55:	8b 45 08             	mov    0x8(%ebp),%eax
 8126a58:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126a5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8126a61:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126a65:	89 14 24             	mov    %edx,(%esp)
 8126a68:	e8 49 09 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126a6d:	8d 50 18             	lea    0x18(%eax),%edx
 8126a70:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8126a77:	00 
 8126a78:	8d 45 d9             	lea    -0x27(%ebp),%eax
 8126a7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126a7f:	89 14 24             	mov    %edx,(%esp)
 8126a82:	e8 19 6e f5 ff       	call   807d8a0 <memcpy@plt>
 8126a87:	8b 45 08             	mov    0x8(%ebp),%eax
 8126a8a:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126a90:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8126a93:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126a97:	89 14 24             	mov    %edx,(%esp)
 8126a9a:	e8 17 09 00 00       	call   81273b6 <_ZNSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126a9f:	8d 50 1b             	lea    0x1b(%eax),%edx
 8126aa2:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8126aa9:	00 
 8126aaa:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 8126aad:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126ab1:	89 14 24             	mov    %edx,(%esp)
 8126ab4:	e8 e7 6d f5 ff       	call   807d8a0 <memcpy@plt>
 8126ab9:	eb 15                	jmp    8126ad0 <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv+0x314>
 8126abb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8126abf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8126ac2:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8126ac5:	0f 92 c0             	setb   %al
 8126ac8:	84 c0                	test   %al,%al
 8126aca:	0f 85 c7 fe ff ff    	jne    8126997 <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv+0x1db>
 8126ad0:	c9                   	leave
 8126ad1:	c3                   	ret

```

```c
// CDailyScheduleManager::GM_OpenSouthernDale @ 0x81267bc

/* CDailyScheduleManager::GM_OpenSouthernDale() */

void __thiscall CDailyScheduleManager::GM_OpenSouthernDale(CDailyScheduleManager *this)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  tm local_88;
  tm local_5c;
  undefined1 local_2e [3];
  undefined1 local_2b [3];
  int local_28;
  int local_24 [4];
  uint local_14;
  uint local_10;
  
  local_24[1] = 100;
  local_24[2] = 0x5045;
  local_24[0] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(local_24,&local_5c);
  local_28 = local_24[0] + 600;
  localtime_r(&local_28,&local_88);
  local_24[3] = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8));
  local_14 = 0;
  do {
    if ((uint)local_24[3] <= local_14) {
LAB_0812698b:
      local_10 = 0;
      while( true ) {
        if ((uint)local_24[3] <= local_10) {
          return;
        }
        iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_10);
        if ((*(int *)(iVar2 + 8) == 0x5045) &&
           (iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                              ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                               (this + 0xd8),local_10), *(int *)(iVar2 + 4) == 1)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) break;
        local_10 = local_10 + 1;
      }
      if (*(int *)(this + 0x2c) != 0x5045) {
        pvVar3 = (void *)std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                                   ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                    (this + 0xd8),local_10);
        memcpy(this + 0x24,pvVar3,0x24);
        *(undefined4 *)(this + 0x44) = 0;
      }
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_10);
      *(undefined4 *)(iVar2 + 0x14) = 7;
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_10);
      memcpy((void *)(iVar2 + 0x18),local_2b,3);
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_10);
      memcpy((void *)(iVar2 + 0x1b),local_2e,3);
      return;
    }
    iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                      ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                       local_14);
    if ((*(int *)(iVar2 + 8) == 100) &&
       (iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_14), *(int *)(iVar2 + 4) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      if (*(int *)(this + 8) != 100) {
        pvVar3 = (void *)std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                                   ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                    (this + 0xd8),local_14);
        memcpy(this,pvVar3,0x24);
        *(undefined4 *)(this + 0x20) = 0;
      }
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      *(undefined4 *)(iVar2 + 0x14) = 7;
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      memcpy((void *)(iVar2 + 0x18),local_2b,3);
      iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      memcpy((void *)(iVar2 + 0x1b),local_2e,3);
      goto LAB_0812698b;
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## GetScheduleState

```asm
// === 081266e2 CDailyScheduleManager::GetScheduleState  [0x081266e2-0x81267bb] ===
 81266e2:	55                   	push   %ebp
 81266e3:	89 e5                	mov    %esp,%ebp
 81266e5:	53                   	push   %ebx
 81266e6:	83 ec 24             	sub    $0x24,%esp
 81266e9:	8b 45 08             	mov    0x8(%ebp),%eax
 81266ec:	05 d8 00 00 00       	add    $0xd8,%eax
 81266f1:	89 04 24             	mov    %eax,(%esp)
 81266f4:	e8 0d 0c 00 00       	call   8127306 <_ZNKSt6vectorI14_DailyScheduleSaIS0_EE4sizeEv>
 81266f9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81266fc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8126703:	e9 98 00 00 00       	jmp    81267a0 <_ZNK21CDailyScheduleManager16GetScheduleStateE18_DailyScheduleTypej+0xbe>
 8126708:	8b 45 08             	mov    0x8(%ebp),%eax
 812670b:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126711:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8126714:	89 44 24 04          	mov    %eax,0x4(%esp)
 8126718:	89 14 24             	mov    %edx,(%esp)
 812671b:	e8 08 0c 00 00       	call   8127328 <_ZNKSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126720:	8b 40 08             	mov    0x8(%eax),%eax
 8126723:	3b 45 10             	cmp    0x10(%ebp),%eax
 8126726:	75 29                	jne    8126751 <_ZNK21CDailyScheduleManager16GetScheduleStateE18_DailyScheduleTypej+0x6f>
 8126728:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 812672b:	8b 45 08             	mov    0x8(%ebp),%eax
 812672e:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126734:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8126737:	89 44 24 04          	mov    %eax,0x4(%esp)
 812673b:	89 14 24             	mov    %edx,(%esp)
 812673e:	e8 e5 0b 00 00       	call   8127328 <_ZNKSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126743:	8b 40 04             	mov    0x4(%eax),%eax
 8126746:	39 c3                	cmp    %eax,%ebx
 8126748:	75 07                	jne    8126751 <_ZNK21CDailyScheduleManager16GetScheduleStateE18_DailyScheduleTypej+0x6f>
 812674a:	b8 01 00 00 00       	mov    $0x1,%eax
 812674f:	eb 05                	jmp    8126756 <_ZNK21CDailyScheduleManager16GetScheduleStateE18_DailyScheduleTypej+0x74>
 8126751:	b8 00 00 00 00       	mov    $0x0,%eax
 8126756:	84 c0                	test   %al,%al
 8126758:	74 42                	je     812679c <_ZNK21CDailyScheduleManager16GetScheduleStateE18_DailyScheduleTypej+0xba>
 812675a:	8b 45 08             	mov    0x8(%ebp),%eax
 812675d:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126763:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8126766:	89 44 24 04          	mov    %eax,0x4(%esp)
 812676a:	89 14 24             	mov    %edx,(%esp)
 812676d:	e8 b6 0b 00 00       	call   8127328 <_ZNKSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126772:	8b 40 20             	mov    0x20(%eax),%eax
 8126775:	83 f8 01             	cmp    $0x1,%eax
 8126778:	0f 94 c0             	sete   %al
 812677b:	84 c0                	test   %al,%al
 812677d:	74 1d                	je     812679c <_ZNK21CDailyScheduleManager16GetScheduleStateE18_DailyScheduleTypej+0xba>
 812677f:	8b 45 08             	mov    0x8(%ebp),%eax
 8126782:	8d 90 d8 00 00 00    	lea    0xd8(%eax),%edx
 8126788:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812678b:	89 44 24 04          	mov    %eax,0x4(%esp)
 812678f:	89 14 24             	mov    %edx,(%esp)
 8126792:	e8 91 0b 00 00       	call   8127328 <_ZNKSt6vectorI14_DailyScheduleSaIS0_EEixEj>
 8126797:	8b 40 20             	mov    0x20(%eax),%eax
 812679a:	eb 1a                	jmp    81267b6 <_ZNK21CDailyScheduleManager16GetScheduleStateE18_DailyScheduleTypej+0xd4>
 812679c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81267a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81267a3:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 81267a6:	0f 92 c0             	setb   %al
 81267a9:	84 c0                	test   %al,%al
 81267ab:	0f 85 57 ff ff ff    	jne    8126708 <_ZNK21CDailyScheduleManager16GetScheduleStateE18_DailyScheduleTypej+0x26>
 81267b1:	b8 00 00 00 00       	mov    $0x0,%eax
 81267b6:	83 c4 24             	add    $0x24,%esp
 81267b9:	5b                   	pop    %ebx
 81267ba:	5d                   	pop    %ebp
 81267bb:	c3                   	ret

```

```c
// CDailyScheduleManager::GetScheduleState @ 0x81266e2

/* CDailyScheduleManager::GetScheduleState(_DailyScheduleType, unsigned int) const */

undefined4 __thiscall
CDailyScheduleManager::GetScheduleState(CDailyScheduleManager *this,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint local_10;
  
  uVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size
                    ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8));
  local_10 = 0;
  while( true ) {
    if (uVar2 <= local_10) {
      return 0;
    }
    iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                      ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                       local_10);
    if ((*(int *)(iVar3 + 8) == param_3) &&
       (iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_10), param_2 == *(int *)(iVar3 + 4))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) &&
       (iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_10), *(int *)(iVar3 + 0x20) == 1)) break;
    local_10 = local_10 + 1;
  }
  iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                    ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),local_10
                    );
  return *(undefined4 *)(iVar3 + 0x20);
}

```

---

## ~CDailyScheduleManager

```asm
// === 08125c24 CDailyScheduleManager::~CDailyScheduleManager  [0x08125c24-0x8125c3b] ===
 8125c24:	55                   	push   %ebp
 8125c25:	89 e5                	mov    %esp,%ebp
 8125c27:	83 ec 18             	sub    $0x18,%esp
 8125c2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8125c2d:	05 d8 00 00 00       	add    $0xd8,%eax
 8125c32:	89 04 24             	mov    %eax,(%esp)
 8125c35:	e8 6e 16 00 00       	call   81272a8 <_ZNSt6vectorI14_DailyScheduleSaIS0_EED1Ev>
 8125c3a:	c9                   	leave
 8125c3b:	c3                   	ret

```

```c
// CDailyScheduleManager::~CDailyScheduleManager @ 0x8125c24

/* CDailyScheduleManager::~CDailyScheduleManager() */

void __thiscall CDailyScheduleManager::~CDailyScheduleManager(CDailyScheduleManager *this)

{
  std::vector<_DailySchedule,std::allocator<_DailySchedule>>::~vector
            ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8));
  return;
}

```

