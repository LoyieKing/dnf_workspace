# Inter_LoadBloodDungeonBestRecord

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d82f6 Inter_LoadBloodDungeonBestRecord::dispatch_sig  [0x084d82f6-0x84d83d1] ===
 84d82f6:	55                   	push   %ebp
 84d82f7:	89 e5                	mov    %esp,%ebp
 84d82f9:	53                   	push   %ebx
 84d82fa:	83 ec 34             	sub    $0x34,%esp
 84d82fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8300:	89 04 24             	mov    %eax,(%esp)
 84d8303:	e8 84 20 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d8308:	85 c0                	test   %eax,%eax
 84d830a:	0f 94 c0             	sete   %al
 84d830d:	84 c0                	test   %al,%al
 84d830f:	74 0a                	je     84d831b <_ZN32Inter_LoadBloodDungeonBestRecord12dispatch_sigEP5CUserPci+0x25>
 84d8311:	b8 dd 3e 00 00       	mov    $0x3edd,%eax
 84d8316:	e9 b1 00 00 00       	jmp    84d83cc <_ZN32Inter_LoadBloodDungeonBestRecord12dispatch_sigEP5CUserPci+0xd6>
 84d831b:	8b 45 10             	mov    0x10(%ebp),%eax
 84d831e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d8321:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8324:	8b 00                	mov    (%eax),%eax
 84d8326:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d832a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d832d:	89 04 24             	mov    %eax,(%esp)
 84d8330:	e8 dd 5b 17 00       	call   864df12 <_ZNK5CUser14get_charac_idxEj>
 84d8335:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d8338:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84d833c:	79 0a                	jns    84d8348 <_ZN32Inter_LoadBloodDungeonBestRecord12dispatch_sigEP5CUserPci+0x52>
 84d833e:	b8 e3 3e 00 00       	mov    $0x3ee3,%eax
 84d8343:	e9 84 00 00 00       	jmp    84d83cc <_ZN32Inter_LoadBloodDungeonBestRecord12dispatch_sigEP5CUserPci+0xd6>
 84d8348:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d834b:	8b 55 0c             	mov    0xc(%ebp),%edx
 84d834e:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84d8354:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8358:	89 14 24             	mov    %edx,(%esp)
 84d835b:	e8 58 88 cc ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84d8360:	8b 10                	mov    (%eax),%edx
 84d8362:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8365:	8b 00                	mov    (%eax),%eax
 84d8367:	39 c2                	cmp    %eax,%edx
 84d8369:	0f 95 c0             	setne  %al
 84d836c:	84 c0                	test   %al,%al
 84d836e:	74 07                	je     84d8377 <_ZN32Inter_LoadBloodDungeonBestRecord12dispatch_sigEP5CUserPci+0x81>
 84d8370:	b8 e5 3e 00 00       	mov    $0x3ee5,%eax
 84d8375:	eb 55                	jmp    84d83cc <_ZN32Inter_LoadBloodDungeonBestRecord12dispatch_sigEP5CUserPci+0xd6>
 84d8377:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d837a:	8b 55 0c             	mov    0xc(%ebp),%edx
 84d837d:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84d8383:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8387:	89 14 24             	mov    %edx,(%esp)
 84d838a:	e8 29 88 cc ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84d838f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d8392:	8b 12                	mov    (%edx),%edx
 84d8394:	89 10                	mov    %edx,(%eax)
 84d8396:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8399:	8b 58 0c             	mov    0xc(%eax),%ebx
 84d839c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d839f:	8b 48 08             	mov    0x8(%eax),%ecx
 84d83a2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d83a5:	8b 50 04             	mov    0x4(%eax),%edx
 84d83a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d83ab:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 84d83b2:	00 
 84d83b3:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d83b7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84d83bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d83bf:	89 04 24             	mov    %eax,(%esp)
 84d83c2:	e8 11 fc 1a 00       	call   8687fd8 <_ZN15CUserCharacInfo18setBloodBestRecordEjiib>
 84d83c7:	b8 00 00 00 00       	mov    $0x0,%eax
 84d83cc:	83 c4 34             	add    $0x34,%esp
 84d83cf:	5b                   	pop    %ebx
 84d83d0:	5d                   	pop    %ebp
 84d83d1:	c3                   	ret

```

```c
// Inter_LoadBloodDungeonBestRecord::dispatch_sig @ 0x84d82f6

/* Inter_LoadBloodDungeonBestRecord::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadBloodDungeonBestRecord::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 0) {
    uVar2 = 0x3edd;
  }
  else {
    uVar3 = CUser::get_charac_idx((CUser *)param_2,*(uint *)param_3);
    if ((int)uVar3 < 0) {
      uVar2 = 0x3ee3;
    }
    else {
      piVar4 = (int *)std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                                ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                 (param_2 + 0x796e8),uVar3);
      if (*piVar4 == *(int *)param_3) {
        puVar5 = (undefined4 *)
                 std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                           ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8)
                            ,uVar3);
        *puVar5 = *(undefined4 *)param_3;
        CUserCharacInfo::setBloodBestRecord
                  ((CUserCharacInfo *)param_2,*(uint *)(param_3 + 4),*(int *)(param_3 + 8),
                   *(int *)(param_3 + 0xc),true);
        uVar2 = 0;
      }
      else {
        uVar2 = 0x3ee5;
      }
    }
  }
  return uVar2;
}

```

