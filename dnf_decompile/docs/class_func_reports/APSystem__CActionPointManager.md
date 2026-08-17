# APSystem__CActionPointManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## ClearAction

```asm
// === 08121dcc APSystem::CActionPointManager::ClearAction  [0x08121dcc-0x8121f1b] ===
 8121dcc:	55                   	push   %ebp
 8121dcd:	89 e5                	mov    %esp,%ebp
 8121dcf:	53                   	push   %ebx
 8121dd0:	83 ec 34             	sub    $0x34,%esp
 8121dd3:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8121dd7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8121dde:	e9 1a 01 00 00       	jmp    8121efd <_ZN8APSystem19CActionPointManager11ClearActionER5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS+0x131>
 8121de3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8121de6:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8121de9:	89 d0                	mov    %edx,%eax
 8121deb:	c1 e0 02             	shl    $0x2,%eax
 8121dee:	01 d0                	add    %edx,%eax
 8121df0:	01 c0                	add    %eax,%eax
 8121df2:	01 d0                	add    %edx,%eax
 8121df4:	8b 44 08 17          	mov    0x17(%eax,%ecx,1),%eax
 8121df8:	85 c0                	test   %eax,%eax
 8121dfa:	0f 84 11 01 00 00    	je     8121f11 <_ZN8APSystem19CActionPointManager11ClearActionER5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS+0x145>
 8121e00:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8121e03:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8121e06:	89 d0                	mov    %edx,%eax
 8121e08:	c1 e0 02             	shl    $0x2,%eax
 8121e0b:	01 d0                	add    %edx,%eax
 8121e0d:	01 c0                	add    %eax,%eax
 8121e0f:	01 d0                	add    %edx,%eax
 8121e11:	8b 44 08 17          	mov    0x17(%eax,%ecx,1),%eax
 8121e15:	3b 45 10             	cmp    0x10(%ebp),%eax
 8121e18:	0f 85 db 00 00 00    	jne    8121ef9 <_ZN8APSystem19CActionPointManager11ClearActionER5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS+0x12d>
 8121e1e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8121e21:	89 d0                	mov    %edx,%eax
 8121e23:	c1 e0 02             	shl    $0x2,%eax
 8121e26:	01 d0                	add    %edx,%eax
 8121e28:	01 c0                	add    %eax,%eax
 8121e2a:	01 d0                	add    %edx,%eax
 8121e2c:	03 45 08             	add    0x8(%ebp),%eax
 8121e2f:	8d 50 15             	lea    0x15(%eax),%edx
 8121e32:	8b 45 14             	mov    0x14(%ebp),%eax
 8121e35:	89 44 24 08          	mov    %eax,0x8(%esp)
 8121e39:	89 54 24 04          	mov    %edx,0x4(%esp)
 8121e3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8121e40:	89 04 24             	mov    %eax,(%esp)
 8121e43:	e8 d4 00 00 00       	call   8121f1c <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi>
 8121e48:	84 c0                	test   %al,%al
 8121e4a:	74 56                	je     8121ea2 <_ZN8APSystem19CActionPointManager11ClearActionER5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS+0xd6>
 8121e4c:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 8121e50:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8121e53:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8121e56:	89 d0                	mov    %edx,%eax
 8121e58:	c1 e0 02             	shl    $0x2,%eax
 8121e5b:	01 d0                	add    %edx,%eax
 8121e5d:	01 c0                	add    %eax,%eax
 8121e5f:	01 d0                	add    %edx,%eax
 8121e61:	8b 4c 08 17          	mov    0x17(%eax,%ecx,1),%ecx
 8121e65:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8121e68:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8121e6b:	89 d0                	mov    %edx,%eax
 8121e6d:	c1 e0 02             	shl    $0x2,%eax
 8121e70:	01 d0                	add    %edx,%eax
 8121e72:	01 c0                	add    %eax,%eax
 8121e74:	01 d0                	add    %edx,%eax
 8121e76:	0f b7 44 18 15       	movzwl 0x15(%eax,%ebx,1),%eax
 8121e7b:	0f b7 c0             	movzwl %ax,%eax
 8121e7e:	8b 55 18             	mov    0x18(%ebp),%edx
 8121e81:	89 54 24 10          	mov    %edx,0x10(%esp)
 8121e85:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8121e8c:	00 
 8121e8d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8121e91:	89 44 24 04          	mov    %eax,0x4(%esp)
 8121e95:	8b 45 0c             	mov    0xc(%ebp),%eax
 8121e98:	89 04 24             	mov    %eax,(%esp)
 8121e9b:	e8 14 05 00 00       	call   81223b4 <_ZN8APSystem9CUserProc15SendActionClearER5CUsertNS_17_ActionGroupIndexEb16ENUM_PACKETCLASS>
 8121ea0:	eb 70                	jmp    8121f12 <_ZN8APSystem19CActionPointManager11ClearActionER5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS+0x146>
 8121ea2:	83 7d 18 01          	cmpl   $0x1,0x18(%ebp)
 8121ea6:	75 51                	jne    8121ef9 <_ZN8APSystem19CActionPointManager11ClearActionER5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS+0x12d>
 8121ea8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8121eab:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8121eae:	89 d0                	mov    %edx,%eax
 8121eb0:	c1 e0 02             	shl    $0x2,%eax
 8121eb3:	01 d0                	add    %edx,%eax
 8121eb5:	01 c0                	add    %eax,%eax
 8121eb7:	01 d0                	add    %edx,%eax
 8121eb9:	8b 4c 08 17          	mov    0x17(%eax,%ecx,1),%ecx
 8121ebd:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8121ec0:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8121ec3:	89 d0                	mov    %edx,%eax
 8121ec5:	c1 e0 02             	shl    $0x2,%eax
 8121ec8:	01 d0                	add    %edx,%eax
 8121eca:	01 c0                	add    %eax,%eax
 8121ecc:	01 d0                	add    %edx,%eax
 8121ece:	0f b7 44 18 15       	movzwl 0x15(%eax,%ebx,1),%eax
 8121ed3:	0f b7 c0             	movzwl %ax,%eax
 8121ed6:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8121edd:	00 
 8121ede:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8121ee5:	00 
 8121ee6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8121eea:	89 44 24 04          	mov    %eax,0x4(%esp)
 8121eee:	8b 45 0c             	mov    0xc(%ebp),%eax
 8121ef1:	89 04 24             	mov    %eax,(%esp)
 8121ef4:	e8 bb 04 00 00       	call   81223b4 <_ZN8APSystem9CUserProc15SendActionClearER5CUsertNS_17_ActionGroupIndexEb16ENUM_PACKETCLASS>
 8121ef9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8121efd:	81 7d f4 2b 01 00 00 	cmpl   $0x12b,-0xc(%ebp)
 8121f04:	0f 9e c0             	setle  %al
 8121f07:	84 c0                	test   %al,%al
 8121f09:	0f 85 d4 fe ff ff    	jne    8121de3 <_ZN8APSystem19CActionPointManager11ClearActionER5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS+0x17>
 8121f0f:	eb 01                	jmp    8121f12 <_ZN8APSystem19CActionPointManager11ClearActionER5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS+0x146>
 8121f11:	90                   	nop
 8121f12:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8121f16:	83 c4 34             	add    $0x34,%esp
 8121f19:	5b                   	pop    %ebx
 8121f1a:	5d                   	pop    %ebp
 8121f1b:	c3                   	ret

```

```c
// APSystem::CActionPointManager::ClearAction @ 0x8121dcc

/* APSystem::CActionPointManager::ClearAction(CUser&, APSystem::_ActionGroupIndex, int,
   ENUM_PACKETCLASS) */

undefined1 __thiscall
APSystem::CActionPointManager::ClearAction
          (CActionPointManager *this,undefined4 param_1,int param_3,int param_4,int param_5)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (299 < local_10) {
      return 0;
    }
    if (*(int *)(this + local_10 * 0xb + 0x17) == 0) break;
    if (*(int *)(this + local_10 * 0xb + 0x17) == param_3) {
      cVar1 = ClearActionOne(this,(_ActionPoint *)(this + local_10 * 0xb + 0x15),param_4);
      if (cVar1 != '\0') {
        CUserProc::SendActionClear
                  (param_1,*(undefined2 *)(this + local_10 * 0xb + 0x15),
                   *(undefined4 *)(this + local_10 * 0xb + 0x17),1,param_5);
        return 1;
      }
      if (param_5 == 1) {
        CUserProc::SendActionClear
                  (param_1,*(undefined2 *)(this + local_10 * 0xb + 0x15),
                   *(undefined4 *)(this + local_10 * 0xb + 0x17),0,1);
      }
    }
    local_10 = local_10 + 1;
  }
  return 0;
}

```

---

## ClearActionOne

```asm
// === 08121f1c APSystem::CActionPointManager::ClearActionOne  [0x08121f1c-0x8122103] ===
 8121f1c:	55                   	push   %ebp
 8121f1d:	89 e5                	mov    %esp,%ebp
 8121f1f:	56                   	push   %esi
 8121f20:	53                   	push   %ebx
 8121f21:	83 ec 40             	sub    $0x40,%esp
 8121f24:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8121f28:	0f 84 37 01 00 00    	je     8122065 <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi+0x149>
 8121f2e:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8121f31:	0f b6 05 7c f0 3f 09 	movzbl 0x93ff07c,%eax
 8121f38:	0f b6 f0             	movzbl %al,%esi
 8121f3b:	e8 5b a2 fa ff       	call   80cc19b <_Z14G_CDataManagerv>
 8121f40:	89 74 24 04          	mov    %esi,0x4(%esp)
 8121f44:	89 04 24             	mov    %eax,(%esp)
 8121f47:	e8 82 0b 00 00       	call   8122ace <_ZN12CDataManager26GetActionPointEtcParameterEb>
 8121f4c:	8d 50 18             	lea    0x18(%eax),%edx
 8121f4f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8121f52:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8121f56:	89 54 24 04          	mov    %edx,0x4(%esp)
 8121f5a:	89 04 24             	mov    %eax,(%esp)
 8121f5d:	e8 5e 0d 00 00       	call   8122cc0 <_ZNSt3mapItPKN8APSystem14CActionPointExESt4lessItESaISt4pairIKtS3_EEE4findERS7_>
 8121f62:	83 ec 04             	sub    $0x4,%esp
 8121f65:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8121f68:	89 44 24 04          	mov    %eax,0x4(%esp)
 8121f6c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8121f6f:	89 04 24             	mov    %eax,(%esp)
 8121f72:	e8 75 0d 00 00       	call   8122cec <_ZNSt23_Rb_tree_const_iteratorISt4pairIKtPKN8APSystem14CActionPointExEEEC1ERKSt17_Rb_tree_iteratorIS6_E>
 8121f77:	0f b6 05 7c f0 3f 09 	movzbl 0x93ff07c,%eax
 8121f7e:	0f b6 d8             	movzbl %al,%ebx
 8121f81:	e8 15 a2 fa ff       	call   80cc19b <_Z14G_CDataManagerv>
 8121f86:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8121f8a:	89 04 24             	mov    %eax,(%esp)
 8121f8d:	e8 3c 0b 00 00       	call   8122ace <_ZN12CDataManager26GetActionPointEtcParameterEb>
 8121f92:	8d 50 18             	lea    0x18(%eax),%edx
 8121f95:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8121f98:	89 54 24 04          	mov    %edx,0x4(%esp)
 8121f9c:	89 04 24             	mov    %eax,(%esp)
 8121f9f:	e8 58 0d 00 00       	call   8122cfc <_ZNSt3mapItPKN8APSystem14CActionPointExESt4lessItESaISt4pairIKtS3_EEE3endEv>
 8121fa4:	83 ec 04             	sub    $0x4,%esp
 8121fa7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8121faa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8121fae:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8121fb1:	89 04 24             	mov    %eax,(%esp)
 8121fb4:	e8 33 0d 00 00       	call   8122cec <_ZNSt23_Rb_tree_const_iteratorISt4pairIKtPKN8APSystem14CActionPointExEEEC1ERKSt17_Rb_tree_iteratorIS6_E>
 8121fb9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8121fbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8121fc0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8121fc3:	89 04 24             	mov    %eax,(%esp)
 8121fc6:	e8 57 0d 00 00       	call   8122d22 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKtPKN8APSystem14CActionPointExEEEeqERKS7_>
 8121fcb:	84 c0                	test   %al,%al
 8121fcd:	74 0a                	je     8121fd9 <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi+0xbd>
 8121fcf:	b8 00 00 00 00       	mov    $0x0,%eax
 8121fd4:	e9 21 01 00 00       	jmp    81220fa <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi+0x1de>
 8121fd9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8121fdc:	89 04 24             	mov    %eax,(%esp)
 8121fdf:	e8 52 0d 00 00       	call   8122d36 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKtPKN8APSystem14CActionPointExEEEptEv>
 8121fe4:	8b 40 04             	mov    0x4(%eax),%eax
 8121fe7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8121fea:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8121fee:	75 0a                	jne    8121ffa <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi+0xde>
 8121ff0:	b8 00 00 00 00       	mov    $0x0,%eax
 8121ff5:	e9 00 01 00 00       	jmp    81220fa <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi+0x1de>
 8121ffa:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 8121ffe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8122001:	83 c0 14             	add    $0x14,%eax
 8122004:	89 04 24             	mov    %eax,(%esp)
 8122007:	e8 b4 c1 f6 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 812200c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 812200f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8122016:	eb 2b                	jmp    8122043 <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi+0x127>
 8122018:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812201b:	8d 50 14             	lea    0x14(%eax),%edx
 812201e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8122021:	89 44 24 04          	mov    %eax,0x4(%esp)
 8122025:	89 14 24             	mov    %edx,(%esp)
 8122028:	e8 47 85 fc ff       	call   80ea574 <_ZNKSt6vectorIiSaIiEEixEj>
 812202d:	8b 00                	mov    (%eax),%eax
 812202f:	3b 45 10             	cmp    0x10(%ebp),%eax
 8122032:	0f 94 c0             	sete   %al
 8122035:	84 c0                	test   %al,%al
 8122037:	74 06                	je     812203f <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi+0x123>
 8122039:	c6 45 eb 01          	movb   $0x1,-0x15(%ebp)
 812203d:	eb 11                	jmp    8122050 <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi+0x134>
 812203f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8122043:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8122046:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8122049:	0f 92 c0             	setb   %al
 812204c:	84 c0                	test   %al,%al
 812204e:	75 c8                	jne    8122018 <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi+0xfc>
 8122050:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8122054:	83 f0 01             	xor    $0x1,%eax
 8122057:	84 c0                	test   %al,%al
 8122059:	74 0a                	je     8122065 <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi+0x149>
 812205b:	b8 00 00 00 00       	mov    $0x0,%eax
 8122060:	e9 95 00 00 00       	jmp    81220fa <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi+0x1de>
 8122065:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 812206c:	eb 78                	jmp    81220e6 <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi+0x1ca>
 812206e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8122071:	8b 55 0c             	mov    0xc(%ebp),%edx
 8122074:	0f b6 44 02 06       	movzbl 0x6(%edx,%eax,1),%eax
 8122079:	84 c0                	test   %al,%al
 812207b:	75 07                	jne    8122084 <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi+0x168>
 812207d:	b8 00 00 00 00       	mov    $0x0,%eax
 8122082:	eb 76                	jmp    81220fa <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi+0x1de>
 8122084:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8122087:	8b 55 0c             	mov    0xc(%ebp),%edx
 812208a:	0f b6 44 02 06       	movzbl 0x6(%edx,%eax,1),%eax
 812208f:	84 c0                	test   %al,%al
 8122091:	79 4f                	jns    81220e2 <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi+0x1c6>
 8122093:	8b 45 08             	mov    0x8(%ebp),%eax
 8122096:	8b 50 0c             	mov    0xc(%eax),%edx
 8122099:	8b 45 08             	mov    0x8(%ebp),%eax
 812209c:	89 50 04             	mov    %edx,0x4(%eax)
 812209f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81220a2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81220a5:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 81220a8:	0f b6 54 11 06       	movzbl 0x6(%ecx,%edx,1),%edx
 81220ad:	89 d1                	mov    %edx,%ecx
 81220af:	f7 d9                	neg    %ecx
 81220b1:	8b 55 0c             	mov    0xc(%ebp),%edx
 81220b4:	88 4c 02 06          	mov    %cl,0x6(%edx,%eax,1)
 81220b8:	8b 45 08             	mov    0x8(%ebp),%eax
 81220bb:	8b 48 0c             	mov    0xc(%eax),%ecx
 81220be:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81220c1:	8b 55 0c             	mov    0xc(%ebp),%edx
 81220c4:	0f b6 44 02 06       	movzbl 0x6(%edx,%eax,1),%eax
 81220c9:	0f be c0             	movsbl %al,%eax
 81220cc:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 81220cf:	8b 45 08             	mov    0x8(%ebp),%eax
 81220d2:	89 50 0c             	mov    %edx,0xc(%eax)
 81220d5:	8b 45 08             	mov    0x8(%ebp),%eax
 81220d8:	c6 00 01             	movb   $0x1,(%eax)
 81220db:	b8 01 00 00 00       	mov    $0x1,%eax
 81220e0:	eb 18                	jmp    81220fa <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi+0x1de>
 81220e2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81220e6:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 81220ea:	0f 9e c0             	setle  %al
 81220ed:	84 c0                	test   %al,%al
 81220ef:	0f 85 79 ff ff ff    	jne    812206e <_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi+0x152>
 81220f5:	b8 00 00 00 00       	mov    $0x0,%eax
 81220fa:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81220fd:	83 c4 00             	add    $0x0,%esp
 8122100:	5b                   	pop    %ebx
 8122101:	5e                   	pop    %esi
 8122102:	5d                   	pop    %ebp
 8122103:	c3                   	ret

```

```c
// APSystem::CActionPointManager::ClearActionOne @ 0x8121f1c

/* APSystem::CActionPointManager::ClearActionOne(APSystem::_ActionPoint&, int) */

undefined4 __thiscall
APSystem::CActionPointManager::ClearActionOne
          (CActionPointManager *this,_ActionPoint *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  CDataManager *pCVar3;
  int iVar4;
  int *piVar5;
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
  local_30 [4];
  _Rb_tree_iterator local_2c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
  local_28 [4];
  map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
  local_24 [4];
  int local_20;
  char local_19;
  uint local_18;
  uint local_14;
  int local_10;
  
  bVar1 = (bool)_IsGMOn;
  if (param_2 != 0) {
    pCVar3 = (CDataManager *)G_CDataManager();
    CDataManager::GetActionPointEtcParameter(pCVar3,bVar1);
    std::
    map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
    ::find((ushort *)local_2c);
    std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>::
    _Rb_tree_const_iterator(local_30,local_2c);
    bVar1 = (bool)_IsGMOn;
    pCVar3 = (CDataManager *)G_CDataManager();
    CDataManager::GetActionPointEtcParameter(pCVar3,bVar1);
    std::
    map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
    ::end(local_24);
    std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>::
    _Rb_tree_const_iterator(local_28,(_Rb_tree_iterator *)local_24);
    cVar2 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
            ::operator==(local_30,(_Rb_tree_const_iterator *)local_28);
    if (cVar2 != '\0') {
      return 0;
    }
    iVar4 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
            ::operator->(local_30);
    local_20 = *(int *)(iVar4 + 4);
    if (local_20 == 0) {
      return 0;
    }
    local_19 = '\0';
    local_18 = std::vector<int,std::allocator<int>>::size
                         ((vector<int,std::allocator<int>> *)(local_20 + 0x14));
    for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
      piVar5 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(local_20 + 0x14),local_14);
      if (*piVar5 == param_2) {
        local_19 = '\x01';
        break;
      }
    }
    if (local_19 != '\x01') {
      return 0;
    }
  }
  local_10 = 0;
  while( true ) {
    if (4 < local_10) {
      return 0;
    }
    if (param_1[local_10 + 6] == (_ActionPoint)0x0) break;
    if ((char)param_1[local_10 + 6] < '\0') {
      *(undefined4 *)(this + 4) = *(undefined4 *)(this + 0xc);
      param_1[local_10 + 6] = (_ActionPoint)-(char)param_1[local_10 + 6];
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + (int)(char)param_1[local_10 + 6];
      *this = (CActionPointManager)0x1;
      return 1;
    }
    local_10 = local_10 + 1;
  }
  return 0;
}

```

---

## GM_Reset

```asm
// === 08121d12 APSystem::CActionPointManager::GM_Reset  [0x08121d12-0x8121dcb] ===
 8121d12:	55                   	push   %ebp
 8121d13:	89 e5                	mov    %esp,%ebp
 8121d15:	83 ec 28             	sub    $0x28,%esp
 8121d18:	8b 45 08             	mov    0x8(%ebp),%eax
 8121d1b:	c6 00 01             	movb   $0x1,(%eax)
 8121d1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8121d21:	83 c0 11             	add    $0x11,%eax
 8121d24:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8121d2b:	00 
 8121d2c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8121d33:	00 
 8121d34:	89 04 24             	mov    %eax,(%esp)
 8121d37:	e8 84 bf f5 ff       	call   807dcc0 <memset@plt>
 8121d3c:	8b 45 08             	mov    0x8(%ebp),%eax
 8121d3f:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 8121d43:	8b 45 08             	mov    0x8(%ebp),%eax
 8121d46:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8121d4d:	8b 45 08             	mov    0x8(%ebp),%eax
 8121d50:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8121d57:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8121d5e:	eb 5b                	jmp    8121dbb <_ZN8APSystem19CActionPointManager8GM_ResetEv+0xa9>
 8121d60:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8121d63:	89 d0                	mov    %edx,%eax
 8121d65:	c1 e0 02             	shl    $0x2,%eax
 8121d68:	01 d0                	add    %edx,%eax
 8121d6a:	01 c0                	add    %eax,%eax
 8121d6c:	01 d0                	add    %edx,%eax
 8121d6e:	03 45 08             	add    0x8(%ebp),%eax
 8121d71:	83 c0 15             	add    $0x15,%eax
 8121d74:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8121d77:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8121d7e:	eb 2c                	jmp    8121dac <_ZN8APSystem19CActionPointManager8GM_ResetEv+0x9a>
 8121d80:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8121d83:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8121d86:	0f b6 44 02 06       	movzbl 0x6(%edx,%eax,1),%eax
 8121d8b:	84 c0                	test   %al,%al
 8121d8d:	7e 19                	jle    8121da8 <_ZN8APSystem19CActionPointManager8GM_ResetEv+0x96>
 8121d8f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8121d92:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8121d95:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8121d98:	0f b6 54 11 06       	movzbl 0x6(%ecx,%edx,1),%edx
 8121d9d:	89 d1                	mov    %edx,%ecx
 8121d9f:	f7 d9                	neg    %ecx
 8121da1:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8121da4:	88 4c 02 06          	mov    %cl,0x6(%edx,%eax,1)
 8121da8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8121dac:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 8121db0:	0f 9e c0             	setle  %al
 8121db3:	84 c0                	test   %al,%al
 8121db5:	75 c9                	jne    8121d80 <_ZN8APSystem19CActionPointManager8GM_ResetEv+0x6e>
 8121db7:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8121dbb:	81 7d ec 2b 01 00 00 	cmpl   $0x12b,-0x14(%ebp)
 8121dc2:	0f 9e c0             	setle  %al
 8121dc5:	84 c0                	test   %al,%al
 8121dc7:	75 97                	jne    8121d60 <_ZN8APSystem19CActionPointManager8GM_ResetEv+0x4e>
 8121dc9:	c9                   	leave
 8121dca:	c3                   	ret
 8121dcb:	90                   	nop

```

```c
// APSystem::CActionPointManager::GM_Reset @ 0x8121d12

/* APSystem::CActionPointManager::GM_Reset() */

void __thiscall APSystem::CActionPointManager::GM_Reset(CActionPointManager *this)

{
  int local_18;
  int local_10;
  
  *this = (CActionPointManager)0x1;
  memset(this + 0x11,0,4);
  this[0x10] = (CActionPointManager)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 4) = 0;
  for (local_18 = 0; local_18 < 300; local_18 = local_18 + 1) {
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      if ('\0' < (char)this[local_10 + local_18 * 0xb + 0x1b]) {
        this[local_10 + local_18 * 0xb + 0x1b] =
             (CActionPointManager)-(char)this[local_10 + local_18 * 0xb + 0x1b];
      }
    }
  }
  return;
}

```

---

## GM_Set

```asm
// === 08121b3e APSystem::CActionPointManager::GM_Set  [0x08121b3e-0x8121d11] ===
 8121b3e:	55                   	push   %ebp
 8121b3f:	89 e5                	mov    %esp,%ebp
 8121b41:	53                   	push   %ebx
 8121b42:	83 ec 44             	sub    $0x44,%esp
 8121b45:	8b 45 08             	mov    0x8(%ebp),%eax
 8121b48:	c6 00 01             	movb   $0x1,(%eax)
 8121b4b:	8b 45 08             	mov    0x8(%ebp),%eax
 8121b4e:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8121b55:	8b 45 08             	mov    0x8(%ebp),%eax
 8121b58:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8121b5f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8121b66:	eb 5b                	jmp    8121bc3 <_ZN8APSystem19CActionPointManager6GM_SetER5CUserj+0x85>
 8121b68:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8121b6b:	89 d0                	mov    %edx,%eax
 8121b6d:	c1 e0 02             	shl    $0x2,%eax
 8121b70:	01 d0                	add    %edx,%eax
 8121b72:	01 c0                	add    %eax,%eax
 8121b74:	01 d0                	add    %edx,%eax
 8121b76:	03 45 08             	add    0x8(%ebp),%eax
 8121b79:	83 c0 15             	add    $0x15,%eax
 8121b7c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8121b7f:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8121b86:	eb 2c                	jmp    8121bb4 <_ZN8APSystem19CActionPointManager6GM_SetER5CUserj+0x76>
 8121b88:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8121b8b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8121b8e:	0f b6 44 02 06       	movzbl 0x6(%edx,%eax,1),%eax
 8121b93:	84 c0                	test   %al,%al
 8121b95:	7e 19                	jle    8121bb0 <_ZN8APSystem19CActionPointManager6GM_SetER5CUserj+0x72>
 8121b97:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8121b9a:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8121b9d:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8121ba0:	0f b6 54 11 06       	movzbl 0x6(%ecx,%edx,1),%edx
 8121ba5:	89 d1                	mov    %edx,%ecx
 8121ba7:	f7 d9                	neg    %ecx
 8121ba9:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8121bac:	88 4c 02 06          	mov    %cl,0x6(%edx,%eax,1)
 8121bb0:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8121bb4:	83 7d e8 04          	cmpl   $0x4,-0x18(%ebp)
 8121bb8:	0f 9e c0             	setle  %al
 8121bbb:	84 c0                	test   %al,%al
 8121bbd:	75 c9                	jne    8121b88 <_ZN8APSystem19CActionPointManager6GM_SetER5CUserj+0x4a>
 8121bbf:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8121bc3:	81 7d e0 2b 01 00 00 	cmpl   $0x12b,-0x20(%ebp)
 8121bca:	0f 9e c0             	setle  %al
 8121bcd:	84 c0                	test   %al,%al
 8121bcf:	75 97                	jne    8121b68 <_ZN8APSystem19CActionPointManager6GM_SetER5CUserj+0x2a>
 8121bd1:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8121bd8:	e9 1d 01 00 00       	jmp    8121cfa <_ZN8APSystem19CActionPointManager6GM_SetER5CUserj+0x1bc>
 8121bdd:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8121be0:	89 d0                	mov    %edx,%eax
 8121be2:	c1 e0 02             	shl    $0x2,%eax
 8121be5:	01 d0                	add    %edx,%eax
 8121be7:	01 c0                	add    %eax,%eax
 8121be9:	01 d0                	add    %edx,%eax
 8121beb:	03 45 08             	add    0x8(%ebp),%eax
 8121bee:	83 c0 15             	add    $0x15,%eax
 8121bf1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8121bf4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8121bfb:	e9 d1 00 00 00       	jmp    8121cd1 <_ZN8APSystem19CActionPointManager6GM_SetER5CUserj+0x193>
 8121c00:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8121c03:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8121c06:	0f b6 44 02 06       	movzbl 0x6(%edx,%eax,1),%eax
 8121c0b:	84 c0                	test   %al,%al
 8121c0d:	0f 89 ba 00 00 00    	jns    8121ccd <_ZN8APSystem19CActionPointManager6GM_SetER5CUserj+0x18f>
 8121c13:	8b 45 08             	mov    0x8(%ebp),%eax
 8121c16:	8b 50 0c             	mov    0xc(%eax),%edx
 8121c19:	8b 45 08             	mov    0x8(%ebp),%eax
 8121c1c:	89 50 04             	mov    %edx,0x4(%eax)
 8121c1f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8121c22:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8121c25:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8121c28:	0f b6 54 11 06       	movzbl 0x6(%ecx,%edx,1),%edx
 8121c2d:	89 d1                	mov    %edx,%ecx
 8121c2f:	f7 d9                	neg    %ecx
 8121c31:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8121c34:	88 4c 02 06          	mov    %cl,0x6(%edx,%eax,1)
 8121c38:	8b 45 08             	mov    0x8(%ebp),%eax
 8121c3b:	8b 48 0c             	mov    0xc(%eax),%ecx
 8121c3e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8121c41:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8121c44:	0f b6 44 02 06       	movzbl 0x6(%edx,%eax,1),%eax
 8121c49:	0f be c0             	movsbl %al,%eax
 8121c4c:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8121c4f:	8b 45 08             	mov    0x8(%ebp),%eax
 8121c52:	89 50 0c             	mov    %edx,0xc(%eax)
 8121c55:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8121c58:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8121c5b:	89 d0                	mov    %edx,%eax
 8121c5d:	c1 e0 02             	shl    $0x2,%eax
 8121c60:	01 d0                	add    %edx,%eax
 8121c62:	01 c0                	add    %eax,%eax
 8121c64:	01 d0                	add    %edx,%eax
 8121c66:	8b 4c 08 17          	mov    0x17(%eax,%ecx,1),%ecx
 8121c6a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8121c6d:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8121c70:	89 d0                	mov    %edx,%eax
 8121c72:	c1 e0 02             	shl    $0x2,%eax
 8121c75:	01 d0                	add    %edx,%eax
 8121c77:	01 c0                	add    %eax,%eax
 8121c79:	01 d0                	add    %edx,%eax
 8121c7b:	0f b7 44 18 15       	movzwl 0x15(%eax,%ebx,1),%eax
 8121c80:	0f b7 c0             	movzwl %ax,%eax
 8121c83:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8121c8a:	00 
 8121c8b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8121c92:	00 
 8121c93:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8121c97:	89 44 24 04          	mov    %eax,0x4(%esp)
 8121c9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8121c9e:	89 04 24             	mov    %eax,(%esp)
 8121ca1:	e8 0e 07 00 00       	call   81223b4 <_ZN8APSystem9CUserProc15SendActionClearER5CUsertNS_17_ActionGroupIndexEb16ENUM_PACKETCLASS>
 8121ca6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8121ca9:	89 04 24             	mov    %eax,(%esp)
 8121cac:	e8 77 f3 fd ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8121cb1:	8b 55 08             	mov    0x8(%ebp),%edx
 8121cb4:	8b 4a 0c             	mov    0xc(%edx),%ecx
 8121cb7:	8b 55 08             	mov    0x8(%ebp),%edx
 8121cba:	8b 52 04             	mov    0x4(%edx),%edx
 8121cbd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8121cc1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8121cc5:	89 14 24             	mov    %edx,(%esp)
 8121cc8:	e8 97 08 00 00       	call   8122564 <_ZN8APSystem9CUserProc28CheckAndSendToMessageAllUserEjjPKc>
 8121ccd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8121cd1:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 8121cd5:	7f 12                	jg     8121ce9 <_ZN8APSystem19CActionPointManager6GM_SetER5CUserj+0x1ab>
 8121cd7:	8b 45 08             	mov    0x8(%ebp),%eax
 8121cda:	8b 40 0c             	mov    0xc(%eax),%eax
 8121cdd:	3b 45 10             	cmp    0x10(%ebp),%eax
 8121ce0:	73 07                	jae    8121ce9 <_ZN8APSystem19CActionPointManager6GM_SetER5CUserj+0x1ab>
 8121ce2:	b8 01 00 00 00       	mov    $0x1,%eax
 8121ce7:	eb 05                	jmp    8121cee <_ZN8APSystem19CActionPointManager6GM_SetER5CUserj+0x1b0>
 8121ce9:	b8 00 00 00 00       	mov    $0x0,%eax
 8121cee:	84 c0                	test   %al,%al
 8121cf0:	0f 85 0a ff ff ff    	jne    8121c00 <_ZN8APSystem19CActionPointManager6GM_SetER5CUserj+0xc2>
 8121cf6:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8121cfa:	81 7d ec 2b 01 00 00 	cmpl   $0x12b,-0x14(%ebp)
 8121d01:	0f 9e c0             	setle  %al
 8121d04:	84 c0                	test   %al,%al
 8121d06:	0f 85 d1 fe ff ff    	jne    8121bdd <_ZN8APSystem19CActionPointManager6GM_SetER5CUserj+0x9f>
 8121d0c:	83 c4 44             	add    $0x44,%esp
 8121d0f:	5b                   	pop    %ebx
 8121d10:	5d                   	pop    %ebp
 8121d11:	c3                   	ret

```

```c
// APSystem::CActionPointManager::GM_Set @ 0x8121b3e

/* APSystem::CActionPointManager::GM_Set(CUser&, unsigned int) */

void __thiscall
APSystem::CActionPointManager::GM_Set(CActionPointManager *this,CUser *param_1,uint param_2)

{
  bool bVar1;
  char *pcVar2;
  int local_24;
  int local_1c;
  int local_18;
  int local_10;
  
  *this = (CActionPointManager)0x1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 4) = 0;
  for (local_24 = 0; local_24 < 300; local_24 = local_24 + 1) {
    for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
      if ('\0' < (char)this[local_1c + local_24 * 0xb + 0x1b]) {
        this[local_1c + local_24 * 0xb + 0x1b] =
             (CActionPointManager)-(char)this[local_1c + local_24 * 0xb + 0x1b];
      }
    }
  }
  for (local_18 = 0; local_18 < 300; local_18 = local_18 + 1) {
    local_10 = 0;
    while( true ) {
      if ((local_10 < 5) && (*(uint *)(this + 0xc) < param_2)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      if ((char)this[local_10 + local_18 * 0xb + 0x1b] < '\0') {
        *(undefined4 *)(this + 4) = *(undefined4 *)(this + 0xc);
        this[local_10 + local_18 * 0xb + 0x1b] =
             (CActionPointManager)-(char)this[local_10 + local_18 * 0xb + 0x1b];
        *(int *)(this + 0xc) =
             *(int *)(this + 0xc) + (int)(char)this[local_10 + local_18 * 0xb + 0x1b];
        CUserProc::SendActionClear
                  (param_1,*(undefined2 *)(this + local_18 * 0xb + 0x15),
                   *(undefined4 *)(this + local_18 * 0xb + 0x17),1,0);
        pcVar2 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        CUserProc::CheckAndSendToMessageAllUser(*(uint *)(this + 4),*(uint *)(this + 0xc),pcVar2);
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}

```

---

## GetTodayRewardAndSendMail

```asm
// === 08122104 APSystem::CActionPointManager::GetTodayRewardAndSendMail  [0x08122104-0x8122389] ===
 8122104:	55                   	push   %ebp
 8122105:	89 e5                	mov    %esp,%ebp
 8122107:	56                   	push   %esi
 8122108:	53                   	push   %ebx
 8122109:	81 ec b0 01 00 00    	sub    $0x1b0,%esp
 812210f:	0f b6 05 7c f0 3f 09 	movzbl 0x93ff07c,%eax
 8122116:	0f b6 d8             	movzbl %al,%ebx
 8122119:	e8 7d a0 fa ff       	call   80cc19b <_Z14G_CDataManagerv>
 812211e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8122122:	89 04 24             	mov    %eax,(%esp)
 8122125:	e8 a4 09 00 00       	call   8122ace <_ZN12CDataManager26GetActionPointEtcParameterEb>
 812212a:	83 c0 6c             	add    $0x6c,%eax
 812212d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8122130:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8122133:	89 04 24             	mov    %eax,(%esp)
 8122136:	e8 09 0c 00 00       	call   8122d44 <_ZNKSt6vectorIN8APSystem16_TodayRewardItemESaIS1_EE4sizeEv>
 812213b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 812213e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8122145:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 812214c:	e9 a9 00 00 00       	jmp    81221fa <_ZN8APSystem19CActionPointManager25GetTodayRewardAndSendMailER5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE+0xf6>
 8122151:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8122154:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8122157:	89 44 24 04          	mov    %eax,0x4(%esp)
 812215b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 812215e:	89 04 24             	mov    %eax,(%esp)
 8122161:	e8 fe 0b 00 00       	call   8122d64 <_ZNKSt6vectorIN8APSystem16_TodayRewardItemESaIS1_EEixEj>
 8122166:	8b 00                	mov    (%eax),%eax
 8122168:	39 c3                	cmp    %eax,%ebx
 812216a:	75 4d                	jne    81221b9 <_ZN8APSystem19CActionPointManager25GetTodayRewardAndSendMailER5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE+0xb5>
 812216c:	8b 45 08             	mov    0x8(%ebp),%eax
 812216f:	8b 58 0c             	mov    0xc(%eax),%ebx
 8122172:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8122175:	89 44 24 04          	mov    %eax,0x4(%esp)
 8122179:	8b 45 e0             	mov    -0x20(%ebp),%eax
 812217c:	89 04 24             	mov    %eax,(%esp)
 812217f:	e8 e0 0b 00 00       	call   8122d64 <_ZNKSt6vectorIN8APSystem16_TodayRewardItemESaIS1_EEixEj>
 8122184:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8122188:	0f b7 c0             	movzwl %ax,%eax
 812218b:	39 c3                	cmp    %eax,%ebx
 812218d:	72 2a                	jb     81221b9 <_ZN8APSystem19CActionPointManager25GetTodayRewardAndSendMailER5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE+0xb5>
 812218f:	8b 45 08             	mov    0x8(%ebp),%eax
 8122192:	8b 58 0c             	mov    0xc(%eax),%ebx
 8122195:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8122198:	89 44 24 04          	mov    %eax,0x4(%esp)
 812219c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 812219f:	89 04 24             	mov    %eax,(%esp)
 81221a2:	e8 bd 0b 00 00       	call   8122d64 <_ZNKSt6vectorIN8APSystem16_TodayRewardItemESaIS1_EEixEj>
 81221a7:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 81221ab:	0f b7 c0             	movzwl %ax,%eax
 81221ae:	39 c3                	cmp    %eax,%ebx
 81221b0:	77 07                	ja     81221b9 <_ZN8APSystem19CActionPointManager25GetTodayRewardAndSendMailER5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE+0xb5>
 81221b2:	b8 01 00 00 00       	mov    $0x1,%eax
 81221b7:	eb 05                	jmp    81221be <_ZN8APSystem19CActionPointManager25GetTodayRewardAndSendMailER5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE+0xba>
 81221b9:	b8 00 00 00 00       	mov    $0x0,%eax
 81221be:	84 c0                	test   %al,%al
 81221c0:	74 34                	je     81221f6 <_ZN8APSystem19CActionPointManager25GetTodayRewardAndSendMailER5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE+0xf2>
 81221c2:	8b 45 10             	mov    0x10(%ebp),%eax
 81221c5:	8b 55 08             	mov    0x8(%ebp),%edx
 81221c8:	0f b6 44 02 11       	movzbl 0x11(%edx,%eax,1),%eax
 81221cd:	83 f0 01             	xor    $0x1,%eax
 81221d0:	84 c0                	test   %al,%al
 81221d2:	74 22                	je     81221f6 <_ZN8APSystem19CActionPointManager25GetTodayRewardAndSendMailER5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE+0xf2>
 81221d4:	8b 45 10             	mov    0x10(%ebp),%eax
 81221d7:	8b 55 08             	mov    0x8(%ebp),%edx
 81221da:	c6 44 02 11 01       	movb   $0x1,0x11(%edx,%eax,1)
 81221df:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81221e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81221e6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81221e9:	89 04 24             	mov    %eax,(%esp)
 81221ec:	e8 73 0b 00 00       	call   8122d64 <_ZNKSt6vectorIN8APSystem16_TodayRewardItemESaIS1_EEixEj>
 81221f1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81221f4:	eb 15                	jmp    812220b <_ZN8APSystem19CActionPointManager25GetTodayRewardAndSendMailER5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE+0x107>
 81221f6:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 81221fa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81221fd:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8122200:	0f 92 c0             	setb   %al
 8122203:	84 c0                	test   %al,%al
 8122205:	0f 85 46 ff ff ff    	jne    8122151 <_ZN8APSystem19CActionPointManager25GetTodayRewardAndSendMailER5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE+0x4d>
 812220b:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 812220f:	0f 84 65 01 00 00    	je     812237a <_ZN8APSystem19CActionPointManager25GetTodayRewardAndSendMailER5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE+0x276>
 8122215:	8b 45 08             	mov    0x8(%ebp),%eax
 8122218:	c6 00 01             	movb   $0x1,(%eax)
 812221b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812221e:	8b 40 08             	mov    0x8(%eax),%eax
 8122221:	89 c3                	mov    %eax,%ebx
 8122223:	e8 73 9f fa ff       	call   80cc19b <_Z14G_CDataManagerv>
 8122228:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 812222c:	89 04 24             	mov    %eax,(%esp)
 812222f:	e8 fe d7 23 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8122234:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8122237:	8d 45 85             	lea    -0x7b(%ebp),%eax
 812223a:	89 04 24             	mov    %eax,(%esp)
 812223d:	e8 12 96 fa ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8122242:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8122246:	0f 84 2e 01 00 00    	je     812237a <_ZN8APSystem19CActionPointManager25GetTodayRewardAndSendMailER5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE+0x276>
 812224c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812224f:	8b 00                	mov    (%eax),%eax
 8122251:	83 c0 08             	add    $0x8,%eax
 8122254:	8b 10                	mov    (%eax),%edx
 8122256:	8d 45 85             	lea    -0x7b(%ebp),%eax
 8122259:	89 44 24 04          	mov    %eax,0x4(%esp)
 812225d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8122260:	89 04 24             	mov    %eax,(%esp)
 8122263:	ff d2                	call   *%edx
 8122265:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8122268:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 812226c:	0f b7 c0             	movzwl %ax,%eax
 812226f:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8122272:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8122275:	8b 40 08             	mov    0x8(%eax),%eax
 8122278:	89 45 87             	mov    %eax,-0x79(%ebp)
 812227b:	c7 45 f4 08 00 00 00 	movl   $0x8,-0xc(%ebp)
 8122282:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8122289:	00 
 812228a:	c7 44 24 08 a1 d4 b5 	movl   $0x8b5d4a1,0x8(%esp)
 8122291:	08 
 8122292:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8122299:	00 
 812229a:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81222a1:	e8 58 35 98 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81222a6:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 81222ad:	00 
 81222ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 81222b2:	8d 45 c2             	lea    -0x3e(%ebp),%eax
 81222b5:	89 04 24             	mov    %eax,(%esp)
 81222b8:	e8 13 b6 f5 ff       	call   807d8d0 <strncpy@plt>
 81222bd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81222c4:	00 
 81222c5:	c7 44 24 08 b8 d4 b5 	movl   $0x8b5d4b8,0x8(%esp)
 81222cc:	08 
 81222cd:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81222d4:	00 
 81222d5:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81222dc:	e8 1d 35 98 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81222e1:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 81222e8:	00 
 81222e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81222ed:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 81222f3:	89 04 24             	mov    %eax,(%esp)
 81222f6:	e8 d5 b5 f5 ff       	call   807d8d0 <strncpy@plt>
 81222fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81222fe:	89 04 24             	mov    %eax,(%esp)
 8122301:	e8 8a 99 fa ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8122306:	89 c3                	mov    %eax,%ebx
 8122308:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 812230e:	89 04 24             	mov    %eax,(%esp)
 8122311:	e8 9a c0 f5 ff       	call   807e3b0 <strlen@plt>
 8122316:	89 c6                	mov    %eax,%esi
 8122318:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 812231f:	ff 
 8122320:	8b 45 0c             	mov    0xc(%ebp),%eax
 8122323:	89 04 24             	mov    %eax,(%esp)
 8122326:	e8 75 bc 52 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 812232b:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8122332:	00 
 8122333:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 812233a:	00 
 812233b:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 812233f:	c7 44 24 18 08 00 00 	movl   $0x8,0x18(%esp)
 8122346:	00 
 8122347:	89 74 24 14          	mov    %esi,0x14(%esp)
 812234b:	8d 95 85 fe ff ff    	lea    -0x17b(%ebp),%edx
 8122351:	89 54 24 10          	mov    %edx,0x10(%esp)
 8122355:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8122359:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8122360:	00 
 8122361:	8d 45 85             	lea    -0x7b(%ebp),%eax
 8122364:	89 44 24 04          	mov    %eax,0x4(%esp)
 8122368:	8d 45 c2             	lea    -0x3e(%ebp),%eax
 812236b:	89 04 24             	mov    %eax,(%esp)
 812236e:	e8 75 32 43 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 8122373:	b8 01 00 00 00       	mov    $0x1,%eax
 8122378:	eb 05                	jmp    812237f <_ZN8APSystem19CActionPointManager25GetTodayRewardAndSendMailER5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE+0x27b>
 812237a:	b8 00 00 00 00       	mov    $0x0,%eax
 812237f:	81 c4 b0 01 00 00    	add    $0x1b0,%esp
 8122385:	5b                   	pop    %ebx
 8122386:	5e                   	pop    %esi
 8122387:	5d                   	pop    %ebp
 8122388:	c3                   	ret
 8122389:	90                   	nop

```

```c
// APSystem::CActionPointManager::GetTodayRewardAndSendMail @ 0x8122104

/* APSystem::CActionPointManager::GetTodayRewardAndSendMail(CUser&,
   APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem) */

undefined4 __thiscall
APSystem::CActionPointManager::GetTodayRewardAndSendMail
          (CActionPointManager *this,CUser *param_1,int param_3)

{
  uint uVar1;
  bool bVar2;
  CDataManager *pCVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  size_t sVar8;
  undefined4 uVar9;
  char local_17f [256];
  Inven_Item local_7f [2];
  undefined4 local_7d;
  uint local_78;
  char local_42 [30];
  vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>> *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  undefined4 local_10;
  
  bVar2 = (bool)_IsGMOn;
  pCVar3 = (CDataManager *)G_CDataManager();
  iVar4 = CDataManager::GetActionPointEtcParameter(pCVar3,bVar2);
  local_24 = (vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>> *)
             (iVar4 + 0x6c);
  local_20 = std::vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>>::
             size(local_24);
  local_1c = 0;
  local_18 = 0;
  do {
    if (local_20 <= local_18) {
LAB_0812220b:
      if (local_1c != 0) {
        *this = (CActionPointManager)0x1;
        iVar4 = *(int *)(local_1c + 8);
        pCVar3 = (CDataManager *)G_CDataManager();
        local_14 = (int *)CDataManager::find_item(pCVar3,iVar4);
        Inven_Item::Inven_Item(local_7f);
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 8))(local_14,local_7f);
          local_78 = (uint)*(ushort *)(local_1c + 0xc);
          local_7d = *(undefined4 *)(local_1c + 8);
          local_10 = 8;
          pcVar6 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "chn_game_server_msg_82",(bool *)0x0);
          strncpy(local_42,pcVar6,0x1d);
          pcVar6 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "chn_game_server_msg_83",(bool *)0x0);
          strncpy(local_17f,pcVar6,0xff);
          uVar7 = CUser::GetServerGroup(param_1);
          sVar8 = strlen(local_17f);
          uVar9 = CUser::get_charac_no(param_1,-1);
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                    (local_42,local_7f,0,uVar9,local_17f,sVar8,8,uVar7,0,0);
          return 1;
        }
      }
      return 0;
    }
    piVar5 = (int *)std::
                    vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>>::
                    operator[](local_24,local_18);
    if (((param_3 == *piVar5) &&
        (uVar1 = *(uint *)(this + 0xc),
        iVar4 = std::vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>>::
                operator[](local_24,local_18), *(ushort *)(iVar4 + 4) <= uVar1)) &&
       (uVar1 = *(uint *)(this + 0xc),
       iVar4 = std::vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>>::
               operator[](local_24,local_18), uVar1 <= *(ushort *)(iVar4 + 6))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((bVar2) && (this[param_3 + 0x11] != (CActionPointManager)0x1)) {
      this[param_3 + 0x11] = (CActionPointManager)0x1;
      local_1c = std::vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>>
                 ::operator[](local_24,local_18);
      goto LAB_0812220b;
    }
    local_18 = local_18 + 1;
  } while( true );
}

```

---

## Set

```asm
// === 08121b0c APSystem::CActionPointManager::Set  [0x08121b0c-0x8121b3d] ===
 8121b0c:	55                   	push   %ebp
 8121b0d:	89 e5                	mov    %esp,%ebp
 8121b0f:	83 ec 18             	sub    $0x18,%esp
 8121b12:	8b 45 08             	mov    0x8(%ebp),%eax
 8121b15:	8b 50 0c             	mov    0xc(%eax),%edx
 8121b18:	8b 45 08             	mov    0x8(%ebp),%eax
 8121b1b:	89 50 04             	mov    %edx,0x4(%eax)
 8121b1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8121b21:	8d 50 08             	lea    0x8(%eax),%edx
 8121b24:	c7 44 24 08 f1 0c 00 	movl   $0xcf1,0x8(%esp)
 8121b2b:	00 
 8121b2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8121b2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8121b33:	89 14 24             	mov    %edx,(%esp)
 8121b36:	e8 65 bd f5 ff       	call   807d8a0 <memcpy@plt>
 8121b3b:	c9                   	leave
 8121b3c:	c3                   	ret
 8121b3d:	90                   	nop

```

```c
// APSystem::CActionPointManager::Set @ 0x8121b0c

/* APSystem::CActionPointManager::Set(APSystem::_SIG_LOAD_ACTION_POINT&) */

void __thiscall
APSystem::CActionPointManager::Set(CActionPointManager *this,_SIG_LOAD_ACTION_POINT *param_1)

{
  *(undefined4 *)(this + 4) = *(undefined4 *)(this + 0xc);
  memcpy(this + 8,param_1,0xcf1);
  return;
}

```

---

## SetTodayAction

```asm
// === 0812161c APSystem::CActionPointManager::SetTodayAction  [0x0812161c-0x8121b0b] ===
 812161c:	55                   	push   %ebp
 812161d:	89 e5                	mov    %esp,%ebp
 812161f:	56                   	push   %esi
 8121620:	53                   	push   %ebx
 8121621:	81 ec 90 00 00 00    	sub    $0x90,%esp
 8121627:	8b 45 08             	mov    0x8(%ebp),%eax
 812162a:	89 04 24             	mov    %eax,(%esp)
 812162d:	e8 c2 14 00 00       	call   8122af4 <_ZN8APSystem19CActionPointManager5ResetEv>
 8121632:	8b 45 08             	mov    0x8(%ebp),%eax
 8121635:	8b 55 10             	mov    0x10(%ebp),%edx
 8121638:	89 50 08             	mov    %edx,0x8(%eax)
 812163b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8121642:	e8 57 a6 fa ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8121647:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 812164a:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8121650:	89 44 24 04          	mov    %eax,0x4(%esp)
 8121654:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8121657:	89 04 24             	mov    %eax,(%esp)
 812165a:	e8 01 cd f5 ff       	call   807e360 <localtime_r@plt>
 812165f:	8b 45 90             	mov    -0x70(%ebp),%eax
 8121662:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8121665:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8121668:	8b 55 18             	mov    0x18(%ebp),%edx
 812166b:	89 54 24 04          	mov    %edx,0x4(%esp)
 812166f:	89 04 24             	mov    %eax,(%esp)
 8121672:	e8 b3 14 00 00       	call   8122b2a <_ZNKSt3mapItSt6vectorIN8APSystem14CActionPointExESaIS2_EESt4lessItESaISt4pairIKtS4_EEE5beginEv>
 8121677:	83 ec 04             	sub    $0x4,%esp
 812167a:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8121681:	e9 2d 04 00 00       	jmp    8121ab3 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x497>
 8121686:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8121689:	89 04 24             	mov    %eax,(%esp)
 812168c:	e8 37 15 00 00       	call   8122bc8 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKtSt6vectorIN8APSystem14CActionPointExESaIS4_EEEEptEv>
 8121691:	83 c0 04             	add    $0x4,%eax
 8121694:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8121697:	8b 45 cc             	mov    -0x34(%ebp),%eax
 812169a:	89 04 24             	mov    %eax,(%esp)
 812169d:	e8 34 15 00 00       	call   8122bd6 <_ZNKSt6vectorIN8APSystem14CActionPointExESaIS1_EE4sizeEv>
 81216a2:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81216a5:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 81216a9:	0f 84 e2 03 00 00    	je     8121a91 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x475>
 81216af:	c6 45 d6 00          	movb   $0x0,-0x2a(%ebp)
 81216b3:	c6 45 d7 00          	movb   $0x0,-0x29(%ebp)
 81216b7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81216be:	00 
 81216bf:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81216c2:	89 04 24             	mov    %eax,(%esp)
 81216c5:	e8 2e 15 00 00       	call   8122bf8 <_ZNKSt6vectorIN8APSystem14CActionPointExESaIS1_EEixEj>
 81216ca:	8b 40 20             	mov    0x20(%eax),%eax
 81216cd:	83 f8 07             	cmp    $0x7,%eax
 81216d0:	0f 95 c0             	setne  %al
 81216d3:	84 c0                	test   %al,%al
 81216d5:	74 04                	je     81216db <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0xbf>
 81216d7:	c6 45 d6 01          	movb   $0x1,-0x2a(%ebp)
 81216db:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81216e2:	00 
 81216e3:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81216e6:	89 04 24             	mov    %eax,(%esp)
 81216e9:	e8 0a 15 00 00       	call   8122bf8 <_ZNKSt6vectorIN8APSystem14CActionPointExESaIS1_EEixEj>
 81216ee:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81216f2:	84 c0                	test   %al,%al
 81216f4:	0f 95 c0             	setne  %al
 81216f7:	84 c0                	test   %al,%al
 81216f9:	74 04                	je     81216ff <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0xe3>
 81216fb:	c6 45 d7 01          	movb   $0x1,-0x29(%ebp)
 81216ff:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8121702:	89 04 24             	mov    %eax,(%esp)
 8121705:	e8 08 15 00 00       	call   8122c12 <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EEC1Ev>
 812170a:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8121711:	eb 2b                	jmp    812173e <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x122>
 8121713:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8121716:	89 44 24 04          	mov    %eax,0x4(%esp)
 812171a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 812171d:	89 04 24             	mov    %eax,(%esp)
 8121720:	e8 d3 14 00 00       	call   8122bf8 <_ZNKSt6vectorIN8APSystem14CActionPointExESaIS1_EEixEj>
 8121725:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8121728:	8d 45 bc             	lea    -0x44(%ebp),%eax
 812172b:	89 44 24 04          	mov    %eax,0x4(%esp)
 812172f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8121732:	89 04 24             	mov    %eax,(%esp)
 8121735:	e8 4a 15 00 00       	call   8122c84 <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EE9push_backEOS3_>
 812173a:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 812173e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8121741:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 8121744:	0f 9c c0             	setl   %al
 8121747:	84 c0                	test   %al,%al
 8121749:	75 c8                	jne    8121713 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0xf7>
 812174b:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8121752:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8121759:	e9 37 02 00 00       	jmp    8121995 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x379>
 812175e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8121761:	89 44 24 04          	mov    %eax,0x4(%esp)
 8121765:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8121768:	89 04 24             	mov    %eax,(%esp)
 812176b:	e8 3e 15 00 00       	call   8122cae <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EEixEj>
 8121770:	8b 00                	mov    (%eax),%eax
 8121772:	85 c0                	test   %eax,%eax
 8121774:	0f 94 c0             	sete   %al
 8121777:	84 c0                	test   %al,%al
 8121779:	0f 85 0e 02 00 00    	jne    812198d <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x371>
 812177f:	80 7d d6 00          	cmpb   $0x0,-0x2a(%ebp)
 8121783:	74 55                	je     81217da <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x1be>
 8121785:	0f b6 05 8c 00 37 09 	movzbl 0x937008c,%eax
 812178c:	84 c0                	test   %al,%al
 812178e:	74 08                	je     8121798 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x17c>
 8121790:	a1 90 00 37 09       	mov    0x9370090,%eax
 8121795:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8121798:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812179b:	89 44 24 04          	mov    %eax,0x4(%esp)
 812179f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81217a2:	89 04 24             	mov    %eax,(%esp)
 81217a5:	e8 04 15 00 00       	call   8122cae <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EEixEj>
 81217aa:	8b 00                	mov    (%eax),%eax
 81217ac:	8b 40 20             	mov    0x20(%eax),%eax
 81217af:	89 c2                	mov    %eax,%edx
 81217b1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81217b4:	39 c2                	cmp    %eax,%edx
 81217b6:	0f 95 c0             	setne  %al
 81217b9:	84 c0                	test   %al,%al
 81217bb:	74 1d                	je     81217da <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x1be>
 81217bd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81217c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81217c4:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81217c7:	89 04 24             	mov    %eax,(%esp)
 81217ca:	e8 df 14 00 00       	call   8122cae <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EEixEj>
 81217cf:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 81217d5:	e9 b7 01 00 00       	jmp    8121991 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x375>
 81217da:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 81217de:	74 69                	je     8121849 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x22d>
 81217e0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81217e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81217e7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81217ea:	89 04 24             	mov    %eax,(%esp)
 81217ed:	e8 06 14 00 00       	call   8122bf8 <_ZNKSt6vectorIN8APSystem14CActionPointExESaIS1_EEixEj>
 81217f2:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81217f6:	0f b6 c0             	movzbl %al,%eax
 81217f9:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81217fc:	7f 1e                	jg     812181c <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x200>
 81217fe:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8121801:	89 44 24 04          	mov    %eax,0x4(%esp)
 8121805:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8121808:	89 04 24             	mov    %eax,(%esp)
 812180b:	e8 e8 13 00 00       	call   8122bf8 <_ZNKSt6vectorIN8APSystem14CActionPointExESaIS1_EEixEj>
 8121810:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 8121814:	0f b6 c0             	movzbl %al,%eax
 8121817:	3b 45 0c             	cmp    0xc(%ebp),%eax
 812181a:	7d 07                	jge    8121823 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x207>
 812181c:	b8 01 00 00 00       	mov    $0x1,%eax
 8121821:	eb 05                	jmp    8121828 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x20c>
 8121823:	b8 00 00 00 00       	mov    $0x0,%eax
 8121828:	84 c0                	test   %al,%al
 812182a:	74 1d                	je     8121849 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x22d>
 812182c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812182f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8121833:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8121836:	89 04 24             	mov    %eax,(%esp)
 8121839:	e8 70 14 00 00       	call   8122cae <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EEixEj>
 812183e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8121844:	e9 48 01 00 00       	jmp    8121991 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x375>
 8121849:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812184c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8121850:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8121853:	89 04 24             	mov    %eax,(%esp)
 8121856:	e8 53 14 00 00       	call   8122cae <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EEixEj>
 812185b:	8b 00                	mov    (%eax),%eax
 812185d:	8b 40 02             	mov    0x2(%eax),%eax
 8121860:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8121863:	83 7d f0 1d          	cmpl   $0x1d,-0x10(%ebp)
 8121867:	74 1c                	je     8121885 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x269>
 8121869:	83 7d f0 1e          	cmpl   $0x1e,-0x10(%ebp)
 812186d:	74 16                	je     8121885 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x269>
 812186f:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
 8121873:	74 10                	je     8121885 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x269>
 8121875:	83 7d f0 2d          	cmpl   $0x2d,-0x10(%ebp)
 8121879:	74 0a                	je     8121885 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x269>
 812187b:	83 7d f0 20          	cmpl   $0x20,-0x10(%ebp)
 812187f:	0f 85 dc 00 00 00    	jne    8121961 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x345>
 8121885:	83 7d f0 1d          	cmpl   $0x1d,-0x10(%ebp)
 8121889:	75 23                	jne    81218ae <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x292>
 812188b:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
 812188f:	74 1d                	je     81218ae <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x292>
 8121891:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8121894:	89 44 24 04          	mov    %eax,0x4(%esp)
 8121898:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 812189b:	89 04 24             	mov    %eax,(%esp)
 812189e:	e8 0b 14 00 00       	call   8122cae <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EEixEj>
 81218a3:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 81218a9:	e9 96 00 00 00       	jmp    8121944 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x328>
 81218ae:	83 7d f0 1e          	cmpl   $0x1e,-0x10(%ebp)
 81218b2:	75 20                	jne    81218d4 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x2b8>
 81218b4:	83 7d 14 04          	cmpl   $0x4,0x14(%ebp)
 81218b8:	74 1a                	je     81218d4 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x2b8>
 81218ba:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81218bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81218c1:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81218c4:	89 04 24             	mov    %eax,(%esp)
 81218c7:	e8 e2 13 00 00       	call   8122cae <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EEixEj>
 81218cc:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 81218d2:	eb 70                	jmp    8121944 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x328>
 81218d4:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
 81218d8:	75 20                	jne    81218fa <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x2de>
 81218da:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 81218de:	74 1a                	je     81218fa <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x2de>
 81218e0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81218e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81218e7:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81218ea:	89 04 24             	mov    %eax,(%esp)
 81218ed:	e8 bc 13 00 00       	call   8122cae <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EEixEj>
 81218f2:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 81218f8:	eb 4a                	jmp    8121944 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x328>
 81218fa:	83 7d f0 20          	cmpl   $0x20,-0x10(%ebp)
 81218fe:	75 20                	jne    8121920 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x304>
 8121900:	83 7d 14 03          	cmpl   $0x3,0x14(%ebp)
 8121904:	74 1a                	je     8121920 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x304>
 8121906:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8121909:	89 44 24 04          	mov    %eax,0x4(%esp)
 812190d:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8121910:	89 04 24             	mov    %eax,(%esp)
 8121913:	e8 96 13 00 00       	call   8122cae <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EEixEj>
 8121918:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 812191e:	eb 24                	jmp    8121944 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x328>
 8121920:	83 7d f0 2d          	cmpl   $0x2d,-0x10(%ebp)
 8121924:	75 1e                	jne    8121944 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x328>
 8121926:	83 7d 14 03          	cmpl   $0x3,0x14(%ebp)
 812192a:	74 18                	je     8121944 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x328>
 812192c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812192f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8121933:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8121936:	89 04 24             	mov    %eax,(%esp)
 8121939:	e8 70 13 00 00       	call   8122cae <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EEixEj>
 812193e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8121944:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8121947:	89 44 24 04          	mov    %eax,0x4(%esp)
 812194b:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 812194e:	89 04 24             	mov    %eax,(%esp)
 8121951:	e8 58 13 00 00       	call   8122cae <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EEixEj>
 8121956:	8b 00                	mov    (%eax),%eax
 8121958:	85 c0                	test   %eax,%eax
 812195a:	0f 94 c0             	sete   %al
 812195d:	84 c0                	test   %al,%al
 812195f:	75 2f                	jne    8121990 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x374>
 8121961:	83 7d f0 22          	cmpl   $0x22,-0x10(%ebp)
 8121965:	75 20                	jne    8121987 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x36b>
 8121967:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 812196b:	74 1a                	je     8121987 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x36b>
 812196d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8121970:	89 44 24 04          	mov    %eax,0x4(%esp)
 8121974:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8121977:	89 04 24             	mov    %eax,(%esp)
 812197a:	e8 2f 13 00 00       	call   8122cae <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EEixEj>
 812197f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8121985:	eb 0a                	jmp    8121991 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x375>
 8121987:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 812198b:	eb 04                	jmp    8121991 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x375>
 812198d:	90                   	nop
 812198e:	eb 01                	jmp    8121991 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x375>
 8121990:	90                   	nop
 8121991:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8121995:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8121998:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 812199b:	0f 9c c0             	setl   %al
 812199e:	84 c0                	test   %al,%al
 81219a0:	0f 85 b8 fd ff ff    	jne    812175e <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x142>
 81219a6:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81219aa:	75 09                	jne    81219b5 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x399>
 81219ac:	83 6d c8 01          	subl   $0x1,-0x38(%ebp)
 81219b0:	e9 cf 00 00 00       	jmp    8121a84 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x468>
 81219b5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81219b8:	89 04 24             	mov    %eax,(%esp)
 81219bb:	e8 46 71 fe ff       	call   8108b06 <_ZN7DNFFLib12get_rand_intEi>
 81219c0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81219c3:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81219ca:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81219d1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81219d8:	eb 49                	jmp    8121a23 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x407>
 81219da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81219dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81219e1:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81219e4:	89 04 24             	mov    %eax,(%esp)
 81219e7:	e8 c2 12 00 00       	call   8122cae <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EEixEj>
 81219ec:	8b 00                	mov    (%eax),%eax
 81219ee:	85 c0                	test   %eax,%eax
 81219f0:	0f 94 c0             	sete   %al
 81219f3:	84 c0                	test   %al,%al
 81219f5:	75 27                	jne    8121a1e <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x402>
 81219f7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81219fa:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 81219fd:	75 19                	jne    8121a18 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x3fc>
 81219ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8121a02:	89 44 24 04          	mov    %eax,0x4(%esp)
 8121a06:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8121a09:	89 04 24             	mov    %eax,(%esp)
 8121a0c:	e8 9d 12 00 00       	call   8122cae <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EEixEj>
 8121a11:	8b 00                	mov    (%eax),%eax
 8121a13:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8121a16:	eb 18                	jmp    8121a30 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x414>
 8121a18:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8121a1c:	eb 01                	jmp    8121a1f <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x403>
 8121a1e:	90                   	nop
 8121a1f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8121a23:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8121a26:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 8121a29:	0f 9c c0             	setl   %al
 8121a2c:	84 c0                	test   %al,%al
 8121a2e:	75 aa                	jne    81219da <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x3be>
 8121a30:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8121a34:	75 06                	jne    8121a3c <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x420>
 8121a36:	83 6d c8 01          	subl   $0x1,-0x38(%ebp)
 8121a3a:	eb 48                	jmp    8121a84 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x468>
 8121a3c:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8121a3f:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8121a42:	89 d0                	mov    %edx,%eax
 8121a44:	c1 e0 02             	shl    $0x2,%eax
 8121a47:	01 d0                	add    %edx,%eax
 8121a49:	01 c0                	add    %eax,%eax
 8121a4b:	01 d0                	add    %edx,%eax
 8121a4d:	03 45 08             	add    0x8(%ebp),%eax
 8121a50:	83 c0 15             	add    $0x15,%eax
 8121a53:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 8121a5a:	00 
 8121a5b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8121a5f:	89 04 24             	mov    %eax,(%esp)
 8121a62:	e8 39 be f5 ff       	call   807d8a0 <memcpy@plt>
 8121a67:	eb 1b                	jmp    8121a84 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x468>
 8121a69:	89 d3                	mov    %edx,%ebx
 8121a6b:	89 c6                	mov    %eax,%esi
 8121a6d:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8121a70:	89 04 24             	mov    %eax,(%esp)
 8121a73:	e8 ae 11 00 00       	call   8122c26 <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EED1Ev>
 8121a78:	89 f0                	mov    %esi,%eax
 8121a7a:	89 da                	mov    %ebx,%edx
 8121a7c:	89 04 24             	mov    %eax,(%esp)
 8121a7f:	e8 cc 1c 9c 00       	call   8ae3750 <_Unwind_Resume>
 8121a84:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8121a87:	89 04 24             	mov    %eax,(%esp)
 8121a8a:	e8 97 11 00 00       	call   8122c26 <_ZNSt6vectorIPKN8APSystem14CActionPointExESaIS3_EED1Ev>
 8121a8f:	eb 01                	jmp    8121a92 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x476>
 8121a91:	90                   	nop
 8121a92:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 8121a96:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8121a99:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8121aa0:	00 
 8121aa1:	8d 55 b0             	lea    -0x50(%ebp),%edx
 8121aa4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8121aa8:	89 04 24             	mov    %eax,(%esp)
 8121aab:	e8 da 10 00 00       	call   8122b8a <_ZNSt23_Rb_tree_const_iteratorISt4pairIKtSt6vectorIN8APSystem14CActionPointExESaIS4_EEEEppEi>
 8121ab0:	83 ec 04             	sub    $0x4,%esp
 8121ab3:	81 7d c8 2b 01 00 00 	cmpl   $0x12b,-0x38(%ebp)
 8121aba:	7f 32                	jg     8121aee <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x4d2>
 8121abc:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8121abf:	8b 55 18             	mov    0x18(%ebp),%edx
 8121ac2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8121ac6:	89 04 24             	mov    %eax,(%esp)
 8121ac9:	e8 82 10 00 00       	call   8122b50 <_ZNKSt3mapItSt6vectorIN8APSystem14CActionPointExESaIS2_EESt4lessItESaISt4pairIKtS4_EEE3endEv>
 8121ace:	83 ec 04             	sub    $0x4,%esp
 8121ad1:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8121ad4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8121ad8:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8121adb:	89 04 24             	mov    %eax,(%esp)
 8121ade:	e8 93 10 00 00       	call   8122b76 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKtSt6vectorIN8APSystem14CActionPointExESaIS4_EEEEneERKS8_>
 8121ae3:	84 c0                	test   %al,%al
 8121ae5:	74 07                	je     8121aee <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x4d2>
 8121ae7:	b8 01 00 00 00       	mov    $0x1,%eax
 8121aec:	eb 05                	jmp    8121af3 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x4d7>
 8121aee:	b8 00 00 00 00       	mov    $0x0,%eax
 8121af3:	84 c0                	test   %al,%al
 8121af5:	0f 85 8b fb ff ff    	jne    8121686 <_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE+0x6a>
 8121afb:	8b 45 08             	mov    0x8(%ebp),%eax
 8121afe:	c6 00 01             	movb   $0x1,(%eax)
 8121b01:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8121b04:	83 c4 00             	add    $0x0,%esp
 8121b07:	5b                   	pop    %ebx
 8121b08:	5e                   	pop    %esi
 8121b09:	5d                   	pop    %ebp
 8121b0a:	c3                   	ret
 8121b0b:	90                   	nop

```

```c
// APSystem::CActionPointManager::SetTodayAction @ 0x812161c

/* APSystem::CActionPointManager::SetTodayAction(int, unsigned int, ENUM_EXPERT_JOB_TYPE,
   std::map<unsigned short, std::vector<APSystem::CActionPointEx,
   std::allocator<APSystem::CActionPointEx> >, std::less<unsigned short>,
   std::allocator<std::pair<unsigned short const, std::vector<APSystem::CActionPointEx,
   std::allocator<APSystem::CActionPointEx> > > > > const&) */

void APSystem::CActionPointManager::SetTodayAction
               (CActionPointManager *param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  tm local_8c;
  vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
  local_60 [12];
  map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
  local_54 [4];
  time_t local_50;
  map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
  local_4c [4];
  CActionPointEx *local_48;
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
  local_44 [4];
  int local_40;
  int local_3c;
  vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>> *local_38;
  int local_34;
  char local_2e;
  char local_2d;
  int local_2c;
  int local_28;
  int local_24;
  void *local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  
  Reset(param_1);
  *(undefined4 *)(param_1 + 8) = param_3;
  local_50 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_50,&local_8c);
  local_40 = local_8c.tm_wday;
  std::
  map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
  ::begin(local_54);
  local_3c = 0;
  do {
    if (local_3c < 300) {
      std::
      map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
      ::end(local_4c);
      cVar2 = std::
              _Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
              ::operator!=((_Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
                            *)local_54,(_Rb_tree_const_iterator *)local_4c);
      if (cVar2 == '\0') goto LAB_08121aee;
      bVar1 = true;
    }
    else {
LAB_08121aee:
      bVar1 = false;
    }
    if (!bVar1) {
      *param_1 = (CActionPointManager)0x1;
      return;
    }
    iVar3 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
            ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
                          *)local_54);
    local_38 = (vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>> *)
               (iVar3 + 4);
    local_34 = std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>::size
                         (local_38);
    if (local_34 != 0) {
      local_2e = '\0';
      local_2d = '\0';
      iVar3 = std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>::
              operator[](local_38,0);
      if (*(int *)(iVar3 + 0x20) != 7) {
        local_2e = '\x01';
      }
      iVar3 = std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>::
              operator[](local_38,0);
      if (*(char *)(iVar3 + 0xf) != '\0') {
        local_2d = '\x01';
      }
      std::vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>::
      vector(local_60);
      for (local_1c = 0; (int)local_1c < local_34; local_1c = local_1c + 1) {
        local_48 = (CActionPointEx *)
                   std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>::
                   operator[](local_38,local_1c);
                    /* try { // try from 08121735 to 081219bf has its CatchHandler @ 08121a69 */
        std::vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
        ::push_back(local_60,&local_48);
      }
      local_2c = 0;
      for (local_18 = 0; (int)local_18 < local_34; local_18 = local_18 + 1) {
        piVar4 = (int *)std::
                        vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                        ::operator[](local_60,local_18);
        if (*piVar4 != 0) {
          if (local_2e != '\0') {
            if (_gmWeekday != '\0') {
              local_40 = DAT_09370090;
            }
            piVar4 = (int *)std::
                            vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                            ::operator[](local_60,local_18);
            if (*(int *)(*piVar4 + 0x20) != local_40) {
              puVar5 = (undefined4 *)
                       std::
                       vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                       ::operator[](local_60,local_18);
              *puVar5 = 0;
              goto LAB_08121991;
            }
          }
          if (local_2d != '\0') {
            iVar3 = std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>::
                    operator[](local_38,local_18);
            if ((param_2 < (int)(uint)*(byte *)(iVar3 + 0xf)) ||
               (iVar3 = std::
                        vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>::
                        operator[](local_38,local_18), (int)(uint)*(byte *)(iVar3 + 0x10) < param_2)
               ) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              puVar5 = (undefined4 *)
                       std::
                       vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                       ::operator[](local_60,local_18);
              *puVar5 = 0;
              goto LAB_08121991;
            }
          }
          piVar4 = (int *)std::
                          vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                          ::operator[](local_60,local_18);
          local_14 = *(int *)(*piVar4 + 2);
          if ((((local_14 == 0x1d) || (local_14 == 0x1e)) || (local_14 == 0x1f)) ||
             ((local_14 == 0x2d || (local_14 == 0x20)))) {
            if ((local_14 == 0x1d) && (param_4 != 2)) {
              puVar5 = (undefined4 *)
                       std::
                       vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                       ::operator[](local_60,local_18);
              *puVar5 = 0;
            }
            else if ((local_14 == 0x1e) && (param_4 != 4)) {
              puVar5 = (undefined4 *)
                       std::
                       vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                       ::operator[](local_60,local_18);
              *puVar5 = 0;
            }
            else if ((local_14 == 0x1f) && (param_4 != 1)) {
              puVar5 = (undefined4 *)
                       std::
                       vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                       ::operator[](local_60,local_18);
              *puVar5 = 0;
            }
            else if ((local_14 == 0x20) && (param_4 != 3)) {
              puVar5 = (undefined4 *)
                       std::
                       vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                       ::operator[](local_60,local_18);
              *puVar5 = 0;
            }
            else if ((local_14 == 0x2d) && (param_4 != 3)) {
              puVar5 = (undefined4 *)
                       std::
                       vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                       ::operator[](local_60,local_18);
              *puVar5 = 0;
            }
            piVar4 = (int *)std::
                            vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                            ::operator[](local_60,local_18);
            if (*piVar4 == 0) goto LAB_08121991;
          }
          if ((local_14 == 0x22) && (param_4 != 0)) {
            puVar5 = (undefined4 *)
                     std::
                     vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                     ::operator[](local_60,local_18);
            *puVar5 = 0;
          }
          else {
            local_2c = local_2c + 1;
          }
        }
LAB_08121991:
      }
      if (local_2c == 0) {
        local_3c = local_3c + -1;
      }
      else {
        local_28 = DNFFLib::get_rand_int(local_2c);
        local_24 = 0;
        local_20 = (void *)0x0;
        for (local_10 = 0; (int)local_10 < local_34; local_10 = local_10 + 1) {
          piVar4 = (int *)std::
                          vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                          ::operator[](local_60,local_10);
          if (*piVar4 != 0) {
            if (local_24 == local_28) {
              puVar5 = (undefined4 *)
                       std::
                       vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                       ::operator[](local_60,local_10);
              local_20 = (void *)*puVar5;
              break;
            }
            local_24 = local_24 + 1;
          }
        }
        if (local_20 == (void *)0x0) {
          local_3c = local_3c + -1;
        }
        else {
          memcpy(param_1 + local_3c * 0xb + 0x15,local_20,0xb);
        }
      }
      std::vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>::
      ~vector(local_60);
    }
    local_3c = local_3c + 1;
    std::
    _Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
    ::operator++(local_44,(int)local_54);
  } while( true );
}

```

