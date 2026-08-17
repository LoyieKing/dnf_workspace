# DB_DispatcherTaiwan

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## DB_DispatcherTaiwan

```asm
// === 0844c9d4 DB_DispatcherTaiwan::DB_DispatcherTaiwan  [0x0844c9d4-0x844ca47] ===
 844c9d4:	55                   	push   %ebp
 844c9d5:	89 e5                	mov    %esp,%ebp
 844c9d7:	56                   	push   %esi
 844c9d8:	53                   	push   %ebx
 844c9d9:	83 ec 10             	sub    $0x10,%esp
 844c9dc:	8b 45 08             	mov    0x8(%ebp),%eax
 844c9df:	89 04 24             	mov    %eax,(%esp)
 844c9e2:	e8 bf 0d 00 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 844c9e7:	8b 45 08             	mov    0x8(%ebp),%eax
 844c9ea:	c7 00 38 df c5 08    	movl   $0x8c5df38,(%eax)
 844c9f0:	8b 45 08             	mov    0x8(%ebp),%eax
 844c9f3:	83 c0 04             	add    $0x4,%eax
 844c9f6:	89 04 24             	mov    %eax,(%esp)
 844c9f9:	e8 36 d7 d0 ff       	call   815a134 <_ZN18TaiwanDBDispatcherC1Ev>
 844c9fe:	8b 45 08             	mov    0x8(%ebp),%eax
 844ca01:	83 c0 04             	add    $0x4,%eax
 844ca04:	89 04 24             	mov    %eax,(%esp)
 844ca07:	e8 ec d7 d0 ff       	call   815a1f8 <_ZN18TaiwanDBDispatcher4initEv>
 844ca0c:	eb 33                	jmp    844ca41 <_ZN19DB_DispatcherTaiwanC1Ev+0x6d>
 844ca0e:	89 d3                	mov    %edx,%ebx
 844ca10:	89 c6                	mov    %eax,%esi
 844ca12:	8b 45 08             	mov    0x8(%ebp),%eax
 844ca15:	83 c0 04             	add    $0x4,%eax
 844ca18:	89 04 24             	mov    %eax,(%esp)
 844ca1b:	e8 56 d7 d0 ff       	call   815a176 <_ZN18TaiwanDBDispatcherD1Ev>
 844ca20:	89 f0                	mov    %esi,%eax
 844ca22:	89 da                	mov    %ebx,%edx
 844ca24:	eb 00                	jmp    844ca26 <_ZN19DB_DispatcherTaiwanC1Ev+0x52>
 844ca26:	89 d3                	mov    %edx,%ebx
 844ca28:	89 c6                	mov    %eax,%esi
 844ca2a:	8b 45 08             	mov    0x8(%ebp),%eax
 844ca2d:	89 04 24             	mov    %eax,(%esp)
 844ca30:	e8 43 59 c9 ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 844ca35:	89 f0                	mov    %esi,%eax
 844ca37:	89 da                	mov    %ebx,%edx
 844ca39:	89 04 24             	mov    %eax,(%esp)
 844ca3c:	e8 0f 6d 69 00       	call   8ae3750 <_Unwind_Resume>
 844ca41:	83 c4 10             	add    $0x10,%esp
 844ca44:	5b                   	pop    %ebx
 844ca45:	5e                   	pop    %esi
 844ca46:	5d                   	pop    %ebp
 844ca47:	c3                   	ret

```

```c
// DB_DispatcherTaiwan::DB_DispatcherTaiwan @ 0x844c9d4

/* DB_DispatcherTaiwan::DB_DispatcherTaiwan() */

void __thiscall DB_DispatcherTaiwan::DB_DispatcherTaiwan(DB_DispatcherTaiwan *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5df38;
                    /* try { // try from 0844c9f9 to 0844c9fd has its CatchHandler @ 0844ca26 */
  TaiwanDBDispatcher::TaiwanDBDispatcher((TaiwanDBDispatcher *)(this + 4));
                    /* try { // try from 0844ca07 to 0844ca0b has its CatchHandler @ 0844ca0e */
  TaiwanDBDispatcher::init((TaiwanDBDispatcher *)(this + 4));
  return;
}

```

---

## dispatch

```asm
// === 0844ca48 DB_DispatcherTaiwan::dispatch  [0x0844ca48-0x844cafd] ===
 844ca48:	55                   	push   %ebp
 844ca49:	89 e5                	mov    %esp,%ebp
 844ca4b:	53                   	push   %ebx
 844ca4c:	83 ec 34             	sub    $0x34,%esp
 844ca4f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 844ca56:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844ca59:	89 44 24 04          	mov    %eax,0x4(%esp)
 844ca5d:	8b 45 14             	mov    0x14(%ebp),%eax
 844ca60:	89 04 24             	mov    %eax,(%esp)
 844ca63:	e8 5c fb 1c 00       	call   861c5c4 <_ZN6StreamrsERi>
 844ca68:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844ca6b:	8b 55 08             	mov    0x8(%ebp),%edx
 844ca6e:	83 c2 04             	add    $0x4,%edx
 844ca71:	89 44 24 04          	mov    %eax,0x4(%esp)
 844ca75:	89 14 24             	mov    %edx,(%esp)
 844ca78:	e8 79 dd d0 ff       	call   815a7f6 <_ZN18TaiwanDBDispatcher13getDispatcherEN18TaiwanInternalPack1TE>
 844ca7d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844ca80:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 844ca84:	75 4b                	jne    844cad1 <_ZN19DB_DispatcherTaiwan8dispatchEiiP6Stream+0x89>
 844ca86:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 844ca89:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844ca90:	00 
 844ca91:	c7 44 24 08 7a c1 00 	movl   $0xc17a,0x8(%esp)
 844ca98:	00 
 844ca99:	c7 44 24 04 e0 a9 c5 	movl   $0x8c5a9e0,0x4(%esp)
 844caa0:	08 
 844caa1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 844caa4:	89 04 24             	mov    %eax,(%esp)
 844caa7:	e8 6c 2c 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844caac:	8b 45 10             	mov    0x10(%ebp),%eax
 844caaf:	89 44 24 0c          	mov    %eax,0xc(%esp)
 844cab3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 844cab7:	c7 44 24 04 20 9b c5 	movl   $0x8c59b20,0x4(%esp)
 844cabe:	08 
 844cabf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 844cac2:	89 04 24             	mov    %eax,(%esp)
 844cac5:	e8 be 2c 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844caca:	b8 00 00 00 00       	mov    $0x0,%eax
 844cacf:	eb 27                	jmp    844caf8 <_ZN19DB_DispatcherTaiwan8dispatchEiiP6Stream+0xb0>
 844cad1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844cad4:	8b 00                	mov    (%eax),%eax
 844cad6:	83 c0 08             	add    $0x8,%eax
 844cad9:	8b 10                	mov    (%eax),%edx
 844cadb:	8b 45 14             	mov    0x14(%ebp),%eax
 844cade:	89 44 24 0c          	mov    %eax,0xc(%esp)
 844cae2:	8b 45 10             	mov    0x10(%ebp),%eax
 844cae5:	89 44 24 08          	mov    %eax,0x8(%esp)
 844cae9:	8b 45 0c             	mov    0xc(%ebp),%eax
 844caec:	89 44 24 04          	mov    %eax,0x4(%esp)
 844caf0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844caf3:	89 04 24             	mov    %eax,(%esp)
 844caf6:	ff d2                	call   *%edx
 844caf8:	83 c4 34             	add    $0x34,%esp
 844cafb:	5b                   	pop    %ebx
 844cafc:	5d                   	pop    %ebp
 844cafd:	c3                   	ret

```

```c
// DB_DispatcherTaiwan::dispatch @ 0x844ca48

/* DB_DispatcherTaiwan::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_DispatcherTaiwan::dispatch(DB_DispatcherTaiwan *this,int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_24;
  cMyTrace local_20 [16];
  int *local_10;
  
  local_24 = 0;
  Stream::operator>>(param_3,&local_24);
  local_10 = (int *)TaiwanDBDispatcher::getDispatcher(this + 4,local_24);
  iVar1 = local_24;
  if (local_10 == (int *)0x0) {
    cMyTrace::cMyTrace(local_20,"virtual bool DB_DispatcherTaiwan::dispatch(int, int, Stream*)",
                       0xc17a,5);
    cMyTrace::operator()
              (local_20,"[TaiwanDispater] Invalid internal packet code. Code:%d, Uid:%d",iVar1,
               param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*local_10 + 8))(local_10,param_1,param_2,param_3);
  }
  return uVar2;
}

```

