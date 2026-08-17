# Inter_DispatcherTaiwan

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Inter_DispatcherTaiwan

```asm
// === 084e8bba Inter_DispatcherTaiwan::Inter_DispatcherTaiwan  [0x084e8bba-0x84e8c2d] ===
 84e8bba:	55                   	push   %ebp
 84e8bbb:	89 e5                	mov    %esp,%ebp
 84e8bbd:	56                   	push   %esi
 84e8bbe:	53                   	push   %ebx
 84e8bbf:	83 ec 10             	sub    $0x10,%esp
 84e8bc2:	8b 45 08             	mov    0x8(%ebp),%eax
 84e8bc5:	89 04 24             	mov    %eax,(%esp)
 84e8bc8:	e8 33 0f 00 00       	call   84e9b00 <_ZN14ISigDispatcherC1Ev>
 84e8bcd:	8b 45 08             	mov    0x8(%ebp),%eax
 84e8bd0:	c7 00 50 e3 c8 08    	movl   $0x8c8e350,(%eax)
 84e8bd6:	8b 45 08             	mov    0x8(%ebp),%eax
 84e8bd9:	83 c0 04             	add    $0x4,%eax
 84e8bdc:	89 04 24             	mov    %eax,(%esp)
 84e8bdf:	e8 ec 75 c7 ff       	call   81601d0 <_ZN24TaiwanInternalDispatcherC1Ev>
 84e8be4:	8b 45 08             	mov    0x8(%ebp),%eax
 84e8be7:	83 c0 04             	add    $0x4,%eax
 84e8bea:	89 04 24             	mov    %eax,(%esp)
 84e8bed:	e8 a2 76 c7 ff       	call   8160294 <_ZN24TaiwanInternalDispatcher4initEv>
 84e8bf2:	eb 33                	jmp    84e8c27 <_ZN22Inter_DispatcherTaiwanC1Ev+0x6d>
 84e8bf4:	89 d3                	mov    %edx,%ebx
 84e8bf6:	89 c6                	mov    %eax,%esi
 84e8bf8:	8b 45 08             	mov    0x8(%ebp),%eax
 84e8bfb:	83 c0 04             	add    $0x4,%eax
 84e8bfe:	89 04 24             	mov    %eax,(%esp)
 84e8c01:	e8 0c 76 c7 ff       	call   8160212 <_ZN24TaiwanInternalDispatcherD1Ev>
 84e8c06:	89 f0                	mov    %esi,%eax
 84e8c08:	89 da                	mov    %ebx,%edx
 84e8c0a:	eb 00                	jmp    84e8c0c <_ZN22Inter_DispatcherTaiwanC1Ev+0x52>
 84e8c0c:	89 d3                	mov    %edx,%ebx
 84e8c0e:	89 c6                	mov    %eax,%esi
 84e8c10:	8b 45 08             	mov    0x8(%ebp),%eax
 84e8c13:	89 04 24             	mov    %eax,(%esp)
 84e8c16:	e8 a1 97 bf ff       	call   80e23bc <_ZN14ISigDispatcherD1Ev>
 84e8c1b:	89 f0                	mov    %esi,%eax
 84e8c1d:	89 da                	mov    %ebx,%edx
 84e8c1f:	89 04 24             	mov    %eax,(%esp)
 84e8c22:	e8 29 ab 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e8c27:	83 c4 10             	add    $0x10,%esp
 84e8c2a:	5b                   	pop    %ebx
 84e8c2b:	5e                   	pop    %esi
 84e8c2c:	5d                   	pop    %ebp
 84e8c2d:	c3                   	ret

```

```c
// Inter_DispatcherTaiwan::Inter_DispatcherTaiwan @ 0x84e8bba

/* Inter_DispatcherTaiwan::Inter_DispatcherTaiwan() */

void __thiscall Inter_DispatcherTaiwan::Inter_DispatcherTaiwan(Inter_DispatcherTaiwan *this)

{
  ISigDispatcher::ISigDispatcher((ISigDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_sig_08c8e350;
                    /* try { // try from 084e8bdf to 084e8be3 has its CatchHandler @ 084e8c0c */
  TaiwanInternalDispatcher::TaiwanInternalDispatcher((TaiwanInternalDispatcher *)(this + 4));
                    /* try { // try from 084e8bed to 084e8bf1 has its CatchHandler @ 084e8bf4 */
  TaiwanInternalDispatcher::init((TaiwanInternalDispatcher *)(this + 4));
  return;
}

```

---

## dispatch_sig

```asm
// === 084e8c2e Inter_DispatcherTaiwan::dispatch_sig  [0x084e8c2e-0x84e8ce3] ===
 84e8c2e:	55                   	push   %ebp
 84e8c2f:	89 e5                	mov    %esp,%ebp
 84e8c31:	53                   	push   %ebx
 84e8c32:	83 ec 34             	sub    $0x34,%esp
 84e8c35:	8b 45 10             	mov    0x10(%ebp),%eax
 84e8c38:	8b 00                	mov    (%eax),%eax
 84e8c3a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e8c3d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e8c40:	8b 55 08             	mov    0x8(%ebp),%edx
 84e8c43:	83 c2 04             	add    $0x4,%edx
 84e8c46:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e8c4a:	89 14 24             	mov    %edx,(%esp)
 84e8c4d:	e8 48 7a c7 ff       	call   816069a <_ZN24TaiwanInternalDispatcher13getDispatcherEN18TaiwanInternalPack1TE>
 84e8c52:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e8c55:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84e8c59:	75 55                	jne    84e8cb0 <_ZN22Inter_DispatcherTaiwan12dispatch_sigEP5CUserPci+0x82>
 84e8c5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8c5e:	89 04 24             	mov    %eax,(%esp)
 84e8c61:	e8 e8 2f be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e8c66:	89 c3                	mov    %eax,%ebx
 84e8c68:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84e8c6f:	00 
 84e8c70:	c7 44 24 08 ca 6d 00 	movl   $0x6dca,0x8(%esp)
 84e8c77:	00 
 84e8c78:	c7 44 24 04 60 b3 c8 	movl   $0x8c8b360,0x4(%esp)
 84e8c7f:	08 
 84e8c80:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e8c83:	89 04 24             	mov    %eax,(%esp)
 84e8c86:	e8 8d 6a 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e8c8b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84e8c8f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e8c92:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e8c96:	c7 44 24 04 e8 a4 c8 	movl   $0x8c8a4e8,0x4(%esp)
 84e8c9d:	08 
 84e8c9e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e8ca1:	89 04 24             	mov    %eax,(%esp)
 84e8ca4:	e8 df 6a 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e8ca9:	b8 cb 6d 00 00       	mov    $0x6dcb,%eax
 84e8cae:	eb 2d                	jmp    84e8cdd <_ZN22Inter_DispatcherTaiwan12dispatch_sigEP5CUserPci+0xaf>
 84e8cb0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e8cb3:	8b 00                	mov    (%eax),%eax
 84e8cb5:	83 c0 08             	add    $0x8,%eax
 84e8cb8:	8b 10                	mov    (%eax),%edx
 84e8cba:	8b 45 14             	mov    0x14(%ebp),%eax
 84e8cbd:	83 e8 04             	sub    $0x4,%eax
 84e8cc0:	8b 4d 10             	mov    0x10(%ebp),%ecx
 84e8cc3:	83 c1 04             	add    $0x4,%ecx
 84e8cc6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84e8cca:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84e8cce:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8cd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e8cd5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e8cd8:	89 04 24             	mov    %eax,(%esp)
 84e8cdb:	ff d2                	call   *%edx
 84e8cdd:	83 c4 34             	add    $0x34,%esp
 84e8ce0:	5b                   	pop    %ebx
 84e8ce1:	5d                   	pop    %ebp
 84e8ce2:	c3                   	ret
 84e8ce3:	90                   	nop

```

```c
// Inter_DispatcherTaiwan::dispatch_sig @ 0x84e8c2e

/* Inter_DispatcherTaiwan::dispatch_sig(CUser*, char*, int) */

undefined4 __thiscall
Inter_DispatcherTaiwan::dispatch_sig
          (Inter_DispatcherTaiwan *this,CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  cMyTrace local_24 [16];
  undefined4 local_14;
  int *local_10;
  
  local_14 = *(undefined4 *)param_2;
  local_10 = (int *)TaiwanInternalDispatcher::getDispatcher(this + 4,local_14);
  if (local_10 == (int *)0x0) {
    uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_24,
                       "virtual int Inter_DispatcherTaiwan::dispatch_sig(CUser*, char*, int)",0x6dca
                       ,5);
    cMyTrace::operator()
              (local_24,"[TaiwanDispatcher] Invalid internal packet code. Code:%d, Charac:%u)",
               local_14,uVar1);
    uVar1 = 0x6dcb;
  }
  else {
    uVar1 = (**(code **)(*local_10 + 8))(local_10,param_1,param_2 + 4,param_3 + -4);
  }
  return uVar1;
}

```

