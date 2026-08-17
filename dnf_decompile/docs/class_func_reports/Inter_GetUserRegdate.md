# Inter_GetUserRegdate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e4fb6 Inter_GetUserRegdate::dispatch_sig  [0x084e4fb6-0x84e4fe7] ===
 84e4fb6:	55                   	push   %ebp
 84e4fb7:	89 e5                	mov    %esp,%ebp
 84e4fb9:	83 ec 28             	sub    $0x28,%esp
 84e4fbc:	8b 45 10             	mov    0x10(%ebp),%eax
 84e4fbf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e4fc2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4fc5:	8b 50 08             	mov    0x8(%eax),%edx
 84e4fc8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4fcb:	8b 40 04             	mov    0x4(%eax),%eax
 84e4fce:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e4fd2:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e4fd5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e4fd9:	89 04 24             	mov    %eax,(%esp)
 84e4fdc:	e8 34 03 d9 ff       	call   8275315 <_Z21checkNewMemberHacklogjP5CUserj>
 84e4fe1:	b8 00 00 00 00       	mov    $0x0,%eax
 84e4fe6:	c9                   	leave
 84e4fe7:	c3                   	ret

```

```c
// Inter_GetUserRegdate::dispatch_sig @ 0x84e4fb6

/* Inter_GetUserRegdate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GetUserRegdate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  checkNewMemberHacklog(*(uint *)(param_3 + 4),(CUser *)param_2,*(uint *)(param_3 + 8));
  return 0;
}

```

