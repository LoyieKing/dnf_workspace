# RestrictGeolocation

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## RestrictGeolocation

```asm
// === 0817097c RestrictGeolocation::RestrictGeolocation  [0x0817097c-0x81709fd] ===
 817097c:	55                   	push   %ebp
 817097d:	89 e5                	mov    %esp,%ebp
 817097f:	56                   	push   %esi
 8170980:	53                   	push   %ebx
 8170981:	83 ec 30             	sub    $0x30,%esp
 8170984:	8b 45 08             	mov    0x8(%ebp),%eax
 8170987:	89 04 24             	mov    %eax,(%esp)
 817098a:	e8 17 0a 00 00       	call   81713a6 <_ZN4ARAD9SingletonI19RestrictGeolocationEC1Ev>
 817098f:	8b 45 08             	mov    0x8(%ebp),%eax
 8170992:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8170998:	8d 45 f5             	lea    -0xb(%ebp),%eax
 817099b:	89 04 24             	mov    %eax,(%esp)
 817099e:	e8 f7 1b f6 ff       	call   80d259a <_ZNSaISsEC1Ev>
 81709a3:	8b 45 08             	mov    0x8(%ebp),%eax
 81709a6:	8d 50 04             	lea    0x4(%eax),%edx
 81709a9:	8d 45 f5             	lea    -0xb(%ebp),%eax
 81709ac:	89 44 24 10          	mov    %eax,0x10(%esp)
 81709b0:	8d 45 f6             	lea    -0xa(%ebp),%eax
 81709b3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81709b7:	8d 45 f7             	lea    -0x9(%ebp),%eax
 81709ba:	89 44 24 08          	mov    %eax,0x8(%esp)
 81709be:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 81709c5:	00 
 81709c6:	89 14 24             	mov    %edx,(%esp)
 81709c9:	e8 38 0a 00 00       	call   8171406 <_ZN5boost9unordered13unordered_setISsNS_4hashISsEESt8equal_toISsESaISsEEC1EjRKS3_RKS5_RKS6_>
 81709ce:	eb 1b                	jmp    81709eb <_ZN19RestrictGeolocationC1Ev+0x6f>
 81709d0:	89 d3                	mov    %edx,%ebx
 81709d2:	89 c6                	mov    %eax,%esi
 81709d4:	8d 45 f5             	lea    -0xb(%ebp),%eax
 81709d7:	89 04 24             	mov    %eax,(%esp)
 81709da:	e8 2b 06 f6 ff       	call   80d100a <_ZNSaISsED1Ev>
 81709df:	89 f0                	mov    %esi,%eax
 81709e1:	89 da                	mov    %ebx,%edx
 81709e3:	89 04 24             	mov    %eax,(%esp)
 81709e6:	e8 65 2d 97 00       	call   8ae3750 <_Unwind_Resume>
 81709eb:	8d 45 f5             	lea    -0xb(%ebp),%eax
 81709ee:	89 04 24             	mov    %eax,(%esp)
 81709f1:	e8 14 06 f6 ff       	call   80d100a <_ZNSaISsED1Ev>
 81709f6:	83 c4 30             	add    $0x30,%esp
 81709f9:	5b                   	pop    %ebx
 81709fa:	5e                   	pop    %esi
 81709fb:	5d                   	pop    %ebp
 81709fc:	c3                   	ret
 81709fd:	90                   	nop

```

```c
// RestrictGeolocation::RestrictGeolocation @ 0x817097c

/* RestrictGeolocation::RestrictGeolocation() */

void __thiscall RestrictGeolocation::RestrictGeolocation(RestrictGeolocation *this)

{
  allocator<std::string> local_f;
  allocator local_e;
  equal_to local_d;
  
  ARAD::Singleton<RestrictGeolocation>::Singleton();
  *(undefined4 *)this = 0;
  std::allocator<std::string>::allocator();
                    /* try { // try from 081709c9 to 081709cd has its CatchHandler @ 081709d0 */
  boost::unordered::
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  ::unordered_set((uint)(this + 4),(hash *)0xb,&local_d,&local_e);
  std::allocator<std::string>::~allocator(&local_f);
  return;
}

```

---

## addAllowCountry

```asm
// === 08170a9e RestrictGeolocation::addAllowCountry  [0x08170a9e-0x8170b15] ===
 8170a9e:	55                   	push   %ebp
 8170a9f:	89 e5                	mov    %esp,%ebp
 8170aa1:	83 ec 28             	sub    $0x28,%esp
 8170aa4:	8b 45 08             	mov    0x8(%ebp),%eax
 8170aa7:	8d 48 04             	lea    0x4(%eax),%ecx
 8170aaa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8170aad:	8b 55 0c             	mov    0xc(%ebp),%edx
 8170ab0:	89 54 24 08          	mov    %edx,0x8(%esp)
 8170ab4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8170ab8:	89 04 24             	mov    %eax,(%esp)
 8170abb:	e8 e6 09 00 00       	call   81714a6 <_ZNK5boost9unordered13unordered_setISsNS_4hashISsEESt8equal_toISsESaISsEE4findERKSs>
 8170ac0:	83 ec 04             	sub    $0x4,%esp
 8170ac3:	8b 45 08             	mov    0x8(%ebp),%eax
 8170ac6:	8d 50 04             	lea    0x4(%eax),%edx
 8170ac9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8170acc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8170ad0:	89 04 24             	mov    %eax,(%esp)
 8170ad3:	e8 b2 09 00 00       	call   817148a <_ZN5boost9unordered13unordered_setISsNS_4hashISsEESt8equal_toISsESaISsEE3endEv>
 8170ad8:	83 ec 04             	sub    $0x4,%esp
 8170adb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8170ade:	89 44 24 04          	mov    %eax,0x4(%esp)
 8170ae2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8170ae5:	89 04 24             	mov    %eax,(%esp)
 8170ae8:	e8 f1 09 00 00       	call   81714de <_ZN5boost9unordered15iterator_detailneERKNS1_10c_iteratorIPKNS0_6detail8ptr_nodeISsEEPS5_SsEESB_>
 8170aed:	84 c0                	test   %al,%al
 8170aef:	75 21                	jne    8170b12 <_ZN19RestrictGeolocation15addAllowCountryESs+0x74>
 8170af1:	8b 45 08             	mov    0x8(%ebp),%eax
 8170af4:	8d 48 04             	lea    0x4(%eax),%ecx
 8170af7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8170afa:	8b 55 0c             	mov    0xc(%ebp),%edx
 8170afd:	89 54 24 08          	mov    %edx,0x8(%esp)
 8170b01:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8170b05:	89 04 24             	mov    %eax,(%esp)
 8170b08:	e8 e5 09 00 00       	call   81714f2 <_ZN5boost9unordered13unordered_setISsNS_4hashISsEESt8equal_toISsESaISsEE6insertERKSs>
 8170b0d:	83 ec 04             	sub    $0x4,%esp
 8170b10:	eb 01                	jmp    8170b13 <_ZN19RestrictGeolocation15addAllowCountryESs+0x75>
 8170b12:	90                   	nop
 8170b13:	c9                   	leave
 8170b14:	c3                   	ret
 8170b15:	90                   	nop

```

```c
// RestrictGeolocation::addAllowCountry @ 0x8170a9e

/* RestrictGeolocation::addAllowCountry(std::string) */

void RestrictGeolocation::addAllowCountry(string param_1)

{
  char cVar1;
  string local_1c;
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  local_18 [4];
  string local_14 [4];
  
  boost::unordered::
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  ::find(&local_1c);
  boost::unordered::
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  ::end(local_18);
  cVar1 = boost::unordered::iterator_detail::operator!=
                    ((c_iterator *)local_18,(c_iterator *)&local_1c);
  if (cVar1 == '\0') {
    boost::unordered::
    unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
    ::insert(local_14);
  }
  return;
}

```

---

## clearAllowCountry

```asm
// === 08170b16 RestrictGeolocation::clearAllowCountry  [0x08170b16-0x8170b2b] ===
 8170b16:	55                   	push   %ebp
 8170b17:	89 e5                	mov    %esp,%ebp
 8170b19:	83 ec 18             	sub    $0x18,%esp
 8170b1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8170b1f:	83 c0 04             	add    $0x4,%eax
 8170b22:	89 04 24             	mov    %eax,(%esp)
 8170b25:	e8 f4 09 00 00       	call   817151e <_ZN5boost9unordered13unordered_setISsNS_4hashISsEESt8equal_toISsESaISsEE5clearEv>
 8170b2a:	c9                   	leave
 8170b2b:	c3                   	ret

```

```c
// RestrictGeolocation::clearAllowCountry @ 0x8170b16

/* RestrictGeolocation::clearAllowCountry() */

void __thiscall RestrictGeolocation::clearAllowCountry(RestrictGeolocation *this)

{
  boost::unordered::
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  ::clear((unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
           *)(this + 4));
  return;
}

```

---

## closeGeolocation

```asm
// === 08170a88 RestrictGeolocation::closeGeolocation  [0x08170a88-0x8170a9d] ===
 8170a88:	55                   	push   %ebp
 8170a89:	89 e5                	mov    %esp,%ebp
 8170a8b:	83 ec 18             	sub    $0x18,%esp
 8170a8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8170a91:	8b 00                	mov    (%eax),%eax
 8170a93:	89 04 24             	mov    %eax,(%esp)
 8170a96:	e8 05 d1 f0 ff       	call   807dba0 <GeoIP_delete@plt>
 8170a9b:	c9                   	leave
 8170a9c:	c3                   	ret
 8170a9d:	90                   	nop

```

```c
// RestrictGeolocation::closeGeolocation @ 0x8170a88

/* RestrictGeolocation::closeGeolocation() */

void __thiscall RestrictGeolocation::closeGeolocation(RestrictGeolocation *this)

{
  GeoIP_delete(*(undefined4 *)this);
  return;
}

```

---

## getCountryCode

```asm
// === 08170f3a RestrictGeolocation::getCountryCode  [0x08170f3a-0x8170feb] ===
 8170f3a:	55                   	push   %ebp
 8170f3b:	89 e5                	mov    %esp,%ebp
 8170f3d:	83 ec 28             	sub    $0x28,%esp
 8170f40:	8b 45 08             	mov    0x8(%ebp),%eax
 8170f43:	8b 00                	mov    (%eax),%eax
 8170f45:	85 c0                	test   %eax,%eax
 8170f47:	75 36                	jne    8170f7f <_ZN19RestrictGeolocation14getCountryCodeEPcjSs+0x45>
 8170f49:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8170f50:	00 
 8170f51:	c7 44 24 08 7e 00 00 	movl   $0x7e,0x8(%esp)
 8170f58:	00 
 8170f59:	c7 44 24 04 e0 3d b8 	movl   $0x8b83de0,0x4(%esp)
 8170f60:	08 
 8170f61:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8170f64:	89 04 24             	mov    %eax,(%esp)
 8170f67:	e8 ac e7 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8170f6c:	c7 44 24 04 a4 30 b8 	movl   $0x8b830a4,0x4(%esp)
 8170f73:	08 
 8170f74:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8170f77:	89 04 24             	mov    %eax,(%esp)
 8170f7a:	e8 09 e8 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8170f7f:	8b 45 10             	mov    0x10(%ebp),%eax
 8170f82:	89 44 24 08          	mov    %eax,0x8(%esp)
 8170f86:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8170f8d:	00 
 8170f8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8170f91:	89 04 24             	mov    %eax,(%esp)
 8170f94:	e8 27 cd f0 ff       	call   807dcc0 <memset@plt>
 8170f99:	8b 45 14             	mov    0x14(%ebp),%eax
 8170f9c:	89 04 24             	mov    %eax,(%esp)
 8170f9f:	e8 4c 55 59 00       	call   87064f0 <_ZNKSs5c_strEv>
 8170fa4:	8b 55 08             	mov    0x8(%ebp),%edx
 8170fa7:	8b 12                	mov    (%edx),%edx
 8170fa9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8170fad:	89 14 24             	mov    %edx,(%esp)
 8170fb0:	e8 1b d1 f0 ff       	call   807e0d0 <GeoIP_country_code_by_addr@plt>
 8170fb5:	85 c0                	test   %eax,%eax
 8170fb7:	0f 95 c0             	setne  %al
 8170fba:	84 c0                	test   %al,%al
 8170fbc:	74 2b                	je     8170fe9 <_ZN19RestrictGeolocation14getCountryCodeEPcjSs+0xaf>
 8170fbe:	8b 45 14             	mov    0x14(%ebp),%eax
 8170fc1:	89 04 24             	mov    %eax,(%esp)
 8170fc4:	e8 27 55 59 00       	call   87064f0 <_ZNKSs5c_strEv>
 8170fc9:	8b 55 08             	mov    0x8(%ebp),%edx
 8170fcc:	8b 12                	mov    (%edx),%edx
 8170fce:	89 44 24 04          	mov    %eax,0x4(%esp)
 8170fd2:	89 14 24             	mov    %edx,(%esp)
 8170fd5:	e8 f6 d0 f0 ff       	call   807e0d0 <GeoIP_country_code_by_addr@plt>
 8170fda:	89 44 24 04          	mov    %eax,0x4(%esp)
 8170fde:	8b 45 0c             	mov    0xc(%ebp),%eax
 8170fe1:	89 04 24             	mov    %eax,(%esp)
 8170fe4:	e8 07 cf f0 ff       	call   807def0 <strcpy@plt>
 8170fe9:	c9                   	leave
 8170fea:	c3                   	ret
 8170feb:	90                   	nop

```

```c
// RestrictGeolocation::getCountryCode @ 0x8170f3a

/* RestrictGeolocation::getCountryCode(char*, unsigned int, std::string) */

void __thiscall
RestrictGeolocation::getCountryCode
          (RestrictGeolocation *this,char *param_1,uint param_2,string param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *__src;
  cMyTrace local_1c [24];
  
  if (*(int *)this == 0) {
    cMyTrace::cMyTrace(local_1c,
                       "void RestrictGeolocation::getCountryCode(char*, unsigned int, std::string)",
                       0x7e,5);
    cMyTrace::operator()(local_1c,"[Taiwan, GeoIP] Geo instance is null.");
  }
  memset(param_1,0,param_2);
  uVar1 = std::string::c_str((string *)param_3._M_dataplus._M_p);
  iVar2 = GeoIP_country_code_by_addr(*(undefined4 *)this,uVar1);
  if (iVar2 != 0) {
    uVar1 = std::string::c_str((string *)param_3._M_dataplus._M_p);
    __src = (char *)GeoIP_country_code_by_addr(*(undefined4 *)this,uVar1);
    strcpy(param_1,__src);
  }
  return;
}

```

---

## initGeolocation

```asm
// === 08170a46 RestrictGeolocation::initGeolocation  [0x08170a46-0x8170a87] ===
 8170a46:	55                   	push   %ebp
 8170a47:	89 e5                	mov    %esp,%ebp
 8170a49:	83 ec 18             	sub    $0x18,%esp
 8170a4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8170a4f:	8b 00                	mov    (%eax),%eax
 8170a51:	85 c0                	test   %eax,%eax
 8170a53:	75 21                	jne    8170a76 <_ZN19RestrictGeolocation15initGeolocationEv+0x30>
 8170a55:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8170a5c:	e8 cf d4 f0 ff       	call   807df30 <GeoIP_new@plt>
 8170a61:	8b 55 08             	mov    0x8(%ebp),%edx
 8170a64:	89 02                	mov    %eax,(%edx)
 8170a66:	8b 45 08             	mov    0x8(%ebp),%eax
 8170a69:	8b 00                	mov    (%eax),%eax
 8170a6b:	85 c0                	test   %eax,%eax
 8170a6d:	75 07                	jne    8170a76 <_ZN19RestrictGeolocation15initGeolocationEv+0x30>
 8170a6f:	b8 00 00 00 00       	mov    $0x0,%eax
 8170a74:	eb 10                	jmp    8170a86 <_ZN19RestrictGeolocation15initGeolocationEv+0x40>
 8170a76:	8b 45 08             	mov    0x8(%ebp),%eax
 8170a79:	89 04 24             	mov    %eax,(%esp)
 8170a7c:	e8 6b 05 00 00       	call   8170fec <_ZN19RestrictGeolocation8loadDataEv>
 8170a81:	b8 01 00 00 00       	mov    $0x1,%eax
 8170a86:	c9                   	leave
 8170a87:	c3                   	ret

```

```c
// RestrictGeolocation::initGeolocation @ 0x8170a46

/* RestrictGeolocation::initGeolocation() */

undefined4 __thiscall RestrictGeolocation::initGeolocation(RestrictGeolocation *this)

{
  undefined4 uVar1;
  
  if (*(int *)this == 0) {
    uVar1 = GeoIP_new(0);
    *(undefined4 *)this = uVar1;
    if (*(int *)this == 0) {
      return 0;
    }
  }
  loadData(this);
  return 1;
}

```

---

## isAllow

```asm
// === 08170b2c RestrictGeolocation::isAllow  [0x08170b2c-0x8170ecb] ===
 8170b2c:	55                   	push   %ebp
 8170b2d:	89 e5                	mov    %esp,%ebp
 8170b2f:	56                   	push   %esi
 8170b30:	53                   	push   %ebx
 8170b31:	81 ec 90 00 00 00    	sub    $0x90,%esp
 8170b37:	8b 45 08             	mov    0x8(%ebp),%eax
 8170b3a:	8b 00                	mov    (%eax),%eax
 8170b3c:	85 c0                	test   %eax,%eax
 8170b3e:	75 40                	jne    8170b80 <_ZN19RestrictGeolocation7isAllowESsSs+0x54>
 8170b40:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8170b47:	00 
 8170b48:	c7 44 24 08 44 00 00 	movl   $0x44,0x8(%esp)
 8170b4f:	00 
 8170b50:	c7 44 24 04 40 3e b8 	movl   $0x8b83e40,0x4(%esp)
 8170b57:	08 
 8170b58:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8170b5b:	89 04 24             	mov    %eax,(%esp)
 8170b5e:	e8 b5 eb 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8170b63:	c7 44 24 04 a4 30 b8 	movl   $0x8b830a4,0x4(%esp)
 8170b6a:	08 
 8170b6b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8170b6e:	89 04 24             	mov    %eax,(%esp)
 8170b71:	e8 12 ec 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8170b76:	bb 01 00 00 00       	mov    $0x1,%ebx
 8170b7b:	e9 40 03 00 00       	jmp    8170ec0 <_ZN19RestrictGeolocation7isAllowESsSs+0x394>
 8170b80:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 8170b87:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 8170b8e:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 8170b95:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 8170b9c:	8b 45 10             	mov    0x10(%ebp),%eax
 8170b9f:	89 04 24             	mov    %eax,(%esp)
 8170ba2:	e8 49 59 59 00       	call   87064f0 <_ZNKSs5c_strEv>
 8170ba7:	8b 55 08             	mov    0x8(%ebp),%edx
 8170baa:	8b 12                	mov    (%edx),%edx
 8170bac:	89 44 24 04          	mov    %eax,0x4(%esp)
 8170bb0:	89 14 24             	mov    %edx,(%esp)
 8170bb3:	e8 18 d5 f0 ff       	call   807e0d0 <GeoIP_country_code_by_addr@plt>
 8170bb8:	85 c0                	test   %eax,%eax
 8170bba:	0f 95 c0             	setne  %al
 8170bbd:	84 c0                	test   %al,%al
 8170bbf:	74 2b                	je     8170bec <_ZN19RestrictGeolocation7isAllowESsSs+0xc0>
 8170bc1:	8b 45 10             	mov    0x10(%ebp),%eax
 8170bc4:	89 04 24             	mov    %eax,(%esp)
 8170bc7:	e8 24 59 59 00       	call   87064f0 <_ZNKSs5c_strEv>
 8170bcc:	8b 55 08             	mov    0x8(%ebp),%edx
 8170bcf:	8b 12                	mov    (%edx),%edx
 8170bd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8170bd5:	89 14 24             	mov    %edx,(%esp)
 8170bd8:	e8 f3 d4 f0 ff       	call   807e0d0 <GeoIP_country_code_by_addr@plt>
 8170bdd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8170be1:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8170be4:	89 04 24             	mov    %eax,(%esp)
 8170be7:	e8 04 d3 f0 ff       	call   807def0 <strcpy@plt>
 8170bec:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 8170bef:	89 04 24             	mov    %eax,(%esp)
 8170bf2:	e8 d9 f4 56 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8170bf7:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 8170bfa:	89 44 24 08          	mov    %eax,0x8(%esp)
 8170bfe:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8170c01:	89 44 24 04          	mov    %eax,0x4(%esp)
 8170c05:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8170c08:	89 04 24             	mov    %eax,(%esp)
 8170c0b:	e8 20 6a 59 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8170c10:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8170c13:	89 44 24 04          	mov    %eax,0x4(%esp)
 8170c17:	8b 45 08             	mov    0x8(%ebp),%eax
 8170c1a:	89 04 24             	mov    %eax,(%esp)
 8170c1d:	e8 78 04 00 00       	call   817109a <_ZN19RestrictGeolocation18isAllowCountryCodeESs>
 8170c22:	89 c3                	mov    %eax,%ebx
 8170c24:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8170c27:	89 04 24             	mov    %eax,(%esp)
 8170c2a:	e8 b1 6f 59 00       	call   8707be0 <_ZNSsD1Ev>
 8170c2f:	eb 30                	jmp    8170c61 <_ZN19RestrictGeolocation7isAllowESsSs+0x135>
 8170c31:	89 d3                	mov    %edx,%ebx
 8170c33:	89 c6                	mov    %eax,%esi
 8170c35:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8170c38:	89 04 24             	mov    %eax,(%esp)
 8170c3b:	e8 a0 6f 59 00       	call   8707be0 <_ZNSsD1Ev>
 8170c40:	89 f0                	mov    %esi,%eax
 8170c42:	89 da                	mov    %ebx,%edx
 8170c44:	eb 00                	jmp    8170c46 <_ZN19RestrictGeolocation7isAllowESsSs+0x11a>
 8170c46:	89 d3                	mov    %edx,%ebx
 8170c48:	89 c6                	mov    %eax,%esi
 8170c4a:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 8170c4d:	89 04 24             	mov    %eax,(%esp)
 8170c50:	e8 9b f4 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8170c55:	89 f0                	mov    %esi,%eax
 8170c57:	89 da                	mov    %ebx,%edx
 8170c59:	89 04 24             	mov    %eax,(%esp)
 8170c5c:	e8 ef 2a 97 00       	call   8ae3750 <_Unwind_Resume>
 8170c61:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 8170c64:	89 04 24             	mov    %eax,(%esp)
 8170c67:	e8 84 f4 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8170c6c:	84 db                	test   %bl,%bl
 8170c6e:	74 69                	je     8170cd9 <_ZN19RestrictGeolocation7isAllowESsSs+0x1ad>
 8170c70:	8b 45 10             	mov    0x10(%ebp),%eax
 8170c73:	89 04 24             	mov    %eax,(%esp)
 8170c76:	e8 75 58 59 00       	call   87064f0 <_ZNKSs5c_strEv>
 8170c7b:	89 c6                	mov    %eax,%esi
 8170c7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8170c80:	89 04 24             	mov    %eax,(%esp)
 8170c83:	e8 68 58 59 00       	call   87064f0 <_ZNKSs5c_strEv>
 8170c88:	89 c3                	mov    %eax,%ebx
 8170c8a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8170c91:	00 
 8170c92:	c7 44 24 08 4e 00 00 	movl   $0x4e,0x8(%esp)
 8170c99:	00 
 8170c9a:	c7 44 24 04 40 3e b8 	movl   $0x8b83e40,0x4(%esp)
 8170ca1:	08 
 8170ca2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8170ca5:	89 04 24             	mov    %eax,(%esp)
 8170ca8:	e8 6b ea 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8170cad:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8170cb0:	89 44 24 10          	mov    %eax,0x10(%esp)
 8170cb4:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8170cb8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8170cbc:	c7 44 24 04 cc 30 b8 	movl   $0x8b830cc,0x4(%esp)
 8170cc3:	08 
 8170cc4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8170cc7:	89 04 24             	mov    %eax,(%esp)
 8170cca:	e8 b9 ea 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8170ccf:	bb 01 00 00 00       	mov    $0x1,%ebx
 8170cd4:	e9 e7 01 00 00       	jmp    8170ec0 <_ZN19RestrictGeolocation7isAllowESsSs+0x394>
 8170cd9:	e8 a3 b4 f5 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8170cde:	89 04 24             	mov    %eax,(%esp)
 8170ce1:	e8 fa 5f f9 ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 8170ce6:	83 f8 03             	cmp    $0x3,%eax
 8170ce9:	0f 94 c0             	sete   %al
 8170cec:	84 c0                	test   %al,%al
 8170cee:	74 69                	je     8170d59 <_ZN19RestrictGeolocation7isAllowESsSs+0x22d>
 8170cf0:	8b 45 10             	mov    0x10(%ebp),%eax
 8170cf3:	89 04 24             	mov    %eax,(%esp)
 8170cf6:	e8 f5 57 59 00       	call   87064f0 <_ZNKSs5c_strEv>
 8170cfb:	89 c6                	mov    %eax,%esi
 8170cfd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8170d00:	89 04 24             	mov    %eax,(%esp)
 8170d03:	e8 e8 57 59 00       	call   87064f0 <_ZNKSs5c_strEv>
 8170d08:	89 c3                	mov    %eax,%ebx
 8170d0a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8170d11:	00 
 8170d12:	c7 44 24 08 55 00 00 	movl   $0x55,0x8(%esp)
 8170d19:	00 
 8170d1a:	c7 44 24 04 40 3e b8 	movl   $0x8b83e40,0x4(%esp)
 8170d21:	08 
 8170d22:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8170d25:	89 04 24             	mov    %eax,(%esp)
 8170d28:	e8 eb e9 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8170d2d:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8170d30:	89 44 24 10          	mov    %eax,0x10(%esp)
 8170d34:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8170d38:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8170d3c:	c7 44 24 04 08 31 b8 	movl   $0x8b83108,0x4(%esp)
 8170d43:	08 
 8170d44:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8170d47:	89 04 24             	mov    %eax,(%esp)
 8170d4a:	e8 39 ea 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8170d4f:	bb 01 00 00 00       	mov    $0x1,%ebx
 8170d54:	e9 67 01 00 00       	jmp    8170ec0 <_ZN19RestrictGeolocation7isAllowESsSs+0x394>
 8170d59:	8b 45 10             	mov    0x10(%ebp),%eax
 8170d5c:	89 04 24             	mov    %eax,(%esp)
 8170d5f:	e8 8c 57 59 00       	call   87064f0 <_ZNKSs5c_strEv>
 8170d64:	89 c6                	mov    %eax,%esi
 8170d66:	8b 45 0c             	mov    0xc(%ebp),%eax
 8170d69:	89 04 24             	mov    %eax,(%esp)
 8170d6c:	e8 7f 57 59 00       	call   87064f0 <_ZNKSs5c_strEv>
 8170d71:	89 c3                	mov    %eax,%ebx
 8170d73:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8170d7a:	00 
 8170d7b:	c7 44 24 08 5a 00 00 	movl   $0x5a,0x8(%esp)
 8170d82:	00 
 8170d83:	c7 44 24 04 40 3e b8 	movl   $0x8b83e40,0x4(%esp)
 8170d8a:	08 
 8170d8b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8170d8e:	89 04 24             	mov    %eax,(%esp)
 8170d91:	e8 82 e9 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8170d96:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8170d99:	89 44 24 10          	mov    %eax,0x10(%esp)
 8170d9d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8170da1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8170da5:	c7 44 24 04 58 31 b8 	movl   $0x8b83158,0x4(%esp)
 8170dac:	08 
 8170dad:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8170db0:	89 04 24             	mov    %eax,(%esp)
 8170db3:	e8 d0 e9 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8170db8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8170dbd:	c7 44 24 08 5c 00 00 	movl   $0x5c,0x8(%esp)
 8170dc4:	00 
 8170dc5:	c7 44 24 04 90 31 b8 	movl   $0x8b83190,0x4(%esp)
 8170dcc:	08 
 8170dcd:	89 04 24             	mov    %eax,(%esp)
 8170dd0:	e8 b1 ec 11 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8170dd5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8170ddc:	00 
 8170ddd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8170de1:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8170de4:	89 04 24             	mov    %eax,(%esp)
 8170de7:	e8 3a 7e f5 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8170dec:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8170def:	89 04 24             	mov    %eax,(%esp)
 8170df2:	e8 4f 7e f5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8170df7:	c7 44 24 04 1b 01 00 	movl   $0x11b,0x4(%esp)
 8170dfe:	00 
 8170dff:	89 04 24             	mov    %eax,(%esp)
 8170e02:	e8 4f 7e f5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8170e07:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8170e0a:	89 04 24             	mov    %eax,(%esp)
 8170e0d:	e8 34 7e f5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8170e12:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8170e19:	ff 
 8170e1a:	89 04 24             	mov    %eax,(%esp)
 8170e1d:	e8 34 7e f5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8170e22:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8170e25:	89 04 24             	mov    %eax,(%esp)
 8170e28:	e8 21 7e f5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8170e2d:	89 04 24             	mov    %eax,(%esp)
 8170e30:	e8 fd 06 00 00       	call   8171532 <_ZN12CStreamGuard11GetInBufferI19SIG_SAVE_GEO_REJECTEEPT_v>
 8170e35:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8170e38:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8170e3b:	8d 50 10             	lea    0x10(%eax),%edx
 8170e3e:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8170e45:	00 
 8170e46:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8170e49:	89 44 24 04          	mov    %eax,0x4(%esp)
 8170e4d:	89 14 24             	mov    %edx,(%esp)
 8170e50:	e8 7b ca f0 ff       	call   807d8d0 <strncpy@plt>
 8170e55:	8b 45 10             	mov    0x10(%ebp),%eax
 8170e58:	89 04 24             	mov    %eax,(%esp)
 8170e5b:	e8 90 56 59 00       	call   87064f0 <_ZNKSs5c_strEv>
 8170e60:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8170e63:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8170e6a:	00 
 8170e6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8170e6f:	89 14 24             	mov    %edx,(%esp)
 8170e72:	e8 59 ca f0 ff       	call   807d8d0 <strncpy@plt>
 8170e77:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8170e7c:	8d 55 94             	lea    -0x6c(%ebp),%edx
 8170e7f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8170e83:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8170e8a:	00 
 8170e8b:	89 04 24             	mov    %eax,(%esp)
 8170e8e:	e8 4b 01 40 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8170e93:	bb 00 00 00 00       	mov    $0x0,%ebx
 8170e98:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8170e9b:	89 04 24             	mov    %eax,(%esp)
 8170e9e:	e8 2f ba 4a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8170ea3:	eb 1b                	jmp    8170ec0 <_ZN19RestrictGeolocation7isAllowESsSs+0x394>
 8170ea5:	89 d3                	mov    %edx,%ebx
 8170ea7:	89 c6                	mov    %eax,%esi
 8170ea9:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8170eac:	89 04 24             	mov    %eax,(%esp)
 8170eaf:	e8 1e ba 4a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8170eb4:	89 f0                	mov    %esi,%eax
 8170eb6:	89 da                	mov    %ebx,%edx
 8170eb8:	89 04 24             	mov    %eax,(%esp)
 8170ebb:	e8 90 28 97 00       	call   8ae3750 <_Unwind_Resume>
 8170ec0:	89 d8                	mov    %ebx,%eax
 8170ec2:	81 c4 90 00 00 00    	add    $0x90,%esp
 8170ec8:	5b                   	pop    %ebx
 8170ec9:	5e                   	pop    %esi
 8170eca:	5d                   	pop    %ebp
 8170ecb:	c3                   	ret

```

```c
// RestrictGeolocation::isAllow @ 0x8170b2c

/* RestrictGeolocation::isAllow(std::string, std::string) */

undefined4 __thiscall
RestrictGeolocation::isAllow(RestrictGeolocation *this,string param_1,string param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  CEnvironment *this_00;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  undefined4 uVar7;
  CStreamGuard local_70 [8];
  char local_68 [16];
  cMyTrace local_58 [16];
  string local_48 [7];
  allocator<char> local_41;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  SIG_SAVE_GEO_REJECT *local_10;
  
  if (*(int *)this == 0) {
    cMyTrace::cMyTrace(local_58,"bool RestrictGeolocation::isAllow(std::string, std::string)",0x44,5
                      );
    cMyTrace::operator()(local_58,"[Taiwan, GeoIP] Geo instance is null.");
    uVar7 = 1;
  }
  else {
    local_68[0] = '\0';
    local_68[1] = '\0';
    local_68[2] = '\0';
    local_68[3] = '\0';
    local_68[4] = '\0';
    local_68[5] = '\0';
    local_68[6] = '\0';
    local_68[7] = '\0';
    local_68[8] = '\0';
    local_68[9] = '\0';
    local_68[10] = '\0';
    local_68[0xb] = '\0';
    local_68[0xc] = '\0';
    local_68[0xd] = '\0';
    local_68[0xe] = '\0';
    local_68[0xf] = '\0';
    uVar7 = std::string::c_str((string *)param_2._M_dataplus._M_p);
    iVar2 = GeoIP_country_code_by_addr(*(undefined4 *)this,uVar7);
    if (iVar2 != 0) {
      uVar7 = std::string::c_str((string *)param_2._M_dataplus._M_p);
      pcVar3 = (char *)GeoIP_country_code_by_addr(*(undefined4 *)this,uVar7);
      strcpy(local_68,pcVar3);
    }
    std::allocator<char>::allocator();
                    /* try { // try from 08170c0b to 08170c0f has its CatchHandler @ 08170c46 */
    std::string::string(local_48,local_68,(allocator *)&local_41);
                    /* try { // try from 08170c1d to 08170c21 has its CatchHandler @ 08170c31 */
    cVar1 = isAllowCountryCode((string)this);
                    /* try { // try from 08170c2a to 08170c2e has its CatchHandler @ 08170c46 */
    std::string::~string(local_48);
    std::allocator<char>::~allocator(&local_41);
    if (cVar1 == '\0') {
      this_00 = (CEnvironment *)G_CEnvironment();
      iVar2 = CEnvironment::get_server_group(this_00);
      if (iVar2 == 3) {
        uVar7 = std::string::c_str((string *)param_2._M_dataplus._M_p);
        uVar4 = std::string::c_str((string *)param_1._M_dataplus._M_p);
        cMyTrace::cMyTrace(local_30,"bool RestrictGeolocation::isAllow(std::string, std::string)",
                           0x55,0);
        cMyTrace::operator()
                  (local_30,
                   "[Taiwan, GeoIP] Success Global server group. Account:%s, IP:%s, CountryCode:%s",
                   uVar4,uVar7,local_68);
        uVar7 = 1;
      }
      else {
        uVar7 = std::string::c_str((string *)param_2._M_dataplus._M_p);
        uVar4 = std::string::c_str((string *)param_1._M_dataplus._M_p);
        cMyTrace::cMyTrace(local_20,"bool RestrictGeolocation::isAllow(std::string, std::string)",
                           0x5a,0);
        cMyTrace::operator()
                  (local_20,"[Taiwan, GeoIP] Fail Account:%s, IP:%s, CountryCode:%s",uVar4,uVar7,
                   local_68);
        pSVar5 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,
                                     "localtaiwan/System/RestrictGeolocation.cpp",0x5c);
        CStreamGuard::CStreamGuard(local_70,pSVar5,true);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_70);
                    /* try { // try from 08170e02 to 08170e92 has its CatchHandler @ 08170ea5 */
        CStreamGuard::operator<<(pCVar6,0x11b);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_70);
        CStreamGuard::operator<<(pCVar6,-1);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_70);
        local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_GEO_REJECT>(pCVar6);
        strncpy((char *)(local_10 + 0x10),local_68,0x10);
        pcVar3 = (char *)std::string::c_str((string *)param_2._M_dataplus._M_p);
        strncpy((char *)local_10,pcVar3,0x10);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_70);
        uVar7 = 0;
        CStreamGuard::~CStreamGuard(local_70);
      }
    }
    else {
      uVar7 = std::string::c_str((string *)param_2._M_dataplus._M_p);
      uVar4 = std::string::c_str((string *)param_1._M_dataplus._M_p);
      cMyTrace::cMyTrace(local_40,"bool RestrictGeolocation::isAllow(std::string, std::string)",0x4e
                         ,0);
      cMyTrace::operator()
                (local_40,"[Taiwan, GeoIP] Success Account:%s, IP:%s, CountryCode:%s",uVar4,uVar7,
                 local_68);
      uVar7 = 1;
    }
  }
  return uVar7;
}

```

---

## isAllowCountryCode

```asm
// === 0817109a RestrictGeolocation::isAllowCountryCode  [0x0817109a-0x81710fa] ===
 817109a:	55                   	push   %ebp
 817109b:	89 e5                	mov    %esp,%ebp
 817109d:	83 ec 28             	sub    $0x28,%esp
 81710a0:	8b 45 08             	mov    0x8(%ebp),%eax
 81710a3:	8d 48 04             	lea    0x4(%eax),%ecx
 81710a6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81710a9:	8b 55 0c             	mov    0xc(%ebp),%edx
 81710ac:	89 54 24 08          	mov    %edx,0x8(%esp)
 81710b0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81710b4:	89 04 24             	mov    %eax,(%esp)
 81710b7:	e8 ea 03 00 00       	call   81714a6 <_ZNK5boost9unordered13unordered_setISsNS_4hashISsEESt8equal_toISsESaISsEE4findERKSs>
 81710bc:	83 ec 04             	sub    $0x4,%esp
 81710bf:	8b 45 08             	mov    0x8(%ebp),%eax
 81710c2:	8d 50 04             	lea    0x4(%eax),%edx
 81710c5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81710c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81710cc:	89 04 24             	mov    %eax,(%esp)
 81710cf:	e8 b6 03 00 00       	call   817148a <_ZN5boost9unordered13unordered_setISsNS_4hashISsEESt8equal_toISsESaISsEE3endEv>
 81710d4:	83 ec 04             	sub    $0x4,%esp
 81710d7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81710da:	89 44 24 04          	mov    %eax,0x4(%esp)
 81710de:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81710e1:	89 04 24             	mov    %eax,(%esp)
 81710e4:	e8 f5 03 00 00       	call   81714de <_ZN5boost9unordered15iterator_detailneERKNS1_10c_iteratorIPKNS0_6detail8ptr_nodeISsEEPS5_SsEESB_>
 81710e9:	84 c0                	test   %al,%al
 81710eb:	74 07                	je     81710f4 <_ZN19RestrictGeolocation18isAllowCountryCodeESs+0x5a>
 81710ed:	b8 01 00 00 00       	mov    $0x1,%eax
 81710f2:	eb 05                	jmp    81710f9 <_ZN19RestrictGeolocation18isAllowCountryCodeESs+0x5f>
 81710f4:	b8 00 00 00 00       	mov    $0x0,%eax
 81710f9:	c9                   	leave
 81710fa:	c3                   	ret

```

```c
// RestrictGeolocation::isAllowCountryCode @ 0x817109a

/* RestrictGeolocation::isAllowCountryCode(std::string) */

bool RestrictGeolocation::isAllowCountryCode(string param_1)

{
  char cVar1;
  string local_14;
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  local_10 [12];
  
  boost::unordered::
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  ::find(&local_14);
  boost::unordered::
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  ::end(local_10);
  cVar1 = boost::unordered::iterator_detail::operator!=
                    ((c_iterator *)&local_14,(c_iterator *)local_10);
  return cVar1 != '\0';
}

```

---

## isAllow_08170ecc

```asm
// === 08170ecc RestrictGeolocation::isAllow  [0x08170ecc-0x8170f39] ===
 8170ecc:	55                   	push   %ebp
 8170ecd:	89 e5                	mov    %esp,%ebp
 8170ecf:	56                   	push   %esi
 8170ed0:	53                   	push   %ebx
 8170ed1:	83 ec 20             	sub    $0x20,%esp
 8170ed4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8170ed7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8170edb:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8170ede:	89 04 24             	mov    %eax,(%esp)
 8170ee1:	e8 ca 6a 59 00       	call   87079b0 <_ZNSsC1ERKSs>
 8170ee6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8170ee9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8170eed:	8b 45 08             	mov    0x8(%ebp),%eax
 8170ef0:	89 04 24             	mov    %eax,(%esp)
 8170ef3:	e8 a2 01 00 00       	call   817109a <_ZN19RestrictGeolocation18isAllowCountryCodeESs>
 8170ef8:	89 c3                	mov    %eax,%ebx
 8170efa:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8170efd:	89 04 24             	mov    %eax,(%esp)
 8170f00:	e8 db 6c 59 00       	call   8707be0 <_ZNSsD1Ev>
 8170f05:	84 db                	test   %bl,%bl
 8170f07:	75 1d                	jne    8170f26 <_ZN19RestrictGeolocation7isAllowESs+0x5a>
 8170f09:	eb 22                	jmp    8170f2d <_ZN19RestrictGeolocation7isAllowESs+0x61>
 8170f0b:	89 d3                	mov    %edx,%ebx
 8170f0d:	89 c6                	mov    %eax,%esi
 8170f0f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8170f12:	89 04 24             	mov    %eax,(%esp)
 8170f15:	e8 c6 6c 59 00       	call   8707be0 <_ZNSsD1Ev>
 8170f1a:	89 f0                	mov    %esi,%eax
 8170f1c:	89 da                	mov    %ebx,%edx
 8170f1e:	89 04 24             	mov    %eax,(%esp)
 8170f21:	e8 2a 28 97 00       	call   8ae3750 <_Unwind_Resume>
 8170f26:	b8 01 00 00 00       	mov    $0x1,%eax
 8170f2b:	eb 05                	jmp    8170f32 <_ZN19RestrictGeolocation7isAllowESs+0x66>
 8170f2d:	b8 00 00 00 00       	mov    $0x0,%eax
 8170f32:	83 c4 20             	add    $0x20,%esp
 8170f35:	5b                   	pop    %ebx
 8170f36:	5e                   	pop    %esi
 8170f37:	5d                   	pop    %ebp
 8170f38:	c3                   	ret
 8170f39:	90                   	nop

```

```c
// RestrictGeolocation::isAllow @ 0x8170ecc

/* RestrictGeolocation::isAllow(std::string) */

bool __thiscall RestrictGeolocation::isAllow(RestrictGeolocation *this,string param_1)

{
  char cVar1;
  string local_10 [4];
  
  std::string::string(local_10,(string *)param_1._M_dataplus._M_p);
                    /* try { // try from 08170ef3 to 08170ef7 has its CatchHandler @ 08170f0b */
  cVar1 = isAllowCountryCode((string)this);
  std::string::~string(local_10);
  return cVar1 != '\0';
}

```

---

## loadData

```asm
// === 08170fec RestrictGeolocation::loadData  [0x08170fec-0x8171099] ===
 8170fec:	55                   	push   %ebp
 8170fed:	89 e5                	mov    %esp,%ebp
 8170fef:	56                   	push   %esi
 8170ff0:	53                   	push   %ebx
 8170ff1:	83 ec 20             	sub    $0x20,%esp
 8170ff4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8170ff9:	c7 44 24 08 8b 00 00 	movl   $0x8b,0x8(%esp)
 8171000:	00 
 8171001:	c7 44 24 04 90 31 b8 	movl   $0x8b83190,0x4(%esp)
 8171008:	08 
 8171009:	89 04 24             	mov    %eax,(%esp)
 817100c:	e8 75 ea 11 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8171011:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8171018:	00 
 8171019:	89 44 24 04          	mov    %eax,0x4(%esp)
 817101d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8171020:	89 04 24             	mov    %eax,(%esp)
 8171023:	e8 fe 7b f5 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8171028:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 817102f:	ff 
 8171030:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8171037:	00 
 8171038:	8d 45 f0             	lea    -0x10(%ebp),%eax
 817103b:	89 04 24             	mov    %eax,(%esp)
 817103e:	e8 0d 29 ff ff       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 8171043:	8b 45 08             	mov    0x8(%ebp),%eax
 8171046:	89 04 24             	mov    %eax,(%esp)
 8171049:	e8 c8 fa ff ff       	call   8170b16 <_ZN19RestrictGeolocation17clearAllowCountryEv>
 817104e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8171053:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8171056:	89 54 24 08          	mov    %edx,0x8(%esp)
 817105a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8171061:	00 
 8171062:	89 04 24             	mov    %eax,(%esp)
 8171065:	e8 74 ff 3f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 817106a:	eb 1b                	jmp    8171087 <_ZN19RestrictGeolocation8loadDataEv+0x9b>
 817106c:	89 d3                	mov    %edx,%ebx
 817106e:	89 c6                	mov    %eax,%esi
 8171070:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8171073:	89 04 24             	mov    %eax,(%esp)
 8171076:	e8 57 b8 4a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 817107b:	89 f0                	mov    %esi,%eax
 817107d:	89 da                	mov    %ebx,%edx
 817107f:	89 04 24             	mov    %eax,(%esp)
 8171082:	e8 c9 26 97 00       	call   8ae3750 <_Unwind_Resume>
 8171087:	8d 45 f0             	lea    -0x10(%ebp),%eax
 817108a:	89 04 24             	mov    %eax,(%esp)
 817108d:	e8 40 b8 4a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8171092:	83 c4 20             	add    $0x20,%esp
 8171095:	5b                   	pop    %ebx
 8171096:	5e                   	pop    %esi
 8171097:	5d                   	pop    %ebp
 8171098:	c3                   	ret
 8171099:	90                   	nop

```

```c
// RestrictGeolocation::loadData @ 0x8170fec

/* RestrictGeolocation::loadData() */

void __thiscall RestrictGeolocation::loadData(RestrictGeolocation *this)

{
  Stream *pSVar1;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/System/RestrictGeolocation.cpp",0x8b);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
                    /* try { // try from 0817103e to 08171069 has its CatchHandler @ 0817106c */
  Taiwan::internal_stream(local_14,4,0xffffffff);
  clearAllowCountry(this);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

---

## ~RestrictGeolocation

```asm
// === 081709fe RestrictGeolocation::~RestrictGeolocation  [0x081709fe-0x8170a45] ===
 81709fe:	55                   	push   %ebp
 81709ff:	89 e5                	mov    %esp,%ebp
 8170a01:	56                   	push   %esi
 8170a02:	53                   	push   %ebx
 8170a03:	83 ec 10             	sub    $0x10,%esp
 8170a06:	8b 45 08             	mov    0x8(%ebp),%eax
 8170a09:	89 04 24             	mov    %eax,(%esp)
 8170a0c:	e8 77 00 00 00       	call   8170a88 <_ZN19RestrictGeolocation16closeGeolocationEv>
 8170a11:	eb 1e                	jmp    8170a31 <_ZN19RestrictGeolocationD1Ev+0x33>
 8170a13:	89 d3                	mov    %edx,%ebx
 8170a15:	89 c6                	mov    %eax,%esi
 8170a17:	8b 45 08             	mov    0x8(%ebp),%eax
 8170a1a:	83 c0 04             	add    $0x4,%eax
 8170a1d:	89 04 24             	mov    %eax,(%esp)
 8170a20:	e8 51 0a 00 00       	call   8171476 <_ZN5boost9unordered13unordered_setISsNS_4hashISsEESt8equal_toISsESaISsEED1Ev>
 8170a25:	89 f0                	mov    %esi,%eax
 8170a27:	89 da                	mov    %ebx,%edx
 8170a29:	89 04 24             	mov    %eax,(%esp)
 8170a2c:	e8 1f 2d 97 00       	call   8ae3750 <_Unwind_Resume>
 8170a31:	8b 45 08             	mov    0x8(%ebp),%eax
 8170a34:	83 c0 04             	add    $0x4,%eax
 8170a37:	89 04 24             	mov    %eax,(%esp)
 8170a3a:	e8 37 0a 00 00       	call   8171476 <_ZN5boost9unordered13unordered_setISsNS_4hashISsEESt8equal_toISsESaISsEED1Ev>
 8170a3f:	83 c4 10             	add    $0x10,%esp
 8170a42:	5b                   	pop    %ebx
 8170a43:	5e                   	pop    %esi
 8170a44:	5d                   	pop    %ebp
 8170a45:	c3                   	ret

```

```c
// RestrictGeolocation::~RestrictGeolocation @ 0x81709fe

/* RestrictGeolocation::~RestrictGeolocation() */

void __thiscall RestrictGeolocation::~RestrictGeolocation(RestrictGeolocation *this)

{
                    /* try { // try from 08170a0c to 08170a10 has its CatchHandler @ 08170a13 */
  closeGeolocation(this);
  boost::unordered::
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  ::~unordered_set((unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
                    *)(this + 4));
  return;
}

```

