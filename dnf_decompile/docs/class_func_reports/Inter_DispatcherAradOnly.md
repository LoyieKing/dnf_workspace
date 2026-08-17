# Inter_DispatcherAradOnly

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Inter_DispatcherAradOnly

```asm
// === 084e7eb8 Inter_DispatcherAradOnly::Inter_DispatcherAradOnly  [0x084e7eb8-0x84e7f2b] ===
 84e7eb8:	55                   	push   %ebp
 84e7eb9:	89 e5                	mov    %esp,%ebp
 84e7ebb:	56                   	push   %esi
 84e7ebc:	53                   	push   %ebx
 84e7ebd:	83 ec 10             	sub    $0x10,%esp
 84e7ec0:	8b 45 08             	mov    0x8(%ebp),%eax
 84e7ec3:	89 04 24             	mov    %eax,(%esp)
 84e7ec6:	e8 35 1c 00 00       	call   84e9b00 <_ZN14ISigDispatcherC1Ev>
 84e7ecb:	8b 45 08             	mov    0x8(%ebp),%eax
 84e7ece:	c7 00 10 e4 c8 08    	movl   $0x8c8e410,(%eax)
 84e7ed4:	8b 45 08             	mov    0x8(%ebp),%eax
 84e7ed7:	83 c0 04             	add    $0x4,%eax
 84e7eda:	89 04 24             	mov    %eax,(%esp)
 84e7edd:	e8 f2 05 cb ff       	call   81984d4 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC1Ev>
 84e7ee2:	8b 45 08             	mov    0x8(%ebp),%eax
 84e7ee5:	83 c0 04             	add    $0x4,%eax
 84e7ee8:	89 04 24             	mov    %eax,(%esp)
 84e7eeb:	e8 a8 06 cb ff       	call   8198598 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv>
 84e7ef0:	eb 33                	jmp    84e7f25 <_ZN24Inter_DispatcherAradOnlyC1Ev+0x6d>
 84e7ef2:	89 d3                	mov    %edx,%ebx
 84e7ef4:	89 c6                	mov    %eax,%esi
 84e7ef6:	8b 45 08             	mov    0x8(%ebp),%eax
 84e7ef9:	83 c0 04             	add    $0x4,%eax
 84e7efc:	89 04 24             	mov    %eax,(%esp)
 84e7eff:	e8 12 06 cb ff       	call   8198516 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcherD1Ev>
 84e7f04:	89 f0                	mov    %esi,%eax
 84e7f06:	89 da                	mov    %ebx,%edx
 84e7f08:	eb 00                	jmp    84e7f0a <_ZN24Inter_DispatcherAradOnlyC1Ev+0x52>
 84e7f0a:	89 d3                	mov    %edx,%ebx
 84e7f0c:	89 c6                	mov    %eax,%esi
 84e7f0e:	8b 45 08             	mov    0x8(%ebp),%eax
 84e7f11:	89 04 24             	mov    %eax,(%esp)
 84e7f14:	e8 a3 a4 bf ff       	call   80e23bc <_ZN14ISigDispatcherD1Ev>
 84e7f19:	89 f0                	mov    %esi,%eax
 84e7f1b:	89 da                	mov    %ebx,%edx
 84e7f1d:	89 04 24             	mov    %eax,(%esp)
 84e7f20:	e8 2b b8 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e7f25:	83 c4 10             	add    $0x10,%esp
 84e7f28:	5b                   	pop    %ebx
 84e7f29:	5e                   	pop    %esi
 84e7f2a:	5d                   	pop    %ebp
 84e7f2b:	c3                   	ret

```

```c
// Inter_DispatcherAradOnly::Inter_DispatcherAradOnly @ 0x84e7eb8

/* Inter_DispatcherAradOnly::Inter_DispatcherAradOnly() */

void __thiscall Inter_DispatcherAradOnly::Inter_DispatcherAradOnly(Inter_DispatcherAradOnly *this)

{
  ISigDispatcher::ISigDispatcher((ISigDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_sig_08c8e410;
                    /* try { // try from 084e7edd to 084e7ee1 has its CatchHandler @ 084e7f0a */
  ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher
            ((Arad_InternalDispatcher *)(this + 4));
                    /* try { // try from 084e7eeb to 084e7eef has its CatchHandler @ 084e7ef2 */
  ARAD::DISPATCHER::Arad_InternalDispatcher::Init((Arad_InternalDispatcher *)(this + 4));
  return;
}

```

---

## dispatch_sig

```asm
// === 084e7f2c Inter_DispatcherAradOnly::dispatch_sig  [0x084e7f2c-0x84e7fe1] ===
 84e7f2c:	55                   	push   %ebp
 84e7f2d:	89 e5                	mov    %esp,%ebp
 84e7f2f:	53                   	push   %ebx
 84e7f30:	83 ec 34             	sub    $0x34,%esp
 84e7f33:	8b 45 10             	mov    0x10(%ebp),%eax
 84e7f36:	8b 00                	mov    (%eax),%eax
 84e7f38:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e7f3b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e7f3e:	8b 55 08             	mov    0x8(%ebp),%edx
 84e7f41:	83 c2 04             	add    $0x4,%edx
 84e7f44:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7f48:	89 14 24             	mov    %edx,(%esp)
 84e7f4b:	e8 4e 0a cb ff       	call   819899e <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE>
 84e7f50:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e7f53:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84e7f57:	75 55                	jne    84e7fae <_ZN24Inter_DispatcherAradOnly12dispatch_sigEP5CUserPci+0x82>
 84e7f59:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7f5c:	89 04 24             	mov    %eax,(%esp)
 84e7f5f:	e8 ea 3c be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e7f64:	89 c3                	mov    %eax,%ebx
 84e7f66:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84e7f6d:	00 
 84e7f6e:	c7 44 24 08 a2 6b 00 	movl   $0x6ba2,0x8(%esp)
 84e7f75:	00 
 84e7f76:	c7 44 24 04 60 b4 c8 	movl   $0x8c8b460,0x4(%esp)
 84e7f7d:	08 
 84e7f7e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e7f81:	89 04 24             	mov    %eax,(%esp)
 84e7f84:	e8 8f 77 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e7f89:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84e7f8d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e7f90:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e7f94:	c7 44 24 04 b4 a3 c8 	movl   $0x8c8a3b4,0x4(%esp)
 84e7f9b:	08 
 84e7f9c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e7f9f:	89 04 24             	mov    %eax,(%esp)
 84e7fa2:	e8 e1 77 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e7fa7:	b8 a3 6b 00 00       	mov    $0x6ba3,%eax
 84e7fac:	eb 2d                	jmp    84e7fdb <_ZN24Inter_DispatcherAradOnly12dispatch_sigEP5CUserPci+0xaf>
 84e7fae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e7fb1:	8b 00                	mov    (%eax),%eax
 84e7fb3:	83 c0 08             	add    $0x8,%eax
 84e7fb6:	8b 10                	mov    (%eax),%edx
 84e7fb8:	8b 45 14             	mov    0x14(%ebp),%eax
 84e7fbb:	83 e8 04             	sub    $0x4,%eax
 84e7fbe:	8b 4d 10             	mov    0x10(%ebp),%ecx
 84e7fc1:	83 c1 04             	add    $0x4,%ecx
 84e7fc4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84e7fc8:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84e7fcc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7fcf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7fd3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e7fd6:	89 04 24             	mov    %eax,(%esp)
 84e7fd9:	ff d2                	call   *%edx
 84e7fdb:	83 c4 34             	add    $0x34,%esp
 84e7fde:	5b                   	pop    %ebx
 84e7fdf:	5d                   	pop    %ebp
 84e7fe0:	c3                   	ret
 84e7fe1:	90                   	nop

```

```c
// Inter_DispatcherAradOnly::dispatch_sig @ 0x84e7f2c

/* Inter_DispatcherAradOnly::dispatch_sig(CUser*, char*, int) */

undefined4 __thiscall
Inter_DispatcherAradOnly::dispatch_sig
          (Inter_DispatcherAradOnly *this,CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  cMyTrace local_24 [16];
  undefined4 local_14;
  int *local_10;
  
  local_14 = *(undefined4 *)param_2;
  local_10 = (int *)ARAD::DISPATCHER::Arad_InternalDispatcher::GetDispatcher(this + 4,local_14);
  if (local_10 == (int *)0x0) {
    uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_24,
                       "virtual int Inter_DispatcherAradOnly::dispatch_sig(CUser*, char*, int)",
                       0x6ba2,5);
    cMyTrace::operator()
              (local_24,"[DISPATCHER_ARAD] Invalid Internal Packet Code. (code:%d, charac:%u)",
               local_14,uVar1);
    uVar1 = 0x6ba3;
  }
  else {
    uVar1 = (**(code **)(*local_10 + 8))(local_10,param_1,param_2 + 4,param_3 + -4);
  }
  return uVar1;
}

```

