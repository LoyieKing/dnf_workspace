# Inter_SetIPCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dcb18 Inter_SetIPCount::dispatch_sig  [0x084dcb18-0x84dcbe9] ===
 84dcb18:	55                   	push   %ebp
 84dcb19:	89 e5                	mov    %esp,%ebp
 84dcb1b:	57                   	push   %edi
 84dcb1c:	56                   	push   %esi
 84dcb1d:	53                   	push   %ebx
 84dcb1e:	83 ec 3c             	sub    $0x3c,%esp
 84dcb21:	8b 45 10             	mov    0x10(%ebp),%eax
 84dcb24:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84dcb27:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84dcb2a:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84dcb2e:	84 c0                	test   %al,%al
 84dcb30:	75 0d                	jne    84dcb3f <_ZN16Inter_SetIPCount12dispatch_sigEP5CUserPci+0x27>
 84dcb32:	a1 d4 f7 41 09       	mov    0x941f7d4,%eax
 84dcb37:	89 04 24             	mov    %eax,(%esp)
 84dcb3a:	e8 c1 ee 00 00       	call   84eba00 <_ZN8WongWork26CAutoPunishRuleHackTypeMgr18ResetIpCounterDataEv>
 84dcb3f:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84dcb46:	eb 7d                	jmp    84dcbc5 <_ZN16Inter_SetIPCount12dispatch_sigEP5CUserPci+0xad>
 84dcb48:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84dcb4b:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84dcb4e:	89 d0                	mov    %edx,%eax
 84dcb50:	c1 e0 02             	shl    $0x2,%eax
 84dcb53:	01 d0                	add    %edx,%eax
 84dcb55:	c1 e0 02             	shl    $0x2,%eax
 84dcb58:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84dcb5b:	83 c0 10             	add    $0x10,%eax
 84dcb5e:	8b 58 0c             	mov    0xc(%eax),%ebx
 84dcb61:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84dcb64:	89 d0                	mov    %edx,%eax
 84dcb66:	c1 e0 02             	shl    $0x2,%eax
 84dcb69:	01 d0                	add    %edx,%eax
 84dcb6b:	c1 e0 02             	shl    $0x2,%eax
 84dcb6e:	03 45 e0             	add    -0x20(%ebp),%eax
 84dcb71:	8d 78 10             	lea    0x10(%eax),%edi
 84dcb74:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84dcb77:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84dcb7a:	89 d0                	mov    %edx,%eax
 84dcb7c:	c1 e0 02             	shl    $0x2,%eax
 84dcb7f:	01 d0                	add    %edx,%eax
 84dcb81:	c1 e0 02             	shl    $0x2,%eax
 84dcb84:	0f b7 44 08 0e       	movzwl 0xe(%eax,%ecx,1),%eax
 84dcb89:	0f b7 c8             	movzwl %ax,%ecx
 84dcb8c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84dcb8f:	8b 75 e0             	mov    -0x20(%ebp),%esi
 84dcb92:	89 d0                	mov    %edx,%eax
 84dcb94:	c1 e0 02             	shl    $0x2,%eax
 84dcb97:	01 d0                	add    %edx,%eax
 84dcb99:	c1 e0 02             	shl    $0x2,%eax
 84dcb9c:	0f b7 44 30 0c       	movzwl 0xc(%eax,%esi,1),%eax
 84dcba1:	0f b7 d0             	movzwl %ax,%edx
 84dcba4:	a1 d4 f7 41 09       	mov    0x941f7d4,%eax
 84dcba9:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84dcbad:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84dcbb1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84dcbb5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dcbb9:	89 04 24             	mov    %eax,(%esp)
 84dcbbc:	e8 57 c6 c1 ff       	call   80f9218 <_ZN8WongWork26CAutoPunishRuleHackTypeMgr16setIPCounterDataEjjPcj>
 84dcbc1:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84dcbc5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84dcbc8:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84dcbcc:	0f b6 c0             	movzbl %al,%eax
 84dcbcf:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84dcbd2:	0f 9f c0             	setg   %al
 84dcbd5:	84 c0                	test   %al,%al
 84dcbd7:	0f 85 6b ff ff ff    	jne    84dcb48 <_ZN16Inter_SetIPCount12dispatch_sigEP5CUserPci+0x30>
 84dcbdd:	b8 00 00 00 00       	mov    $0x0,%eax
 84dcbe2:	83 c4 3c             	add    $0x3c,%esp
 84dcbe5:	5b                   	pop    %ebx
 84dcbe6:	5e                   	pop    %esi
 84dcbe7:	5f                   	pop    %edi
 84dcbe8:	5d                   	pop    %ebp
 84dcbe9:	c3                   	ret

```

```c
// Inter_SetIPCount::dispatch_sig @ 0x84dcb18

/* Inter_SetIPCount::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SetIPCount::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 local_20;
  
  if (*(char *)(param_3 + 10) == '\0') {
    WongWork::CAutoPunishRuleHackTypeMgr::ResetIpCounterData
              (GlobalData::g_autoPunishRuleHackTypeMgr);
  }
  for (local_20 = 0; local_20 < (int)(uint)*(byte *)(param_3 + 0xb); local_20 = local_20 + 1) {
    WongWork::CAutoPunishRuleHackTypeMgr::setIPCounterData
              (GlobalData::g_autoPunishRuleHackTypeMgr,
               (uint)*(ushort *)(local_20 * 0x14 + 0xc + param_3),
               (uint)*(ushort *)(local_20 * 0x14 + 0xe + param_3),
               (char *)(local_20 * 0x14 + param_3 + 0x10),
               *(uint *)(param_3 + local_20 * 0x14 + 0x1c));
  }
  return 0;
}

```

