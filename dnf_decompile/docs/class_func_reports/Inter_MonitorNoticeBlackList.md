# Inter_MonitorNoticeBlackList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d0b3a Inter_MonitorNoticeBlackList::dispatch_sig  [0x084d0b3a-0x84d0ba5] ===
 84d0b3a:	55                   	push   %ebp
 84d0b3b:	89 e5                	mov    %esp,%ebp
 84d0b3d:	83 ec 28             	sub    $0x28,%esp
 84d0b40:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0b43:	89 04 24             	mov    %eax,(%esp)
 84d0b46:	e8 41 98 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d0b4b:	85 c0                	test   %eax,%eax
 84d0b4d:	0f 94 c0             	sete   %al
 84d0b50:	84 c0                	test   %al,%al
 84d0b52:	74 07                	je     84d0b5b <_ZN28Inter_MonitorNoticeBlackList12dispatch_sigEP5CUserPci+0x21>
 84d0b54:	b8 00 00 00 00       	mov    $0x0,%eax
 84d0b59:	eb 48                	jmp    84d0ba3 <_ZN28Inter_MonitorNoticeBlackList12dispatch_sigEP5CUserPci+0x69>
 84d0b5b:	8b 45 10             	mov    0x10(%ebp),%eax
 84d0b5e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d0b61:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84d0b68:	eb 20                	jmp    84d0b8a <_ZN28Inter_MonitorNoticeBlackList12dispatch_sigEP5CUserPci+0x50>
 84d0b6a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d0b6d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d0b70:	83 c2 04             	add    $0x4,%edx
 84d0b73:	8b 44 90 03          	mov    0x3(%eax,%edx,4),%eax
 84d0b77:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0b7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0b7e:	89 04 24             	mov    %eax,(%esp)
 84d0b81:	e8 28 e4 1a 00       	call   867efae <_ZN5CUser19registerToBlackListEj>
 84d0b86:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84d0b8a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d0b8d:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84d0b91:	0f b6 c0             	movzbl %al,%eax
 84d0b94:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84d0b97:	0f 9f c0             	setg   %al
 84d0b9a:	84 c0                	test   %al,%al
 84d0b9c:	75 cc                	jne    84d0b6a <_ZN28Inter_MonitorNoticeBlackList12dispatch_sigEP5CUserPci+0x30>
 84d0b9e:	b8 00 00 00 00       	mov    $0x0,%eax
 84d0ba3:	c9                   	leave
 84d0ba4:	c3                   	ret
 84d0ba5:	90                   	nop

```

```c
// Inter_MonitorNoticeBlackList::dispatch_sig @ 0x84d0b3a

/* Inter_MonitorNoticeBlackList::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeBlackList::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    for (local_10 = 0; local_10 < (int)(uint)*(byte *)(param_3 + 0x12); local_10 = local_10 + 1) {
      CUser::registerToBlackList((CUser *)param_2,*(uint *)(param_3 + 3 + (local_10 + 4) * 4));
    }
  }
  return 0;
}

```

