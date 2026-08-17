# yaSSL__ServerKeyExchange

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## Process

```asm
// === 0874b5f0 yaSSL::ServerKeyExchange::Process  [0x0874b5f0-0x874b66f] ===
 874b5f0:	55                   	push   %ebp
 874b5f1:	89 e5                	mov    %esp,%ebp
 874b5f3:	83 ec 28             	sub    $0x28,%esp
 874b5f6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 874b5f9:	e8 fa 77 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874b5fe:	81 c3 9a 15 c2 00    	add    $0xc2159a,%ebx
 874b604:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874b607:	8b 75 10             	mov    0x10(%ebp),%esi
 874b60a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 874b60d:	8b 7d 08             	mov    0x8(%ebp),%edi
 874b610:	89 74 24 04          	mov    %esi,0x4(%esp)
 874b614:	89 3c 24             	mov    %edi,(%esp)
 874b617:	e8 04 ff ff ff       	call   874b520 <_ZN5yaSSL17ServerKeyExchange9createKeyERNS_3SSLE>
 874b61c:	89 34 24             	mov    %esi,(%esp)
 874b61f:	e8 8c 2a 00 00       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 874b624:	85 c0                	test   %eax,%eax
 874b626:	75 2c                	jne    874b654 <_ZN5yaSSL17ServerKeyExchange7ProcessERNS_12input_bufferERNS_3SSLE+0x64>
 874b628:	8b 47 08             	mov    0x8(%edi),%eax
 874b62b:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 874b62e:	8b 10                	mov    (%eax),%edx
 874b630:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874b634:	89 04 24             	mov    %eax,(%esp)
 874b637:	89 74 24 04          	mov    %esi,0x4(%esp)
 874b63b:	ff 52 0c             	call   *0xc(%edx)
 874b63e:	89 34 24             	mov    %esi,(%esp)
 874b641:	e8 8a 2c 00 00       	call   874e2d0 <_ZN5yaSSL3SSL9useStatesEv>
 874b646:	89 04 24             	mov    %eax,(%esp)
 874b649:	e8 d2 28 00 00       	call   874df20 <_ZN5yaSSL6States9useClientEv>
 874b64e:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
 874b654:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874b657:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874b65a:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874b65d:	89 ec                	mov    %ebp,%esp
 874b65f:	5d                   	pop    %ebp
 874b660:	c3                   	ret
 874b661:	90                   	nop
 874b662:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874b669:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::ServerKeyExchange::Process @ 0x874b5f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerKeyExchange::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall
yaSSL::ServerKeyExchange::Process(ServerKeyExchange *this,input_buffer *param_1,SSL *param_2)

{
  int iVar1;
  States *this_00;
  undefined4 *puVar2;
  
  createKey(this,param_2);
  iVar1 = SSL::GetError(param_2);
  if (iVar1 == 0) {
    (**(code **)(**(int **)(this + 8) + 0xc))(*(int **)(this + 8),param_2,param_1);
    this_00 = (States *)SSL::useStates(param_2);
    puVar2 = (undefined4 *)States::useClient(this_00);
    *puVar2 = 3;
  }
  return;
}

```

---

## ServerKeyExchange

```asm
// === 08746f40 yaSSL::ServerKeyExchange::ServerKeyExchange  [0x08746f40-0x8746f6f] ===
 8746f40:	e8 7f d6 fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8746f45:	81 c1 53 5c c2 00    	add    $0xc25c53,%ecx
 8746f4b:	55                   	push   %ebp
 8746f4c:	89 e5                	mov    %esp,%ebp
 8746f4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8746f51:	8b 91 c0 fb ff ff    	mov    -0x440(%ecx),%edx
 8746f57:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8746f5e:	83 c2 08             	add    $0x8,%edx
 8746f61:	89 10                	mov    %edx,(%eax)
 8746f63:	5d                   	pop    %ebp
 8746f64:	c3                   	ret
 8746f65:	90                   	nop
 8746f66:	8d 76 00             	lea    0x0(%esi),%esi
 8746f69:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::ServerKeyExchange::ServerKeyExchange @ 0x8746f40

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::ServerKeyExchange::ServerKeyExchange() */

void __thiscall yaSSL::ServerKeyExchange::ServerKeyExchange(ServerKeyExchange *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0936c758;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)this = puVar1 + 8;
  return;
}

```

---

## ServerKeyExchange_0874b5b0

```asm
// === 0874b5b0 yaSSL::ServerKeyExchange::ServerKeyExchange  [0x0874b5b0-0x874b5ef] ===
 874b5b0:	55                   	push   %ebp
 874b5b1:	89 e5                	mov    %esp,%ebp
 874b5b3:	53                   	push   %ebx
 874b5b4:	e8 3f 78 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874b5b9:	81 c3 df 15 c2 00    	add    $0xc215df,%ebx
 874b5bf:	83 ec 14             	sub    $0x14,%esp
 874b5c2:	8b 45 08             	mov    0x8(%ebp),%eax
 874b5c5:	8b 93 c0 fb ff ff    	mov    -0x440(%ebx),%edx
 874b5cb:	83 c2 08             	add    $0x8,%edx
 874b5ce:	89 10                	mov    %edx,(%eax)
 874b5d0:	8b 55 0c             	mov    0xc(%ebp),%edx
 874b5d3:	89 04 24             	mov    %eax,(%esp)
 874b5d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 874b5da:	e8 41 ff ff ff       	call   874b520 <_ZN5yaSSL17ServerKeyExchange9createKeyERNS_3SSLE>
 874b5df:	83 c4 14             	add    $0x14,%esp
 874b5e2:	5b                   	pop    %ebx
 874b5e3:	5d                   	pop    %ebp
 874b5e4:	c3                   	ret
 874b5e5:	90                   	nop
 874b5e6:	8d 76 00             	lea    0x0(%esi),%esi
 874b5e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::ServerKeyExchange::ServerKeyExchange @ 0x874b5b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerKeyExchange::ServerKeyExchange(yaSSL::SSL&) */

void __thiscall yaSSL::ServerKeyExchange::ServerKeyExchange(ServerKeyExchange *this,SSL *param_1)

{
  *(undefined **)this = PTR_vtable_0936c758 + 8;
  createKey(this,param_1);
  return;
}

```

---

## build

```asm
// === 08746f70 yaSSL::ServerKeyExchange::build  [0x08746f70-0x8746fbf] ===
 8746f70:	55                   	push   %ebp
 8746f71:	89 e5                	mov    %esp,%ebp
 8746f73:	83 ec 18             	sub    $0x18,%esp
 8746f76:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8746f79:	8b 75 08             	mov    0x8(%ebp),%esi
 8746f7c:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8746f7f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8746f82:	e8 71 be fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8746f87:	81 c3 11 5c c2 00    	add    $0xc25c11,%ebx
 8746f8d:	8b 46 08             	mov    0x8(%esi),%eax
 8746f90:	8b 10                	mov    (%eax),%edx
 8746f92:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8746f96:	89 04 24             	mov    %eax,(%esp)
 8746f99:	ff 52 08             	call   *0x8(%edx)
 8746f9c:	8b 46 08             	mov    0x8(%esi),%eax
 8746f9f:	8b 10                	mov    (%eax),%edx
 8746fa1:	89 04 24             	mov    %eax,(%esp)
 8746fa4:	ff 52 10             	call   *0x10(%edx)
 8746fa7:	89 34 24             	mov    %esi,(%esp)
 8746faa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8746fae:	e8 fd fa ff ff       	call   8746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>
 8746fb3:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8746fb6:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8746fb9:	89 ec                	mov    %ebp,%esp
 8746fbb:	5d                   	pop    %ebp
 8746fbc:	c3                   	ret
 8746fbd:	90                   	nop
 8746fbe:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::ServerKeyExchange::build @ 0x8746f70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerKeyExchange::build(yaSSL::SSL&) */

void __thiscall yaSSL::ServerKeyExchange::build(ServerKeyExchange *this,SSL *param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(this + 8) + 8))(*(int **)(this + 8),param_1);
  iVar1 = (**(code **)(**(int **)(this + 8) + 0x10))(*(int **)(this + 8));
  HandShakeBase::set_length((HandShakeBase *)this,iVar1);
  return;
}

```

---

## createKey

```asm
// === 0874b520 yaSSL::ServerKeyExchange::createKey  [0x0874b520-0x874b5af] ===
 874b520:	55                   	push   %ebp
 874b521:	89 e5                	mov    %esp,%ebp
 874b523:	57                   	push   %edi
 874b524:	56                   	push   %esi
 874b525:	53                   	push   %ebx
 874b526:	e8 cd 78 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874b52b:	81 c3 6d 16 c2 00    	add    $0xc2166d,%ebx
 874b531:	83 ec 1c             	sub    $0x1c,%esp
 874b534:	8b 75 0c             	mov    0xc(%ebp),%esi
 874b537:	89 34 24             	mov    %esi,(%esp)
 874b53a:	e8 41 5c 00 00       	call   8751180 <_ZNK5yaSSL3SSL10getFactoryEv>
 874b53f:	89 04 24             	mov    %eax,(%esp)
 874b542:	e8 59 2a 00 00       	call   874dfa0 <_ZNK5yaSSL10sslFactory12getServerKeyEv>
 874b547:	89 34 24             	mov    %esi,(%esp)
 874b54a:	89 c7                	mov    %eax,%edi
 874b54c:	e8 1f 2b 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874b551:	89 04 24             	mov    %eax,(%esp)
 874b554:	e8 f7 34 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874b559:	8b 4f 04             	mov    0x4(%edi),%ecx
 874b55c:	8b 50 1c             	mov    0x1c(%eax),%edx
 874b55f:	8b 07                	mov    (%edi),%eax
 874b561:	39 c8                	cmp    %ecx,%eax
 874b563:	75 0a                	jne    874b56f <_ZN5yaSSL17ServerKeyExchange9createKeyERNS_3SSLE+0x4f>
 874b565:	eb 21                	jmp    874b588 <_ZN5yaSSL17ServerKeyExchange9createKeyERNS_3SSLE+0x68>
 874b567:	90                   	nop
 874b568:	83 c0 08             	add    $0x8,%eax
 874b56b:	39 c1                	cmp    %eax,%ecx
 874b56d:	74 19                	je     874b588 <_ZN5yaSSL17ServerKeyExchange9createKeyERNS_3SSLE+0x68>
 874b56f:	3b 10                	cmp    (%eax),%edx
 874b571:	75 f5                	jne    874b568 <_ZN5yaSSL17ServerKeyExchange9createKeyERNS_3SSLE+0x48>
 874b573:	ff 50 04             	call   *0x4(%eax)
 874b576:	8b 55 08             	mov    0x8(%ebp),%edx
 874b579:	85 c0                	test   %eax,%eax
 874b57b:	89 42 08             	mov    %eax,0x8(%edx)
 874b57e:	74 12                	je     874b592 <_ZN5yaSSL17ServerKeyExchange9createKeyERNS_3SSLE+0x72>
 874b580:	83 c4 1c             	add    $0x1c,%esp
 874b583:	5b                   	pop    %ebx
 874b584:	5e                   	pop    %esi
 874b585:	5f                   	pop    %edi
 874b586:	5d                   	pop    %ebp
 874b587:	c3                   	ret
 874b588:	8b 45 08             	mov    0x8(%ebp),%eax
 874b58b:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 874b592:	89 34 24             	mov    %esi,(%esp)
 874b595:	c7 44 24 04 67 00 00 	movl   $0x67,0x4(%esp)
 874b59c:	00 
 874b59d:	e8 2e 2a 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874b5a2:	83 c4 1c             	add    $0x1c,%esp
 874b5a5:	5b                   	pop    %ebx
 874b5a6:	5e                   	pop    %esi
 874b5a7:	5f                   	pop    %edi
 874b5a8:	5d                   	pop    %ebp
 874b5a9:	c3                   	ret
 874b5aa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ServerKeyExchange::createKey @ 0x874b520

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerKeyExchange::createKey(yaSSL::SSL&) */

void __thiscall yaSSL::ServerKeyExchange::createKey(ServerKeyExchange *this,SSL *param_1)

{
  sslFactory *this_00;
  undefined4 *puVar1;
  Security *this_01;
  int iVar2;
  int *piVar3;
  
  this_00 = (sslFactory *)SSL::getFactory();
  puVar1 = (undefined4 *)sslFactory::getServerKey(this_00);
  this_01 = (Security *)SSL::getSecurity(param_1);
  iVar2 = Security::get_parms(this_01);
  piVar3 = (int *)*puVar1;
  do {
    if (piVar3 == (int *)puVar1[1]) {
      *(undefined4 *)(this + 8) = 0;
LAB_0874b592:
      SSL::SetError(param_1,0x67);
      return;
    }
    if (*(int *)(iVar2 + 0x1c) == *piVar3) {
      iVar2 = (*(code *)piVar3[1])();
      *(int *)(this + 8) = iVar2;
      if (iVar2 != 0) {
        return;
      }
      goto LAB_0874b592;
    }
    piVar3 = piVar3 + 2;
  } while( true );
}

```

---

## get

```asm
// === 08748560 yaSSL::ServerKeyExchange::get  [0x08748560-0x874858f] ===
 8748560:	55                   	push   %ebp
 8748561:	89 e5                	mov    %esp,%ebp
 8748563:	53                   	push   %ebx
 8748564:	83 ec 14             	sub    $0x14,%esp
 8748567:	8b 45 08             	mov    0x8(%ebp),%eax
 874856a:	e8 89 a8 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874856f:	81 c3 29 46 c2 00    	add    $0xc24629,%ebx
 8748575:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748579:	8b 45 0c             	mov    0xc(%ebp),%eax
 874857c:	89 04 24             	mov    %eax,(%esp)
 874857f:	e8 7c ff ff ff       	call   8748500 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17ServerKeyExchangeE>
 8748584:	83 c4 14             	add    $0x14,%esp
 8748587:	5b                   	pop    %ebx
 8748588:	5d                   	pop    %ebp
 8748589:	c3                   	ret
 874858a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ServerKeyExchange::get @ 0x8748560

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerKeyExchange::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::ServerKeyExchange::get(ServerKeyExchange *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}

```

---

## getKey

```asm
// === 08746fc0 yaSSL::ServerKeyExchange::getKey  [0x08746fc0-0x8746fdf] ===
 8746fc0:	55                   	push   %ebp
 8746fc1:	89 e5                	mov    %esp,%ebp
 8746fc3:	83 ec 18             	sub    $0x18,%esp
 8746fc6:	8b 45 08             	mov    0x8(%ebp),%eax
 8746fc9:	8b 40 08             	mov    0x8(%eax),%eax
 8746fcc:	8b 10                	mov    (%eax),%edx
 8746fce:	89 04 24             	mov    %eax,(%esp)
 8746fd1:	ff 52 14             	call   *0x14(%edx)
 8746fd4:	c9                   	leave
 8746fd5:	c3                   	ret
 8746fd6:	8d 76 00             	lea    0x0(%esi),%esi
 8746fd9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::ServerKeyExchange::getKey @ 0x8746fc0

/* yaSSL::ServerKeyExchange::getKey() const */

void __thiscall yaSSL::ServerKeyExchange::getKey(ServerKeyExchange *this)

{
  (**(code **)(**(int **)(this + 8) + 0x14))(*(int **)(this + 8));
  return;
}

```

---

## getKeyLength

```asm
// === 08746fe0 yaSSL::ServerKeyExchange::getKeyLength  [0x08746fe0-0x8746fff] ===
 8746fe0:	55                   	push   %ebp
 8746fe1:	89 e5                	mov    %esp,%ebp
 8746fe3:	83 ec 18             	sub    $0x18,%esp
 8746fe6:	8b 45 08             	mov    0x8(%ebp),%eax
 8746fe9:	8b 40 08             	mov    0x8(%eax),%eax
 8746fec:	8b 10                	mov    (%eax),%edx
 8746fee:	89 04 24             	mov    %eax,(%esp)
 8746ff1:	ff 52 10             	call   *0x10(%edx)
 8746ff4:	c9                   	leave
 8746ff5:	c3                   	ret
 8746ff6:	8d 76 00             	lea    0x0(%esi),%esi
 8746ff9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::ServerKeyExchange::getKeyLength @ 0x8746fe0

/* yaSSL::ServerKeyExchange::getKeyLength() const */

void __thiscall yaSSL::ServerKeyExchange::getKeyLength(ServerKeyExchange *this)

{
  (**(code **)(**(int **)(this + 8) + 0x10))(*(int **)(this + 8));
  return;
}

```

---

## get_type

```asm
// === 08747010 yaSSL::ServerKeyExchange::get_type  [0x08747010-0x874701f] ===
 8747010:	55                   	push   %ebp
 8747011:	b8 0c 00 00 00       	mov    $0xc,%eax
 8747016:	89 e5                	mov    %esp,%ebp
 8747018:	5d                   	pop    %ebp
 8747019:	c3                   	ret
 874701a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ServerKeyExchange::get_type @ 0x8747010

/* yaSSL::ServerKeyExchange::get_type() const */

undefined4 yaSSL::ServerKeyExchange::get_type(void)

{
  return 0xc;
}

```

---

## set

```asm
// === 08747000 yaSSL::ServerKeyExchange::set  [0x08747000-0x874700f] ===
 8747000:	55                   	push   %ebp
 8747001:	89 e5                	mov    %esp,%ebp
 8747003:	8b 45 0c             	mov    0xc(%ebp),%eax
 8747006:	5d                   	pop    %ebp
 8747007:	c3                   	ret
 8747008:	90                   	nop
 8747009:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ServerKeyExchange::set @ 0x8747000

/* yaSSL::ServerKeyExchange::set(yaSSL::input_buffer&) */

input_buffer * __thiscall
yaSSL::ServerKeyExchange::set(ServerKeyExchange *this,input_buffer *param_1)

{
  return param_1;
}

```

---

## ~ServerKeyExchange

```asm
// === 08748690 yaSSL::ServerKeyExchange::~ServerKeyExchange  [0x08748690-0x87486ef] ===
 8748690:	55                   	push   %ebp
 8748691:	89 e5                	mov    %esp,%ebp
 8748693:	83 ec 28             	sub    $0x28,%esp
 8748696:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8748699:	e8 5a a7 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874869e:	81 c3 fa 44 c2 00    	add    $0xc244fa,%ebx
 87486a4:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87486a7:	8b 7d 08             	mov    0x8(%ebp),%edi
 87486aa:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87486ad:	8b 77 08             	mov    0x8(%edi),%esi
 87486b0:	8b 83 c0 fb ff ff    	mov    -0x440(%ebx),%eax
 87486b6:	83 c0 08             	add    $0x8,%eax
 87486b9:	85 f6                	test   %esi,%esi
 87486bb:	89 07                	mov    %eax,(%edi)
 87486bd:	74 07                	je     87486c6 <_ZN5yaSSL17ServerKeyExchangeD1Ev+0x36>
 87486bf:	8b 06                	mov    (%esi),%eax
 87486c1:	89 34 24             	mov    %esi,(%esp)
 87486c4:	ff 10                	call   *(%eax)
 87486c6:	89 34 24             	mov    %esi,(%esp)
 87486c9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87486ce:	e8 4d 81 00 00       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 87486d3:	8b 83 4c fa ff ff    	mov    -0x5b4(%ebx),%eax
 87486d9:	83 c0 08             	add    $0x8,%eax
 87486dc:	89 07                	mov    %eax,(%edi)
 87486de:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87486e1:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87486e4:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87486e7:	89 ec                	mov    %ebp,%esp
 87486e9:	5d                   	pop    %ebp
 87486ea:	c3                   	ret
 87486eb:	90                   	nop
 87486ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ServerKeyExchange::~ServerKeyExchange @ 0x8748690

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerKeyExchange::~ServerKeyExchange() */

void __thiscall yaSSL::ServerKeyExchange::~ServerKeyExchange(ServerKeyExchange *this)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 8);
  *(undefined **)this = PTR_vtable_0936c758 + 8;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
  }
  operator_delete(puVar1,0);
  *(undefined **)this = PTR_vtable_0936c5e4 + 8;
  return;
}

```

---

## ~ServerKeyExchange_087486f0

```asm
// === 087486f0 yaSSL::ServerKeyExchange::~ServerKeyExchange  [0x087486f0-0x874871f] ===
 87486f0:	55                   	push   %ebp
 87486f1:	89 e5                	mov    %esp,%ebp
 87486f3:	53                   	push   %ebx
 87486f4:	e8 ff a6 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87486f9:	81 c3 9f 44 c2 00    	add    $0xc2449f,%ebx
 87486ff:	83 ec 14             	sub    $0x14,%esp
 8748702:	8b 45 08             	mov    0x8(%ebp),%eax
 8748705:	89 04 24             	mov    %eax,(%esp)
 8748708:	e8 83 ff ff ff       	call   8748690 <_ZN5yaSSL17ServerKeyExchangeD1Ev>
 874870d:	83 c4 14             	add    $0x14,%esp
 8748710:	5b                   	pop    %ebx
 8748711:	5d                   	pop    %ebp
 8748712:	c3                   	ret
 8748713:	90                   	nop
 8748714:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874871a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::ServerKeyExchange::~ServerKeyExchange @ 0x87486f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerKeyExchange::~ServerKeyExchange() */

void __thiscall yaSSL::ServerKeyExchange::~ServerKeyExchange(ServerKeyExchange *this)

{
  ~ServerKeyExchange(this);
  return;
}

```

