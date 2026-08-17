# Inter_LoadDungeonClear

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c7c42 Inter_LoadDungeonClear::dispatch_sig  [0x084c7c42-0x84c7d2b] ===
 84c7c42:	55                   	push   %ebp
 84c7c43:	89 e5                	mov    %esp,%ebp
 84c7c45:	53                   	push   %ebx
 84c7c46:	83 ec 34             	sub    $0x34,%esp
 84c7c49:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84c7c4d:	75 0a                	jne    84c7c59 <_ZN22Inter_LoadDungeonClear12dispatch_sigEP5CUserPci+0x17>
 84c7c4f:	b8 0e 20 00 00       	mov    $0x200e,%eax
 84c7c54:	e9 cd 00 00 00       	jmp    84c7d26 <_ZN22Inter_LoadDungeonClear12dispatch_sigEP5CUserPci+0xe4>
 84c7c59:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7c5c:	89 04 24             	mov    %eax,(%esp)
 84c7c5f:	e8 28 27 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84c7c64:	85 c0                	test   %eax,%eax
 84c7c66:	0f 94 c0             	sete   %al
 84c7c69:	84 c0                	test   %al,%al
 84c7c6b:	74 0a                	je     84c7c77 <_ZN22Inter_LoadDungeonClear12dispatch_sigEP5CUserPci+0x35>
 84c7c6d:	b8 12 20 00 00       	mov    $0x2012,%eax
 84c7c72:	e9 af 00 00 00       	jmp    84c7d26 <_ZN22Inter_LoadDungeonClear12dispatch_sigEP5CUserPci+0xe4>
 84c7c77:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7c7a:	89 04 24             	mov    %eax,(%esp)
 84c7c7d:	e8 14 eb dd ff       	call   82a6796 <_ZN5CUser12IsProgLogoutEv>
 84c7c82:	84 c0                	test   %al,%al
 84c7c84:	74 33                	je     84c7cb9 <_ZN22Inter_LoadDungeonClear12dispatch_sigEP5CUserPci+0x77>
 84c7c86:	c7 44 24 10 a4 76 c8 	movl   $0x8c876a4,0x10(%esp)
 84c7c8d:	08 
 84c7c8e:	c7 44 24 0c 18 20 00 	movl   $0x2018,0xc(%esp)
 84c7c95:	00 
 84c7c96:	c7 44 24 08 80 de c8 	movl   $0x8c8de80,0x8(%esp)
 84c7c9d:	08 
 84c7c9e:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c7ca5:	08 
 84c7ca6:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84c7cad:	e8 58 bf 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84c7cb2:	b8 00 00 00 00       	mov    $0x0,%eax
 84c7cb7:	eb 6d                	jmp    84c7d26 <_ZN22Inter_LoadDungeonClear12dispatch_sigEP5CUserPci+0xe4>
 84c7cb9:	8b 45 10             	mov    0x10(%ebp),%eax
 84c7cbc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c7cbf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c7cc2:	8b 40 0c             	mov    0xc(%eax),%eax
 84c7cc5:	83 f8 01             	cmp    $0x1,%eax
 84c7cc8:	75 07                	jne    84c7cd1 <_ZN22Inter_LoadDungeonClear12dispatch_sigEP5CUserPci+0x8f>
 84c7cca:	b8 20 20 00 00       	mov    $0x2020,%eax
 84c7ccf:	eb 55                	jmp    84c7d26 <_ZN22Inter_LoadDungeonClear12dispatch_sigEP5CUserPci+0xe4>
 84c7cd1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c7cd4:	8d 58 10             	lea    0x10(%eax),%ebx
 84c7cd7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7cda:	89 04 24             	mov    %eax,(%esp)
 84c7cdd:	e8 ea c5 fe ff       	call   84b42cc <_ZN15CUserCharacInfo19getDungeonClearRefWEv>
 84c7ce2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c7ce6:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c7ce9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c7ced:	89 04 24             	mov    %eax,(%esp)
 84c7cf0:	e8 05 c7 fb ff       	call   84843fa <_ZN8WongWork13CDungeonClear10fromStringEP5CUserPc>
 84c7cf5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c7cf8:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84c7cfc:	83 f0 01             	xor    $0x1,%eax
 84c7cff:	84 c0                	test   %al,%al
 84c7d01:	74 0b                	je     84c7d0e <_ZN22Inter_LoadDungeonClear12dispatch_sigEP5CUserPci+0xcc>
 84c7d03:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7d06:	89 04 24             	mov    %eax,(%esp)
 84c7d09:	e8 2e 42 02 00       	call   84ebf3c <_ZN15CUserCharacInfo23disableSaveDungeonClearEv>
 84c7d0e:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 84c7d15:	00 
 84c7d16:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7d19:	89 04 24             	mov    %eax,(%esp)
 84c7d1c:	e8 d3 d6 c5 ff       	call   81253f4 <_ZN5CUser16EnableCharacInfoE13CACHE_SECTION>
 84c7d21:	b8 00 00 00 00       	mov    $0x0,%eax
 84c7d26:	83 c4 34             	add    $0x34,%esp
 84c7d29:	5b                   	pop    %ebx
 84c7d2a:	5d                   	pop    %ebp
 84c7d2b:	c3                   	ret

```

```c
// Inter_LoadDungeonClear::dispatch_sig @ 0x84c7c42

/* Inter_LoadDungeonClear::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadDungeonClear::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CDungeonClear *this;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0x200e;
  }
  else {
    iVar3 = CUser::get_state((CUser *)param_2);
    if (iVar3 == 0) {
      uVar2 = 0x2012;
    }
    else {
      cVar1 = CUser::IsProgLogout((CUser *)param_2);
      if (cVar1 == '\0') {
        if (*(int *)(param_3 + 0xc) == 1) {
          uVar2 = 0x2020;
        }
        else {
          this = (CDungeonClear *)CUserCharacInfo::getDungeonClearRefW((CUserCharacInfo *)param_2);
          WongWork::CDungeonClear::fromString(this,(CUser *)param_2,(char *)(param_3 + 0x10));
          if (*(char *)(param_3 + 8) != '\x01') {
            CUserCharacInfo::disableSaveDungeonClear((CUserCharacInfo *)param_2);
          }
          CUser::EnableCharacInfo((CUser *)param_2,5);
          uVar2 = 0;
        }
      }
      else {
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_LoadDungeonClear::dispatch_sig(CUser*, char*, int)",0x2018,
                   "[Inter_LoadDungeonClear::dispatch_sig] State(PROG_LOGOUT)\n");
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

```

