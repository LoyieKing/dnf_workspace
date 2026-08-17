# Inter_SetFullIPCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dcbea Inter_SetFullIPCount::dispatch_sig  [0x084dcbea-0x84dccb7] ===
 84dcbea:	55                   	push   %ebp
 84dcbeb:	89 e5                	mov    %esp,%ebp
 84dcbed:	57                   	push   %edi
 84dcbee:	56                   	push   %esi
 84dcbef:	53                   	push   %ebx
 84dcbf0:	83 ec 3c             	sub    $0x3c,%esp
 84dcbf3:	8b 45 10             	mov    0x10(%ebp),%eax
 84dcbf6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84dcbf9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84dcbfc:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84dcc00:	84 c0                	test   %al,%al
 84dcc02:	75 0d                	jne    84dcc11 <_ZN20Inter_SetFullIPCount12dispatch_sigEP5CUserPci+0x27>
 84dcc04:	a1 d4 f7 41 09       	mov    0x941f7d4,%eax
 84dcc09:	89 04 24             	mov    %eax,(%esp)
 84dcc0c:	e8 05 ee 00 00       	call   84eba16 <_ZN8WongWork26CAutoPunishRuleHackTypeMgr22ResetFullIpCounterDataEv>
 84dcc11:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84dcc18:	eb 79                	jmp    84dcc93 <_ZN20Inter_SetFullIPCount12dispatch_sigEP5CUserPci+0xa9>
 84dcc1a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84dcc1d:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84dcc20:	89 d0                	mov    %edx,%eax
 84dcc22:	01 c0                	add    %eax,%eax
 84dcc24:	01 d0                	add    %edx,%eax
 84dcc26:	c1 e0 03             	shl    $0x3,%eax
 84dcc29:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84dcc2c:	83 c0 10             	add    $0x10,%eax
 84dcc2f:	8b 58 10             	mov    0x10(%eax),%ebx
 84dcc32:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84dcc35:	89 d0                	mov    %edx,%eax
 84dcc37:	01 c0                	add    %eax,%eax
 84dcc39:	01 d0                	add    %edx,%eax
 84dcc3b:	c1 e0 03             	shl    $0x3,%eax
 84dcc3e:	03 45 e0             	add    -0x20(%ebp),%eax
 84dcc41:	8d 78 10             	lea    0x10(%eax),%edi
 84dcc44:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84dcc47:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84dcc4a:	89 d0                	mov    %edx,%eax
 84dcc4c:	01 c0                	add    %eax,%eax
 84dcc4e:	01 d0                	add    %edx,%eax
 84dcc50:	c1 e0 03             	shl    $0x3,%eax
 84dcc53:	0f b7 44 08 0e       	movzwl 0xe(%eax,%ecx,1),%eax
 84dcc58:	0f b7 c8             	movzwl %ax,%ecx
 84dcc5b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84dcc5e:	8b 75 e0             	mov    -0x20(%ebp),%esi
 84dcc61:	89 d0                	mov    %edx,%eax
 84dcc63:	01 c0                	add    %eax,%eax
 84dcc65:	01 d0                	add    %edx,%eax
 84dcc67:	c1 e0 03             	shl    $0x3,%eax
 84dcc6a:	0f b7 44 30 0c       	movzwl 0xc(%eax,%esi,1),%eax
 84dcc6f:	0f b7 d0             	movzwl %ax,%edx
 84dcc72:	a1 d4 f7 41 09       	mov    0x941f7d4,%eax
 84dcc77:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84dcc7b:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84dcc7f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84dcc83:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dcc87:	89 04 24             	mov    %eax,(%esp)
 84dcc8a:	e8 db c7 c1 ff       	call   80f946a <_ZN8WongWork26CAutoPunishRuleHackTypeMgr20setFullIPCounterDataEjjPcj>
 84dcc8f:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84dcc93:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84dcc96:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84dcc9a:	0f b6 c0             	movzbl %al,%eax
 84dcc9d:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84dcca0:	0f 9f c0             	setg   %al
 84dcca3:	84 c0                	test   %al,%al
 84dcca5:	0f 85 6f ff ff ff    	jne    84dcc1a <_ZN20Inter_SetFullIPCount12dispatch_sigEP5CUserPci+0x30>
 84dccab:	b8 00 00 00 00       	mov    $0x0,%eax
 84dccb0:	83 c4 3c             	add    $0x3c,%esp
 84dccb3:	5b                   	pop    %ebx
 84dccb4:	5e                   	pop    %esi
 84dccb5:	5f                   	pop    %edi
 84dccb6:	5d                   	pop    %ebp
 84dccb7:	c3                   	ret

```

```c
// Inter_SetFullIPCount::dispatch_sig @ 0x84dcbea

/* Inter_SetFullIPCount::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SetFullIPCount::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 local_20;
  
  if (*(char *)(param_3 + 10) == '\0') {
    WongWork::CAutoPunishRuleHackTypeMgr::ResetFullIpCounterData
              (GlobalData::g_autoPunishRuleHackTypeMgr);
  }
  for (local_20 = 0; local_20 < (int)(uint)*(byte *)(param_3 + 0xb); local_20 = local_20 + 1) {
    WongWork::CAutoPunishRuleHackTypeMgr::setFullIPCounterData
              (GlobalData::g_autoPunishRuleHackTypeMgr,
               (uint)*(ushort *)(local_20 * 0x18 + 0xc + param_3),
               (uint)*(ushort *)(local_20 * 0x18 + 0xe + param_3),
               (char *)(local_20 * 0x18 + param_3 + 0x10),
               *(uint *)(param_3 + local_20 * 0x18 + 0x20));
  }
  return 0;
}

```

