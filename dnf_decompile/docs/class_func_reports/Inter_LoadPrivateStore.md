# Inter_LoadPrivateStore

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cf55a Inter_LoadPrivateStore::dispatch_sig  [0x084cf55a-0x84cf5a3] ===
 84cf55a:	55                   	push   %ebp
 84cf55b:	89 e5                	mov    %esp,%ebp
 84cf55d:	83 ec 28             	sub    $0x28,%esp
 84cf560:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf563:	89 04 24             	mov    %eax,(%esp)
 84cf566:	e8 21 ae c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cf56b:	83 f8 02             	cmp    $0x2,%eax
 84cf56e:	0f 9e c0             	setle  %al
 84cf571:	84 c0                	test   %al,%al
 84cf573:	74 07                	je     84cf57c <_ZN22Inter_LoadPrivateStore12dispatch_sigEP5CUserPci+0x22>
 84cf575:	b8 00 00 00 00       	mov    $0x0,%eax
 84cf57a:	eb 26                	jmp    84cf5a2 <_ZN22Inter_LoadPrivateStore12dispatch_sigEP5CUserPci+0x48>
 84cf57c:	8b 45 10             	mov    0x10(%ebp),%eax
 84cf57f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cf582:	e8 61 56 0f 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 84cf587:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84cf58a:	89 54 24 08          	mov    %edx,0x8(%esp)
 84cf58e:	8b 55 0c             	mov    0xc(%ebp),%edx
 84cf591:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cf595:	89 04 24             	mov    %eax,(%esp)
 84cf598:	e8 79 b6 0f 00       	call   85cac16 <_ZN13private_store16CPrivateStoreMgr24LoadPrivateStoreResponseEP5CUserPNS_17SIG_PRIVATE_STOREE>
 84cf59d:	b8 00 00 00 00       	mov    $0x0,%eax
 84cf5a2:	c9                   	leave
 84cf5a3:	c3                   	ret

```

```c
// Inter_LoadPrivateStore::dispatch_sig @ 0x84cf55a

/* Inter_LoadPrivateStore::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadPrivateStore::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  CPrivateStoreMgr *this;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    this = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    private_store::CPrivateStoreMgr::LoadPrivateStoreResponse
              (this,(CUser *)param_2,(SIG_PRIVATE_STORE *)param_3);
  }
  return 0;
}

```

