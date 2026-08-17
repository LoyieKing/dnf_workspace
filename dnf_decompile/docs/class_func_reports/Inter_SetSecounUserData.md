# Inter_SetSecounUserData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e0972 Inter_SetSecounUserData::dispatch_sig  [0x084e0972-0x84e09cd] ===
 84e0972:	55                   	push   %ebp
 84e0973:	89 e5                	mov    %esp,%ebp
 84e0975:	57                   	push   %edi
 84e0976:	56                   	push   %esi
 84e0977:	53                   	push   %ebx
 84e0978:	83 ec 3c             	sub    $0x3c,%esp
 84e097b:	8b 45 10             	mov    0x10(%ebp),%eax
 84e097e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84e0981:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e0984:	8b 48 08             	mov    0x8(%eax),%ecx
 84e0987:	8b 58 0c             	mov    0xc(%eax),%ebx
 84e098a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e098d:	8b 78 10             	mov    0x10(%eax),%edi
 84e0990:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e0993:	8b 50 04             	mov    0x4(%eax),%edx
 84e0996:	8b 00                	mov    (%eax),%eax
 84e0998:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 84e099b:	8b 76 14             	mov    0x14(%esi),%esi
 84e099e:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84e09a2:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84e09a6:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84e09aa:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e09ae:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84e09b2:	89 74 24 04          	mov    %esi,0x4(%esp)
 84e09b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e09b9:	89 04 24             	mov    %eax,(%esp)
 84e09bc:	e8 f9 f1 19 00       	call   867fbba <_ZN5CUser21gainMoneyFromHackUserEjyjy>
 84e09c1:	b8 00 00 00 00       	mov    $0x0,%eax
 84e09c6:	83 c4 3c             	add    $0x3c,%esp
 84e09c9:	5b                   	pop    %ebx
 84e09ca:	5e                   	pop    %esi
 84e09cb:	5f                   	pop    %edi
 84e09cc:	5d                   	pop    %ebp
 84e09cd:	c3                   	ret

```

```c
// Inter_SetSecounUserData::dispatch_sig @ 0x84e0972

/* Inter_SetSecounUserData::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SetSecounUserData::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CUser::gainMoneyFromHackUser
            ((uint)param_2,CONCAT44(*(undefined4 *)param_3,*(undefined4 *)(param_3 + 0x14)),
             *(uint *)(param_3 + 4),
             CONCAT44(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0x10)));
  return 0;
}

```

