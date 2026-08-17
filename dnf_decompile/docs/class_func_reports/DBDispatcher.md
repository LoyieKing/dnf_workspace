# DBDispatcher

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 083fbf7c DBDispatcher::dispatch  [0x083fbf7c-0x83fbfc5] ===
 83fbf7c:	55                   	push   %ebp
 83fbf7d:	89 e5                	mov    %esp,%ebp
 83fbf7f:	53                   	push   %ebx
 83fbf80:	83 ec 24             	sub    $0x24,%esp
 83fbf83:	83 7d 10 ff          	cmpl   $0xffffffff,0x10(%ebp)
 83fbf87:	74 31                	je     83fbfba <_ZN12DBDispatcher8dispatchEiiP6Stream+0x3e>
 83fbf89:	8b 45 0c             	mov    0xc(%ebp),%eax
 83fbf8c:	8d 98 d0 07 00 00    	lea    0x7d0(%eax),%ebx
 83fbf92:	e8 f7 01 cd ff       	call   80cc18e <_Z14G_CGameManagerv>
 83fbf97:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 83fbf9b:	8b 55 10             	mov    0x10(%ebp),%edx
 83fbf9e:	89 54 24 04          	mov    %edx,0x4(%esp)
 83fbfa2:	89 04 24             	mov    %eax,(%esp)
 83fbfa5:	e8 fa 87 e9 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 83fbfaa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83fbfad:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 83fbfb1:	75 07                	jne    83fbfba <_ZN12DBDispatcher8dispatchEiiP6Stream+0x3e>
 83fbfb3:	b8 00 00 00 00       	mov    $0x0,%eax
 83fbfb8:	eb 05                	jmp    83fbfbf <_ZN12DBDispatcher8dispatchEiiP6Stream+0x43>
 83fbfba:	b8 01 00 00 00       	mov    $0x1,%eax
 83fbfbf:	83 c4 24             	add    $0x24,%esp
 83fbfc2:	5b                   	pop    %ebx
 83fbfc3:	5d                   	pop    %ebp
 83fbfc4:	c3                   	ret
 83fbfc5:	90                   	nop

```

```c
// DBDispatcher::dispatch @ 0x83fbf7c

/* DBDispatcher::dispatch(int, int, Stream*) */

undefined4 DBDispatcher::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  
  if (param_3 != (Stream *)0xffffffff) {
    iVar1 = G_CGameManager();
    iVar1 = CGameManager::getUser(iVar1,(int)param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

```

