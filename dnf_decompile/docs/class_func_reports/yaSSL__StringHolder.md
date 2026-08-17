# yaSSL__StringHolder

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## GetString

```asm
// === 0874f020 yaSSL::StringHolder::GetString  [0x0874f020-0x874f02f] ===
 874f020:	55                   	push   %ebp
 874f021:	89 e5                	mov    %esp,%ebp
 874f023:	8b 45 08             	mov    0x8(%ebp),%eax
 874f026:	5d                   	pop    %ebp
 874f027:	c3                   	ret
 874f028:	90                   	nop
 874f029:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::StringHolder::GetString @ 0x874f020

/* yaSSL::StringHolder::GetString() */

StringHolder * __thiscall yaSSL::StringHolder::GetString(StringHolder *this)

{
  return this;
}

```

---

## StringHolder

```asm
// === 08752380 yaSSL::StringHolder::StringHolder  [0x08752380-0x87523df] ===
 8752380:	55                   	push   %ebp
 8752381:	89 e5                	mov    %esp,%ebp
 8752383:	83 ec 28             	sub    $0x28,%esp
 8752386:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8752389:	8b 75 08             	mov    0x8(%ebp),%esi
 875238c:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875238f:	8b 7d 10             	mov    0x10(%ebp),%edi
 8752392:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8752395:	e8 5e 0a fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875239a:	81 c3 fe a7 c1 00    	add    $0xc1a7fe,%ebx
 87523a0:	89 7e 04             	mov    %edi,0x4(%esi)
 87523a3:	8d 47 01             	lea    0x1(%edi),%eax
 87523a6:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87523ab:	89 04 24             	mov    %eax,(%esp)
 87523ae:	e8 9d ff ff ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 87523b3:	8b 55 0c             	mov    0xc(%ebp),%edx
 87523b6:	89 46 08             	mov    %eax,0x8(%esi)
 87523b9:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87523bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 87523c1:	89 04 24             	mov    %eax,(%esp)
 87523c4:	e8 d7 b4 92 ff       	call   807d8a0 <memcpy@plt>
 87523c9:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 87523cf:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87523d2:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87523d5:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87523d8:	89 ec                	mov    %ebp,%esp
 87523da:	5d                   	pop    %ebp
 87523db:	c3                   	ret
 87523dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::StringHolder::StringHolder @ 0x8752380

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::StringHolder::StringHolder(char const*, int) */

void __thiscall yaSSL::StringHolder::StringHolder(StringHolder *this,char *param_1,int param_2)

{
  void *__dest;
  uint in_stack_ffffffd8;
  
  *(int *)(this + 4) = param_2;
  __dest = operator_new__(param_2 + 1,in_stack_ffffffd8 & 0xffffff00);
  *(void **)(this + 8) = __dest;
  memcpy(__dest,param_1,param_2);
  *(undefined4 *)this = 0;
  return;
}

```

---

## ~StringHolder

```asm
// === 08750c20 yaSSL::StringHolder::~StringHolder  [0x08750c20-0x8750c4f] ===
 8750c20:	55                   	push   %ebp
 8750c21:	89 e5                	mov    %esp,%ebp
 8750c23:	53                   	push   %ebx
 8750c24:	83 ec 14             	sub    $0x14,%esp
 8750c27:	8b 45 08             	mov    0x8(%ebp),%eax
 8750c2a:	e8 c9 21 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8750c2f:	81 c3 69 bf c1 00    	add    $0xc1bf69,%ebx
 8750c35:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8750c3a:	8b 40 08             	mov    0x8(%eax),%eax
 8750c3d:	89 04 24             	mov    %eax,(%esp)
 8750c40:	e8 ab fc ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8750c45:	83 c4 14             	add    $0x14,%esp
 8750c48:	5b                   	pop    %ebx
 8750c49:	5d                   	pop    %ebp
 8750c4a:	c3                   	ret
 8750c4b:	90                   	nop
 8750c4c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::StringHolder::~StringHolder @ 0x8750c20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::StringHolder::~StringHolder() */

void __thiscall yaSSL::StringHolder::~StringHolder(StringHolder *this)

{
  operator_delete__(*(undefined4 *)(this + 8),0);
  return;
}

```

