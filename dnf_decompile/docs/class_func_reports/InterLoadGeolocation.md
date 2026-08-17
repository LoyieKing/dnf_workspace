# InterLoadGeolocation

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0816088a InterLoadGeolocation::dispatch_sig  [0x0816088a-0x8160a41] ===
 816088a:	55                   	push   %ebp
 816088b:	89 e5                	mov    %esp,%ebp
 816088d:	56                   	push   %esi
 816088e:	53                   	push   %ebx
 816088f:	83 ec 60             	sub    $0x60,%esp
 8160892:	8b 45 10             	mov    0x10(%ebp),%eax
 8160895:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8160898:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 816089c:	75 40                	jne    81608de <_ZN20InterLoadGeolocation12dispatch_sigEP5CUserPci+0x54>
 816089e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81608a5:	00 
 81608a6:	c7 44 24 08 ac 00 00 	movl   $0xac,0x8(%esp)
 81608ad:	00 
 81608ae:	c7 44 24 04 60 ab b7 	movl   $0x8b7ab60,0x4(%esp)
 81608b5:	08 
 81608b6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81608b9:	89 04 24             	mov    %eax,(%esp)
 81608bc:	e8 57 ee 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81608c1:	c7 44 24 04 78 97 b7 	movl   $0x8b79778,0x4(%esp)
 81608c8:	08 
 81608c9:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81608cc:	89 04 24             	mov    %eax,(%esp)
 81608cf:	e8 b4 ee 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81608d4:	b8 ad 00 00 00       	mov    $0xad,%eax
 81608d9:	e9 5d 01 00 00       	jmp    8160a3b <_ZN20InterLoadGeolocation12dispatch_sigEP5CUserPci+0x1b1>
 81608de:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81608e1:	8b 00                	mov    (%eax),%eax
 81608e3:	83 f8 2d             	cmp    $0x2d,%eax
 81608e6:	76 48                	jbe    8160930 <_ZN20InterLoadGeolocation12dispatch_sigEP5CUserPci+0xa6>
 81608e8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81608eb:	8b 18                	mov    (%eax),%ebx
 81608ed:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81608f4:	00 
 81608f5:	c7 44 24 08 b2 00 00 	movl   $0xb2,0x8(%esp)
 81608fc:	00 
 81608fd:	c7 44 24 04 60 ab b7 	movl   $0x8b7ab60,0x4(%esp)
 8160904:	08 
 8160905:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8160908:	89 04 24             	mov    %eax,(%esp)
 816090b:	e8 08 ee 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8160910:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8160914:	c7 44 24 04 a8 97 b7 	movl   $0x8b797a8,0x4(%esp)
 816091b:	08 
 816091c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 816091f:	89 04 24             	mov    %eax,(%esp)
 8160922:	e8 61 ee 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8160927:	8b 45 f0             	mov    -0x10(%ebp),%eax
 816092a:	c7 00 2d 00 00 00    	movl   $0x2d,(%eax)
 8160930:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8160937:	e9 e7 00 00 00       	jmp    8160a23 <_ZN20InterLoadGeolocation12dispatch_sigEP5CUserPci+0x199>
 816093c:	8d 45 df             	lea    -0x21(%ebp),%eax
 816093f:	89 04 24             	mov    %eax,(%esp)
 8160942:	e8 89 f7 57 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8160947:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816094a:	c1 e0 04             	shl    $0x4,%eax
 816094d:	03 45 f0             	add    -0x10(%ebp),%eax
 8160950:	83 c0 04             	add    $0x4,%eax
 8160953:	8d 55 df             	lea    -0x21(%ebp),%edx
 8160956:	89 54 24 08          	mov    %edx,0x8(%esp)
 816095a:	89 44 24 04          	mov    %eax,0x4(%esp)
 816095e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8160961:	89 04 24             	mov    %eax,(%esp)
 8160964:	e8 c7 6c 5a 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8160969:	e8 0b 1d 00 00       	call   8162679 <_ZN4ARAD9SingletonI19RestrictGeolocationE3GetEv>
 816096e:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8160971:	89 54 24 04          	mov    %edx,0x4(%esp)
 8160975:	89 04 24             	mov    %eax,(%esp)
 8160978:	e8 21 01 01 00       	call   8170a9e <_ZN19RestrictGeolocation15addAllowCountryESs>
 816097d:	eb 15                	jmp    8160994 <_ZN20InterLoadGeolocation12dispatch_sigEP5CUserPci+0x10a>
 816097f:	89 d3                	mov    %edx,%ebx
 8160981:	89 c6                	mov    %eax,%esi
 8160983:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8160986:	89 04 24             	mov    %eax,(%esp)
 8160989:	e8 52 72 5a 00       	call   8707be0 <_ZNSsD1Ev>
 816098e:	89 f0                	mov    %esi,%eax
 8160990:	89 da                	mov    %ebx,%edx
 8160992:	eb 0d                	jmp    81609a1 <_ZN20InterLoadGeolocation12dispatch_sigEP5CUserPci+0x117>
 8160994:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8160997:	89 04 24             	mov    %eax,(%esp)
 816099a:	e8 41 72 5a 00       	call   8707be0 <_ZNSsD1Ev>
 816099f:	eb 1b                	jmp    81609bc <_ZN20InterLoadGeolocation12dispatch_sigEP5CUserPci+0x132>
 81609a1:	89 d3                	mov    %edx,%ebx
 81609a3:	89 c6                	mov    %eax,%esi
 81609a5:	8d 45 df             	lea    -0x21(%ebp),%eax
 81609a8:	89 04 24             	mov    %eax,(%esp)
 81609ab:	e8 40 f7 57 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81609b0:	89 f0                	mov    %esi,%eax
 81609b2:	89 da                	mov    %ebx,%edx
 81609b4:	89 04 24             	mov    %eax,(%esp)
 81609b7:	e8 94 2d 98 00       	call   8ae3750 <_Unwind_Resume>
 81609bc:	8d 45 df             	lea    -0x21(%ebp),%eax
 81609bf:	89 04 24             	mov    %eax,(%esp)
 81609c2:	e8 29 f7 57 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81609c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81609ca:	c1 e0 04             	shl    $0x4,%eax
 81609cd:	03 45 f0             	add    -0x10(%ebp),%eax
 81609d0:	83 c0 04             	add    $0x4,%eax
 81609d3:	89 c3                	mov    %eax,%ebx
 81609d5:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81609dc:	00 
 81609dd:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81609e4:	00 
 81609e5:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 81609ec:	00 
 81609ed:	c7 44 24 08 b9 00 00 	movl   $0xb9,0x8(%esp)
 81609f4:	00 
 81609f5:	c7 44 24 04 60 ab b7 	movl   $0x8b7ab60,0x4(%esp)
 81609fc:	08 
 81609fd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8160a00:	89 04 24             	mov    %eax,(%esp)
 8160a03:	e8 3e ed 3e 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 8160a08:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8160a0c:	c7 44 24 04 da 97 b7 	movl   $0x8b797da,0x4(%esp)
 8160a13:	08 
 8160a14:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8160a17:	89 04 24             	mov    %eax,(%esp)
 8160a1a:	e8 69 ed 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8160a1f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8160a23:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8160a26:	8b 00                	mov    (%eax),%eax
 8160a28:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8160a2b:	0f 9f c0             	setg   %al
 8160a2e:	84 c0                	test   %al,%al
 8160a30:	0f 85 06 ff ff ff    	jne    816093c <_ZN20InterLoadGeolocation12dispatch_sigEP5CUserPci+0xb2>
 8160a36:	b8 00 00 00 00       	mov    $0x0,%eax
 8160a3b:	83 c4 60             	add    $0x60,%esp
 8160a3e:	5b                   	pop    %ebx
 8160a3f:	5e                   	pop    %esi
 8160a40:	5d                   	pop    %ebp
 8160a41:	c3                   	ret

```

```c
// InterLoadGeolocation::dispatch_sig @ 0x816088a

/* InterLoadGeolocation::dispatch_sig(CUser*, char*, int) */

undefined4 InterLoadGeolocation::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  string sVar2;
  int *piVar3;
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  string local_2c [7];
  allocator<char> local_25;
  cMyTrace local_24 [16];
  int *local_14;
  int local_10;
  
  local_14 = (int *)param_3;
  if (param_3 == 0) {
    cMyTrace::cMyTrace(local_4c,"virtual int InterLoadGeolocation::dispatch_sig(CUser*, char*, int)"
                       ,0xac,5);
    cMyTrace::operator()(local_4c,"[Taiwan, GeoIP] SigLoadRestrictPolicy is null.");
    uVar1 = 0xad;
  }
  else {
    if (0x2d < *(uint *)param_3) {
      uVar1 = *(undefined4 *)param_3;
      cMyTrace::cMyTrace(local_3c,
                         "virtual int InterLoadGeolocation::dispatch_sig(CUser*, char*, int)",0xb2,5
                        );
      cMyTrace::operator()(local_3c,"[Taiwan, GeoIP] Invalid GeoIP country count. (%d)",uVar1);
      *local_14 = 0x2d;
    }
    for (local_10 = 0; local_10 < *local_14; local_10 = local_10 + 1) {
      std::allocator<char>::allocator();
                    /* try { // try from 08160964 to 08160968 has its CatchHandler @ 081609a1 */
      std::string::string(local_2c,(char *)(local_14 + local_10 * 4 + 1),(allocator *)&local_25);
                    /* try { // try from 08160969 to 0816097c has its CatchHandler @ 0816097f */
      sVar2._M_dataplus._M_p = (_Alloc_hider)ARAD::Singleton<RestrictGeolocation>::Get();
      RestrictGeolocation::addAllowCountry(sVar2);
                    /* try { // try from 0816099a to 0816099e has its CatchHandler @ 081609a1 */
      std::string::~string(local_2c);
      std::allocator<char>::~allocator(&local_25);
      piVar3 = local_14 + local_10 * 4 + 1;
      cMyTrace::cMyTrace(local_24,
                         "virtual int InterLoadGeolocation::dispatch_sig(CUser*, char*, int)",0xb9,9
                         ,true,true);
      cMyTrace::operator()(local_24,"GeoIP Allow Country Code : %s",piVar3);
    }
    uVar1 = 0;
  }
  return uVar1;
}

```

