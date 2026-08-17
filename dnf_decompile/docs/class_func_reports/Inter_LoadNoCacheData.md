# Inter_LoadNoCacheData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dd1ee Inter_LoadNoCacheData::dispatch_sig  [0x084dd1ee-0x84dd26b] ===
 84dd1ee:	55                   	push   %ebp
 84dd1ef:	89 e5                	mov    %esp,%ebp
 84dd1f1:	83 ec 28             	sub    $0x28,%esp
 84dd1f4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84dd1f8:	74 6b                	je     84dd265 <_ZN21Inter_LoadNoCacheData12dispatch_sigEP5CUserPci+0x77>
 84dd1fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd1fd:	89 04 24             	mov    %eax,(%esp)
 84dd200:	e8 2d 32 c4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84dd205:	85 c0                	test   %eax,%eax
 84dd207:	0f 95 c0             	setne  %al
 84dd20a:	84 c0                	test   %al,%al
 84dd20c:	74 57                	je     84dd265 <_ZN21Inter_LoadNoCacheData12dispatch_sigEP5CUserPci+0x77>
 84dd20e:	8b 45 10             	mov    0x10(%ebp),%eax
 84dd211:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84dd214:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84dd21b:	ff 
 84dd21c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd21f:	89 04 24             	mov    %eax,(%esp)
 84dd222:	e8 79 0d 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84dd227:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84dd22a:	8b 12                	mov    (%edx),%edx
 84dd22c:	39 d0                	cmp    %edx,%eax
 84dd22e:	0f 94 c0             	sete   %al
 84dd231:	84 c0                	test   %al,%al
 84dd233:	74 30                	je     84dd265 <_ZN21Inter_LoadNoCacheData12dispatch_sigEP5CUserPci+0x77>
 84dd235:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dd23c:	00 
 84dd23d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd240:	89 04 24             	mov    %eax,(%esp)
 84dd243:	e8 3c 03 c0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84dd248:	8b 10                	mov    (%eax),%edx
 84dd24a:	83 c2 04             	add    $0x4,%edx
 84dd24d:	8b 0a                	mov    (%edx),%ecx
 84dd24f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84dd252:	83 c2 04             	add    $0x4,%edx
 84dd255:	89 54 24 08          	mov    %edx,0x8(%esp)
 84dd259:	8b 55 0c             	mov    0xc(%ebp),%edx
 84dd25c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dd260:	89 04 24             	mov    %eax,(%esp)
 84dd263:	ff d1                	call   *%ecx
 84dd265:	b8 00 00 00 00       	mov    $0x0,%eax
 84dd26a:	c9                   	leave
 84dd26b:	c3                   	ret

```

```c
// Inter_LoadNoCacheData::dispatch_sig @ 0x84dd1ee

/* Inter_LoadNoCacheData::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadNoCacheData::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (char *)0x0) {
    iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar1 != 0) {
      iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar1 == *(int *)param_3) {
        piVar2 = (int *)CUser::GetCharacExpandData((CUser *)param_2,1);
        (**(code **)(*piVar2 + 4))(piVar2,param_2,param_3 + 4);
      }
    }
  }
  return 0;
}

```

