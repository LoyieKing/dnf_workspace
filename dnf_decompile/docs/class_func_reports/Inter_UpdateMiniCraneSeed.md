# Inter_UpdateMiniCraneSeed

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e8906 Inter_UpdateMiniCraneSeed::dispatch_sig  [0x084e8906-0x84e8935] ===
 84e8906:	55                   	push   %ebp
 84e8907:	89 e5                	mov    %esp,%ebp
 84e8909:	53                   	push   %ebx
 84e890a:	83 ec 24             	sub    $0x24,%esp
 84e890d:	8b 45 10             	mov    0x10(%ebp),%eax
 84e8910:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e8913:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e8916:	8b 58 0a             	mov    0xa(%eax),%ebx
 84e8919:	e8 89 1a bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e891e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e8922:	89 04 24             	mov    %eax,(%esp)
 84e8925:	e8 90 8a 1e 00       	call   86d13ba <_ZN9GameWorld26ResetCraneItemNeedMaterialEi>
 84e892a:	b8 00 00 00 00       	mov    $0x0,%eax
 84e892f:	83 c4 24             	add    $0x24,%esp
 84e8932:	5b                   	pop    %ebx
 84e8933:	5d                   	pop    %ebp
 84e8934:	c3                   	ret
 84e8935:	90                   	nop

```

```c
// Inter_UpdateMiniCraneSeed::dispatch_sig @ 0x84e8906

/* Inter_UpdateMiniCraneSeed::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UpdateMiniCraneSeed::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  GameWorld *this;
  
  iVar1 = *(int *)(param_3 + 10);
  this = (GameWorld *)G_GameWorld();
  GameWorld::ResetCraneItemNeedMaterial(this,iVar1);
  return 0;
}

```

