# InterLoadServiceRestrictPolicy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08160796 InterLoadServiceRestrictPolicy::dispatch_sig  [0x08160796-0x8160889] ===
 8160796:	55                   	push   %ebp
 8160797:	89 e5                	mov    %esp,%ebp
 8160799:	56                   	push   %esi
 816079a:	53                   	push   %ebx
 816079b:	83 ec 30             	sub    $0x30,%esp
 816079e:	8b 45 10             	mov    0x10(%ebp),%eax
 81607a1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81607a4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81607a8:	75 40                	jne    81607ea <_ZN30InterLoadServiceRestrictPolicy12dispatch_sigEP5CUserPci+0x54>
 81607aa:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81607b1:	00 
 81607b2:	c7 44 24 08 94 00 00 	movl   $0x94,0x8(%esp)
 81607b9:	00 
 81607ba:	c7 44 24 04 c0 ab b7 	movl   $0x8b7abc0,0x4(%esp)
 81607c1:	08 
 81607c2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81607c5:	89 04 24             	mov    %eax,(%esp)
 81607c8:	e8 4b ef 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81607cd:	c7 44 24 04 44 97 b7 	movl   $0x8b79744,0x4(%esp)
 81607d4:	08 
 81607d5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81607d8:	89 04 24             	mov    %eax,(%esp)
 81607db:	e8 a8 ef 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81607e0:	b8 95 00 00 00       	mov    $0x95,%eax
 81607e5:	e9 98 00 00 00       	jmp    8160882 <_ZN30InterLoadServiceRestrictPolicy12dispatch_sigEP5CUserPci+0xec>
 81607ea:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81607ed:	89 04 24             	mov    %eax,(%esp)
 81607f0:	e8 db f8 57 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81607f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81607f8:	8d 90 9d 11 00 00    	lea    0x119d(%eax),%edx
 81607fe:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8160801:	89 44 24 08          	mov    %eax,0x8(%esp)
 8160805:	89 54 24 04          	mov    %edx,0x4(%esp)
 8160809:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816080c:	89 04 24             	mov    %eax,(%esp)
 816080f:	e8 1c 6e 5a 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8160814:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8160817:	8b 00                	mov    (%eax),%eax
 8160819:	89 c3                	mov    %eax,%ebx
 816081b:	e8 c6 1d 00 00       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 8160820:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8160823:	89 54 24 08          	mov    %edx,0x8(%esp)
 8160827:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 816082b:	89 04 24             	mov    %eax,(%esp)
 816082e:	e8 17 dd 00 00       	call   816e54a <_ZN22ServiceRestrictManager11beginPolicyEN16RestrictCategory4EnumERKSs>
 8160833:	eb 15                	jmp    816084a <_ZN30InterLoadServiceRestrictPolicy12dispatch_sigEP5CUserPci+0xb4>
 8160835:	89 d3                	mov    %edx,%ebx
 8160837:	89 c6                	mov    %eax,%esi
 8160839:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816083c:	89 04 24             	mov    %eax,(%esp)
 816083f:	e8 9c 73 5a 00       	call   8707be0 <_ZNSsD1Ev>
 8160844:	89 f0                	mov    %esi,%eax
 8160846:	89 da                	mov    %ebx,%edx
 8160848:	eb 0d                	jmp    8160857 <_ZN30InterLoadServiceRestrictPolicy12dispatch_sigEP5CUserPci+0xc1>
 816084a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816084d:	89 04 24             	mov    %eax,(%esp)
 8160850:	e8 8b 73 5a 00       	call   8707be0 <_ZNSsD1Ev>
 8160855:	eb 1b                	jmp    8160872 <_ZN30InterLoadServiceRestrictPolicy12dispatch_sigEP5CUserPci+0xdc>
 8160857:	89 d3                	mov    %edx,%ebx
 8160859:	89 c6                	mov    %eax,%esi
 816085b:	8d 45 f3             	lea    -0xd(%ebp),%eax
 816085e:	89 04 24             	mov    %eax,(%esp)
 8160861:	e8 8a f8 57 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8160866:	89 f0                	mov    %esi,%eax
 8160868:	89 da                	mov    %ebx,%edx
 816086a:	89 04 24             	mov    %eax,(%esp)
 816086d:	e8 de 2e 98 00       	call   8ae3750 <_Unwind_Resume>
 8160872:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8160875:	89 04 24             	mov    %eax,(%esp)
 8160878:	e8 73 f8 57 00       	call   86e00f0 <_ZNSaIcED1Ev>
 816087d:	b8 00 00 00 00       	mov    $0x0,%eax
 8160882:	83 c4 30             	add    $0x30,%esp
 8160885:	5b                   	pop    %ebx
 8160886:	5e                   	pop    %esi
 8160887:	5d                   	pop    %ebp
 8160888:	c3                   	ret
 8160889:	90                   	nop

```

```c
// InterLoadServiceRestrictPolicy::dispatch_sig @ 0x8160796

/* InterLoadServiceRestrictPolicy::dispatch_sig(CUser*, char*, int) */

undefined4 InterLoadServiceRestrictPolicy::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  ServiceRestrictManager *pSVar2;
  cMyTrace local_28 [16];
  string local_18 [7];
  allocator<char> local_11;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)param_3;
  if (param_3 == 0) {
    cMyTrace::cMyTrace(local_28,
                       "virtual int InterLoadServiceRestrictPolicy::dispatch_sig(CUser*, char*, int)"
                       ,0x94,5);
    cMyTrace::operator()(local_28,"[Taiwan, Restrict] SigLoadRestrictPolicy is null.");
    uVar1 = 0x95;
  }
  else {
    std::allocator<char>::allocator();
                    /* try { // try from 0816080f to 08160813 has its CatchHandler @ 08160857 */
    std::string::string(local_18,(char *)((int)local_10 + 0x119d),(allocator *)&local_11);
    uVar1 = *local_10;
                    /* try { // try from 0816081b to 08160832 has its CatchHandler @ 08160835 */
    pSVar2 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    ServiceRestrictManager::beginPolicy(pSVar2,uVar1,local_18);
                    /* try { // try from 08160850 to 08160854 has its CatchHandler @ 08160857 */
    std::string::~string(local_18);
    std::allocator<char>::~allocator(&local_11);
    uVar1 = 0;
  }
  return uVar1;
}

```

