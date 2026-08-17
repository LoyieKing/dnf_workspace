# Inter_LoadMileage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e4d4e Inter_LoadMileage::dispatch_sig  [0x084e4d4e-0x84e4d8f] ===
 84e4d4e:	55                   	push   %ebp
 84e4d4f:	89 e5                	mov    %esp,%ebp
 84e4d51:	83 ec 28             	sub    $0x28,%esp
 84e4d54:	8b 45 10             	mov    0x10(%ebp),%eax
 84e4d57:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e4d5a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e4d5d:	8b 40 08             	mov    0x8(%eax),%eax
 84e4d60:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e4d63:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4d66:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4d6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e4d6d:	89 04 24             	mov    %eax,(%esp)
 84e4d70:	e8 51 bc 16 00       	call   86509c6 <_ZN5CUser10SetMileageEi>
 84e4d75:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e4d7c:	00 
 84e4d7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e4d80:	89 04 24             	mov    %eax,(%esp)
 84e4d83:	e8 a2 ba 16 00       	call   865082a <_ZN5CUser12SendCashDataEb>
 84e4d88:	b8 00 00 00 00       	mov    $0x0,%eax
 84e4d8d:	c9                   	leave
 84e4d8e:	c3                   	ret
 84e4d8f:	90                   	nop

```

```c
// Inter_LoadMileage::dispatch_sig @ 0x84e4d4e

/* Inter_LoadMileage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadMileage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CUser::SetMileage((CUser *)param_2,*(int *)(param_3 + 8));
  CUser::SendCashData((CUser *)param_2,false);
  return 0;
}

```

