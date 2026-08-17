# APSystem__Inter_LoadActionPoint

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08124d2a APSystem::Inter_LoadActionPoint::dispatch_sig  [0x08124d2a-0x8124daf] ===
 8124d2a:	55                   	push   %ebp
 8124d2b:	89 e5                	mov    %esp,%ebp
 8124d2d:	83 ec 28             	sub    $0x28,%esp
 8124d30:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8124d34:	74 1e                	je     8124d54 <_ZN8APSystem21Inter_LoadActionPoint12dispatch_sigEP5CUserPci+0x2a>
 8124d36:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124d39:	89 04 24             	mov    %eax,(%esp)
 8124d3c:	e8 4b 56 fb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8124d41:	85 c0                	test   %eax,%eax
 8124d43:	74 0f                	je     8124d54 <_ZN8APSystem21Inter_LoadActionPoint12dispatch_sigEP5CUserPci+0x2a>
 8124d45:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124d48:	89 04 24             	mov    %eax,(%esp)
 8124d4b:	e8 e2 b6 ff ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8124d50:	85 c0                	test   %eax,%eax
 8124d52:	75 07                	jne    8124d5b <_ZN8APSystem21Inter_LoadActionPoint12dispatch_sigEP5CUserPci+0x31>
 8124d54:	b8 01 00 00 00       	mov    $0x1,%eax
 8124d59:	eb 05                	jmp    8124d60 <_ZN8APSystem21Inter_LoadActionPoint12dispatch_sigEP5CUserPci+0x36>
 8124d5b:	b8 00 00 00 00       	mov    $0x0,%eax
 8124d60:	84 c0                	test   %al,%al
 8124d62:	74 07                	je     8124d6b <_ZN8APSystem21Inter_LoadActionPoint12dispatch_sigEP5CUserPci+0x41>
 8124d64:	b8 03 02 00 00       	mov    $0x203,%eax
 8124d69:	eb 43                	jmp    8124dae <_ZN8APSystem21Inter_LoadActionPoint12dispatch_sigEP5CUserPci+0x84>
 8124d6b:	8b 45 10             	mov    0x10(%ebp),%eax
 8124d6e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8124d71:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8124d75:	75 07                	jne    8124d7e <_ZN8APSystem21Inter_LoadActionPoint12dispatch_sigEP5CUserPci+0x54>
 8124d77:	b8 08 02 00 00       	mov    $0x208,%eax
 8124d7c:	eb 30                	jmp    8124dae <_ZN8APSystem21Inter_LoadActionPoint12dispatch_sigEP5CUserPci+0x84>
 8124d7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124d81:	8d 90 64 d2 08 00    	lea    0x8d264(%eax),%edx
 8124d87:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8124d8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8124d8e:	89 14 24             	mov    %edx,(%esp)
 8124d91:	e8 76 cd ff ff       	call   8121b0c <_ZN8APSystem19CActionPointManager3SetERNS_22_SIG_LOAD_ACTION_POINTE>
 8124d96:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8124d9d:	00 
 8124d9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124da1:	89 04 24             	mov    %eax,(%esp)
 8124da4:	e8 4b 06 00 00       	call   81253f4 <_ZN5CUser16EnableCharacInfoE13CACHE_SECTION>
 8124da9:	b8 00 00 00 00       	mov    $0x0,%eax
 8124dae:	c9                   	leave
 8124daf:	c3                   	ret

```

```c
// APSystem::Inter_LoadActionPoint::dispatch_sig @ 0x8124d2a

/* APSystem::Inter_LoadActionPoint::dispatch_sig(CUser*, char*, int) */

undefined4 APSystem::Inter_LoadActionPoint::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != (char *)0x0) {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 != 0) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_08124d60;
      }
    }
  }
  bVar1 = true;
LAB_08124d60:
  if (bVar1) {
    uVar3 = 0x203;
  }
  else if (param_3 == 0) {
    uVar3 = 0x208;
  }
  else {
    CActionPointManager::Set
              ((CActionPointManager *)(param_2 + 0x8d264),(_SIG_LOAD_ACTION_POINT *)param_3);
    CUser::EnableCharacInfo((CUser *)param_2,8);
    uVar3 = 0;
  }
  return uVar3;
}

```

