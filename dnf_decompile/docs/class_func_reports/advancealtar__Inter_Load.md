# advancealtar__Inter_Load

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0813f72a advancealtar::Inter_Load::dispatch_sig  [0x0813f72a-0x813f7af] ===
 813f72a:	55                   	push   %ebp
 813f72b:	89 e5                	mov    %esp,%ebp
 813f72d:	83 ec 28             	sub    $0x28,%esp
 813f730:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 813f734:	74 1e                	je     813f754 <_ZN12advancealtar10Inter_Load12dispatch_sigEP5CUserPci+0x2a>
 813f736:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f739:	89 04 24             	mov    %eax,(%esp)
 813f73c:	e8 4b ac f9 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 813f741:	85 c0                	test   %eax,%eax
 813f743:	74 0f                	je     813f754 <_ZN12advancealtar10Inter_Load12dispatch_sigEP5CUserPci+0x2a>
 813f745:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f748:	89 04 24             	mov    %eax,(%esp)
 813f74b:	e8 e2 0c fe ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 813f750:	85 c0                	test   %eax,%eax
 813f752:	75 07                	jne    813f75b <_ZN12advancealtar10Inter_Load12dispatch_sigEP5CUserPci+0x31>
 813f754:	b8 01 00 00 00       	mov    $0x1,%eax
 813f759:	eb 05                	jmp    813f760 <_ZN12advancealtar10Inter_Load12dispatch_sigEP5CUserPci+0x36>
 813f75b:	b8 00 00 00 00       	mov    $0x0,%eax
 813f760:	84 c0                	test   %al,%al
 813f762:	74 07                	je     813f76b <_ZN12advancealtar10Inter_Load12dispatch_sigEP5CUserPci+0x41>
 813f764:	b8 de 02 00 00       	mov    $0x2de,%eax
 813f769:	eb 43                	jmp    813f7ae <_ZN12advancealtar10Inter_Load12dispatch_sigEP5CUserPci+0x84>
 813f76b:	8b 45 10             	mov    0x10(%ebp),%eax
 813f76e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 813f771:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 813f775:	75 07                	jne    813f77e <_ZN12advancealtar10Inter_Load12dispatch_sigEP5CUserPci+0x54>
 813f777:	b8 e3 02 00 00       	mov    $0x2e3,%eax
 813f77c:	eb 30                	jmp    813f7ae <_ZN12advancealtar10Inter_Load12dispatch_sigEP5CUserPci+0x84>
 813f77e:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f781:	8d 90 60 df 08 00    	lea    0x8df60(%eax),%edx
 813f787:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813f78a:	89 44 24 04          	mov    %eax,0x4(%esp)
 813f78e:	89 14 24             	mov    %edx,(%esp)
 813f791:	e8 80 1e ff ff       	call   8131616 <_ZN12advancealtar25CharacAdvanceAltarManager3setERKNS_25_CharacAdvanceAltarDbDataE>
 813f796:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 813f79d:	00 
 813f79e:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f7a1:	89 04 24             	mov    %eax,(%esp)
 813f7a4:	e8 4b 5c fe ff       	call   81253f4 <_ZN5CUser16EnableCharacInfoE13CACHE_SECTION>
 813f7a9:	b8 00 00 00 00       	mov    $0x0,%eax
 813f7ae:	c9                   	leave
 813f7af:	c3                   	ret

```

```c
// advancealtar::Inter_Load::dispatch_sig @ 0x813f72a

/* advancealtar::Inter_Load::dispatch_sig(CUser*, char*, int) */

undefined4 advancealtar::Inter_Load::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
        goto LAB_0813f760;
      }
    }
  }
  bVar1 = true;
LAB_0813f760:
  if (bVar1) {
    uVar3 = 0x2de;
  }
  else if (param_3 == 0) {
    uVar3 = 0x2e3;
  }
  else {
    CharacAdvanceAltarManager::set
              ((CharacAdvanceAltarManager *)(param_2 + 0x8df60),(_CharacAdvanceAltarDbData *)param_3
              );
    CUser::EnableCharacInfo((CUser *)param_2,10);
    uVar3 = 0;
  }
  return uVar3;
}

```

