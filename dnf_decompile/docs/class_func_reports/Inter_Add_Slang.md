# Inter_Add_Slang

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d5498 Inter_Add_Slang::dispatch_sig  [0x084d5498-0x84d553d] ===
 84d5498:	55                   	push   %ebp
 84d5499:	89 e5                	mov    %esp,%ebp
 84d549b:	56                   	push   %esi
 84d549c:	53                   	push   %ebx
 84d549d:	83 ec 20             	sub    $0x20,%esp
 84d54a0:	8b 45 10             	mov    0x10(%ebp),%eax
 84d54a3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d54a6:	8d 45 f3             	lea    -0xd(%ebp),%eax
 84d54a9:	89 04 24             	mov    %eax,(%esp)
 84d54ac:	e8 1f ac 20 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 84d54b1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d54b4:	8d 50 0a             	lea    0xa(%eax),%edx
 84d54b7:	8d 45 f3             	lea    -0xd(%ebp),%eax
 84d54ba:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d54be:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d54c2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84d54c5:	89 04 24             	mov    %eax,(%esp)
 84d54c8:	e8 63 21 23 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 84d54cd:	eb 1b                	jmp    84d54ea <_ZN15Inter_Add_Slang12dispatch_sigEP5CUserPci+0x52>
 84d54cf:	89 d3                	mov    %edx,%ebx
 84d54d1:	89 c6                	mov    %eax,%esi
 84d54d3:	8d 45 f3             	lea    -0xd(%ebp),%eax
 84d54d6:	89 04 24             	mov    %eax,(%esp)
 84d54d9:	e8 12 ac 20 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84d54de:	89 f0                	mov    %esi,%eax
 84d54e0:	89 da                	mov    %ebx,%edx
 84d54e2:	89 04 24             	mov    %eax,(%esp)
 84d54e5:	e8 66 e2 60 00       	call   8ae3750 <_Unwind_Resume>
 84d54ea:	8d 45 f3             	lea    -0xd(%ebp),%eax
 84d54ed:	89 04 24             	mov    %eax,(%esp)
 84d54f0:	e8 fb ab 20 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84d54f5:	e8 07 fb d5 ff       	call   8235001 <_ZN16CSyncSlangFilter11GetInstanceEv>
 84d54fa:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84d54fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d5501:	89 04 24             	mov    %eax,(%esp)
 84d5504:	e8 21 92 15 00       	call   862e72a <_ZN16CSyncSlangFilter8AddSlangERKSs>
 84d5509:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d550e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84d5511:	89 04 24             	mov    %eax,(%esp)
 84d5514:	e8 c7 26 23 00       	call   8707be0 <_ZNSsD1Ev>
 84d5519:	89 d8                	mov    %ebx,%eax
 84d551b:	83 c4 20             	add    $0x20,%esp
 84d551e:	5b                   	pop    %ebx
 84d551f:	5e                   	pop    %esi
 84d5520:	5d                   	pop    %ebp
 84d5521:	c3                   	ret
 84d5522:	89 d3                	mov    %edx,%ebx
 84d5524:	89 c6                	mov    %eax,%esi
 84d5526:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84d5529:	89 04 24             	mov    %eax,(%esp)
 84d552c:	e8 af 26 23 00       	call   8707be0 <_ZNSsD1Ev>
 84d5531:	89 f0                	mov    %esi,%eax
 84d5533:	89 da                	mov    %ebx,%edx
 84d5535:	89 04 24             	mov    %eax,(%esp)
 84d5538:	e8 13 e2 60 00       	call   8ae3750 <_Unwind_Resume>
 84d553d:	90                   	nop

```

```c
// Inter_Add_Slang::dispatch_sig @ 0x84d5498

/* Inter_Add_Slang::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Add_Slang::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CSyncSlangFilter *this;
  string local_18;
  allocator<char> local_11;
  int local_10;
  
  local_10 = param_3;
  std::allocator<char>::allocator();
                    /* try { // try from 084d54c8 to 084d54cc has its CatchHandler @ 084d54cf */
  std::string::string((string *)&local_18,(char *)(local_10 + 10),(allocator *)&local_11);
  std::allocator<char>::~allocator(&local_11);
                    /* try { // try from 084d54f5 to 084d5508 has its CatchHandler @ 084d5522 */
  this = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
  CSyncSlangFilter::AddSlang(this,&local_18);
  std::string::~string((string *)&local_18);
  return 0;
}

```

