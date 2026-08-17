# Inter_UpdateSecuServiceState

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e4e84 Inter_UpdateSecuServiceState::dispatch_sig  [0x084e4e84-0x84e4ee3] ===
 84e4e84:	55                   	push   %ebp
 84e4e85:	89 e5                	mov    %esp,%ebp
 84e4e87:	53                   	push   %ebx
 84e4e88:	83 ec 34             	sub    $0x34,%esp
 84e4e8b:	8b 45 10             	mov    0x10(%ebp),%eax
 84e4e8e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e4e91:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e4e95:	74 41                	je     84e4ed8 <_ZN28Inter_UpdateSecuServiceState12dispatch_sigEP5CUserPci+0x54>
 84e4e97:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4e9a:	c6 40 14 00          	movb   $0x0,0x14(%eax)
 84e4e9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4ea1:	8d 58 10             	lea    0x10(%eax),%ebx
 84e4ea4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4ea7:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 84e4eab:	0f b6 c8             	movzbl %al,%ecx
 84e4eae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4eb1:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 84e4eb5:	0f b6 d0             	movzbl %al,%edx
 84e4eb8:	a1 c8 f7 41 09       	mov    0x941f7c8,%eax
 84e4ebd:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84e4ec1:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84e4ec5:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e4ec9:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e4ecc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e4ed0:	89 04 24             	mov    %eax,(%esp)
 84e4ed3:	e8 68 1f da ff       	call   8286e40 <_ZN16Secu_DataControl26UpdateSecurityServiceStateEP5CUserhhPc>
 84e4ed8:	b8 00 00 00 00       	mov    $0x0,%eax
 84e4edd:	83 c4 34             	add    $0x34,%esp
 84e4ee0:	5b                   	pop    %ebx
 84e4ee1:	5d                   	pop    %ebp
 84e4ee2:	c3                   	ret
 84e4ee3:	90                   	nop

```

```c
// Inter_UpdateSecuServiceState::dispatch_sig @ 0x84e4e84

/* Inter_UpdateSecuServiceState::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UpdateSecuServiceState::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  if (param_2 != (char *)0x0) {
    *(undefined1 *)(param_3 + 0x14) = 0;
    Secu_DataControl::UpdateSecurityServiceState
              (GlobalData::s_pSecuDataControl,(CUser *)param_2,*(uchar *)(param_3 + 0xe),
               *(uchar *)(param_3 + 0xf),(char *)(param_3 + 0x10));
  }
  return 0;
}

```

