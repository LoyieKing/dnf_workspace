# Inter_TOD_Reload_APC

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e4e26 Inter_TOD_Reload_APC::dispatch_sig  [0x084e4e26-0x84e4e83] ===
 84e4e26:	55                   	push   %ebp
 84e4e27:	89 e5                	mov    %esp,%ebp
 84e4e29:	83 ec 28             	sub    $0x28,%esp
 84e4e2c:	8b 45 10             	mov    0x10(%ebp),%eax
 84e4e2f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e4e32:	a1 54 f7 41 09       	mov    0x941f754,%eax
 84e4e37:	89 04 24             	mov    %eax,(%esp)
 84e4e3a:	e8 df f4 15 00       	call   864431e <_ZN17TowerOfDespairMgr12ResetAPCInfoEv>
 84e4e3f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84e4e46:	eb 2a                	jmp    84e4e72 <_ZN20Inter_TOD_Reload_APC12dispatch_sigEP5CUserPci+0x4c>
 84e4e48:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4e4b:	69 c0 bc 00 00 00    	imul   $0xbc,%eax,%eax
 84e4e51:	89 c1                	mov    %eax,%ecx
 84e4e53:	03 4d f0             	add    -0x10(%ebp),%ecx
 84e4e56:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e4e59:	a1 54 f7 41 09       	mov    0x941f754,%eax
 84e4e5e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84e4e62:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e4e66:	89 04 24             	mov    %eax,(%esp)
 84e4e69:	e8 5c f4 15 00       	call   86442ca <_ZN17TowerOfDespairMgr10SetAPCInfoEjRK8_APCInfo>
 84e4e6e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84e4e72:	83 7d f4 09          	cmpl   $0x9,-0xc(%ebp)
 84e4e76:	0f 9e c0             	setle  %al
 84e4e79:	84 c0                	test   %al,%al
 84e4e7b:	75 cb                	jne    84e4e48 <_ZN20Inter_TOD_Reload_APC12dispatch_sigEP5CUserPci+0x22>
 84e4e7d:	b8 00 00 00 00       	mov    $0x0,%eax
 84e4e82:	c9                   	leave
 84e4e83:	c3                   	ret

```

```c
// Inter_TOD_Reload_APC::dispatch_sig @ 0x84e4e26

/* Inter_TOD_Reload_APC::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_TOD_Reload_APC::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 local_10;
  
  TowerOfDespairMgr::ResetAPCInfo(GlobalData::s_pTowerOfDespairMgr);
  for (local_10 = 0; (int)local_10 < 10; local_10 = local_10 + 1) {
    TowerOfDespairMgr::SetAPCInfo
              (GlobalData::s_pTowerOfDespairMgr,local_10,(_APCInfo *)(local_10 * 0xbc + param_3));
  }
  return 0;
}

```

