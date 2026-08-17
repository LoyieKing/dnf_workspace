# __gnu_cxx

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## __atomic_add

```asm
// === 0854e157 __gnu_cxx::__atomic_add  [0x0854e157-0x854e164] ===
 854e157:	55                   	push   %ebp
 854e158:	89 e5                	mov    %esp,%ebp
 854e15a:	8b 55 0c             	mov    0xc(%ebp),%edx
 854e15d:	8b 45 08             	mov    0x8(%ebp),%eax
 854e160:	f0 01 10             	lock add %edx,(%eax)
 854e163:	5d                   	pop    %ebp
 854e164:	c3                   	ret

```

```c
// __gnu_cxx::__atomic_add @ 0x854e157

/* __gnu_cxx::__atomic_add(int volatile*, int) */

void __gnu_cxx::__atomic_add(int *param_1,int param_2)

{
  LOCK();
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return;
}

```

---

## __atomic_add_08ad38d3

```asm
// === 08ad38d3 __gnu_cxx::__atomic_add  [0x08ad38d3-0x8ad38e0] ===
 8ad38d3:	55                   	push   %ebp
 8ad38d4:	89 e5                	mov    %esp,%ebp
 8ad38d6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad38d9:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad38dc:	f0 01 10             	lock add %edx,(%eax)
 8ad38df:	5d                   	pop    %ebp
 8ad38e0:	c3                   	ret

```

```c
// __gnu_cxx::__atomic_add @ 0x8ad38d3

/* __gnu_cxx::__atomic_add(int volatile*, int) */

void __gnu_cxx::__atomic_add(int *param_1,int param_2)

{
  LOCK();
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return;
}

```

---

## __atomic_add_dispatch

```asm
// === 0854e1d7 __gnu_cxx::__atomic_add_dispatch  [0x0854e1d7-0x854e212] ===
 854e1d7:	55                   	push   %ebp
 854e1d8:	89 e5                	mov    %esp,%ebp
 854e1da:	83 ec 08             	sub    $0x8,%esp
 854e1dd:	e8 52 ff ff ff       	call   854e134 <_ZL18__gthread_active_pv>
 854e1e2:	85 c0                	test   %eax,%eax
 854e1e4:	0f 95 c0             	setne  %al
 854e1e7:	84 c0                	test   %al,%al
 854e1e9:	74 14                	je     854e1ff <_ZN9__gnu_cxxL21__atomic_add_dispatchEPii+0x28>
 854e1eb:	8b 45 08             	mov    0x8(%ebp),%eax
 854e1ee:	8b 55 0c             	mov    0xc(%ebp),%edx
 854e1f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 854e1f5:	89 04 24             	mov    %eax,(%esp)
 854e1f8:	e8 5a ff ff ff       	call   854e157 <_ZN9__gnu_cxxL12__atomic_addEPVii>
 854e1fd:	eb 12                	jmp    854e211 <_ZN9__gnu_cxxL21__atomic_add_dispatchEPii+0x3a>
 854e1ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 854e202:	89 44 24 04          	mov    %eax,0x4(%esp)
 854e206:	8b 45 08             	mov    0x8(%ebp),%eax
 854e209:	89 04 24             	mov    %eax,(%esp)
 854e20c:	e8 76 ff ff ff       	call   854e187 <_ZN9__gnu_cxxL19__atomic_add_singleEPii>
 854e211:	c9                   	leave
 854e212:	c3                   	ret

```

```c
// __gnu_cxx::__atomic_add_dispatch @ 0x854e1d7

/* __gnu_cxx::__atomic_add_dispatch(int*, int) */

void __gnu_cxx::__atomic_add_dispatch(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __gthread_active_p();
  if (iVar1 == 0) {
    __atomic_add_single(param_1,param_2);
  }
  else {
    __atomic_add(param_1,param_2);
  }
  return;
}

```

---

## __atomic_add_dispatch_08ad3953

```asm
// === 08ad3953 __gnu_cxx::__atomic_add_dispatch  [0x08ad3953-0x8ad398f] ===
 8ad3953:	55                   	push   %ebp
 8ad3954:	89 e5                	mov    %esp,%ebp
 8ad3956:	83 ec 08             	sub    $0x8,%esp
 8ad3959:	e8 52 ff ff ff       	call   8ad38b0 <_ZL18__gthread_active_pv>
 8ad395e:	85 c0                	test   %eax,%eax
 8ad3960:	0f 95 c0             	setne  %al
 8ad3963:	84 c0                	test   %al,%al
 8ad3965:	74 14                	je     8ad397b <_ZN9__gnu_cxxL21__atomic_add_dispatchEPii+0x28>
 8ad3967:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad396a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad396d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad3971:	89 04 24             	mov    %eax,(%esp)
 8ad3974:	e8 5a ff ff ff       	call   8ad38d3 <_ZN9__gnu_cxxL12__atomic_addEPVii>
 8ad3979:	eb 12                	jmp    8ad398d <_ZN9__gnu_cxxL21__atomic_add_dispatchEPii+0x3a>
 8ad397b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad397e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad3982:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3985:	89 04 24             	mov    %eax,(%esp)
 8ad3988:	e8 76 ff ff ff       	call   8ad3903 <_ZN9__gnu_cxxL19__atomic_add_singleEPii>
 8ad398d:	c9                   	leave
 8ad398e:	c3                   	ret
 8ad398f:	90                   	nop

```

```c
// __gnu_cxx::__atomic_add_dispatch @ 0x8ad3953

/* __gnu_cxx::__atomic_add_dispatch(int*, int) */

void __gnu_cxx::__atomic_add_dispatch(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __gthread_active_p();
  if (iVar1 == 0) {
    __atomic_add_single(param_1,param_2);
  }
  else {
    __atomic_add(param_1,param_2);
  }
  return;
}

```

---

## __atomic_add_single

```asm
// === 0854e187 __gnu_cxx::__atomic_add_single  [0x0854e187-0x854e19a] ===
 854e187:	55                   	push   %ebp
 854e188:	89 e5                	mov    %esp,%ebp
 854e18a:	8b 45 08             	mov    0x8(%ebp),%eax
 854e18d:	8b 00                	mov    (%eax),%eax
 854e18f:	89 c2                	mov    %eax,%edx
 854e191:	03 55 0c             	add    0xc(%ebp),%edx
 854e194:	8b 45 08             	mov    0x8(%ebp),%eax
 854e197:	89 10                	mov    %edx,(%eax)
 854e199:	5d                   	pop    %ebp
 854e19a:	c3                   	ret

```

```c
// __gnu_cxx::__atomic_add_single @ 0x854e187

/* __gnu_cxx::__atomic_add_single(int*, int) */

void __gnu_cxx::__atomic_add_single(int *param_1,int param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}

```

---

## __atomic_add_single_08ad3903

```asm
// === 08ad3903 __gnu_cxx::__atomic_add_single  [0x08ad3903-0x8ad3916] ===
 8ad3903:	55                   	push   %ebp
 8ad3904:	89 e5                	mov    %esp,%ebp
 8ad3906:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3909:	8b 00                	mov    (%eax),%eax
 8ad390b:	89 c2                	mov    %eax,%edx
 8ad390d:	03 55 0c             	add    0xc(%ebp),%edx
 8ad3910:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3913:	89 10                	mov    %edx,(%eax)
 8ad3915:	5d                   	pop    %ebp
 8ad3916:	c3                   	ret

```

```c
// __gnu_cxx::__atomic_add_single @ 0x8ad3903

/* __gnu_cxx::__atomic_add_single(int*, int) */

void __gnu_cxx::__atomic_add_single(int *param_1,int param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}

```

---

## __exchange_and_add

```asm
// === 0854e146 __gnu_cxx::__exchange_and_add  [0x0854e146-0x854e156] ===
 854e146:	55                   	push   %ebp
 854e147:	89 e5                	mov    %esp,%ebp
 854e149:	8b 55 0c             	mov    0xc(%ebp),%edx
 854e14c:	8b 45 08             	mov    0x8(%ebp),%eax
 854e14f:	f0 0f c1 10          	lock xadd %edx,(%eax)
 854e153:	89 d0                	mov    %edx,%eax
 854e155:	5d                   	pop    %ebp
 854e156:	c3                   	ret

```

```c
// __gnu_cxx::__exchange_and_add @ 0x854e146

/* __gnu_cxx::__exchange_and_add(int volatile*, int) */

int __gnu_cxx::__exchange_and_add(int *param_1,int param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1;
}

```

---

## __exchange_and_add_08ad38c2

```asm
// === 08ad38c2 __gnu_cxx::__exchange_and_add  [0x08ad38c2-0x8ad38d2] ===
 8ad38c2:	55                   	push   %ebp
 8ad38c3:	89 e5                	mov    %esp,%ebp
 8ad38c5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad38c8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad38cb:	f0 0f c1 10          	lock xadd %edx,(%eax)
 8ad38cf:	89 d0                	mov    %edx,%eax
 8ad38d1:	5d                   	pop    %ebp
 8ad38d2:	c3                   	ret

```

```c
// __gnu_cxx::__exchange_and_add @ 0x8ad38c2

/* __gnu_cxx::__exchange_and_add(int volatile*, int) */

int __gnu_cxx::__exchange_and_add(int *param_1,int param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1;
}

```

---

## __exchange_and_add_dispatch

```asm
// === 0854e19b __gnu_cxx::__exchange_and_add_dispatch  [0x0854e19b-0x854e1d6] ===
 854e19b:	55                   	push   %ebp
 854e19c:	89 e5                	mov    %esp,%ebp
 854e19e:	83 ec 08             	sub    $0x8,%esp
 854e1a1:	e8 8e ff ff ff       	call   854e134 <_ZL18__gthread_active_pv>
 854e1a6:	85 c0                	test   %eax,%eax
 854e1a8:	0f 95 c0             	setne  %al
 854e1ab:	84 c0                	test   %al,%al
 854e1ad:	74 14                	je     854e1c3 <_ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii+0x28>
 854e1af:	8b 45 08             	mov    0x8(%ebp),%eax
 854e1b2:	8b 55 0c             	mov    0xc(%ebp),%edx
 854e1b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 854e1b9:	89 04 24             	mov    %eax,(%esp)
 854e1bc:	e8 85 ff ff ff       	call   854e146 <_ZN9__gnu_cxxL18__exchange_and_addEPVii>
 854e1c1:	eb 12                	jmp    854e1d5 <_ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii+0x3a>
 854e1c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 854e1c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 854e1ca:	8b 45 08             	mov    0x8(%ebp),%eax
 854e1cd:	89 04 24             	mov    %eax,(%esp)
 854e1d0:	e8 90 ff ff ff       	call   854e165 <_ZN9__gnu_cxxL25__exchange_and_add_singleEPii>
 854e1d5:	c9                   	leave
 854e1d6:	c3                   	ret

```

```c
// __gnu_cxx::__exchange_and_add_dispatch @ 0x854e19b

/* __gnu_cxx::__exchange_and_add_dispatch(int*, int) */

void __gnu_cxx::__exchange_and_add_dispatch(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __gthread_active_p();
  if (iVar1 == 0) {
    __exchange_and_add_single(param_1,param_2);
  }
  else {
    __exchange_and_add(param_1,param_2);
  }
  return;
}

```

---

## __exchange_and_add_dispatch_08ad3917

```asm
// === 08ad3917 __gnu_cxx::__exchange_and_add_dispatch  [0x08ad3917-0x8ad3952] ===
 8ad3917:	55                   	push   %ebp
 8ad3918:	89 e5                	mov    %esp,%ebp
 8ad391a:	83 ec 08             	sub    $0x8,%esp
 8ad391d:	e8 8e ff ff ff       	call   8ad38b0 <_ZL18__gthread_active_pv>
 8ad3922:	85 c0                	test   %eax,%eax
 8ad3924:	0f 95 c0             	setne  %al
 8ad3927:	84 c0                	test   %al,%al
 8ad3929:	74 14                	je     8ad393f <_ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii+0x28>
 8ad392b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad392e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad3931:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad3935:	89 04 24             	mov    %eax,(%esp)
 8ad3938:	e8 85 ff ff ff       	call   8ad38c2 <_ZN9__gnu_cxxL18__exchange_and_addEPVii>
 8ad393d:	eb 12                	jmp    8ad3951 <_ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii+0x3a>
 8ad393f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3942:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad3946:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3949:	89 04 24             	mov    %eax,(%esp)
 8ad394c:	e8 90 ff ff ff       	call   8ad38e1 <_ZN9__gnu_cxxL25__exchange_and_add_singleEPii>
 8ad3951:	c9                   	leave
 8ad3952:	c3                   	ret

```

```c
// __gnu_cxx::__exchange_and_add_dispatch @ 0x8ad3917

/* __gnu_cxx::__exchange_and_add_dispatch(int*, int) */

void __gnu_cxx::__exchange_and_add_dispatch(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __gthread_active_p();
  if (iVar1 == 0) {
    __exchange_and_add_single(param_1,param_2);
  }
  else {
    __exchange_and_add(param_1,param_2);
  }
  return;
}

```

---

## __exchange_and_add_single

```asm
// === 0854e165 __gnu_cxx::__exchange_and_add_single  [0x0854e165-0x854e186] ===
 854e165:	55                   	push   %ebp
 854e166:	89 e5                	mov    %esp,%ebp
 854e168:	83 ec 10             	sub    $0x10,%esp
 854e16b:	8b 45 08             	mov    0x8(%ebp),%eax
 854e16e:	8b 00                	mov    (%eax),%eax
 854e170:	89 45 fc             	mov    %eax,-0x4(%ebp)
 854e173:	8b 45 08             	mov    0x8(%ebp),%eax
 854e176:	8b 00                	mov    (%eax),%eax
 854e178:	89 c2                	mov    %eax,%edx
 854e17a:	03 55 0c             	add    0xc(%ebp),%edx
 854e17d:	8b 45 08             	mov    0x8(%ebp),%eax
 854e180:	89 10                	mov    %edx,(%eax)
 854e182:	8b 45 fc             	mov    -0x4(%ebp),%eax
 854e185:	c9                   	leave
 854e186:	c3                   	ret

```

```c
// __gnu_cxx::__exchange_and_add_single @ 0x854e165

/* __gnu_cxx::__exchange_and_add_single(int*, int) */

int __gnu_cxx::__exchange_and_add_single(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  return iVar1;
}

```

---

## __exchange_and_add_single_08ad38e1

```asm
// === 08ad38e1 __gnu_cxx::__exchange_and_add_single  [0x08ad38e1-0x8ad3902] ===
 8ad38e1:	55                   	push   %ebp
 8ad38e2:	89 e5                	mov    %esp,%ebp
 8ad38e4:	83 ec 10             	sub    $0x10,%esp
 8ad38e7:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad38ea:	8b 00                	mov    (%eax),%eax
 8ad38ec:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8ad38ef:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad38f2:	8b 00                	mov    (%eax),%eax
 8ad38f4:	89 c2                	mov    %eax,%edx
 8ad38f6:	03 55 0c             	add    0xc(%ebp),%edx
 8ad38f9:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad38fc:	89 10                	mov    %edx,(%eax)
 8ad38fe:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8ad3901:	c9                   	leave
 8ad3902:	c3                   	ret

```

```c
// __gnu_cxx::__exchange_and_add_single @ 0x8ad38e1

/* __gnu_cxx::__exchange_and_add_single(int*, int) */

int __gnu_cxx::__exchange_and_add_single(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  return iVar1;
}

```

---

## __verbose_terminate_handler

```asm
// === 0872f5c0 __gnu_cxx::__verbose_terminate_handler  [0x0872f5c0-0x872f7af] ===
 872f5c0:	55                   	push   %ebp
 872f5c1:	89 e5                	mov    %esp,%ebp
 872f5c3:	83 ec 48             	sub    $0x48,%esp
 872f5c6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 872f5c9:	e8 2a 38 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 872f5ce:	81 c3 ca d5 c3 00    	add    $0xc3d5ca,%ebx
 872f5d4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 872f5d7:	89 7d fc             	mov    %edi,-0x4(%ebp)
 872f5da:	80 bb 64 4c 12 00 00 	cmpb   $0x0,0x124c64(%ebx)
 872f5e1:	74 35                	je     872f618 <_ZN9__gnu_cxx27__verbose_terminate_handlerEv+0x58>
 872f5e3:	8b 83 b0 fe ff ff    	mov    -0x150(%ebx),%eax
 872f5e9:	8b 00                	mov    (%eax),%eax
 872f5eb:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 872f5f2:	00 
 872f5f3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 872f5fa:	00 
 872f5fb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 872f5ff:	8d 83 2a 5e 99 ff    	lea    -0x66a1d6(%ebx),%eax
 872f605:	89 04 24             	mov    %eax,(%esp)
 872f608:	e8 13 ed 94 ff       	call   807e320 <fwrite@plt>
 872f60d:	e8 5e eb 94 ff       	call   807e170 <abort@plt>
 872f612:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 872f618:	c6 83 64 4c 12 00 01 	movb   $0x1,0x124c64(%ebx)
 872f61f:	e8 4c 4d 00 00       	call   8734370 <__cxa_current_exception_type>
 872f624:	85 c0                	test   %eax,%eax
 872f626:	0f 84 cc 00 00 00    	je     872f6f8 <_ZN9__gnu_cxx27__verbose_terminate_handlerEv+0x138>
 872f62c:	8b 78 04             	mov    0x4(%eax),%edi
 872f62f:	31 c0                	xor    %eax,%eax
 872f631:	80 3f 2a             	cmpb   $0x2a,(%edi)
 872f634:	c7 45 e4 ff ff ff ff 	movl   $0xffffffff,-0x1c(%ebp)
 872f63b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 872f642:	00 
 872f643:	0f 94 c0             	sete   %al
 872f646:	01 c7                	add    %eax,%edi
 872f648:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 872f64b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 872f64f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 872f656:	00 
 872f657:	89 3c 24             	mov    %edi,(%esp)
 872f65a:	e8 d1 46 00 00       	call   8733d30 <__cxa_demangle>
 872f65f:	8b b3 b0 fe ff ff    	mov    -0x150(%ebx),%esi
 872f665:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 872f66c:	00 
 872f66d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 872f674:	00 
 872f675:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 872f678:	8b 06                	mov    (%esi),%eax
 872f67a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 872f67e:	8d 83 58 5e 99 ff    	lea    -0x66a1a8(%ebx),%eax
 872f684:	89 04 24             	mov    %eax,(%esp)
 872f687:	e8 94 ec 94 ff       	call   807e320 <fwrite@plt>
 872f68c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 872f68f:	85 d2                	test   %edx,%edx
 872f691:	75 45                	jne    872f6d8 <_ZN9__gnu_cxx27__verbose_terminate_handlerEv+0x118>
 872f693:	8b 06                	mov    (%esi),%eax
 872f695:	89 44 24 04          	mov    %eax,0x4(%esp)
 872f699:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 872f69c:	89 04 24             	mov    %eax,(%esp)
 872f69f:	e8 7c f0 94 ff       	call   807e720 <fputs@plt>
 872f6a4:	8b 06                	mov    (%esi),%eax
 872f6a6:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 872f6ad:	00 
 872f6ae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 872f6b5:	00 
 872f6b6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 872f6ba:	8d 83 48 5e 99 ff    	lea    -0x66a1b8(%ebx),%eax
 872f6c0:	89 04 24             	mov    %eax,(%esp)
 872f6c3:	e8 58 ec 94 ff       	call   807e320 <fwrite@plt>
 872f6c8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 872f6cb:	85 c0                	test   %eax,%eax
 872f6cd:	74 19                	je     872f6e8 <_ZN9__gnu_cxx27__verbose_terminate_handlerEv+0x128>
 872f6cf:	e8 0c 55 ff ff       	call   8724be0 <__cxa_rethrow>
 872f6d4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 872f6d8:	8b 06                	mov    (%esi),%eax
 872f6da:	89 3c 24             	mov    %edi,(%esp)
 872f6dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 872f6e1:	e8 3a f0 94 ff       	call   807e720 <fputs@plt>
 872f6e6:	eb bc                	jmp    872f6a4 <_ZN9__gnu_cxx27__verbose_terminate_handlerEv+0xe4>
 872f6e8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 872f6eb:	89 04 24             	mov    %eax,(%esp)
 872f6ee:	e8 bd e6 94 ff       	call   807ddb0 <free@plt>
 872f6f3:	eb da                	jmp    872f6cf <_ZN9__gnu_cxx27__verbose_terminate_handlerEv+0x10f>
 872f6f5:	8d 76 00             	lea    0x0(%esi),%esi
 872f6f8:	8b 83 b0 fe ff ff    	mov    -0x150(%ebx),%eax
 872f6fe:	8b 00                	mov    (%eax),%eax
 872f700:	c7 44 24 08 2d 00 00 	movl   $0x2d,0x8(%esp)
 872f707:	00 
 872f708:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 872f70f:	00 
 872f710:	89 44 24 0c          	mov    %eax,0xc(%esp)
 872f714:	8d 83 8c 5e 99 ff    	lea    -0x66a174(%ebx),%eax
 872f71a:	89 04 24             	mov    %eax,(%esp)
 872f71d:	e8 fe eb 94 ff       	call   807e320 <fwrite@plt>
 872f722:	e8 49 ea 94 ff       	call   807e170 <abort@plt>
 872f727:	83 fa 02             	cmp    $0x2,%edx
 872f72a:	74 0f                	je     872f73b <_ZN9__gnu_cxx27__verbose_terminate_handlerEv+0x17b>
 872f72c:	89 04 24             	mov    %eax,(%esp)
 872f72f:	e8 ac 65 ff ff       	call   8725ce0 <__cxa_begin_catch>
 872f734:	e8 f7 64 ff ff       	call   8725c30 <__cxa_end_catch>
 872f739:	eb e7                	jmp    872f722 <_ZN9__gnu_cxx27__verbose_terminate_handlerEv+0x162>
 872f73b:	89 04 24             	mov    %eax,(%esp)
 872f73e:	66 90                	xchg   %ax,%ax
 872f740:	e8 9b 65 ff ff       	call   8725ce0 <__cxa_begin_catch>
 872f745:	8b 10                	mov    (%eax),%edx
 872f747:	89 04 24             	mov    %eax,(%esp)
 872f74a:	ff 52 08             	call   *0x8(%edx)
 872f74d:	89 c7                	mov    %eax,%edi
 872f74f:	8b 06                	mov    (%esi),%eax
 872f751:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 872f758:	00 
 872f759:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 872f760:	00 
 872f761:	89 44 24 0c          	mov    %eax,0xc(%esp)
 872f765:	8d 83 4b 5e 99 ff    	lea    -0x66a1b5(%ebx),%eax
 872f76b:	89 04 24             	mov    %eax,(%esp)
 872f76e:	e8 ad eb 94 ff       	call   807e320 <fwrite@plt>
 872f773:	8b 06                	mov    (%esi),%eax
 872f775:	89 3c 24             	mov    %edi,(%esp)
 872f778:	89 44 24 04          	mov    %eax,0x4(%esp)
 872f77c:	e8 9f ef 94 ff       	call   807e720 <fputs@plt>
 872f781:	8b 06                	mov    (%esi),%eax
 872f783:	c7 04 24 0a 00 00 00 	movl   $0xa,(%esp)
 872f78a:	89 44 24 04          	mov    %eax,0x4(%esp)
 872f78e:	e8 2d ed 94 ff       	call   807e4c0 <fputc@plt>
 872f793:	eb 9f                	jmp    872f734 <_ZN9__gnu_cxx27__verbose_terminate_handlerEv+0x174>
 872f795:	89 c7                	mov    %eax,%edi
 872f797:	e8 94 64 ff ff       	call   8725c30 <__cxa_end_catch>
 872f79c:	89 3c 24             	mov    %edi,(%esp)
 872f79f:	e8 ac 3f 3b 00       	call   8ae3750 <_Unwind_Resume>
 872f7a4:	90                   	nop
 872f7a5:	90                   	nop
 872f7a6:	90                   	nop
 872f7a7:	90                   	nop
 872f7a8:	90                   	nop
 872f7a9:	90                   	nop
 872f7aa:	90                   	nop
 872f7ab:	90                   	nop
 872f7ac:	90                   	nop
 872f7ad:	90                   	nop
 872f7ae:	90                   	nop
 872f7af:	90                   	nop

```

```c
// __gnu_cxx::__verbose_terminate_handler @ 0x872f5c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __gnu_cxx::__verbose_terminate_handler() */

void __gnu_cxx::__verbose_terminate_handler(void)

{
  undefined *puVar1;
  int iVar2;
  char *__s;
  char *__s_00;
  int local_20 [4];
  
  if (__verbose_terminate_handler()::terminating != '\0') {
    fwrite("terminate called recursively\n",1,0x1d,*(FILE **)PTR_stderr_0936ca48);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __verbose_terminate_handler()::terminating = 1;
  iVar2 = __cxa_current_exception_type();
  if (iVar2 != 0) {
    local_20[0] = -1;
    __s_00 = *(char **)(iVar2 + 4) + (**(char **)(iVar2 + 4) == '*');
    __s = (char *)__cxa_demangle(__s_00,0,0,local_20);
    puVar1 = PTR_stderr_0936ca48;
    fwrite("terminate called after throwing an instance of \'",1,0x30,*(FILE **)PTR_stderr_0936ca48)
    ;
    if (local_20[0] == 0) {
      fputs(__s,*(FILE **)puVar1);
    }
    else {
      fputs(__s_00,*(FILE **)puVar1);
    }
    fwrite(&DAT_08d029e0,1,2,*(FILE **)puVar1);
    if (local_20[0] == 0) {
      free(__s);
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0872f6cf to 0872f6d3 has its CatchHandler @ 0872f727 */
    __cxa_rethrow();
  }
  fwrite("terminate called without an active exception\n",1,0x2d,*(FILE **)PTR_stderr_0936ca48);
                    /* WARNING: Subroutine does not return */
  abort();
}

```

