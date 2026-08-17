# CGuildServerProxy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 60

---

## CGuildServerProxy

```asm
// === 0846d818 CGuildServerProxy::CGuildServerProxy  [0x0846d818-0x846d8c1] ===
 846d818:	55                   	push   %ebp
 846d819:	89 e5                	mov    %esp,%ebp
 846d81b:	56                   	push   %esi
 846d81c:	53                   	push   %ebx
 846d81d:	83 ec 10             	sub    $0x10,%esp
 846d820:	8b 45 08             	mov    0x8(%ebp),%eax
 846d823:	8b 55 0c             	mov    0xc(%ebp),%edx
 846d826:	89 54 24 04          	mov    %edx,0x4(%esp)
 846d82a:	89 04 24             	mov    %eax,(%esp)
 846d82d:	e8 7e a1 29 00       	call   87079b0 <_ZNSsC1ERKSs>
 846d832:	8b 45 08             	mov    0x8(%ebp),%eax
 846d835:	8b 55 10             	mov    0x10(%ebp),%edx
 846d838:	89 50 04             	mov    %edx,0x4(%eax)
 846d83b:	8b 45 08             	mov    0x8(%ebp),%eax
 846d83e:	83 c0 08             	add    $0x8,%eax
 846d841:	89 04 24             	mov    %eax,(%esp)
 846d844:	e8 5d dd e3 ff       	call   82ab5a6 <_ZNSt3mapIj12STGuildProxySt4lessIjESaISt4pairIKjS0_EEEC1Ev>
 846d849:	8b 45 08             	mov    0x8(%ebp),%eax
 846d84c:	8b 55 14             	mov    0x14(%ebp),%edx
 846d84f:	89 50 20             	mov    %edx,0x20(%eax)
 846d852:	8b 45 08             	mov    0x8(%ebp),%eax
 846d855:	83 c0 24             	add    $0x24,%eax
 846d858:	89 04 24             	mov    %eax,(%esp)
 846d85b:	e8 90 dc e3 ff       	call   82ab4f0 <_ZN8CNetworkILi100000ELi100000EEC1Ev>
 846d860:	8b 45 08             	mov    0x8(%ebp),%eax
 846d863:	05 1c 0e 03 00       	add    $0x30e1c,%eax
 846d868:	89 04 24             	mov    %eax,(%esp)
 846d86b:	e8 a8 5c 01 00       	call   8483518 <_ZN11CUdpHandlerC1Ev>
 846d870:	eb 49                	jmp    846d8bb <_ZN17CGuildServerProxyC1ESsii+0xa3>
 846d872:	89 d3                	mov    %edx,%ebx
 846d874:	89 c6                	mov    %eax,%esi
 846d876:	8b 45 08             	mov    0x8(%ebp),%eax
 846d879:	83 c0 24             	add    $0x24,%eax
 846d87c:	89 04 24             	mov    %eax,(%esp)
 846d87f:	e8 0a dd e3 ff       	call   82ab58e <_ZN8CNetworkILi100000ELi100000EED1Ev>
 846d884:	89 f0                	mov    %esi,%eax
 846d886:	89 da                	mov    %ebx,%edx
 846d888:	89 d3                	mov    %edx,%ebx
 846d88a:	89 c6                	mov    %eax,%esi
 846d88c:	8b 45 08             	mov    0x8(%ebp),%eax
 846d88f:	83 c0 08             	add    $0x8,%eax
 846d892:	89 04 24             	mov    %eax,(%esp)
 846d895:	e8 e8 91 e3 ff       	call   82a6a82 <_ZNSt3mapIj12STGuildProxySt4lessIjESaISt4pairIKjS0_EEED1Ev>
 846d89a:	89 f0                	mov    %esi,%eax
 846d89c:	89 da                	mov    %ebx,%edx
 846d89e:	eb 00                	jmp    846d8a0 <_ZN17CGuildServerProxyC1ESsii+0x88>
 846d8a0:	89 d3                	mov    %edx,%ebx
 846d8a2:	89 c6                	mov    %eax,%esi
 846d8a4:	8b 45 08             	mov    0x8(%ebp),%eax
 846d8a7:	89 04 24             	mov    %eax,(%esp)
 846d8aa:	e8 31 a3 29 00       	call   8707be0 <_ZNSsD1Ev>
 846d8af:	89 f0                	mov    %esi,%eax
 846d8b1:	89 da                	mov    %ebx,%edx
 846d8b3:	89 04 24             	mov    %eax,(%esp)
 846d8b6:	e8 95 5e 67 00       	call   8ae3750 <_Unwind_Resume>
 846d8bb:	83 c4 10             	add    $0x10,%esp
 846d8be:	5b                   	pop    %ebx
 846d8bf:	5e                   	pop    %esi
 846d8c0:	5d                   	pop    %ebp
 846d8c1:	c3                   	ret

```

```c
// CGuildServerProxy::CGuildServerProxy @ 0x846d818

/* CGuildServerProxy::CGuildServerProxy(std::string, int, int) */

void __thiscall
CGuildServerProxy::CGuildServerProxy(CGuildServerProxy *this,string param_1,int param_2,int param_3)

{
  std::string::string((string *)this,(string *)param_1._M_dataplus._M_p);
  *(int *)(this + 4) = param_2;
                    /* try { // try from 0846d844 to 0846d848 has its CatchHandler @ 0846d8a0 */
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::map((map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
         *)(this + 8));
  *(int *)(this + 0x20) = param_3;
  CNetwork<100000,100000>::CNetwork((CNetwork<100000,100000> *)(this + 0x24));
                    /* try { // try from 0846d86b to 0846d86f has its CatchHandler @ 0846d872 */
  CUdpHandler::CUdpHandler((CUdpHandler *)(this + 0x30e1c));
  return;
}

```

---

## ChangeGuildAgitFlagInProxy

```asm
// === 0846eb0e CGuildServerProxy::ChangeGuildAgitFlagInProxy  [0x0846eb0e-0x846ebb9] ===
 846eb0e:	55                   	push   %ebp
 846eb0f:	89 e5                	mov    %esp,%ebp
 846eb11:	83 ec 48             	sub    $0x48,%esp
 846eb14:	8b 45 10             	mov    0x10(%ebp),%eax
 846eb17:	88 45 e4             	mov    %al,-0x1c(%ebp)
 846eb1a:	8b 45 08             	mov    0x8(%ebp),%eax
 846eb1d:	8d 48 08             	lea    0x8(%eax),%ecx
 846eb20:	8d 45 ec             	lea    -0x14(%ebp),%eax
 846eb23:	8d 55 0c             	lea    0xc(%ebp),%edx
 846eb26:	89 54 24 08          	mov    %edx,0x8(%esp)
 846eb2a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 846eb2e:	89 04 24             	mov    %eax,(%esp)
 846eb31:	e8 24 12 00 00       	call   846fd5a <_ZNSt3mapIj12STGuildProxySt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 846eb36:	83 ec 04             	sub    $0x4,%esp
 846eb39:	8b 45 08             	mov    0x8(%ebp),%eax
 846eb3c:	8d 50 08             	lea    0x8(%eax),%edx
 846eb3f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 846eb42:	89 54 24 04          	mov    %edx,0x4(%esp)
 846eb46:	89 04 24             	mov    %eax,(%esp)
 846eb49:	e8 38 12 00 00       	call   846fd86 <_ZNSt3mapIj12STGuildProxySt4lessIjESaISt4pairIKjS0_EEE3endEv>
 846eb4e:	83 ec 04             	sub    $0x4,%esp
 846eb51:	8d 45 f0             	lea    -0x10(%ebp),%eax
 846eb54:	89 44 24 04          	mov    %eax,0x4(%esp)
 846eb58:	8d 45 ec             	lea    -0x14(%ebp),%eax
 846eb5b:	89 04 24             	mov    %eax,(%esp)
 846eb5e:	e8 49 12 00 00       	call   846fdac <_ZNKSt17_Rb_tree_iteratorISt4pairIKj12STGuildProxyEEeqERKS4_>
 846eb63:	84 c0                	test   %al,%al
 846eb65:	74 35                	je     846eb9c <_ZN17CGuildServerProxy26ChangeGuildAgitFlagInProxyEjh+0x8e>
 846eb67:	8b 45 0c             	mov    0xc(%ebp),%eax
 846eb6a:	89 44 24 14          	mov    %eax,0x14(%esp)
 846eb6e:	c7 44 24 10 f4 80 c6 	movl   $0x8c680f4,0x10(%esp)
 846eb75:	08 
 846eb76:	c7 44 24 0c 6e 08 00 	movl   $0x86e,0xc(%esp)
 846eb7d:	00 
 846eb7e:	c7 44 24 08 80 8f c6 	movl   $0x8c68f80,0x8(%esp)
 846eb85:	08 
 846eb86:	c7 44 24 04 7c 7f c6 	movl   $0x8c67f7c,0x4(%esp)
 846eb8d:	08 
 846eb8e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 846eb95:	e8 70 50 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 846eb9a:	eb 1b                	jmp    846ebb7 <_ZN17CGuildServerProxy26ChangeGuildAgitFlagInProxyEjh+0xa9>
 846eb9c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 846eb9f:	89 04 24             	mov    %eax,(%esp)
 846eba2:	e8 19 12 00 00       	call   846fdc0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj12STGuildProxyEEptEv>
 846eba7:	83 c0 04             	add    $0x4,%eax
 846ebaa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846ebad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 846ebb0:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 846ebb4:	88 50 18             	mov    %dl,0x18(%eax)
 846ebb7:	c9                   	leave
 846ebb8:	c3                   	ret
 846ebb9:	90                   	nop

```

```c
// CGuildServerProxy::ChangeGuildAgitFlagInProxy @ 0x846eb0e

/* CGuildServerProxy::ChangeGuildAgitFlagInProxy(unsigned int, unsigned char) */

void __thiscall
CGuildServerProxy::ChangeGuildAgitFlagInProxy(CGuildServerProxy *this,uint param_1,uchar param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>> local_18 [4];
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  local_14 [16];
  
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>>::operator->(local_18)
    ;
    *(uchar *)(iVar2 + 0x1c) = param_2;
  }
  else {
    LogManager::logFormat
              (1,"DF_GuildServerProxy.cpp",
               "void CGuildServerProxy::ChangeGuildAgitFlagInProxy(unsigned int, unsigned char)",
               0x86e,"Find fail from guild info proxy(guild_id:%d)",param_1);
  }
  return;
}

```

---

## ChangeGuildNameInProxy

```asm
// === 0846ea3e CGuildServerProxy::ChangeGuildNameInProxy  [0x0846ea3e-0x846eb0d] ===
 846ea3e:	55                   	push   %ebp
 846ea3f:	89 e5                	mov    %esp,%ebp
 846ea41:	83 ec 38             	sub    $0x38,%esp
 846ea44:	8b 45 08             	mov    0x8(%ebp),%eax
 846ea47:	8d 48 08             	lea    0x8(%eax),%ecx
 846ea4a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 846ea4d:	8d 55 0c             	lea    0xc(%ebp),%edx
 846ea50:	89 54 24 08          	mov    %edx,0x8(%esp)
 846ea54:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 846ea58:	89 04 24             	mov    %eax,(%esp)
 846ea5b:	e8 fa 12 00 00       	call   846fd5a <_ZNSt3mapIj12STGuildProxySt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 846ea60:	83 ec 04             	sub    $0x4,%esp
 846ea63:	8b 45 08             	mov    0x8(%ebp),%eax
 846ea66:	8d 50 08             	lea    0x8(%eax),%edx
 846ea69:	8d 45 f0             	lea    -0x10(%ebp),%eax
 846ea6c:	89 54 24 04          	mov    %edx,0x4(%esp)
 846ea70:	89 04 24             	mov    %eax,(%esp)
 846ea73:	e8 0e 13 00 00       	call   846fd86 <_ZNSt3mapIj12STGuildProxySt4lessIjESaISt4pairIKjS0_EEE3endEv>
 846ea78:	83 ec 04             	sub    $0x4,%esp
 846ea7b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 846ea7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 846ea82:	8d 45 ec             	lea    -0x14(%ebp),%eax
 846ea85:	89 04 24             	mov    %eax,(%esp)
 846ea88:	e8 1f 13 00 00       	call   846fdac <_ZNKSt17_Rb_tree_iteratorISt4pairIKj12STGuildProxyEEeqERKS4_>
 846ea8d:	84 c0                	test   %al,%al
 846ea8f:	74 35                	je     846eac6 <_ZN17CGuildServerProxy22ChangeGuildNameInProxyEjPc+0x88>
 846ea91:	8b 45 0c             	mov    0xc(%ebp),%eax
 846ea94:	89 44 24 14          	mov    %eax,0x14(%esp)
 846ea98:	c7 44 24 10 f4 80 c6 	movl   $0x8c680f4,0x10(%esp)
 846ea9f:	08 
 846eaa0:	c7 44 24 0c 60 08 00 	movl   $0x860,0xc(%esp)
 846eaa7:	00 
 846eaa8:	c7 44 24 08 e0 8f c6 	movl   $0x8c68fe0,0x8(%esp)
 846eaaf:	08 
 846eab0:	c7 44 24 04 7c 7f c6 	movl   $0x8c67f7c,0x4(%esp)
 846eab7:	08 
 846eab8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 846eabf:	e8 46 51 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 846eac4:	eb 46                	jmp    846eb0c <_ZN17CGuildServerProxy22ChangeGuildNameInProxyEjPc+0xce>
 846eac6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 846eac9:	89 04 24             	mov    %eax,(%esp)
 846eacc:	e8 ef 12 00 00       	call   846fdc0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj12STGuildProxyEEptEv>
 846ead1:	83 c0 04             	add    $0x4,%eax
 846ead4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846ead7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 846eada:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 846eae1:	00 
 846eae2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 846eae9:	00 
 846eaea:	89 04 24             	mov    %eax,(%esp)
 846eaed:	e8 ce f1 c0 ff       	call   807dcc0 <memset@plt>
 846eaf2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 846eaf5:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 846eafc:	00 
 846eafd:	8b 55 10             	mov    0x10(%ebp),%edx
 846eb00:	89 54 24 04          	mov    %edx,0x4(%esp)
 846eb04:	89 04 24             	mov    %eax,(%esp)
 846eb07:	e8 94 ed c0 ff       	call   807d8a0 <memcpy@plt>
 846eb0c:	c9                   	leave
 846eb0d:	c3                   	ret

```

```c
// CGuildServerProxy::ChangeGuildNameInProxy @ 0x846ea3e

/* CGuildServerProxy::ChangeGuildNameInProxy(unsigned int, char*) */

void __thiscall
CGuildServerProxy::ChangeGuildNameInProxy(CGuildServerProxy *this,uint param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>> local_18 [4];
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  local_14 [4];
  void *local_10;
  
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>>::operator->(local_18)
    ;
    local_10 = (void *)(iVar2 + 4);
    memset(local_10,0,0x17);
    memcpy(local_10,param_2,0x16);
  }
  else {
    LogManager::logFormat
              (1,"DF_GuildServerProxy.cpp",
               "void CGuildServerProxy::ChangeGuildNameInProxy(unsigned int, char*)",0x860,
               "Find fail from guild info proxy(guild_id:%d)",param_1);
  }
  return;
}

```

---

## Disconnect

```asm
// === 0846da84 CGuildServerProxy::Disconnect  [0x0846da84-0x846da99] ===
 846da84:	55                   	push   %ebp
 846da85:	89 e5                	mov    %esp,%ebp
 846da87:	83 ec 18             	sub    $0x18,%esp
 846da8a:	8b 45 08             	mov    0x8(%ebp),%eax
 846da8d:	83 c0 24             	add    $0x24,%eax
 846da90:	89 04 24             	mov    %eax,(%esp)
 846da93:	e8 c0 04 e9 ff       	call   82fdf58 <_ZN8CNetworkILi100000ELi100000EE10disconnectEv>
 846da98:	c9                   	leave
 846da99:	c3                   	ret

```

```c
// CGuildServerProxy::Disconnect @ 0x846da84

/* CGuildServerProxy::Disconnect() */

void __thiscall CGuildServerProxy::Disconnect(CGuildServerProxy *this)

{
  CNetwork<100000,100000>::disconnect((CNetwork<100000,100000> *)(this + 0x24));
  return;
}

```

---

## GetGuildInfoProxy

```asm
// === 0846ebba CGuildServerProxy::GetGuildInfoProxy  [0x0846ebba-0x846ec87] ===
 846ebba:	55                   	push   %ebp
 846ebbb:	89 e5                	mov    %esp,%ebp
 846ebbd:	83 ec 38             	sub    $0x38,%esp
 846ebc0:	8b 45 08             	mov    0x8(%ebp),%eax
 846ebc3:	8d 48 08             	lea    0x8(%eax),%ecx
 846ebc6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 846ebc9:	8d 55 0c             	lea    0xc(%ebp),%edx
 846ebcc:	89 54 24 08          	mov    %edx,0x8(%esp)
 846ebd0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 846ebd4:	89 04 24             	mov    %eax,(%esp)
 846ebd7:	e8 7e 11 00 00       	call   846fd5a <_ZNSt3mapIj12STGuildProxySt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 846ebdc:	83 ec 04             	sub    $0x4,%esp
 846ebdf:	8b 45 08             	mov    0x8(%ebp),%eax
 846ebe2:	8d 50 08             	lea    0x8(%eax),%edx
 846ebe5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 846ebe8:	89 54 24 04          	mov    %edx,0x4(%esp)
 846ebec:	89 04 24             	mov    %eax,(%esp)
 846ebef:	e8 92 11 00 00       	call   846fd86 <_ZNSt3mapIj12STGuildProxySt4lessIjESaISt4pairIKjS0_EEE3endEv>
 846ebf4:	83 ec 04             	sub    $0x4,%esp
 846ebf7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 846ebfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 846ebfe:	8d 45 f0             	lea    -0x10(%ebp),%eax
 846ec01:	89 04 24             	mov    %eax,(%esp)
 846ec04:	e8 a3 11 00 00       	call   846fdac <_ZNKSt17_Rb_tree_iteratorISt4pairIKj12STGuildProxyEEeqERKS4_>
 846ec09:	84 c0                	test   %al,%al
 846ec0b:	74 3a                	je     846ec47 <_ZN17CGuildServerProxy17GetGuildInfoProxyEjR12STGuildProxy+0x8d>
 846ec0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 846ec10:	89 44 24 14          	mov    %eax,0x14(%esp)
 846ec14:	c7 44 24 10 f4 80 c6 	movl   $0x8c680f4,0x10(%esp)
 846ec1b:	08 
 846ec1c:	c7 44 24 0c 7d 08 00 	movl   $0x87d,0xc(%esp)
 846ec23:	00 
 846ec24:	c7 44 24 08 20 8f c6 	movl   $0x8c68f20,0x8(%esp)
 846ec2b:	08 
 846ec2c:	c7 44 24 04 7c 7f c6 	movl   $0x8c67f7c,0x4(%esp)
 846ec33:	08 
 846ec34:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 846ec3b:	e8 ca 4f 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 846ec40:	b8 00 00 00 00       	mov    $0x0,%eax
 846ec45:	eb 3e                	jmp    846ec85 <_ZN17CGuildServerProxy17GetGuildInfoProxyEjR12STGuildProxy+0xcb>
 846ec47:	8d 45 f0             	lea    -0x10(%ebp),%eax
 846ec4a:	89 04 24             	mov    %eax,(%esp)
 846ec4d:	e8 6e 11 00 00       	call   846fdc0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj12STGuildProxyEEptEv>
 846ec52:	8b 55 10             	mov    0x10(%ebp),%edx
 846ec55:	8b 48 04             	mov    0x4(%eax),%ecx
 846ec58:	89 0a                	mov    %ecx,(%edx)
 846ec5a:	8b 48 08             	mov    0x8(%eax),%ecx
 846ec5d:	89 4a 04             	mov    %ecx,0x4(%edx)
 846ec60:	8b 48 0c             	mov    0xc(%eax),%ecx
 846ec63:	89 4a 08             	mov    %ecx,0x8(%edx)
 846ec66:	8b 48 10             	mov    0x10(%eax),%ecx
 846ec69:	89 4a 0c             	mov    %ecx,0xc(%edx)
 846ec6c:	8b 48 14             	mov    0x14(%eax),%ecx
 846ec6f:	89 4a 10             	mov    %ecx,0x10(%edx)
 846ec72:	8b 48 18             	mov    0x18(%eax),%ecx
 846ec75:	89 4a 14             	mov    %ecx,0x14(%edx)
 846ec78:	0f b7 40 1c          	movzwl 0x1c(%eax),%eax
 846ec7c:	66 89 42 18          	mov    %ax,0x18(%edx)
 846ec80:	b8 01 00 00 00       	mov    $0x1,%eax
 846ec85:	c9                   	leave
 846ec86:	c3                   	ret
 846ec87:	90                   	nop

```

```c
// CGuildServerProxy::GetGuildInfoProxy @ 0x846ebba

/* CGuildServerProxy::GetGuildInfoProxy(unsigned int, STGuildProxy&) */

bool __thiscall
CGuildServerProxy::GetGuildInfoProxy(CGuildServerProxy *this,uint param_1,STGuildProxy *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>> local_14 [4];
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  local_10 [12];
  
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>>::operator==
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>>::operator->(local_14)
    ;
    *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar2 + 0x14);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(iVar2 + 0x18);
    *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(iVar2 + 0x1c);
  }
  else {
    LogManager::logFormat
              (1,"DF_GuildServerProxy.cpp",
               "bool CGuildServerProxy::GetGuildInfoProxy(unsigned int, STGuildProxy&)",0x87d,
               "Find fail from guild info proxy(guild_id:%d)",param_1);
  }
  return cVar1 == '\0';
}

```

---

## Init

```asm
// === 0846d8c2 CGuildServerProxy::Init  [0x0846d8c2-0x846d911] ===
 846d8c2:	55                   	push   %ebp
 846d8c3:	89 e5                	mov    %esp,%ebp
 846d8c5:	83 ec 18             	sub    $0x18,%esp
 846d8c8:	8b 45 08             	mov    0x8(%ebp),%eax
 846d8cb:	8b 40 04             	mov    0x4(%eax),%eax
 846d8ce:	85 c0                	test   %eax,%eax
 846d8d0:	75 07                	jne    846d8d9 <_ZN17CGuildServerProxy4InitEv+0x17>
 846d8d2:	b8 01 00 00 00       	mov    $0x1,%eax
 846d8d7:	eb 37                	jmp    846d910 <_ZN17CGuildServerProxy4InitEv+0x4e>
 846d8d9:	8b 45 08             	mov    0x8(%ebp),%eax
 846d8dc:	89 04 24             	mov    %eax,(%esp)
 846d8df:	e8 2e 00 00 00       	call   846d912 <_ZN17CGuildServerProxy7InitUdpEv>
 846d8e4:	83 f0 01             	xor    $0x1,%eax
 846d8e7:	84 c0                	test   %al,%al
 846d8e9:	74 07                	je     846d8f2 <_ZN17CGuildServerProxy4InitEv+0x30>
 846d8eb:	b8 00 00 00 00       	mov    $0x0,%eax
 846d8f0:	eb 1e                	jmp    846d910 <_ZN17CGuildServerProxy4InitEv+0x4e>
 846d8f2:	8b 45 08             	mov    0x8(%ebp),%eax
 846d8f5:	89 04 24             	mov    %eax,(%esp)
 846d8f8:	e8 6f 00 00 00       	call   846d96c <_ZN17CGuildServerProxy7InitTcpEv>
 846d8fd:	83 f0 01             	xor    $0x1,%eax
 846d900:	84 c0                	test   %al,%al
 846d902:	74 07                	je     846d90b <_ZN17CGuildServerProxy4InitEv+0x49>
 846d904:	b8 00 00 00 00       	mov    $0x0,%eax
 846d909:	eb 05                	jmp    846d910 <_ZN17CGuildServerProxy4InitEv+0x4e>
 846d90b:	b8 01 00 00 00       	mov    $0x1,%eax
 846d910:	c9                   	leave
 846d911:	c3                   	ret

```

```c
// CGuildServerProxy::Init @ 0x846d8c2

/* CGuildServerProxy::Init() */

undefined4 __thiscall CGuildServerProxy::Init(CGuildServerProxy *this)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 4) == 0) {
    uVar2 = 1;
  }
  else {
    cVar1 = InitUdp(this);
    if (cVar1 == '\x01') {
      cVar1 = InitTcp(this);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## InitTcp

```asm
// === 0846d96c CGuildServerProxy::InitTcp  [0x0846d96c-0x846da83] ===
 846d96c:	55                   	push   %ebp
 846d96d:	89 e5                	mov    %esp,%ebp
 846d96f:	57                   	push   %edi
 846d970:	56                   	push   %esi
 846d971:	53                   	push   %ebx
 846d972:	83 ec 5c             	sub    $0x5c,%esp
 846d975:	8b 45 08             	mov    0x8(%ebp),%eax
 846d978:	8b 40 04             	mov    0x4(%eax),%eax
 846d97b:	85 c0                	test   %eax,%eax
 846d97d:	75 0a                	jne    846d989 <_ZN17CGuildServerProxy7InitTcpEv+0x1d>
 846d97f:	b8 01 00 00 00       	mov    $0x1,%eax
 846d984:	e9 f2 00 00 00       	jmp    846da7b <_ZN17CGuildServerProxy7InitTcpEv+0x10f>
 846d989:	8b 45 08             	mov    0x8(%ebp),%eax
 846d98c:	8b 40 24             	mov    0x24(%eax),%eax
 846d98f:	85 c0                	test   %eax,%eax
 846d991:	0f 89 99 00 00 00    	jns    846da30 <_ZN17CGuildServerProxy7InitTcpEv+0xc4>
 846d997:	8b 45 08             	mov    0x8(%ebp),%eax
 846d99a:	8b 58 20             	mov    0x20(%eax),%ebx
 846d99d:	8b 45 08             	mov    0x8(%ebp),%eax
 846d9a0:	89 04 24             	mov    %eax,(%esp)
 846d9a3:	e8 48 8b 29 00       	call   87064f0 <_ZNKSs5c_strEv>
 846d9a8:	8b 55 08             	mov    0x8(%ebp),%edx
 846d9ab:	83 c2 24             	add    $0x24,%edx
 846d9ae:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 846d9b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 846d9b6:	89 14 24             	mov    %edx,(%esp)
 846d9b9:	e8 db 03 e9 ff       	call   82fdd99 <_ZN8CNetworkILi100000ELi100000EE22CreateConnectionSocketERiPKci>
 846d9be:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 846d9c1:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 846d9c5:	0f 95 c0             	setne  %al
 846d9c8:	84 c0                	test   %al,%al
 846d9ca:	74 64                	je     846da30 <_ZN17CGuildServerProxy7InitTcpEv+0xc4>
 846d9cc:	e8 9f 03 c1 ff       	call   807dd70 <__errno_location@plt>
 846d9d1:	8b 00                	mov    (%eax),%eax
 846d9d3:	89 04 24             	mov    %eax,(%esp)
 846d9d6:	e8 55 fd c0 ff       	call   807d730 <strerror@plt>
 846d9db:	89 c3                	mov    %eax,%ebx
 846d9dd:	e8 8e 03 c1 ff       	call   807dd70 <__errno_location@plt>
 846d9e2:	8b 38                	mov    (%eax),%edi
 846d9e4:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 846d9e7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 846d9ee:	00 
 846d9ef:	c7 44 24 08 ea 04 00 	movl   $0x4ea,0x8(%esp)
 846d9f6:	00 
 846d9f7:	c7 44 24 04 e0 91 c6 	movl   $0x8c691e0,0x4(%esp)
 846d9fe:	08 
 846d9ff:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 846da02:	89 04 24             	mov    %eax,(%esp)
 846da05:	e8 0e 1d 0e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 846da0a:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 846da0e:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 846da12:	89 74 24 08          	mov    %esi,0x8(%esp)
 846da16:	c7 44 24 04 94 7f c6 	movl   $0x8c67f94,0x4(%esp)
 846da1d:	08 
 846da1e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 846da21:	89 04 24             	mov    %eax,(%esp)
 846da24:	e8 5f 1d 0e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 846da29:	b8 00 00 00 00       	mov    $0x0,%eax
 846da2e:	eb 4b                	jmp    846da7b <_ZN17CGuildServerProxy7InitTcpEv+0x10f>
 846da30:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 846da37:	00 
 846da38:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 846da3f:	00 
 846da40:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 846da47:	00 
 846da48:	c7 44 24 08 ef 04 00 	movl   $0x4ef,0x8(%esp)
 846da4f:	00 
 846da50:	c7 44 24 04 e0 91 c6 	movl   $0x8c691e0,0x4(%esp)
 846da57:	08 
 846da58:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 846da5b:	89 04 24             	mov    %eax,(%esp)
 846da5e:	e8 e3 1c 0e 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 846da63:	c7 44 24 04 d0 7f c6 	movl   $0x8c67fd0,0x4(%esp)
 846da6a:	08 
 846da6b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 846da6e:	89 04 24             	mov    %eax,(%esp)
 846da71:	e8 12 1d 0e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 846da76:	b8 01 00 00 00       	mov    $0x1,%eax
 846da7b:	83 c4 5c             	add    $0x5c,%esp
 846da7e:	5b                   	pop    %ebx
 846da7f:	5e                   	pop    %esi
 846da80:	5f                   	pop    %edi
 846da81:	5d                   	pop    %ebp
 846da82:	c3                   	ret
 846da83:	90                   	nop

```

```c
// CGuildServerProxy::InitTcp @ 0x846d96c

/* CGuildServerProxy::InitTcp() */

undefined4 __thiscall CGuildServerProxy::InitTcp(CGuildServerProxy *this)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  if (*(int *)(this + 4) != 0) {
    if (*(int *)(this + 0x24) < 0) {
      iVar1 = *(int *)(this + 0x20);
      pcVar3 = (char *)std::string::c_str((string *)this);
      local_20 = CNetwork<100000,100000>::CreateConnectionSocket((int *)(this + 0x24),pcVar3,iVar1);
      if (local_20 != 0) {
        piVar4 = __errno_location();
        pcVar3 = strerror(*piVar4);
        piVar4 = __errno_location();
        iVar2 = local_20;
        iVar1 = *piVar4;
        cMyTrace::cMyTrace(local_40,"bool CGuildServerProxy::InitTcp()",0x4ea,0);
        cMyTrace::operator()
                  (local_40,"CGuildServerProxy CreateConnectionSocket() error(%d:%d:%s)",iVar2,iVar1
                   ,pcVar3);
        return 0;
      }
    }
    cMyTrace::cMyTrace(local_30,"bool CGuildServerProxy::InitTcp()",0x4ef,9,true,true);
    cMyTrace::operator()(local_30,"[!] Connect To Guild Server ...");
  }
  return 1;
}

```

---

## InitUdp

```asm
// === 0846d912 CGuildServerProxy::InitUdp  [0x0846d912-0x846d96b] ===
 846d912:	55                   	push   %ebp
 846d913:	89 e5                	mov    %esp,%ebp
 846d915:	83 ec 28             	sub    $0x28,%esp
 846d918:	8b 45 08             	mov    0x8(%ebp),%eax
 846d91b:	05 1c 0e 03 00       	add    $0x30e1c,%eax
 846d920:	89 04 24             	mov    %eax,(%esp)
 846d923:	e8 72 5d 01 00       	call   848369a <_ZN11CUdpHandler16InitClientSocketEv>
 846d928:	83 f8 ff             	cmp    $0xffffffff,%eax
 846d92b:	0f 94 c0             	sete   %al
 846d92e:	84 c0                	test   %al,%al
 846d930:	74 33                	je     846d965 <_ZN17CGuildServerProxy7InitUdpEv+0x53>
 846d932:	c7 44 24 10 44 7f c6 	movl   $0x8c67f44,0x10(%esp)
 846d939:	08 
 846d93a:	c7 44 24 0c d4 04 00 	movl   $0x4d4,0xc(%esp)
 846d941:	00 
 846d942:	c7 44 24 08 20 92 c6 	movl   $0x8c69220,0x8(%esp)
 846d949:	08 
 846d94a:	c7 44 24 04 7c 7f c6 	movl   $0x8c67f7c,0x4(%esp)
 846d951:	08 
 846d952:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 846d959:	e8 ac 62 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 846d95e:	b8 00 00 00 00       	mov    $0x0,%eax
 846d963:	eb 05                	jmp    846d96a <_ZN17CGuildServerProxy7InitUdpEv+0x58>
 846d965:	b8 01 00 00 00       	mov    $0x1,%eax
 846d96a:	c9                   	leave
 846d96b:	c3                   	ret

```

```c
// CGuildServerProxy::InitUdp @ 0x846d912

/* CGuildServerProxy::InitUdp() */

bool __thiscall CGuildServerProxy::InitUdp(CGuildServerProxy *this)

{
  int iVar1;
  
  iVar1 = CUdpHandler::InitClientSocket((CUdpHandler *)(this + 0x30e1c));
  if (iVar1 == -1) {
    LogManager::logFormat
              (1,"DF_GuildServerProxy.cpp","bool CGuildServerProxy::InitUdp()",0x4d4,
               "[CGuildServerProxy::Init] Can\'t init udp client socket\n");
  }
  return iVar1 != -1;
}

```

---

## InsertGuildInfoProxy

```asm
// === 0846ec88 CGuildServerProxy::InsertGuildInfoProxy  [0x0846ec88-0x846ece1] ===
 846ec88:	55                   	push   %ebp
 846ec89:	89 e5                	mov    %esp,%ebp
 846ec8b:	83 ec 68             	sub    $0x68,%esp
 846ec8e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 846ec91:	8b 55 10             	mov    0x10(%ebp),%edx
 846ec94:	89 54 24 08          	mov    %edx,0x8(%esp)
 846ec98:	8d 55 0c             	lea    0xc(%ebp),%edx
 846ec9b:	89 54 24 04          	mov    %edx,0x4(%esp)
 846ec9f:	89 04 24             	mov    %eax,(%esp)
 846eca2:	e8 f2 0f 00 00       	call   846fc99 <_ZSt9make_pairIRjR12STGuildProxyESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 846eca7:	83 ec 04             	sub    $0x4,%esp
 846ecaa:	8d 45 d8             	lea    -0x28(%ebp),%eax
 846ecad:	89 44 24 04          	mov    %eax,0x4(%esp)
 846ecb1:	8d 45 b8             	lea    -0x48(%ebp),%eax
 846ecb4:	89 04 24             	mov    %eax,(%esp)
 846ecb7:	e8 1c 10 00 00       	call   846fcd8 <_ZNSt4pairIKj12STGuildProxyEC1IjS1_EEOS_IT_T0_E>
 846ecbc:	8b 45 08             	mov    0x8(%ebp),%eax
 846ecbf:	8d 48 08             	lea    0x8(%eax),%ecx
 846ecc2:	8d 45 b0             	lea    -0x50(%ebp),%eax
 846ecc5:	8d 55 b8             	lea    -0x48(%ebp),%edx
 846ecc8:	89 54 24 08          	mov    %edx,0x8(%esp)
 846eccc:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 846ecd0:	89 04 24             	mov    %eax,(%esp)
 846ecd3:	e8 56 10 00 00       	call   846fd2e <_ZNSt3mapIj12STGuildProxySt4lessIjESaISt4pairIKjS0_EEE6insertERKS5_>
 846ecd8:	83 ec 04             	sub    $0x4,%esp
 846ecdb:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 846ecdf:	c9                   	leave
 846ece0:	c3                   	ret
 846ece1:	90                   	nop

```

```c
// CGuildServerProxy::InsertGuildInfoProxy @ 0x846ec88

/* CGuildServerProxy::InsertGuildInfoProxy(unsigned int, STGuildProxy&) */

undefined1 __thiscall
CGuildServerProxy::InsertGuildInfoProxy(CGuildServerProxy *this,uint param_1,STGuildProxy *param_2)

{
  pair local_54 [4];
  undefined1 local_50;
  pair<unsigned_int_const,STGuildProxy> local_4c [32];
  uint local_2c [10];
  
  std::make_pair<unsigned_int&,STGuildProxy&>(local_2c,(STGuildProxy *)&param_1);
  std::pair<unsigned_int_const,STGuildProxy>::pair<unsigned_int,STGuildProxy>
            (local_4c,(pair *)local_2c);
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::insert(local_54);
  return local_50;
}

```

---

## LoadGuildInfoProxyFromDB

```asm
// === 0846e714 CGuildServerProxy::LoadGuildInfoProxyFromDB  [0x0846e714-0x846e95d] ===
 846e714:	55                   	push   %ebp
 846e715:	89 e5                	mov    %esp,%ebp
 846e717:	81 ec 98 00 00 00    	sub    $0x98,%esp
 846e71d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 846e722:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 846e729:	00 
 846e72a:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 846e731:	00 
 846e732:	89 04 24             	mov    %eax,(%esp)
 846e735:	e8 04 6b f8 ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 846e73a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 846e73d:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 846e741:	75 0e                	jne    846e751 <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x3d>
 846e743:	e8 39 da c5 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 846e748:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 846e74e:	89 45 0c             	mov    %eax,0xc(%ebp)
 846e751:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e754:	89 44 24 08          	mov    %eax,0x8(%esp)
 846e758:	c7 44 24 04 7c 80 c6 	movl   $0x8c6807c,0x4(%esp)
 846e75f:	08 
 846e760:	8b 45 ec             	mov    -0x14(%ebp),%eax
 846e763:	89 04 24             	mov    %eax,(%esp)
 846e766:	e8 55 5a f8 ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 846e76b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 846e772:	00 
 846e773:	8b 45 ec             	mov    -0x14(%ebp),%eax
 846e776:	89 04 24             	mov    %eax,(%esp)
 846e779:	e8 a8 5b f8 ff       	call   83f4326 <_ZN5MySQL4execEb>
 846e77e:	88 45 eb             	mov    %al,-0x15(%ebp)
 846e781:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 846e785:	83 f0 01             	xor    $0x1,%eax
 846e788:	84 c0                	test   %al,%al
 846e78a:	74 0a                	je     846e796 <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x82>
 846e78c:	b8 00 00 00 00       	mov    $0x0,%eax
 846e791:	e9 c6 01 00 00       	jmp    846e95c <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x248>
 846e796:	8b 45 ec             	mov    -0x14(%ebp),%eax
 846e799:	89 04 24             	mov    %eax,(%esp)
 846e79c:	e8 cb 3b c7 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 846e7a1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846e7a4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 846e7ab:	e9 93 01 00 00       	jmp    846e943 <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x22f>
 846e7b0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 846e7b3:	89 04 24             	mov    %eax,(%esp)
 846e7b6:	e8 01 5d f8 ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 846e7bb:	88 45 eb             	mov    %al,-0x15(%ebp)
 846e7be:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 846e7c2:	83 f0 01             	xor    $0x1,%eax
 846e7c5:	84 c0                	test   %al,%al
 846e7c7:	0f 85 89 01 00 00    	jne    846e956 <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x242>
 846e7cd:	8d 45 82             	lea    -0x7e(%ebp),%eax
 846e7d0:	89 04 24             	mov    %eax,(%esp)
 846e7d3:	e8 06 5d dc ff       	call   82344de <_ZN12STGuildProxyC1Ev>
 846e7d8:	8d 45 9c             	lea    -0x64(%ebp),%eax
 846e7db:	89 44 24 08          	mov    %eax,0x8(%esp)
 846e7df:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 846e7e6:	00 
 846e7e7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 846e7ea:	89 04 24             	mov    %eax,(%esp)
 846e7ed:	e8 00 3b c7 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 846e7f2:	88 45 eb             	mov    %al,-0x15(%ebp)
 846e7f5:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 846e7f9:	83 f0 01             	xor    $0x1,%eax
 846e7fc:	84 c0                	test   %al,%al
 846e7fe:	74 0a                	je     846e80a <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0xf6>
 846e800:	b8 00 00 00 00       	mov    $0x0,%eax
 846e805:	e9 52 01 00 00       	jmp    846e95c <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x248>
 846e80a:	c7 44 24 0c 16 00 00 	movl   $0x16,0xc(%esp)
 846e811:	00 
 846e812:	8d 45 82             	lea    -0x7e(%ebp),%eax
 846e815:	89 44 24 08          	mov    %eax,0x8(%esp)
 846e819:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 846e820:	00 
 846e821:	8b 45 ec             	mov    -0x14(%ebp),%eax
 846e824:	89 04 24             	mov    %eax,(%esp)
 846e827:	e8 be e5 c7 ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 846e82c:	88 45 eb             	mov    %al,-0x15(%ebp)
 846e82f:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 846e833:	83 f0 01             	xor    $0x1,%eax
 846e836:	84 c0                	test   %al,%al
 846e838:	74 0a                	je     846e844 <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x130>
 846e83a:	b8 00 00 00 00       	mov    $0x0,%eax
 846e83f:	e9 18 01 00 00       	jmp    846e95c <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x248>
 846e844:	8d 45 82             	lea    -0x7e(%ebp),%eax
 846e847:	83 c0 17             	add    $0x17,%eax
 846e84a:	89 44 24 08          	mov    %eax,0x8(%esp)
 846e84e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 846e855:	00 
 846e856:	8b 45 ec             	mov    -0x14(%ebp),%eax
 846e859:	89 04 24             	mov    %eax,(%esp)
 846e85c:	e8 59 f6 c8 ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 846e861:	88 45 eb             	mov    %al,-0x15(%ebp)
 846e864:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 846e868:	83 f0 01             	xor    $0x1,%eax
 846e86b:	84 c0                	test   %al,%al
 846e86d:	74 0a                	je     846e879 <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x165>
 846e86f:	b8 00 00 00 00       	mov    $0x0,%eax
 846e874:	e9 e3 00 00 00       	jmp    846e95c <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x248>
 846e879:	8d 45 82             	lea    -0x7e(%ebp),%eax
 846e87c:	83 c0 18             	add    $0x18,%eax
 846e87f:	89 44 24 08          	mov    %eax,0x8(%esp)
 846e883:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 846e88a:	00 
 846e88b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 846e88e:	89 04 24             	mov    %eax,(%esp)
 846e891:	e8 24 f6 c8 ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 846e896:	88 45 eb             	mov    %al,-0x15(%ebp)
 846e899:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 846e89d:	83 f0 01             	xor    $0x1,%eax
 846e8a0:	84 c0                	test   %al,%al
 846e8a2:	74 0a                	je     846e8ae <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x19a>
 846e8a4:	b8 00 00 00 00       	mov    $0x0,%eax
 846e8a9:	e9 ae 00 00 00       	jmp    846e95c <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x248>
 846e8ae:	8d 45 82             	lea    -0x7e(%ebp),%eax
 846e8b1:	83 c0 19             	add    $0x19,%eax
 846e8b4:	89 44 24 08          	mov    %eax,0x8(%esp)
 846e8b8:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 846e8bf:	00 
 846e8c0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 846e8c3:	89 04 24             	mov    %eax,(%esp)
 846e8c6:	e8 ef f5 c8 ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 846e8cb:	88 45 eb             	mov    %al,-0x15(%ebp)
 846e8ce:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 846e8d2:	83 f0 01             	xor    $0x1,%eax
 846e8d5:	84 c0                	test   %al,%al
 846e8d7:	74 07                	je     846e8e0 <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x1cc>
 846e8d9:	b8 00 00 00 00       	mov    $0x0,%eax
 846e8de:	eb 7c                	jmp    846e95c <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x248>
 846e8e0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 846e8e3:	8d 55 82             	lea    -0x7e(%ebp),%edx
 846e8e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e8ea:	8d 55 9c             	lea    -0x64(%ebp),%edx
 846e8ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 846e8f1:	89 04 24             	mov    %eax,(%esp)
 846e8f4:	e8 a0 13 00 00       	call   846fc99 <_ZSt9make_pairIRjR12STGuildProxyESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 846e8f9:	83 ec 04             	sub    $0x4,%esp
 846e8fc:	8d 45 c8             	lea    -0x38(%ebp),%eax
 846e8ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e903:	8d 45 a8             	lea    -0x58(%ebp),%eax
 846e906:	89 04 24             	mov    %eax,(%esp)
 846e909:	e8 ca 13 00 00       	call   846fcd8 <_ZNSt4pairIKj12STGuildProxyEC1IjS1_EEOS_IT_T0_E>
 846e90e:	8b 45 08             	mov    0x8(%ebp),%eax
 846e911:	8d 48 08             	lea    0x8(%eax),%ecx
 846e914:	8d 45 a0             	lea    -0x60(%ebp),%eax
 846e917:	8d 55 a8             	lea    -0x58(%ebp),%edx
 846e91a:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e91e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 846e922:	89 04 24             	mov    %eax,(%esp)
 846e925:	e8 04 14 00 00       	call   846fd2e <_ZNSt3mapIj12STGuildProxySt4lessIjESaISt4pairIKjS0_EEE6insertERKS5_>
 846e92a:	83 ec 04             	sub    $0x4,%esp
 846e92d:	0f b6 45 a4          	movzbl -0x5c(%ebp),%eax
 846e931:	83 f0 01             	xor    $0x1,%eax
 846e934:	84 c0                	test   %al,%al
 846e936:	74 07                	je     846e93f <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x22b>
 846e938:	b8 00 00 00 00       	mov    $0x0,%eax
 846e93d:	eb 1d                	jmp    846e95c <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x248>
 846e93f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 846e943:	8b 45 f4             	mov    -0xc(%ebp),%eax
 846e946:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 846e949:	0f 9c c0             	setl   %al
 846e94c:	84 c0                	test   %al,%al
 846e94e:	0f 85 5c fe ff ff    	jne    846e7b0 <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x9c>
 846e954:	eb 01                	jmp    846e957 <_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP+0x243>
 846e956:	90                   	nop
 846e957:	b8 01 00 00 00       	mov    $0x1,%eax
 846e95c:	c9                   	leave
 846e95d:	c3                   	ret

```

```c
// CGuildServerProxy::LoadGuildInfoProxyFromDB @ 0x846e714

/* CGuildServerProxy::LoadGuildInfoProxyFromDB(ENUM_SERVER_GROUP) */

undefined4 __thiscall CGuildServerProxy::LoadGuildInfoProxyFromDB(undefined4 this,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  STGuildProxy local_82 [23];
  uchar uStack_6b;
  uchar uStack_6a;
  uchar uStack_69;
  STGuildProxy local_68 [4];
  pair local_64 [4];
  char local_60;
  pair<unsigned_int_const,STGuildProxy> local_5c [32];
  uint local_3c [8];
  char local_19;
  MySQL *local_18;
  int local_14;
  int local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  if (param_2 == 0) {
    iVar1 = G_CEnvironment();
    param_2 = *(int *)(iVar1 + 0x378);
  }
  MySQL::set_query(local_18,
                   "seLect guild_id, guild_name, lev , power_side, guild_agit_flag from guild_info where expire_flag = 0 and server_id = %d"
                   ,param_2);
  local_19 = MySQL::exec(local_18,true);
  if (local_19 == '\x01') {
    local_14 = MySQL::get_n_rows(local_18);
    local_10 = 0;
    while ((local_10 < local_14 && (local_19 = MySQL::fetch(local_18), local_19 == '\x01'))) {
      STGuildProxy::STGuildProxy(local_82);
      local_19 = MySQL::get_uint(local_18,0,(uint *)local_68);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,1,(char *)local_82,0x16);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_ubyte(local_18,2,&uStack_6b);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_ubyte(local_18,3,&uStack_6a);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_ubyte(local_18,4,&uStack_69);
      if (local_19 != '\x01') {
        return 0;
      }
      std::make_pair<unsigned_int&,STGuildProxy&>(local_3c,local_68);
      std::pair<unsigned_int_const,STGuildProxy>::pair<unsigned_int,STGuildProxy>
                (local_5c,(pair *)local_3c);
      std::
      map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
      ::insert(local_64);
      if (local_60 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## ModifyGuildInfoProxy

```asm
// === 0846e95e CGuildServerProxy::ModifyGuildInfoProxy  [0x0846e95e-0x846ea3d] ===
 846e95e:	55                   	push   %ebp
 846e95f:	89 e5                	mov    %esp,%ebp
 846e961:	83 ec 38             	sub    $0x38,%esp
 846e964:	8b 45 08             	mov    0x8(%ebp),%eax
 846e967:	8d 48 08             	lea    0x8(%eax),%ecx
 846e96a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 846e96d:	8d 55 0c             	lea    0xc(%ebp),%edx
 846e970:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e974:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 846e978:	89 04 24             	mov    %eax,(%esp)
 846e97b:	e8 da 13 00 00       	call   846fd5a <_ZNSt3mapIj12STGuildProxySt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 846e980:	83 ec 04             	sub    $0x4,%esp
 846e983:	8b 45 08             	mov    0x8(%ebp),%eax
 846e986:	8d 50 08             	lea    0x8(%eax),%edx
 846e989:	8d 45 f0             	lea    -0x10(%ebp),%eax
 846e98c:	89 54 24 04          	mov    %edx,0x4(%esp)
 846e990:	89 04 24             	mov    %eax,(%esp)
 846e993:	e8 ee 13 00 00       	call   846fd86 <_ZNSt3mapIj12STGuildProxySt4lessIjESaISt4pairIKjS0_EEE3endEv>
 846e998:	83 ec 04             	sub    $0x4,%esp
 846e99b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 846e99e:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e9a2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 846e9a5:	89 04 24             	mov    %eax,(%esp)
 846e9a8:	e8 ff 13 00 00       	call   846fdac <_ZNKSt17_Rb_tree_iteratorISt4pairIKj12STGuildProxyEEeqERKS4_>
 846e9ad:	84 c0                	test   %al,%al
 846e9af:	74 3a                	je     846e9eb <_ZN17CGuildServerProxy20ModifyGuildInfoProxyEjR12STGuildProxy+0x8d>
 846e9b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e9b4:	89 44 24 14          	mov    %eax,0x14(%esp)
 846e9b8:	c7 44 24 10 f4 80 c6 	movl   $0x8c680f4,0x10(%esp)
 846e9bf:	08 
 846e9c0:	c7 44 24 0c 52 08 00 	movl   $0x852,0xc(%esp)
 846e9c7:	00 
 846e9c8:	c7 44 24 08 40 90 c6 	movl   $0x8c69040,0x8(%esp)
 846e9cf:	08 
 846e9d0:	c7 44 24 04 7c 7f c6 	movl   $0x8c67f7c,0x4(%esp)
 846e9d7:	08 
 846e9d8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 846e9df:	e8 26 52 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 846e9e4:	b8 00 00 00 00       	mov    $0x0,%eax
 846e9e9:	eb 51                	jmp    846ea3c <_ZN17CGuildServerProxy20ModifyGuildInfoProxyEjR12STGuildProxy+0xde>
 846e9eb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 846e9ee:	89 04 24             	mov    %eax,(%esp)
 846e9f1:	e8 ca 13 00 00       	call   846fdc0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj12STGuildProxyEEptEv>
 846e9f6:	83 c0 04             	add    $0x4,%eax
 846e9f9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846e9fc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 846e9ff:	89 04 24             	mov    %eax,(%esp)
 846ea02:	e8 b9 13 00 00       	call   846fdc0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj12STGuildProxyEEptEv>
 846ea07:	8d 50 04             	lea    0x4(%eax),%edx
 846ea0a:	8b 45 10             	mov    0x10(%ebp),%eax
 846ea0d:	8b 08                	mov    (%eax),%ecx
 846ea0f:	89 0a                	mov    %ecx,(%edx)
 846ea11:	8b 48 04             	mov    0x4(%eax),%ecx
 846ea14:	89 4a 04             	mov    %ecx,0x4(%edx)
 846ea17:	8b 48 08             	mov    0x8(%eax),%ecx
 846ea1a:	89 4a 08             	mov    %ecx,0x8(%edx)
 846ea1d:	8b 48 0c             	mov    0xc(%eax),%ecx
 846ea20:	89 4a 0c             	mov    %ecx,0xc(%edx)
 846ea23:	8b 48 10             	mov    0x10(%eax),%ecx
 846ea26:	89 4a 10             	mov    %ecx,0x10(%edx)
 846ea29:	8b 48 14             	mov    0x14(%eax),%ecx
 846ea2c:	89 4a 14             	mov    %ecx,0x14(%edx)
 846ea2f:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 846ea33:	66 89 42 18          	mov    %ax,0x18(%edx)
 846ea37:	b8 01 00 00 00       	mov    $0x1,%eax
 846ea3c:	c9                   	leave
 846ea3d:	c3                   	ret

```

```c
// CGuildServerProxy::ModifyGuildInfoProxy @ 0x846e95e

/* CGuildServerProxy::ModifyGuildInfoProxy(unsigned int, STGuildProxy&) */

bool __thiscall
CGuildServerProxy::ModifyGuildInfoProxy(CGuildServerProxy *this,uint param_1,STGuildProxy *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>> local_18 [4];
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  local_14 [4];
  int local_10;
  
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    local_10 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>>::operator->
                         (local_18);
    local_10 = local_10 + 4;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>>::operator->(local_18)
    ;
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)param_2;
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_2 + 0x14);
    *(undefined2 *)(iVar2 + 0x1c) = *(undefined2 *)(param_2 + 0x18);
  }
  else {
    LogManager::logFormat
              (1,"DF_GuildServerProxy.cpp",
               "bool CGuildServerProxy::ModifyGuildInfoProxy(unsigned int, STGuildProxy&)",0x852,
               "Find fail from guild info proxy(guild_id:%d)",param_1);
  }
  return cVar1 == '\0';
}

```

---

## OnBuyItem

```asm
// === 0846ef24 CGuildServerProxy::OnBuyItem  [0x0846ef24-0x846efcd] ===
 846ef24:	55                   	push   %ebp
 846ef25:	89 e5                	mov    %esp,%ebp
 846ef27:	56                   	push   %esi
 846ef28:	53                   	push   %ebx
 846ef29:	83 ec 10             	sub    $0x10,%esp
 846ef2c:	8b 45 10             	mov    0x10(%ebp),%eax
 846ef2f:	8b 00                	mov    (%eax),%eax
 846ef31:	83 c0 28             	add    $0x28,%eax
 846ef34:	8b 10                	mov    (%eax),%edx
 846ef36:	8b 45 10             	mov    0x10(%ebp),%eax
 846ef39:	89 04 24             	mov    %eax,(%esp)
 846ef3c:	ff d2                	call   *%edx
 846ef3e:	85 c0                	test   %eax,%eax
 846ef40:	0f 95 c0             	setne  %al
 846ef43:	84 c0                	test   %al,%al
 846ef45:	74 50                	je     846ef97 <_ZN17CGuildServerProxy9OnBuyItemEP5CUserPK5CItemjj+0x73>
 846ef47:	8b 45 14             	mov    0x14(%ebp),%eax
 846ef4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 846ef4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 846ef51:	89 04 24             	mov    %eax,(%esp)
 846ef54:	e8 63 12 dc ff       	call   82301bc <_ZN5CUser26DecreaseGuildPowerWarPointEj>
 846ef59:	8b 45 14             	mov    0x14(%ebp),%eax
 846ef5c:	89 c6                	mov    %eax,%esi
 846ef5e:	f7 de                	neg    %esi
 846ef60:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 846ef67:	ff 
 846ef68:	8b 45 0c             	mov    0xc(%ebp),%eax
 846ef6b:	89 04 24             	mov    %eax,(%esp)
 846ef6e:	e8 2d f0 1d 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 846ef73:	89 c3                	mov    %eax,%ebx
 846ef75:	8b 45 0c             	mov    0xc(%ebp),%eax
 846ef78:	89 04 24             	mov    %eax,(%esp)
 846ef7b:	e8 ec 04 dc ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 846ef80:	89 74 24 0c          	mov    %esi,0xc(%esp)
 846ef84:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 846ef88:	89 44 24 04          	mov    %eax,0x4(%esp)
 846ef8c:	8b 45 08             	mov    0x8(%ebp),%eax
 846ef8f:	89 04 24             	mov    %eax,(%esp)
 846ef92:	e8 9f fd ff ff       	call   846ed36 <_ZN17CGuildServerProxy33SendIncreaseDecreasePowerWarPointEjji>
 846ef97:	8b 45 10             	mov    0x10(%ebp),%eax
 846ef9a:	8b 00                	mov    (%eax),%eax
 846ef9c:	83 c0 2c             	add    $0x2c,%eax
 846ef9f:	8b 10                	mov    (%eax),%edx
 846efa1:	8b 45 10             	mov    0x10(%ebp),%eax
 846efa4:	89 04 24             	mov    %eax,(%esp)
 846efa7:	ff d2                	call   *%edx
 846efa9:	85 c0                	test   %eax,%eax
 846efab:	0f 95 c0             	setne  %al
 846efae:	84 c0                	test   %al,%al
 846efb0:	74 15                	je     846efc7 <_ZN17CGuildServerProxy9OnBuyItemEP5CUserPK5CItemjj+0xa3>
 846efb2:	8b 45 18             	mov    0x18(%ebp),%eax
 846efb5:	0f bf d0             	movswl %ax,%edx
 846efb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 846efbb:	89 54 24 04          	mov    %edx,0x4(%esp)
 846efbf:	89 04 24             	mov    %eax,(%esp)
 846efc2:	e8 9f 8f 21 00       	call   8687f66 <_ZN15CUserCharacInfo21DecreasePowerWarPointEs>
 846efc7:	83 c4 10             	add    $0x10,%esp
 846efca:	5b                   	pop    %ebx
 846efcb:	5e                   	pop    %esi
 846efcc:	5d                   	pop    %ebp
 846efcd:	c3                   	ret

```

```c
// CGuildServerProxy::OnBuyItem @ 0x846ef24

/* CGuildServerProxy::OnBuyItem(CUser*, CItem const*, unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::OnBuyItem
          (CGuildServerProxy *this,CUser *param_1,CItem *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (**(code **)(*(int *)param_2 + 0x28))(param_2);
  if (iVar1 != 0) {
    CUser::DecreaseGuildPowerWarPoint(param_1,param_3);
    uVar2 = CUser::get_charac_no(param_1,-1);
    uVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    SendIncreaseDecreasePowerWarPoint(this,uVar3,uVar2,-param_3);
  }
  iVar1 = (**(code **)(*(int *)param_2 + 0x2c))(param_2);
  if (iVar1 != 0) {
    CUserCharacInfo::DecreasePowerWarPoint((CUserCharacInfo *)param_1,(short)param_4);
  }
  return;
}

```

---

## OnTcpError

```asm
// === 0846e66c CGuildServerProxy::OnTcpError  [0x0846e66c-0x846e6f5] ===
 846e66c:	55                   	push   %ebp
 846e66d:	89 e5                	mov    %esp,%ebp
 846e66f:	56                   	push   %esi
 846e670:	53                   	push   %ebx
 846e671:	83 ec 20             	sub    $0x20,%esp
 846e674:	e8 f7 f6 c0 ff       	call   807dd70 <__errno_location@plt>
 846e679:	8b 00                	mov    (%eax),%eax
 846e67b:	85 c0                	test   %eax,%eax
 846e67d:	74 6b                	je     846e6ea <_ZN17CGuildServerProxy10OnTcpErrorEv+0x7e>
 846e67f:	e8 ec f6 c0 ff       	call   807dd70 <__errno_location@plt>
 846e684:	8b 00                	mov    (%eax),%eax
 846e686:	89 04 24             	mov    %eax,(%esp)
 846e689:	e8 a2 f0 c0 ff       	call   807d730 <strerror@plt>
 846e68e:	89 c6                	mov    %eax,%esi
 846e690:	8b 45 08             	mov    0x8(%ebp),%eax
 846e693:	89 04 24             	mov    %eax,(%esp)
 846e696:	e8 f3 15 00 00       	call   846fc8e <_ZN17CGuildServerProxy13GetTcpHandlerEv>
 846e69b:	89 04 24             	mov    %eax,(%esp)
 846e69e:	e8 ab f8 e8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 846e6a3:	89 c3                	mov    %eax,%ebx
 846e6a5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 846e6ac:	00 
 846e6ad:	c7 44 24 08 45 07 00 	movl   $0x745,0x8(%esp)
 846e6b4:	00 
 846e6b5:	c7 44 24 04 a0 90 c6 	movl   $0x8c690a0,0x4(%esp)
 846e6bc:	08 
 846e6bd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846e6c0:	89 04 24             	mov    %eax,(%esp)
 846e6c3:	e8 50 10 0e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 846e6c8:	89 74 24 0c          	mov    %esi,0xc(%esp)
 846e6cc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 846e6d0:	c7 44 24 04 50 80 c6 	movl   $0x8c68050,0x4(%esp)
 846e6d7:	08 
 846e6d8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846e6db:	89 04 24             	mov    %eax,(%esp)
 846e6de:	e8 a5 10 0e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 846e6e3:	b8 00 00 00 00       	mov    $0x0,%eax
 846e6e8:	eb 05                	jmp    846e6ef <_ZN17CGuildServerProxy10OnTcpErrorEv+0x83>
 846e6ea:	b8 01 00 00 00       	mov    $0x1,%eax
 846e6ef:	83 c4 20             	add    $0x20,%esp
 846e6f2:	5b                   	pop    %ebx
 846e6f3:	5e                   	pop    %esi
 846e6f4:	5d                   	pop    %ebp
 846e6f5:	c3                   	ret

```

```c
// CGuildServerProxy::OnTcpError @ 0x846e66c

/* CGuildServerProxy::OnTcpError() */

bool __thiscall CGuildServerProxy::OnTcpError(CGuildServerProxy *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  CNetwork<100000,100000> *this_00;
  undefined4 uVar4;
  cMyTrace local_1c [16];
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    this_00 = (CNetwork<100000,100000> *)GetTcpHandler(this);
    uVar4 = CNetwork<100000,100000>::get_socket(this_00);
    cMyTrace::cMyTrace(local_1c,"bool CGuildServerProxy::OnTcpError()",0x745,0);
    cMyTrace::operator()(local_1c,"GuildServer OnError() Socket[%d] Error(%s)",uVar4,pcVar3);
  }
  return iVar1 == 0;
}

```

---

## OnTcpRecv

```asm
// === 0846e53c CGuildServerProxy::OnTcpRecv  [0x0846e53c-0x846e5cb] ===
 846e53c:	55                   	push   %ebp
 846e53d:	89 e5                	mov    %esp,%ebp
 846e53f:	83 ec 38             	sub    $0x38,%esp
 846e542:	8b 45 08             	mov    0x8(%ebp),%eax
 846e545:	83 c0 24             	add    $0x24,%eax
 846e548:	89 04 24             	mov    %eax,(%esp)
 846e54b:	e8 ae fc e8 ff       	call   82fe1fe <_ZN8CNetworkILi100000ELi100000EE11recv_packetEv>
 846e550:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846e553:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 846e557:	7e 27                	jle    846e580 <_ZN17CGuildServerProxy9OnTcpRecvEv+0x44>
 846e559:	8b 45 f4             	mov    -0xc(%ebp),%eax
 846e55c:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e560:	8b 45 08             	mov    0x8(%ebp),%eax
 846e563:	89 04 24             	mov    %eax,(%esp)
 846e566:	e8 8b 01 00 00       	call   846e6f6 <_ZN17CGuildServerProxy7ParsingEi>
 846e56b:	83 f0 01             	xor    $0x1,%eax
 846e56e:	84 c0                	test   %al,%al
 846e570:	74 07                	je     846e579 <_ZN17CGuildServerProxy9OnTcpRecvEv+0x3d>
 846e572:	b8 00 00 00 00       	mov    $0x0,%eax
 846e577:	eb 50                	jmp    846e5c9 <_ZN17CGuildServerProxy9OnTcpRecvEv+0x8d>
 846e579:	b8 01 00 00 00       	mov    $0x1,%eax
 846e57e:	eb 49                	jmp    846e5c9 <_ZN17CGuildServerProxy9OnTcpRecvEv+0x8d>
 846e580:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 846e584:	79 3e                	jns    846e5c4 <_ZN17CGuildServerProxy9OnTcpRecvEv+0x88>
 846e586:	c7 44 24 10 18 80 c6 	movl   $0x8c68018,0x10(%esp)
 846e58d:	08 
 846e58e:	c7 44 24 0c 1f 07 00 	movl   $0x71f,0xc(%esp)
 846e595:	00 
 846e596:	c7 44 24 08 20 91 c6 	movl   $0x8c69120,0x8(%esp)
 846e59d:	08 
 846e59e:	c7 44 24 04 7c 7f c6 	movl   $0x8c67f7c,0x4(%esp)
 846e5a5:	08 
 846e5a6:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 846e5ad:	e8 58 56 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 846e5b2:	8b 45 08             	mov    0x8(%ebp),%eax
 846e5b5:	89 04 24             	mov    %eax,(%esp)
 846e5b8:	e8 c7 f4 ff ff       	call   846da84 <_ZN17CGuildServerProxy10DisconnectEv>
 846e5bd:	b8 00 00 00 00       	mov    $0x0,%eax
 846e5c2:	eb 05                	jmp    846e5c9 <_ZN17CGuildServerProxy9OnTcpRecvEv+0x8d>
 846e5c4:	b8 01 00 00 00       	mov    $0x1,%eax
 846e5c9:	c9                   	leave
 846e5ca:	c3                   	ret
 846e5cb:	90                   	nop

```

```c
// CGuildServerProxy::OnTcpRecv @ 0x846e53c

/* CGuildServerProxy::OnTcpRecv() */

undefined4 __thiscall CGuildServerProxy::OnTcpRecv(CGuildServerProxy *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CNetwork<100000,100000>::recv_packet((CNetwork<100000,100000> *)(this + 0x24));
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      LogManager::logFormat
                (1,"DF_GuildServerProxy.cpp","bool CGuildServerProxy::OnTcpRecv()",0x71f,
                 "Guild Server maybe Die!!!");
      Disconnect(this);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    cVar1 = Parsing(this,iVar2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## OnTcpSend

```asm
// === 0846e5cc CGuildServerProxy::OnTcpSend  [0x0846e5cc-0x846e66b] ===
 846e5cc:	55                   	push   %ebp
 846e5cd:	89 e5                	mov    %esp,%ebp
 846e5cf:	56                   	push   %esi
 846e5d0:	53                   	push   %ebx
 846e5d1:	83 ec 20             	sub    $0x20,%esp
 846e5d4:	8b 45 08             	mov    0x8(%ebp),%eax
 846e5d7:	83 c0 24             	add    $0x24,%eax
 846e5da:	89 04 24             	mov    %eax,(%esp)
 846e5dd:	e8 70 fd e8 ff       	call   82fe352 <_ZN8CNetworkILi100000ELi100000EE11send_packetEv>
 846e5e2:	c1 e8 1f             	shr    $0x1f,%eax
 846e5e5:	84 c0                	test   %al,%al
 846e5e7:	74 76                	je     846e65f <_ZN17CGuildServerProxy9OnTcpSendEv+0x93>
 846e5e9:	e8 82 f7 c0 ff       	call   807dd70 <__errno_location@plt>
 846e5ee:	8b 00                	mov    (%eax),%eax
 846e5f0:	89 04 24             	mov    %eax,(%esp)
 846e5f3:	e8 38 f1 c0 ff       	call   807d730 <strerror@plt>
 846e5f8:	89 c6                	mov    %eax,%esi
 846e5fa:	8b 45 08             	mov    0x8(%ebp),%eax
 846e5fd:	89 04 24             	mov    %eax,(%esp)
 846e600:	e8 89 16 00 00       	call   846fc8e <_ZN17CGuildServerProxy13GetTcpHandlerEv>
 846e605:	89 04 24             	mov    %eax,(%esp)
 846e608:	e8 41 f9 e8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 846e60d:	89 c3                	mov    %eax,%ebx
 846e60f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 846e616:	00 
 846e617:	c7 44 24 08 33 07 00 	movl   $0x733,0x8(%esp)
 846e61e:	00 
 846e61f:	c7 44 24 04 e0 90 c6 	movl   $0x8c690e0,0x4(%esp)
 846e626:	08 
 846e627:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846e62a:	89 04 24             	mov    %eax,(%esp)
 846e62d:	e8 e6 10 0e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 846e632:	89 74 24 0c          	mov    %esi,0xc(%esp)
 846e636:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 846e63a:	c7 44 24 04 32 80 c6 	movl   $0x8c68032,0x4(%esp)
 846e641:	08 
 846e642:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846e645:	89 04 24             	mov    %eax,(%esp)
 846e648:	e8 3b 11 0e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 846e64d:	8b 45 08             	mov    0x8(%ebp),%eax
 846e650:	89 04 24             	mov    %eax,(%esp)
 846e653:	e8 2c f4 ff ff       	call   846da84 <_ZN17CGuildServerProxy10DisconnectEv>
 846e658:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 846e65d:	eb 06                	jmp    846e665 <_ZN17CGuildServerProxy9OnTcpSendEv+0x99>
 846e65f:	8b 45 08             	mov    0x8(%ebp),%eax
 846e662:	8b 40 3c             	mov    0x3c(%eax),%eax
 846e665:	83 c4 20             	add    $0x20,%esp
 846e668:	5b                   	pop    %ebx
 846e669:	5e                   	pop    %esi
 846e66a:	5d                   	pop    %ebp
 846e66b:	c3                   	ret

```

```c
// CGuildServerProxy::OnTcpSend @ 0x846e5cc

/* CGuildServerProxy::OnTcpSend() */

undefined4 __thiscall CGuildServerProxy::OnTcpSend(CGuildServerProxy *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  CNetwork<100000,100000> *this_00;
  undefined4 uVar4;
  cMyTrace local_1c [16];
  
  iVar1 = CNetwork<100000,100000>::send_packet((CNetwork<100000,100000> *)(this + 0x24));
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    this_00 = (CNetwork<100000,100000> *)GetTcpHandler(this);
    uVar4 = CNetwork<100000,100000>::get_socket(this_00);
    cMyTrace::cMyTrace(local_1c,"int CGuildServerProxy::OnTcpSend()",0x733,0);
    cMyTrace::operator()(local_1c,"OnSend() Socket[%d] Error(%s)",uVar4,pcVar3);
    Disconnect(this);
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)(this + 0x3c);
  }
  return uVar4;
}

```

---

## Parsing

```asm
// === 0846e6f6 CGuildServerProxy::Parsing  [0x0846e6f6-0x846e713] ===
 846e6f6:	55                   	push   %ebp
 846e6f7:	89 e5                	mov    %esp,%ebp
 846e6f9:	83 ec 18             	sub    $0x18,%esp
 846e6fc:	8b 45 08             	mov    0x8(%ebp),%eax
 846e6ff:	8d 50 24             	lea    0x24(%eax),%edx
 846e702:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e705:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e709:	89 14 24             	mov    %edx,(%esp)
 846e70c:	e8 3f e9 ff ff       	call   846d050 <_ZN8CNetworkILi100000ELi100000EE20Parsing_ServerPacketEi>
 846e711:	c9                   	leave
 846e712:	c3                   	ret
 846e713:	90                   	nop

```

```c
// CGuildServerProxy::Parsing @ 0x846e6f6

/* CGuildServerProxy::Parsing(int) */

void __thiscall CGuildServerProxy::Parsing(CGuildServerProxy *this,int param_1)

{
  CNetwork<100000,100000>::Parsing_ServerPacket((CNetwork<100000,100000> *)(this + 0x24),param_1);
  return;
}

```

---

## SendAddGuildFund

```asm
// === 0846f1a8 CGuildServerProxy::SendAddGuildFund  [0x0846f1a8-0x846f1ef] ===
 846f1a8:	55                   	push   %ebp
 846f1a9:	89 e5                	mov    %esp,%ebp
 846f1ab:	83 ec 38             	sub    $0x38,%esp
 846f1ae:	8d 45 e1             	lea    -0x1f(%ebp),%eax
 846f1b1:	89 04 24             	mov    %eax,(%esp)
 846f1b4:	e8 67 09 00 00       	call   846fb20 <_ZN21Packet_Add_Guild_FundC1Ev>
 846f1b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 846f1bc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846f1bf:	8b 45 10             	mov    0x10(%ebp),%eax
 846f1c2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846f1c5:	8b 45 14             	mov    0x14(%ebp),%eax
 846f1c8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 846f1cb:	8b 45 18             	mov    0x18(%ebp),%eax
 846f1ce:	88 45 eb             	mov    %al,-0x15(%ebp)
 846f1d1:	0f b7 45 e3          	movzwl -0x1d(%ebp),%eax
 846f1d5:	0f b7 d0             	movzwl %ax,%edx
 846f1d8:	8d 45 e1             	lea    -0x1f(%ebp),%eax
 846f1db:	89 54 24 08          	mov    %edx,0x8(%esp)
 846f1df:	89 44 24 04          	mov    %eax,0x4(%esp)
 846f1e3:	8b 45 08             	mov    0x8(%ebp),%eax
 846f1e6:	89 04 24             	mov    %eax,(%esp)
 846f1e9:	e8 e0 ea ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846f1ee:	c9                   	leave
 846f1ef:	c3                   	ret

```

```c
// CGuildServerProxy::SendAddGuildFund @ 0x846f1a8

/* CGuildServerProxy::SendAddGuildFund(unsigned int, unsigned int, int,
   Packet_Add_Guild_Fund::eFundType) */

void __thiscall
CGuildServerProxy::SendAddGuildFund
          (CGuildServerProxy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined1 param_5)

{
  Packet_Add_Guild_Fund local_23 [2];
  ushort local_21;
  undefined1 local_19;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  Packet_Add_Guild_Fund::Packet_Add_Guild_Fund(local_23);
  local_14 = param_1;
  local_10 = param_2;
  local_18 = param_3;
  local_19 = param_5;
  SendTcpPacket(this,(char *)local_23,(uint)local_21);
  return;
}

```

---

## SendApplyOriginalPowerSide

```asm
// === 0846eeda CGuildServerProxy::SendApplyOriginalPowerSide  [0x0846eeda-0x846ef23] ===
 846eeda:	55                   	push   %ebp
 846eedb:	89 e5                	mov    %esp,%ebp
 846eedd:	83 ec 48             	sub    $0x48,%esp
 846eee0:	8b 45 14             	mov    0x14(%ebp),%eax
 846eee3:	88 45 d4             	mov    %al,-0x2c(%ebp)
 846eee6:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 846eee9:	89 04 24             	mov    %eax,(%esp)
 846eeec:	e8 9b 08 00 00       	call   846f78c <_ZN37Packet_Guild_Apply_Origial_Power_SideC1Ev>
 846eef1:	8b 45 0c             	mov    0xc(%ebp),%eax
 846eef4:	89 45 ef             	mov    %eax,-0x11(%ebp)
 846eef7:	8b 45 10             	mov    0x10(%ebp),%eax
 846eefa:	89 45 f3             	mov    %eax,-0xd(%ebp)
 846eefd:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 846ef01:	88 45 f7             	mov    %al,-0x9(%ebp)
 846ef04:	0f b7 45 e7          	movzwl -0x19(%ebp),%eax
 846ef08:	0f b7 d0             	movzwl %ax,%edx
 846ef0b:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 846ef0e:	89 54 24 08          	mov    %edx,0x8(%esp)
 846ef12:	89 44 24 04          	mov    %eax,0x4(%esp)
 846ef16:	8b 45 08             	mov    0x8(%ebp),%eax
 846ef19:	89 04 24             	mov    %eax,(%esp)
 846ef1c:	e8 ad ed ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846ef21:	c9                   	leave
 846ef22:	c3                   	ret
 846ef23:	90                   	nop

```

```c
// CGuildServerProxy::SendApplyOriginalPowerSide @ 0x846eeda

/* CGuildServerProxy::SendApplyOriginalPowerSide(unsigned int, unsigned int, unsigned char) */

void __thiscall
CGuildServerProxy::SendApplyOriginalPowerSide
          (CGuildServerProxy *this,uint param_1,uint param_2,uchar param_3)

{
  Packet_Guild_Apply_Origial_Power_Side local_1f [2];
  ushort local_1d;
  uint local_15;
  uint local_11;
  uchar local_d;
  
  Packet_Guild_Apply_Origial_Power_Side::Packet_Guild_Apply_Origial_Power_Side(local_1f);
  local_15 = param_1;
  local_11 = param_2;
  local_d = param_3;
  SendTcpPacket(this,(char *)local_1f,(uint)local_1d);
  return;
}

```

---

## SendBuyGuildSkill

```asm
// === 0846e026 CGuildServerProxy::SendBuyGuildSkill  [0x0846e026-0x846e083] ===
 846e026:	55                   	push   %ebp
 846e027:	89 e5                	mov    %esp,%ebp
 846e029:	83 ec 48             	sub    $0x48,%esp
 846e02c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 846e02f:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 846e033:	8d 45 d8             	lea    -0x28(%ebp),%eax
 846e036:	89 04 24             	mov    %eax,(%esp)
 846e039:	e8 be 13 00 00       	call   846f3fc <_ZN30Packet_Monitor_Buy_Guild_SkillC1Ev>
 846e03e:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e041:	89 45 e2             	mov    %eax,-0x1e(%ebp)
 846e044:	8b 45 10             	mov    0x10(%ebp),%eax
 846e047:	89 45 e6             	mov    %eax,-0x1a(%ebp)
 846e04a:	8b 45 14             	mov    0x14(%ebp),%eax
 846e04d:	89 45 ea             	mov    %eax,-0x16(%ebp)
 846e050:	8b 45 18             	mov    0x18(%ebp),%eax
 846e053:	89 45 ee             	mov    %eax,-0x12(%ebp)
 846e056:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 846e05a:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 846e05e:	8b 45 20             	mov    0x20(%ebp),%eax
 846e061:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846e064:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
 846e068:	0f b7 d0             	movzwl %ax,%edx
 846e06b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 846e06e:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e072:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e076:	8b 45 08             	mov    0x8(%ebp),%eax
 846e079:	89 04 24             	mov    %eax,(%esp)
 846e07c:	e8 4d fc ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846e081:	c9                   	leave
 846e082:	c3                   	ret
 846e083:	90                   	nop

```

```c
// CGuildServerProxy::SendBuyGuildSkill @ 0x846e026

/* CGuildServerProxy::SendBuyGuildSkill(unsigned int, unsigned int, int, int, short, unsigned int)
    */

void __thiscall
CGuildServerProxy::SendBuyGuildSkill
          (CGuildServerProxy *this,uint param_1,uint param_2,int param_3,int param_4,short param_5,
          uint param_6)

{
  Packet_Monitor_Buy_Guild_Skill local_2c [2];
  ushort local_2a;
  uint local_22;
  uint local_1e;
  int local_1a;
  int local_16;
  short local_12;
  uint local_10;
  
  Packet_Monitor_Buy_Guild_Skill::Packet_Monitor_Buy_Guild_Skill(local_2c);
  local_22 = param_1;
  local_1e = param_2;
  local_1a = param_3;
  local_16 = param_4;
  local_10 = param_6;
  local_12 = param_5;
  SendTcpPacket(this,(char *)local_2c,(uint)local_2a);
  return;
}

```

---

## SendCallGuildInfo

```asm
// === 0846ddd2 CGuildServerProxy::SendCallGuildInfo  [0x0846ddd2-0x846de7f] ===
 846ddd2:	55                   	push   %ebp
 846ddd3:	89 e5                	mov    %esp,%ebp
 846ddd5:	81 ec c8 01 00 00    	sub    $0x1c8,%esp
 846dddb:	8b 45 14             	mov    0x14(%ebp),%eax
 846ddde:	88 85 54 fe ff ff    	mov    %al,-0x1ac(%ebp)
 846dde4:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 846ddea:	89 04 24             	mov    %eax,(%esp)
 846dded:	e8 80 16 00 00       	call   846f472 <_ZN30Packet_Monitor_Call_Guild_InfoC1Ev>
 846ddf2:	8b 45 0c             	mov    0xc(%ebp),%eax
 846ddf5:	89 85 73 fe ff ff    	mov    %eax,-0x18d(%ebp)
 846ddfb:	8b 45 10             	mov    0x10(%ebp),%eax
 846ddfe:	89 85 6f fe ff ff    	mov    %eax,-0x191(%ebp)
 846de04:	0f b6 85 54 fe ff ff 	movzbl -0x1ac(%ebp),%eax
 846de0b:	88 85 77 fe ff ff    	mov    %al,-0x189(%ebp)
 846de11:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 846de18:	eb 1c                	jmp    846de36 <_ZN17CGuildServerProxy17SendCallGuildInfoEjjhPj+0x64>
 846de1a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 846de1d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 846de20:	c1 e0 02             	shl    $0x2,%eax
 846de23:	03 45 18             	add    0x18(%ebp),%eax
 846de26:	8b 00                	mov    (%eax),%eax
 846de28:	83 c2 04             	add    $0x4,%edx
 846de2b:	89 84 95 68 fe ff ff 	mov    %eax,-0x198(%ebp,%edx,4)
 846de32:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 846de36:	0f b6 85 54 fe ff ff 	movzbl -0x1ac(%ebp),%eax
 846de3d:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 846de40:	0f 9f c0             	setg   %al
 846de43:	84 c0                	test   %al,%al
 846de45:	75 d3                	jne    846de1a <_ZN17CGuildServerProxy17SendCallGuildInfoEjjhPj+0x48>
 846de47:	0f b6 85 54 fe ff ff 	movzbl -0x1ac(%ebp),%eax
 846de4e:	c1 e0 02             	shl    $0x2,%eax
 846de51:	83 c0 13             	add    $0x13,%eax
 846de54:	66 89 85 67 fe ff ff 	mov    %ax,-0x199(%ebp)
 846de5b:	0f b7 85 67 fe ff ff 	movzwl -0x199(%ebp),%eax
 846de62:	0f b7 d0             	movzwl %ax,%edx
 846de65:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 846de6b:	89 54 24 08          	mov    %edx,0x8(%esp)
 846de6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 846de73:	8b 45 08             	mov    0x8(%ebp),%eax
 846de76:	89 04 24             	mov    %eax,(%esp)
 846de79:	e8 00 fe ff ff       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 846de7e:	c9                   	leave
 846de7f:	c3                   	ret

```

```c
// CGuildServerProxy::SendCallGuildInfo @ 0x846ddd2

/* CGuildServerProxy::SendCallGuildInfo(unsigned int, unsigned int, unsigned char, unsigned int*) */

void __thiscall
CGuildServerProxy::SendCallGuildInfo
          (CGuildServerProxy *this,uint param_1,uint param_2,uchar param_3,uint *param_4)

{
  Packet_Monitor_Call_Guild_Info local_19f [2];
  undefined1 local_19d [8];
  uint local_195;
  uint local_191;
  uchar local_18d;
  uint auStack_18c [95];
  int local_10;
  
  Packet_Monitor_Call_Guild_Info::Packet_Monitor_Call_Guild_Info(local_19f);
  local_191 = param_1;
  local_195 = param_2;
  for (local_10 = 0; local_10 < (int)(uint)param_3; local_10 = local_10 + 1) {
    *(uint *)(local_19d + (local_10 + 4) * 4 + 1) = param_4[local_10];
  }
  local_19d._0_2_ = (ushort)param_3 * 4 + 0x13;
  local_18d = param_3;
  SendPacket(this,(char *)local_19f,(uint)(ushort)local_19d._0_2_);
  return;
}

```

---

## SendCallGuildInvite

```asm
// === 0846e0f2 CGuildServerProxy::SendCallGuildInvite  [0x0846e0f2-0x846e14b] ===
 846e0f2:	55                   	push   %ebp
 846e0f3:	89 e5                	mov    %esp,%ebp
 846e0f5:	83 ec 48             	sub    $0x48,%esp
 846e0f8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 846e0fb:	89 04 24             	mov    %eax,(%esp)
 846e0fe:	e8 bd 17 00 00       	call   846f8c0 <_ZN30Packet_Guild_Call_Guild_InviteC1Ev>
 846e103:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e106:	89 45 d2             	mov    %eax,-0x2e(%ebp)
 846e109:	8b 45 10             	mov    0x10(%ebp),%eax
 846e10c:	89 45 d6             	mov    %eax,-0x2a(%ebp)
 846e10f:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 846e116:	00 
 846e117:	8b 45 14             	mov    0x14(%ebp),%eax
 846e11a:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e11e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 846e121:	83 c0 12             	add    $0x12,%eax
 846e124:	89 04 24             	mov    %eax,(%esp)
 846e127:	e8 74 f7 c0 ff       	call   807d8a0 <memcpy@plt>
 846e12c:	0f b7 45 ca          	movzwl -0x36(%ebp),%eax
 846e130:	0f b7 d0             	movzwl %ax,%edx
 846e133:	8d 45 c8             	lea    -0x38(%ebp),%eax
 846e136:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e13a:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e13e:	8b 45 08             	mov    0x8(%ebp),%eax
 846e141:	89 04 24             	mov    %eax,(%esp)
 846e144:	e8 35 fb ff ff       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 846e149:	c9                   	leave
 846e14a:	c3                   	ret
 846e14b:	90                   	nop

```

```c
// CGuildServerProxy::SendCallGuildInvite @ 0x846e0f2

/* CGuildServerProxy::SendCallGuildInvite(unsigned int, unsigned int, char*) */

void __thiscall
CGuildServerProxy::SendCallGuildInvite
          (CGuildServerProxy *this,uint param_1,uint param_2,char *param_3)

{
  Packet_Guild_Call_Guild_Invite local_3c [2];
  ushort local_3a;
  uint local_32;
  uint local_2e;
  undefined1 auStack_2a [38];
  
  Packet_Guild_Call_Guild_Invite::Packet_Guild_Call_Guild_Invite(local_3c);
  local_32 = param_1;
  local_2e = param_2;
  memcpy(auStack_2a,param_3,0x1d);
  SendPacket(this,(char *)local_3c,(uint)local_3a);
  return;
}

```

---

## SendChangeCharName

```asm
// === 0846e3c8 CGuildServerProxy::SendChangeCharName  [0x0846e3c8-0x846e41f] ===
 846e3c8:	55                   	push   %ebp
 846e3c9:	89 e5                	mov    %esp,%ebp
 846e3cb:	83 ec 58             	sub    $0x58,%esp
 846e3ce:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 846e3d1:	89 04 24             	mov    %eax,(%esp)
 846e3d4:	e8 27 16 00 00       	call   846fa00 <_ZN23Packet_Change_Char_NameC1Ev>
 846e3d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e3dc:	89 45 ce             	mov    %eax,-0x32(%ebp)
 846e3df:	8b 45 10             	mov    0x10(%ebp),%eax
 846e3e2:	89 45 d2             	mov    %eax,-0x2e(%ebp)
 846e3e5:	8b 45 14             	mov    0x14(%ebp),%eax
 846e3e8:	89 45 d6             	mov    %eax,-0x2a(%ebp)
 846e3eb:	8b 45 18             	mov    0x18(%ebp),%eax
 846e3ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e3f2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 846e3f5:	83 c0 16             	add    $0x16,%eax
 846e3f8:	89 04 24             	mov    %eax,(%esp)
 846e3fb:	e8 f0 fa c0 ff       	call   807def0 <strcpy@plt>
 846e400:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 846e404:	0f b7 d0             	movzwl %ax,%edx
 846e407:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 846e40a:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e40e:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e412:	8b 45 08             	mov    0x8(%ebp),%eax
 846e415:	89 04 24             	mov    %eax,(%esp)
 846e418:	e8 b1 f8 ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846e41d:	c9                   	leave
 846e41e:	c3                   	ret
 846e41f:	90                   	nop

```

```c
// CGuildServerProxy::SendChangeCharName @ 0x846e3c8

/* CGuildServerProxy::SendChangeCharName(unsigned int, unsigned int, unsigned int, char*) */

void __thiscall
CGuildServerProxy::SendChangeCharName
          (CGuildServerProxy *this,uint param_1,uint param_2,uint param_3,char *param_4)

{
  Packet_Change_Char_Name local_40 [2];
  ushort local_3e;
  uint local_36;
  uint local_32;
  uint local_2e;
  char acStack_2a [38];
  
  Packet_Change_Char_Name::Packet_Change_Char_Name(local_40);
  local_36 = param_1;
  local_32 = param_2;
  local_2e = param_3;
  strcpy(acStack_2a,param_4);
  SendTcpPacket(this,(char *)local_40,(uint)local_3e);
  return;
}

```

---

## SendCharLevelGrowType

```asm
// === 0846da9a CGuildServerProxy::SendCharLevelGrowType  [0x0846da9a-0x846daf3] ===
 846da9a:	55                   	push   %ebp
 846da9b:	89 e5                	mov    %esp,%ebp
 846da9d:	83 ec 48             	sub    $0x48,%esp
 846daa0:	8b 55 14             	mov    0x14(%ebp),%edx
 846daa3:	8b 45 18             	mov    0x18(%ebp),%eax
 846daa6:	66 89 55 d4          	mov    %dx,-0x2c(%ebp)
 846daaa:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
 846daae:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 846dab1:	89 04 24             	mov    %eax,(%esp)
 846dab4:	e8 f7 17 00 00       	call   846f2b0 <_ZN34Packet_Monitor_Char_Changable_InfoC1Ev>
 846dab9:	8b 45 0c             	mov    0xc(%ebp),%eax
 846dabc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846dabf:	8b 45 10             	mov    0x10(%ebp),%eax
 846dac2:	88 45 f4             	mov    %al,-0xc(%ebp)
 846dac5:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 846dac9:	66 89 45 f5          	mov    %ax,-0xb(%ebp)
 846dacd:	0f b7 45 d0          	movzwl -0x30(%ebp),%eax
 846dad1:	88 45 f7             	mov    %al,-0x9(%ebp)
 846dad4:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 846dad8:	0f b7 d0             	movzwl %ax,%edx
 846dadb:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 846dade:	89 54 24 08          	mov    %edx,0x8(%esp)
 846dae2:	89 44 24 04          	mov    %eax,0x4(%esp)
 846dae6:	8b 45 08             	mov    0x8(%ebp),%eax
 846dae9:	89 04 24             	mov    %eax,(%esp)
 846daec:	e8 8d 01 00 00       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 846daf1:	c9                   	leave
 846daf2:	c3                   	ret
 846daf3:	90                   	nop

```

```c
// CGuildServerProxy::SendCharLevelGrowType @ 0x846da9a

/* CGuildServerProxy::SendCharLevelGrowType(unsigned int, unsigned int, short, short) */

void __thiscall
CGuildServerProxy::SendCharLevelGrowType
          (CGuildServerProxy *this,uint param_1,uint param_2,short param_3,short param_4)

{
  Packet_Monitor_Char_Changable_Info local_1e [2];
  ushort local_1c;
  uint local_14;
  undefined1 local_10;
  short local_f;
  undefined1 local_d;
  
  Packet_Monitor_Char_Changable_Info::Packet_Monitor_Char_Changable_Info(local_1e);
  local_14 = param_1;
  local_10 = (undefined1)param_2;
  local_d = (undefined1)param_4;
  local_f = param_3;
  SendPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}

```

---

## SendCreateGuildAgit

```asm
// === 0846ed78 CGuildServerProxy::SendCreateGuildAgit  [0x0846ed78-0x846edbf] ===
 846ed78:	55                   	push   %ebp
 846ed79:	89 e5                	mov    %esp,%ebp
 846ed7b:	83 ec 38             	sub    $0x38,%esp
 846ed7e:	8d 45 de             	lea    -0x22(%ebp),%eax
 846ed81:	89 04 24             	mov    %eax,(%esp)
 846ed84:	e8 77 08 00 00       	call   846f600 <_ZN30Packet_Guild_Create_Guild_AgitC1Ev>
 846ed89:	8b 45 0c             	mov    0xc(%ebp),%eax
 846ed8c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 846ed8f:	8b 45 10             	mov    0x10(%ebp),%eax
 846ed92:	89 45 ec             	mov    %eax,-0x14(%ebp)
 846ed95:	8b 45 14             	mov    0x14(%ebp),%eax
 846ed98:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846ed9b:	8b 45 18             	mov    0x18(%ebp),%eax
 846ed9e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846eda1:	0f b7 45 e0          	movzwl -0x20(%ebp),%eax
 846eda5:	0f b7 d0             	movzwl %ax,%edx
 846eda8:	8d 45 de             	lea    -0x22(%ebp),%eax
 846edab:	89 54 24 08          	mov    %edx,0x8(%esp)
 846edaf:	89 44 24 04          	mov    %eax,0x4(%esp)
 846edb3:	8b 45 08             	mov    0x8(%ebp),%eax
 846edb6:	89 04 24             	mov    %eax,(%esp)
 846edb9:	e8 10 ef ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846edbe:	c9                   	leave
 846edbf:	c3                   	ret

```

```c
// CGuildServerProxy::SendCreateGuildAgit @ 0x846ed78

/* CGuildServerProxy::SendCreateGuildAgit(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::SendCreateGuildAgit
          (CGuildServerProxy *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  Packet_Guild_Create_Guild_Agit local_26 [2];
  ushort local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  Packet_Guild_Create_Guild_Agit::Packet_Guild_Create_Guild_Agit(local_26);
  local_1c = param_1;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  SendTcpPacket(this,(char *)local_26,(uint)local_24);
  return;
}

```

---

## SendDeleteGuildAgit

```asm
// === 0846edc0 CGuildServerProxy::SendDeleteGuildAgit  [0x0846edc0-0x846edfb] ===
 846edc0:	55                   	push   %ebp
 846edc1:	89 e5                	mov    %esp,%ebp
 846edc3:	83 ec 38             	sub    $0x38,%esp
 846edc6:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 846edc9:	89 04 24             	mov    %eax,(%esp)
 846edcc:	e8 7b 08 00 00       	call   846f64c <_ZN30Packet_Guild_Delete_Guild_AgitC1Ev>
 846edd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 846edd4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846edd7:	8b 45 10             	mov    0x10(%ebp),%eax
 846edda:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846eddd:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 846ede1:	0f b7 d0             	movzwl %ax,%edx
 846ede4:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 846ede7:	89 54 24 08          	mov    %edx,0x8(%esp)
 846edeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 846edef:	8b 45 08             	mov    0x8(%ebp),%eax
 846edf2:	89 04 24             	mov    %eax,(%esp)
 846edf5:	e8 d4 ee ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846edfa:	c9                   	leave
 846edfb:	c3                   	ret

```

```c
// CGuildServerProxy::SendDeleteGuildAgit @ 0x846edc0

/* CGuildServerProxy::SendDeleteGuildAgit(unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::SendDeleteGuildAgit(CGuildServerProxy *this,uint param_1,uint param_2)

{
  Packet_Guild_Delete_Guild_Agit local_1e [2];
  ushort local_1c;
  uint local_14;
  uint local_10;
  
  Packet_Guild_Delete_Guild_Agit::Packet_Guild_Delete_Guild_Agit(local_1e);
  local_14 = param_1;
  local_10 = param_2;
  SendTcpPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}

```

---

## SendGameServerInfo

```asm
// === 0846f0f2 CGuildServerProxy::SendGameServerInfo  [0x0846f0f2-0x846f16b] ===
 846f0f2:	55                   	push   %ebp
 846f0f3:	89 e5                	mov    %esp,%ebp
 846f0f5:	83 ec 48             	sub    $0x48,%esp
 846f0f8:	8b 4d 10             	mov    0x10(%ebp),%ecx
 846f0fb:	8b 55 14             	mov    0x14(%ebp),%edx
 846f0fe:	8b 45 18             	mov    0x18(%ebp),%eax
 846f101:	66 89 4d d4          	mov    %cx,-0x2c(%ebp)
 846f105:	88 55 d0             	mov    %dl,-0x30(%ebp)
 846f108:	88 45 cc             	mov    %al,-0x34(%ebp)
 846f10b:	8d 45 d9             	lea    -0x27(%ebp),%eax
 846f10e:	89 04 24             	mov    %eax,(%esp)
 846f111:	e8 aa 09 00 00       	call   846fac0 <_ZN25Packet_Game_Server_RegistC1Ev>
 846f116:	0f b6 45 d0          	movzbl -0x30(%ebp),%eax
 846f11a:	88 45 e4             	mov    %al,-0x1c(%ebp)
 846f11d:	0f b6 45 cc          	movzbl -0x34(%ebp),%eax
 846f121:	88 45 e5             	mov    %al,-0x1b(%ebp)
 846f124:	c6 45 e3 01          	movb   $0x1,-0x1d(%ebp)
 846f128:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 846f12c:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 846f130:	8d 45 d9             	lea    -0x27(%ebp),%eax
 846f133:	8d 50 0d             	lea    0xd(%eax),%edx
 846f136:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 846f13d:	00 
 846f13e:	8b 45 0c             	mov    0xc(%ebp),%eax
 846f141:	89 44 24 04          	mov    %eax,0x4(%esp)
 846f145:	89 14 24             	mov    %edx,(%esp)
 846f148:	e8 83 e7 c0 ff       	call   807d8d0 <strncpy@plt>
 846f14d:	0f b7 45 db          	movzwl -0x25(%ebp),%eax
 846f151:	0f b7 d0             	movzwl %ax,%edx
 846f154:	8d 45 d9             	lea    -0x27(%ebp),%eax
 846f157:	89 54 24 08          	mov    %edx,0x8(%esp)
 846f15b:	89 44 24 04          	mov    %eax,0x4(%esp)
 846f15f:	8b 45 08             	mov    0x8(%ebp),%eax
 846f162:	89 04 24             	mov    %eax,(%esp)
 846f165:	e8 64 eb ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846f16a:	c9                   	leave
 846f16b:	c3                   	ret

```

```c
// CGuildServerProxy::SendGameServerInfo @ 0x846f0f2

/* CGuildServerProxy::SendGameServerInfo(char*, unsigned short, unsigned char, unsigned char) */

void __thiscall
CGuildServerProxy::SendGameServerInfo
          (CGuildServerProxy *this,char *param_1,ushort param_2,uchar param_3,uchar param_4)

{
  Packet_Game_Server_Regist local_2b [2];
  ushort local_29;
  undefined1 local_21;
  uchar local_20;
  uchar local_1f;
  char local_1e [16];
  ushort local_e;
  
  Packet_Game_Server_Regist::Packet_Game_Server_Regist(local_2b);
  local_21 = 1;
  local_20 = param_3;
  local_1f = param_4;
  local_e = param_2;
  strncpy(local_1e,param_1,0x10);
  SendTcpPacket(this,(char *)local_2b,(uint)local_29);
  return;
}

```

---

## SendGuildBoardDelete

```asm
// === 0846f0b0 CGuildServerProxy::SendGuildBoardDelete  [0x0846f0b0-0x846f0f1] ===
 846f0b0:	55                   	push   %ebp
 846f0b1:	89 e5                	mov    %esp,%ebp
 846f0b3:	83 ec 38             	sub    $0x38,%esp
 846f0b6:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 846f0b9:	89 04 24             	mov    %eax,(%esp)
 846f0bc:	e8 8b 0b 00 00       	call   846fc4c <_ZN39Packet_Guild_Request_Guild_Board_DeleteC1Ev>
 846f0c1:	8b 45 10             	mov    0x10(%ebp),%eax
 846f0c4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846f0c7:	8b 45 14             	mov    0x14(%ebp),%eax
 846f0ca:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846f0cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 846f0d0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 846f0d3:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 846f0d7:	0f b7 d0             	movzwl %ax,%edx
 846f0da:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 846f0dd:	89 54 24 08          	mov    %edx,0x8(%esp)
 846f0e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 846f0e5:	8b 45 08             	mov    0x8(%ebp),%eax
 846f0e8:	89 04 24             	mov    %eax,(%esp)
 846f0eb:	e8 de eb ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846f0f0:	c9                   	leave
 846f0f1:	c3                   	ret

```

```c
// CGuildServerProxy::SendGuildBoardDelete @ 0x846f0b0

/* CGuildServerProxy::SendGuildBoardDelete(unsigned int, unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::SendGuildBoardDelete
          (CGuildServerProxy *this,uint param_1,uint param_2,uint param_3)

{
  Packet_Guild_Request_Guild_Board_Delete local_22 [2];
  ushort local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  
  Packet_Guild_Request_Guild_Board_Delete::Packet_Guild_Request_Guild_Board_Delete(local_22);
  local_10 = param_2;
  local_14 = param_3;
  local_18 = param_1;
  SendTcpPacket(this,(char *)local_22,(uint)local_20);
  return;
}

```

---

## SendGuildBoardOpen

```asm
// === 0846efce CGuildServerProxy::SendGuildBoardOpen  [0x0846efce-0x846f019] ===
 846efce:	55                   	push   %ebp
 846efcf:	89 e5                	mov    %esp,%ebp
 846efd1:	83 ec 48             	sub    $0x48,%esp
 846efd4:	8b 45 14             	mov    0x14(%ebp),%eax
 846efd7:	88 45 d4             	mov    %al,-0x2c(%ebp)
 846efda:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 846efdd:	89 04 24             	mov    %eax,(%esp)
 846efe0:	e8 bb 0b 00 00       	call   846fba0 <_ZN37Packet_Guild_Request_Guild_Board_OpenC1Ev>
 846efe5:	8b 45 0c             	mov    0xc(%ebp),%eax
 846efe8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846efeb:	8b 45 10             	mov    0x10(%ebp),%eax
 846efee:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846eff1:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 846eff5:	0f 95 c0             	setne  %al
 846eff8:	88 45 ef             	mov    %al,-0x11(%ebp)
 846effb:	0f b7 45 e7          	movzwl -0x19(%ebp),%eax
 846efff:	0f b7 d0             	movzwl %ax,%edx
 846f002:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 846f005:	89 54 24 08          	mov    %edx,0x8(%esp)
 846f009:	89 44 24 04          	mov    %eax,0x4(%esp)
 846f00d:	8b 45 08             	mov    0x8(%ebp),%eax
 846f010:	89 04 24             	mov    %eax,(%esp)
 846f013:	e8 b6 ec ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846f018:	c9                   	leave
 846f019:	c3                   	ret

```

```c
// CGuildServerProxy::SendGuildBoardOpen @ 0x846efce

/* CGuildServerProxy::SendGuildBoardOpen(unsigned int, unsigned int, char) */

void __thiscall
CGuildServerProxy::SendGuildBoardOpen
          (CGuildServerProxy *this,uint param_1,uint param_2,char param_3)

{
  Packet_Guild_Request_Guild_Board_Open local_1f [2];
  ushort local_1d;
  undefined1 local_15;
  uint local_14;
  uint local_10;
  
  Packet_Guild_Request_Guild_Board_Open::Packet_Guild_Request_Guild_Board_Open(local_1f);
  local_10 = param_1;
  local_14 = param_2;
  local_15 = param_3 != '\0';
  SendTcpPacket(this,(char *)local_1f,(uint)local_1d);
  return;
}

```

---

## SendGuildBoardWrite

```asm
// === 0846f01a CGuildServerProxy::SendGuildBoardWrite  [0x0846f01a-0x846f0af] ===
 846f01a:	55                   	push   %ebp
 846f01b:	89 e5                	mov    %esp,%ebp
 846f01d:	81 ec b8 00 00 00    	sub    $0xb8,%esp
 846f023:	8b 45 1c             	mov    0x1c(%ebp),%eax
 846f026:	88 85 64 ff ff ff    	mov    %al,-0x9c(%ebp)
 846f02c:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 846f032:	89 04 24             	mov    %eax,(%esp)
 846f035:	e8 a4 0b 00 00       	call   846fbde <_ZN38Packet_Guild_Request_Guild_Board_WriteC1Ev>
 846f03a:	8b 45 10             	mov    0x10(%ebp),%eax
 846f03d:	89 85 76 ff ff ff    	mov    %eax,-0x8a(%ebp)
 846f043:	8b 45 14             	mov    0x14(%ebp),%eax
 846f046:	89 85 7a ff ff ff    	mov    %eax,-0x86(%ebp)
 846f04c:	8b 45 18             	mov    0x18(%ebp),%eax
 846f04f:	88 85 7e ff ff ff    	mov    %al,-0x82(%ebp)
 846f055:	0f b6 85 64 ff ff ff 	movzbl -0x9c(%ebp),%eax
 846f05c:	88 85 7f ff ff ff    	mov    %al,-0x81(%ebp)
 846f062:	8b 45 20             	mov    0x20(%ebp),%eax
 846f065:	89 85 72 ff ff ff    	mov    %eax,-0x8e(%ebp)
 846f06b:	c7 44 24 08 78 00 00 	movl   $0x78,0x8(%esp)
 846f072:	00 
 846f073:	8b 45 0c             	mov    0xc(%ebp),%eax
 846f076:	89 44 24 04          	mov    %eax,0x4(%esp)
 846f07a:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 846f080:	83 c0 18             	add    $0x18,%eax
 846f083:	89 04 24             	mov    %eax,(%esp)
 846f086:	e8 15 e8 c0 ff       	call   807d8a0 <memcpy@plt>
 846f08b:	0f b7 85 6a ff ff ff 	movzwl -0x96(%ebp),%eax
 846f092:	0f b7 d0             	movzwl %ax,%edx
 846f095:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 846f09b:	89 54 24 08          	mov    %edx,0x8(%esp)
 846f09f:	89 44 24 04          	mov    %eax,0x4(%esp)
 846f0a3:	8b 45 08             	mov    0x8(%ebp),%eax
 846f0a6:	89 04 24             	mov    %eax,(%esp)
 846f0a9:	e8 20 ec ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846f0ae:	c9                   	leave
 846f0af:	c3                   	ret

```

```c
// CGuildServerProxy::SendGuildBoardWrite @ 0x846f01a

/* CGuildServerProxy::SendGuildBoardWrite(char*, unsigned int, unsigned int, int, char, unsigned
   int) */

void __thiscall
CGuildServerProxy::SendGuildBoardWrite
          (CGuildServerProxy *this,char *param_1,uint param_2,uint param_3,int param_4,char param_5,
          uint param_6)

{
  Packet_Guild_Request_Guild_Board_Write local_9c [2];
  ushort local_9a;
  uint local_92;
  uint local_8e;
  uint local_8a;
  undefined1 local_86;
  char local_85;
  undefined1 auStack_84 [128];
  
  Packet_Guild_Request_Guild_Board_Write::Packet_Guild_Request_Guild_Board_Write(local_9c);
  local_8e = param_2;
  local_8a = param_3;
  local_86 = (undefined1)param_4;
  local_92 = param_6;
  local_85 = param_5;
  memcpy(auStack_84,param_1,0x78);
  SendTcpPacket(this,(char *)local_9c,(uint)local_9a);
  return;
}

```

---

## SendGuildCreate

```asm
// === 0846e304 CGuildServerProxy::SendGuildCreate  [0x0846e304-0x846e375] ===
 846e304:	55                   	push   %ebp
 846e305:	89 e5                	mov    %esp,%ebp
 846e307:	83 ec 58             	sub    $0x58,%esp
 846e30a:	8d 45 c6             	lea    -0x3a(%ebp),%eax
 846e30d:	89 04 24             	mov    %eax,(%esp)
 846e310:	e8 4b 17 00 00       	call   846fa60 <_ZN27Packet_Request_Guild_CreateC1Ev>
 846e315:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e318:	89 45 d0             	mov    %eax,-0x30(%ebp)
 846e31b:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 846e322:	00 
 846e323:	8b 45 10             	mov    0x10(%ebp),%eax
 846e326:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e32a:	8d 45 c6             	lea    -0x3a(%ebp),%eax
 846e32d:	83 c0 0e             	add    $0xe,%eax
 846e330:	89 04 24             	mov    %eax,(%esp)
 846e333:	e8 68 f5 c0 ff       	call   807d8a0 <memcpy@plt>
 846e338:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 846e33f:	00 
 846e340:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 846e347:	00 
 846e348:	8d 45 c6             	lea    -0x3a(%ebp),%eax
 846e34b:	83 c0 25             	add    $0x25,%eax
 846e34e:	89 04 24             	mov    %eax,(%esp)
 846e351:	e8 6a f9 c0 ff       	call   807dcc0 <memset@plt>
 846e356:	0f b7 45 c8          	movzwl -0x38(%ebp),%eax
 846e35a:	0f b7 d0             	movzwl %ax,%edx
 846e35d:	8d 45 c6             	lea    -0x3a(%ebp),%eax
 846e360:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e364:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e368:	8b 45 08             	mov    0x8(%ebp),%eax
 846e36b:	89 04 24             	mov    %eax,(%esp)
 846e36e:	e8 5b f9 ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846e373:	c9                   	leave
 846e374:	c3                   	ret
 846e375:	90                   	nop

```

```c
// CGuildServerProxy::SendGuildCreate @ 0x846e304

/* CGuildServerProxy::SendGuildCreate(unsigned int, char*, char*) */

void CGuildServerProxy::SendGuildCreate(uint param_1,char *param_2,char *param_3)

{
  Packet_Request_Guild_Create local_3e [2];
  ushort local_3c;
  char *local_34;
  undefined1 auStack_30 [23];
  undefined1 auStack_19 [21];
  
  Packet_Request_Guild_Create::Packet_Request_Guild_Create(local_3e);
  local_34 = param_2;
  memcpy(auStack_30,param_3,0x16);
  memset(auStack_19,0,0xd);
  SendTcpPacket((CGuildServerProxy *)param_1,(char *)local_3e,(uint)local_3c);
  return;
}

```

---

## SendGuildExpLimit

```asm
// === 0846ee44 CGuildServerProxy::SendGuildExpLimit  [0x0846ee44-0x846eed9] ===
 846ee44:	55                   	push   %ebp
 846ee45:	89 e5                	mov    %esp,%ebp
 846ee47:	53                   	push   %ebx
 846ee48:	83 ec 74             	sub    $0x74,%esp
 846ee4b:	8d 45 9a             	lea    -0x66(%ebp),%eax
 846ee4e:	89 04 24             	mov    %eax,(%esp)
 846ee51:	e8 a8 08 00 00       	call   846f6fe <_ZN22Packet_Guild_Exp_LimitC1Ev>
 846ee56:	e8 26 d3 c5 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 846ee5b:	89 04 24             	mov    %eax,(%esp)
 846ee5e:	e8 67 bc cd ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 846ee63:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 846ee66:	e8 30 d3 c5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 846ee6b:	8b 80 ac a5 00 00    	mov    0xa5ac(%eax),%eax
 846ee71:	89 45 a8             	mov    %eax,-0x58(%ebp)
 846ee74:	e8 22 d3 c5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 846ee79:	8b 80 ec a5 00 00    	mov    0xa5ec(%eax),%eax
 846ee7f:	89 45 ac             	mov    %eax,-0x54(%ebp)
 846ee82:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 846ee89:	eb 20                	jmp    846eeab <_ZN17CGuildServerProxy17SendGuildExpLimitEv+0x67>
 846ee8b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 846ee8e:	e8 08 d3 c5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 846ee93:	8b 55 f4             	mov    -0xc(%ebp),%edx
 846ee96:	81 c2 aa 14 00 00    	add    $0x14aa,%edx
 846ee9c:	8b 44 d0 1c          	mov    0x1c(%eax,%edx,8),%eax
 846eea0:	8d 53 04             	lea    0x4(%ebx),%edx
 846eea3:	89 44 95 a0          	mov    %eax,-0x60(%ebp,%edx,4)
 846eea7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 846eeab:	83 7d f4 10          	cmpl   $0x10,-0xc(%ebp)
 846eeaf:	0f 9e c0             	setle  %al
 846eeb2:	84 c0                	test   %al,%al
 846eeb4:	75 d5                	jne    846ee8b <_ZN17CGuildServerProxy17SendGuildExpLimitEv+0x47>
 846eeb6:	0f b7 45 9c          	movzwl -0x64(%ebp),%eax
 846eeba:	0f b7 d0             	movzwl %ax,%edx
 846eebd:	8d 45 9a             	lea    -0x66(%ebp),%eax
 846eec0:	89 54 24 08          	mov    %edx,0x8(%esp)
 846eec4:	89 44 24 04          	mov    %eax,0x4(%esp)
 846eec8:	8b 45 08             	mov    0x8(%ebp),%eax
 846eecb:	89 04 24             	mov    %eax,(%esp)
 846eece:	e8 fb ed ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846eed3:	83 c4 74             	add    $0x74,%esp
 846eed6:	5b                   	pop    %ebx
 846eed7:	5d                   	pop    %ebp
 846eed8:	c3                   	ret
 846eed9:	90                   	nop

```

```c
// CGuildServerProxy::SendGuildExpLimit @ 0x846ee44

/* CGuildServerProxy::SendGuildExpLimit() */

void __thiscall CGuildServerProxy::SendGuildExpLimit(CGuildServerProxy *this)

{
  CEnvironment *this_00;
  int iVar1;
  int iVar2;
  Packet_Guild_Exp_Limit local_6a [2];
  ushort local_68;
  undefined4 auStack_64 [21];
  int local_10;
  
  Packet_Guild_Exp_Limit::Packet_Guild_Exp_Limit(local_6a);
  this_00 = (CEnvironment *)G_CEnvironment();
  auStack_64[1] = CEnvironment::get_channel_no(this_00);
  iVar1 = G_CDataManager();
  auStack_64[2] = *(undefined4 *)(iVar1 + 0xa5ac);
  iVar1 = G_CDataManager();
  auStack_64[3] = *(undefined4 *)(iVar1 + 0xa5ec);
  for (local_10 = 0; iVar1 = local_10, local_10 < 0x11; local_10 = local_10 + 1) {
    iVar2 = G_CDataManager();
    auStack_64[iVar1 + 4] = *(undefined4 *)(iVar2 + 0x1c + (local_10 + 0x14aa) * 8);
  }
  SendTcpPacket(this,(char *)local_6a,(uint)local_68);
  return;
}

```

---

## SendGuildLevelup

```asm
// === 0846dd8a CGuildServerProxy::SendGuildLevelup  [0x0846dd8a-0x846ddd1] ===
 846dd8a:	55                   	push   %ebp
 846dd8b:	89 e5                	mov    %esp,%ebp
 846dd8d:	83 ec 38             	sub    $0x38,%esp
 846dd90:	8d 45 dd             	lea    -0x23(%ebp),%eax
 846dd93:	89 04 24             	mov    %eax,(%esp)
 846dd96:	e8 85 16 00 00       	call   846f420 <_ZN34Packet_Monitor_Call_Guild_Level_UpC1Ev>
 846dd9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 846dd9e:	89 45 e7             	mov    %eax,-0x19(%ebp)
 846dda1:	8b 45 10             	mov    0x10(%ebp),%eax
 846dda4:	89 45 eb             	mov    %eax,-0x15(%ebp)
 846dda7:	8b 45 14             	mov    0x14(%ebp),%eax
 846ddaa:	89 45 ef             	mov    %eax,-0x11(%ebp)
 846ddad:	8b 45 18             	mov    0x18(%ebp),%eax
 846ddb0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846ddb3:	0f b7 45 df          	movzwl -0x21(%ebp),%eax
 846ddb7:	0f b7 d0             	movzwl %ax,%edx
 846ddba:	8d 45 dd             	lea    -0x23(%ebp),%eax
 846ddbd:	89 54 24 08          	mov    %edx,0x8(%esp)
 846ddc1:	89 44 24 04          	mov    %eax,0x4(%esp)
 846ddc5:	8b 45 08             	mov    0x8(%ebp),%eax
 846ddc8:	89 04 24             	mov    %eax,(%esp)
 846ddcb:	e8 fe fe ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846ddd0:	c9                   	leave
 846ddd1:	c3                   	ret

```

```c
// CGuildServerProxy::SendGuildLevelup @ 0x846dd8a

/* CGuildServerProxy::SendGuildLevelup(int, unsigned int, unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::SendGuildLevelup
          (CGuildServerProxy *this,int param_1,uint param_2,uint param_3,uint param_4)

{
  Packet_Monitor_Call_Guild_Level_Up local_27 [2];
  ushort local_25;
  int local_1d;
  uint local_19;
  uint local_15;
  uint local_10;
  
  Packet_Monitor_Call_Guild_Level_Up::Packet_Monitor_Call_Guild_Level_Up(local_27);
  local_1d = param_1;
  local_19 = param_2;
  local_15 = param_3;
  local_10 = param_4;
  SendTcpPacket(this,(char *)local_27,(uint)local_25);
  return;
}

```

---

## SendGuildMail

```asm
// === 0846e084 CGuildServerProxy::SendGuildMail  [0x0846e084-0x846e0f1] ===
 846e084:	55                   	push   %ebp
 846e085:	89 e5                	mov    %esp,%ebp
 846e087:	81 ec 38 01 00 00    	sub    $0x138,%esp
 846e08d:	8d 85 e6 fe ff ff    	lea    -0x11a(%ebp),%eax
 846e093:	89 04 24             	mov    %eax,(%esp)
 846e096:	e8 e3 17 00 00       	call   846f87e <_ZN30Packet_Monitor_Send_Guild_MailC1Ev>
 846e09b:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e09e:	89 85 f0 fe ff ff    	mov    %eax,-0x110(%ebp)
 846e0a4:	8b 45 10             	mov    0x10(%ebp),%eax
 846e0a7:	89 85 f4 fe ff ff    	mov    %eax,-0x10c(%ebp)
 846e0ad:	8b 45 14             	mov    0x14(%ebp),%eax
 846e0b0:	89 44 24 08          	mov    %eax,0x8(%esp)
 846e0b4:	8b 45 18             	mov    0x18(%ebp),%eax
 846e0b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e0bb:	8d 85 e6 fe ff ff    	lea    -0x11a(%ebp),%eax
 846e0c1:	83 c0 12             	add    $0x12,%eax
 846e0c4:	89 04 24             	mov    %eax,(%esp)
 846e0c7:	e8 d4 f7 c0 ff       	call   807d8a0 <memcpy@plt>
 846e0cc:	0f b7 85 e8 fe ff ff 	movzwl -0x118(%ebp),%eax
 846e0d3:	0f b7 d0             	movzwl %ax,%edx
 846e0d6:	8d 85 e6 fe ff ff    	lea    -0x11a(%ebp),%eax
 846e0dc:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e0e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e0e4:	8b 45 08             	mov    0x8(%ebp),%eax
 846e0e7:	89 04 24             	mov    %eax,(%esp)
 846e0ea:	e8 8f fb ff ff       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 846e0ef:	c9                   	leave
 846e0f0:	c3                   	ret
 846e0f1:	90                   	nop

```

```c
// CGuildServerProxy::SendGuildMail @ 0x846e084

/* CGuildServerProxy::SendGuildMail(unsigned int, unsigned int, int, char*) */

void __thiscall
CGuildServerProxy::SendGuildMail
          (CGuildServerProxy *this,uint param_1,uint param_2,int param_3,char *param_4)

{
  Packet_Monitor_Send_Guild_Mail local_11e [2];
  ushort local_11c;
  uint local_114;
  uint local_110;
  undefined1 auStack_10c [264];
  
  Packet_Monitor_Send_Guild_Mail::Packet_Monitor_Send_Guild_Mail(local_11e);
  local_114 = param_1;
  local_110 = param_2;
  memcpy(auStack_10c,param_4,param_3);
  SendPacket(this,(char *)local_11e,(uint)local_11c);
  return;
}

```

---

## SendGuildMasterDelegate

```asm
// === 0846e2ac CGuildServerProxy::SendGuildMasterDelegate  [0x0846e2ac-0x846e303] ===
 846e2ac:	55                   	push   %ebp
 846e2ad:	89 e5                	mov    %esp,%ebp
 846e2af:	83 ec 48             	sub    $0x48,%esp
 846e2b2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 846e2b5:	89 04 24             	mov    %eax,(%esp)
 846e2b8:	e8 ab 16 00 00       	call   846f968 <_ZN42Packet_Guild_Request_Guild_Master_DelegateC1Ev>
 846e2bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e2c0:	89 45 d2             	mov    %eax,-0x2e(%ebp)
 846e2c3:	8b 45 10             	mov    0x10(%ebp),%eax
 846e2c6:	89 45 d6             	mov    %eax,-0x2a(%ebp)
 846e2c9:	8b 45 14             	mov    0x14(%ebp),%eax
 846e2cc:	89 44 24 08          	mov    %eax,0x8(%esp)
 846e2d0:	8b 45 18             	mov    0x18(%ebp),%eax
 846e2d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e2d7:	8d 45 c8             	lea    -0x38(%ebp),%eax
 846e2da:	83 c0 12             	add    $0x12,%eax
 846e2dd:	89 04 24             	mov    %eax,(%esp)
 846e2e0:	e8 bb f5 c0 ff       	call   807d8a0 <memcpy@plt>
 846e2e5:	0f b7 45 ca          	movzwl -0x36(%ebp),%eax
 846e2e9:	0f b7 d0             	movzwl %ax,%edx
 846e2ec:	8d 45 c8             	lea    -0x38(%ebp),%eax
 846e2ef:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e2f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e2f7:	8b 45 08             	mov    0x8(%ebp),%eax
 846e2fa:	89 04 24             	mov    %eax,(%esp)
 846e2fd:	e8 7c f9 ff ff       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 846e302:	c9                   	leave
 846e303:	c3                   	ret

```

```c
// CGuildServerProxy::SendGuildMasterDelegate @ 0x846e2ac

/* CGuildServerProxy::SendGuildMasterDelegate(unsigned int, unsigned int, int, char*) */

void __thiscall
CGuildServerProxy::SendGuildMasterDelegate
          (CGuildServerProxy *this,uint param_1,uint param_2,int param_3,char *param_4)

{
  Packet_Guild_Request_Guild_Master_Delegate local_3c [2];
  ushort local_3a;
  uint local_32;
  uint local_2e;
  undefined1 auStack_2a [38];
  
  Packet_Guild_Request_Guild_Master_Delegate::Packet_Guild_Request_Guild_Master_Delegate(local_3c);
  local_32 = param_1;
  local_2e = param_2;
  memcpy(auStack_2a,param_4,param_3);
  SendPacket(this,(char *)local_3c,(uint)local_3a);
  return;
}

```

---

## SendGuildNameChange

```asm
// === 0846e376 CGuildServerProxy::SendGuildNameChange  [0x0846e376-0x846e3c7] ===
 846e376:	55                   	push   %ebp
 846e377:	89 e5                	mov    %esp,%ebp
 846e379:	83 ec 48             	sub    $0x48,%esp
 846e37c:	8d 45 cf             	lea    -0x31(%ebp),%eax
 846e37f:	89 04 24             	mov    %eax,(%esp)
 846e382:	e8 23 16 00 00       	call   846f9aa <_ZN24Packet_Change_Guild_NameC1Ev>
 846e387:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e38a:	89 45 dd             	mov    %eax,-0x23(%ebp)
 846e38d:	8b 45 10             	mov    0x10(%ebp),%eax
 846e390:	89 45 d9             	mov    %eax,-0x27(%ebp)
 846e393:	8b 45 14             	mov    0x14(%ebp),%eax
 846e396:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e39a:	8d 45 cf             	lea    -0x31(%ebp),%eax
 846e39d:	83 c0 12             	add    $0x12,%eax
 846e3a0:	89 04 24             	mov    %eax,(%esp)
 846e3a3:	e8 48 fb c0 ff       	call   807def0 <strcpy@plt>
 846e3a8:	0f b7 45 d1          	movzwl -0x2f(%ebp),%eax
 846e3ac:	0f b7 d0             	movzwl %ax,%edx
 846e3af:	8d 45 cf             	lea    -0x31(%ebp),%eax
 846e3b2:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e3b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e3ba:	8b 45 08             	mov    0x8(%ebp),%eax
 846e3bd:	89 04 24             	mov    %eax,(%esp)
 846e3c0:	e8 09 f9 ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846e3c5:	c9                   	leave
 846e3c6:	c3                   	ret
 846e3c7:	90                   	nop

```

```c
// CGuildServerProxy::SendGuildNameChange @ 0x846e376

/* CGuildServerProxy::SendGuildNameChange(unsigned int, unsigned int, char*) */

void __thiscall
CGuildServerProxy::SendGuildNameChange
          (CGuildServerProxy *this,uint param_1,uint param_2,char *param_3)

{
  Packet_Change_Guild_Name local_35 [2];
  ushort local_33;
  uint local_2b;
  uint local_27;
  char acStack_23 [31];
  
  Packet_Change_Guild_Name::Packet_Change_Guild_Name(local_35);
  local_27 = param_1;
  local_2b = param_2;
  strcpy(acStack_23,param_3);
  SendTcpPacket(this,(char *)local_35,(uint)local_33);
  return;
}

```

---

## SendGuildWarEnd

```asm
// === 0846df52 CGuildServerProxy::SendGuildWarEnd  [0x0846df52-0x846df8f] ===
 846df52:	55                   	push   %ebp
 846df53:	89 e5                	mov    %esp,%ebp
 846df55:	83 ec 38             	sub    $0x38,%esp
 846df58:	8b 45 0c             	mov    0xc(%ebp),%eax
 846df5b:	88 45 e4             	mov    %al,-0x1c(%ebp)
 846df5e:	8d 45 ed             	lea    -0x13(%ebp),%eax
 846df61:	89 04 24             	mov    %eax,(%esp)
 846df64:	e8 0d 16 00 00       	call   846f576 <_ZN27Packet_Notice_Guild_War_EndC1Ev>
 846df69:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 846df6d:	88 45 f7             	mov    %al,-0x9(%ebp)
 846df70:	0f b7 45 ef          	movzwl -0x11(%ebp),%eax
 846df74:	0f b7 d0             	movzwl %ax,%edx
 846df77:	8d 45 ed             	lea    -0x13(%ebp),%eax
 846df7a:	89 54 24 08          	mov    %edx,0x8(%esp)
 846df7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 846df82:	8b 45 08             	mov    0x8(%ebp),%eax
 846df85:	89 04 24             	mov    %eax,(%esp)
 846df88:	e8 f1 fc ff ff       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 846df8d:	c9                   	leave
 846df8e:	c3                   	ret
 846df8f:	90                   	nop

```

```c
// CGuildServerProxy::SendGuildWarEnd @ 0x846df52

/* CGuildServerProxy::SendGuildWarEnd(unsigned char) */

void __thiscall CGuildServerProxy::SendGuildWarEnd(CGuildServerProxy *this,uchar param_1)

{
  Packet_Notice_Guild_War_End local_17 [2];
  ushort local_15;
  uchar local_d;
  
  Packet_Notice_Guild_War_End::Packet_Notice_Guild_War_End(local_17);
  local_d = param_1;
  SendPacket(this,(char *)local_17,(uint)local_15);
  return;
}

```

---

## SendGuildWarStart

```asm
// === 0846df90 CGuildServerProxy::SendGuildWarStart  [0x0846df90-0x846dfcd] ===
 846df90:	55                   	push   %ebp
 846df91:	89 e5                	mov    %esp,%ebp
 846df93:	83 ec 38             	sub    $0x38,%esp
 846df96:	8b 45 0c             	mov    0xc(%ebp),%eax
 846df99:	88 45 e4             	mov    %al,-0x1c(%ebp)
 846df9c:	8d 45 ed             	lea    -0x13(%ebp),%eax
 846df9f:	89 04 24             	mov    %eax,(%esp)
 846dfa2:	e8 f3 15 00 00       	call   846f59a <_ZN29Packet_Notice_Guild_War_StartC1Ev>
 846dfa7:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 846dfab:	88 45 f7             	mov    %al,-0x9(%ebp)
 846dfae:	0f b7 45 ef          	movzwl -0x11(%ebp),%eax
 846dfb2:	0f b7 d0             	movzwl %ax,%edx
 846dfb5:	8d 45 ed             	lea    -0x13(%ebp),%eax
 846dfb8:	89 54 24 08          	mov    %edx,0x8(%esp)
 846dfbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 846dfc0:	8b 45 08             	mov    0x8(%ebp),%eax
 846dfc3:	89 04 24             	mov    %eax,(%esp)
 846dfc6:	e8 b3 fc ff ff       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 846dfcb:	c9                   	leave
 846dfcc:	c3                   	ret
 846dfcd:	90                   	nop

```

```c
// CGuildServerProxy::SendGuildWarStart @ 0x846df90

/* CGuildServerProxy::SendGuildWarStart(unsigned char) */

void __thiscall CGuildServerProxy::SendGuildWarStart(CGuildServerProxy *this,uchar param_1)

{
  Packet_Notice_Guild_War_Start local_17 [2];
  ushort local_15;
  uchar local_d;
  
  Packet_Notice_Guild_War_Start::Packet_Notice_Guild_War_Start(local_17);
  local_d = param_1;
  SendPacket(this,(char *)local_17,(uint)local_15);
  return;
}

```

---

## SendHeartBeat

```asm
// === 0846daf4 CGuildServerProxy::SendHeartBeat  [0x0846daf4-0x846db29] ===
 846daf4:	55                   	push   %ebp
 846daf5:	89 e5                	mov    %esp,%ebp
 846daf7:	83 ec 28             	sub    $0x28,%esp
 846dafa:	8d 45 ed             	lea    -0x13(%ebp),%eax
 846dafd:	89 04 24             	mov    %eax,(%esp)
 846db00:	e8 47 18 00 00       	call   846f34c <_ZN28Packet_Monitor_UDP_HeartBeatC1Ev>
 846db05:	8b 45 0c             	mov    0xc(%ebp),%eax
 846db08:	88 45 f7             	mov    %al,-0x9(%ebp)
 846db0b:	0f b7 45 ef          	movzwl -0x11(%ebp),%eax
 846db0f:	0f b7 d0             	movzwl %ax,%edx
 846db12:	8d 45 ed             	lea    -0x13(%ebp),%eax
 846db15:	89 54 24 08          	mov    %edx,0x8(%esp)
 846db19:	89 44 24 04          	mov    %eax,0x4(%esp)
 846db1d:	8b 45 08             	mov    0x8(%ebp),%eax
 846db20:	89 04 24             	mov    %eax,(%esp)
 846db23:	e8 56 01 00 00       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 846db28:	c9                   	leave
 846db29:	c3                   	ret

```

```c
// CGuildServerProxy::SendHeartBeat @ 0x846daf4

/* CGuildServerProxy::SendHeartBeat(int) */

void __thiscall CGuildServerProxy::SendHeartBeat(CGuildServerProxy *this,int param_1)

{
  Packet_Monitor_UDP_HeartBeat local_17 [2];
  ushort local_15;
  undefined1 local_d;
  
  Packet_Monitor_UDP_HeartBeat::Packet_Monitor_UDP_HeartBeat(local_17);
  local_d = (undefined1)param_1;
  SendPacket(this,(char *)local_17,(uint)local_15);
  return;
}

```

---

## SendIncreaseDecreasePowerWarPoint

```asm
// === 0846ed36 CGuildServerProxy::SendIncreaseDecreasePowerWarPoint  [0x0846ed36-0x846ed77] ===
 846ed36:	55                   	push   %ebp
 846ed37:	89 e5                	mov    %esp,%ebp
 846ed39:	83 ec 38             	sub    $0x38,%esp
 846ed3c:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 846ed3f:	89 04 24             	mov    %eax,(%esp)
 846ed42:	e8 77 08 00 00       	call   846f5be <_ZN46Packet_Guild_Increase_Decrease_Power_War_PointC1Ev>
 846ed47:	8b 45 0c             	mov    0xc(%ebp),%eax
 846ed4a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 846ed4d:	8b 45 10             	mov    0x10(%ebp),%eax
 846ed50:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846ed53:	8b 45 14             	mov    0x14(%ebp),%eax
 846ed56:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846ed59:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 846ed5d:	0f b7 d0             	movzwl %ax,%edx
 846ed60:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 846ed63:	89 54 24 08          	mov    %edx,0x8(%esp)
 846ed67:	89 44 24 04          	mov    %eax,0x4(%esp)
 846ed6b:	8b 45 08             	mov    0x8(%ebp),%eax
 846ed6e:	89 04 24             	mov    %eax,(%esp)
 846ed71:	e8 58 ef ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846ed76:	c9                   	leave
 846ed77:	c3                   	ret

```

```c
// CGuildServerProxy::SendIncreaseDecreasePowerWarPoint @ 0x846ed36

/* CGuildServerProxy::SendIncreaseDecreasePowerWarPoint(unsigned int, unsigned int, int) */

void __thiscall
CGuildServerProxy::SendIncreaseDecreasePowerWarPoint
          (CGuildServerProxy *this,uint param_1,uint param_2,int param_3)

{
  Packet_Guild_Increase_Decrease_Power_War_Point local_22 [2];
  ushort local_20;
  uint local_18;
  uint local_14;
  int local_10;
  
  Packet_Guild_Increase_Decrease_Power_War_Point::Packet_Guild_Increase_Decrease_Power_War_Point
            (local_22);
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  SendTcpPacket(this,(char *)local_22,(uint)local_20);
  return;
}

```

---

## SendIncreaseGuildExp

```asm
// === 0846ece2 CGuildServerProxy::SendIncreaseGuildExp  [0x0846ece2-0x846ed35] ===
 846ece2:	55                   	push   %ebp
 846ece3:	89 e5                	mov    %esp,%ebp
 846ece5:	83 ec 48             	sub    $0x48,%esp
 846ece8:	8b 45 18             	mov    0x18(%ebp),%eax
 846eceb:	88 45 d4             	mov    %al,-0x2c(%ebp)
 846ecee:	8d 45 dc             	lea    -0x24(%ebp),%eax
 846ecf1:	89 04 24             	mov    %eax,(%esp)
 846ecf4:	e8 7d 06 00 00       	call   846f376 <_ZN33Packet_Monitor_Increase_Guild_ExpC1Ev>
 846ecf9:	8b 45 10             	mov    0x10(%ebp),%eax
 846ecfc:	89 45 e6             	mov    %eax,-0x1a(%ebp)
 846ecff:	8b 45 0c             	mov    0xc(%ebp),%eax
 846ed02:	89 45 ea             	mov    %eax,-0x16(%ebp)
 846ed05:	8b 45 14             	mov    0x14(%ebp),%eax
 846ed08:	89 45 ee             	mov    %eax,-0x12(%ebp)
 846ed0b:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 846ed0f:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 846ed13:	88 45 f2             	mov    %al,-0xe(%ebp)
 846ed16:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 846ed1a:	0f b7 d0             	movzwl %ax,%edx
 846ed1d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 846ed20:	89 54 24 08          	mov    %edx,0x8(%esp)
 846ed24:	89 44 24 04          	mov    %eax,0x4(%esp)
 846ed28:	8b 45 08             	mov    0x8(%ebp),%eax
 846ed2b:	89 04 24             	mov    %eax,(%esp)
 846ed2e:	e8 9b ef ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846ed33:	c9                   	leave
 846ed34:	c3                   	ret
 846ed35:	90                   	nop

```

```c
// CGuildServerProxy::SendIncreaseGuildExp @ 0x846ece2

/* CGuildServerProxy::SendIncreaseGuildExp(unsigned int, unsigned int, unsigned int, char) */

void __thiscall
CGuildServerProxy::SendIncreaseGuildExp
          (CGuildServerProxy *this,uint param_1,uint param_2,uint param_3,char param_4)

{
  Packet_Monitor_Increase_Guild_Exp local_28 [2];
  ushort local_26;
  uint local_1e;
  uint local_1a;
  uint local_16;
  char local_12;
  undefined1 local_11;
  
  Packet_Monitor_Increase_Guild_Exp::Packet_Monitor_Increase_Guild_Exp(local_28);
  local_1e = param_2;
  local_1a = param_1;
  local_16 = param_3;
  local_11 = 1;
  local_12 = param_4;
  SendTcpPacket(this,(char *)local_28,(uint)local_26);
  return;
}

```

---

## SendJoinPower

```asm
// === 0846e4b6 CGuildServerProxy::SendJoinPower  [0x0846e4b6-0x846e4ff] ===
 846e4b6:	55                   	push   %ebp
 846e4b7:	89 e5                	mov    %esp,%ebp
 846e4b9:	83 ec 48             	sub    $0x48,%esp
 846e4bc:	8b 45 14             	mov    0x14(%ebp),%eax
 846e4bf:	88 45 d4             	mov    %al,-0x2c(%ebp)
 846e4c2:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 846e4c5:	89 04 24             	mov    %eax,(%esp)
 846e4c8:	e8 21 13 00 00       	call   846f7ee <_ZN25Packet_Request_Join_PowerC1Ev>
 846e4cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e4d0:	89 45 ef             	mov    %eax,-0x11(%ebp)
 846e4d3:	8b 45 10             	mov    0x10(%ebp),%eax
 846e4d6:	89 45 f3             	mov    %eax,-0xd(%ebp)
 846e4d9:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 846e4dd:	88 45 f7             	mov    %al,-0x9(%ebp)
 846e4e0:	0f b7 45 e7          	movzwl -0x19(%ebp),%eax
 846e4e4:	0f b7 d0             	movzwl %ax,%edx
 846e4e7:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 846e4ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e4ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e4f2:	8b 45 08             	mov    0x8(%ebp),%eax
 846e4f5:	89 04 24             	mov    %eax,(%esp)
 846e4f8:	e8 d1 f7 ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846e4fd:	c9                   	leave
 846e4fe:	c3                   	ret
 846e4ff:	90                   	nop

```

```c
// CGuildServerProxy::SendJoinPower @ 0x846e4b6

/* CGuildServerProxy::SendJoinPower(unsigned int, unsigned int, unsigned char) */

void __thiscall
CGuildServerProxy::SendJoinPower(CGuildServerProxy *this,uint param_1,uint param_2,uchar param_3)

{
  Packet_Request_Join_Power local_1f [2];
  ushort local_1d;
  uint local_15;
  uint local_11;
  uchar local_d;
  
  Packet_Request_Join_Power::Packet_Request_Join_Power(local_1f);
  local_15 = param_1;
  local_11 = param_2;
  local_d = param_3;
  SendTcpPacket(this,(char *)local_1f,(uint)local_1d);
  return;
}

```

---

## SendLogin

```asm
// === 0846db2a CGuildServerProxy::SendLogin  [0x0846db2a-0x846dbfd] ===
 846db2a:	55                   	push   %ebp
 846db2b:	89 e5                	mov    %esp,%ebp
 846db2d:	83 ec 78             	sub    $0x78,%esp
 846db30:	8b 45 1c             	mov    0x1c(%ebp),%eax
 846db33:	88 45 b4             	mov    %al,-0x4c(%ebp)
 846db36:	8d 45 c5             	lea    -0x3b(%ebp),%eax
 846db39:	89 04 24             	mov    %eax,(%esp)
 846db3c:	e8 0b 17 00 00       	call   846f24c <_ZN24Packet_Monitor_UDP_LoginC1Ev>
 846db41:	8b 45 0c             	mov    0xc(%ebp),%eax
 846db44:	89 45 cf             	mov    %eax,-0x31(%ebp)
 846db47:	8b 45 10             	mov    0x10(%ebp),%eax
 846db4a:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 846db4d:	8b 45 14             	mov    0x14(%ebp),%eax
 846db50:	88 45 d7             	mov    %al,-0x29(%ebp)
 846db53:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 846db57:	74 1f                	je     846db78 <_ZN17CGuildServerProxy9SendLoginEijiPchS0_+0x4e>
 846db59:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 846db60:	00 
 846db61:	8b 45 18             	mov    0x18(%ebp),%eax
 846db64:	89 44 24 04          	mov    %eax,0x4(%esp)
 846db68:	8d 45 c5             	lea    -0x3b(%ebp),%eax
 846db6b:	83 c0 13             	add    $0x13,%eax
 846db6e:	89 04 24             	mov    %eax,(%esp)
 846db71:	e8 5a fd c0 ff       	call   807d8d0 <strncpy@plt>
 846db76:	eb 43                	jmp    846dbbb <_ZN17CGuildServerProxy9SendLoginEijiPchS0_+0x91>
 846db78:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 846db7f:	00 
 846db80:	8b 45 10             	mov    0x10(%ebp),%eax
 846db83:	89 04 24             	mov    %eax,(%esp)
 846db86:	e8 c0 b4 c9 ff       	call   810904b <_Z14NumberToStringji>
 846db8b:	89 44 24 14          	mov    %eax,0x14(%esp)
 846db8f:	c7 44 24 10 f0 7f c6 	movl   $0x8c67ff0,0x10(%esp)
 846db96:	08 
 846db97:	c7 44 24 0c 33 05 00 	movl   $0x533,0xc(%esp)
 846db9e:	00 
 846db9f:	c7 44 24 08 60 91 c6 	movl   $0x8c69160,0x8(%esp)
 846dba6:	08 
 846dba7:	c7 44 24 04 7c 7f c6 	movl   $0x8c67f7c,0x4(%esp)
 846dbae:	08 
 846dbaf:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 846dbb6:	e8 4f 60 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 846dbbb:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 846dbbf:	88 45 e8             	mov    %al,-0x18(%ebp)
 846dbc2:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 846dbc9:	00 
 846dbca:	8b 45 20             	mov    0x20(%ebp),%eax
 846dbcd:	89 44 24 04          	mov    %eax,0x4(%esp)
 846dbd1:	8d 45 c5             	lea    -0x3b(%ebp),%eax
 846dbd4:	83 c0 2c             	add    $0x2c,%eax
 846dbd7:	89 04 24             	mov    %eax,(%esp)
 846dbda:	e8 c1 fc c0 ff       	call   807d8a0 <memcpy@plt>
 846dbdf:	0f b7 45 c7          	movzwl -0x39(%ebp),%eax
 846dbe3:	0f b7 d0             	movzwl %ax,%edx
 846dbe6:	8d 45 c5             	lea    -0x3b(%ebp),%eax
 846dbe9:	89 54 24 08          	mov    %edx,0x8(%esp)
 846dbed:	89 44 24 04          	mov    %eax,0x4(%esp)
 846dbf1:	8b 45 08             	mov    0x8(%ebp),%eax
 846dbf4:	89 04 24             	mov    %eax,(%esp)
 846dbf7:	e8 d2 00 00 00       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846dbfc:	c9                   	leave
 846dbfd:	c3                   	ret

```

```c
// CGuildServerProxy::SendLogin @ 0x846db2a

/* CGuildServerProxy::SendLogin(int, unsigned int, int, char*, unsigned char, char*) */

void __thiscall
CGuildServerProxy::SendLogin
          (CGuildServerProxy *this,int param_1,uint param_2,int param_3,char *param_4,uchar param_5,
          char *param_6)

{
  undefined4 uVar1;
  Packet_Monitor_UDP_Login local_3f [2];
  ushort local_3d;
  int local_35;
  uint local_31;
  undefined1 local_2d;
  char acStack_2c [16];
  uchar local_1c;
  undefined1 auStack_13 [15];
  
  Packet_Monitor_UDP_Login::Packet_Monitor_UDP_Login(local_3f);
  local_35 = param_1;
  local_31 = param_2;
  local_2d = (undefined1)param_3;
  if (param_4 == (char *)0x0) {
    uVar1 = NumberToString(param_2,0);
    LogManager::logFormat
              (1,"DF_GuildServerProxy.cpp",
               "void CGuildServerProxy::SendLogin(int, memberIdentificationNumber_t, int, char*, unsigned char, char*)"
               ,0x533,"CGuildServerProxy::SendLogin! DB ID(%s)",uVar1);
  }
  else {
    strncpy(acStack_2c,param_4,0x10);
  }
  local_1c = param_5;
  memcpy(auStack_13,param_6,6);
  SendTcpPacket(this,(char *)local_3f,(uint)local_3d);
  return;
}

```

---

## SendLogout

```asm
// === 0846dbfe CGuildServerProxy::SendLogout  [0x0846dbfe-0x846dc7d] ===
 846dbfe:	55                   	push   %ebp
 846dbff:	89 e5                	mov    %esp,%ebp
 846dc01:	83 ec 68             	sub    $0x68,%esp
 846dc04:	8b 45 24             	mov    0x24(%ebp),%eax
 846dc07:	88 45 b4             	mov    %al,-0x4c(%ebp)
 846dc0a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 846dc0e:	74 6a                	je     846dc7a <_ZN17CGuildServerProxy10SendLogoutEjiPcjjjh+0x7c>
 846dc10:	8d 45 bd             	lea    -0x43(%ebp),%eax
 846dc13:	89 04 24             	mov    %eax,(%esp)
 846dc16:	e8 b9 16 00 00       	call   846f2d4 <_ZN25Packet_Monitor_UDP_LogoutC1Ev>
 846dc1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 846dc1e:	89 45 c7             	mov    %eax,-0x39(%ebp)
 846dc21:	8b 45 10             	mov    0x10(%ebp),%eax
 846dc24:	88 45 cb             	mov    %al,-0x35(%ebp)
 846dc27:	8b 45 18             	mov    0x18(%ebp),%eax
 846dc2a:	89 45 cc             	mov    %eax,-0x34(%ebp)
 846dc2d:	8b 45 1c             	mov    0x1c(%ebp),%eax
 846dc30:	89 45 d0             	mov    %eax,-0x30(%ebp)
 846dc33:	8b 45 20             	mov    0x20(%ebp),%eax
 846dc36:	89 45 d5             	mov    %eax,-0x2b(%ebp)
 846dc39:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 846dc3d:	88 45 d4             	mov    %al,-0x2c(%ebp)
 846dc40:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 846dc44:	74 15                	je     846dc5b <_ZN17CGuildServerProxy10SendLogoutEjiPcjjjh+0x5d>
 846dc46:	8b 45 14             	mov    0x14(%ebp),%eax
 846dc49:	89 44 24 04          	mov    %eax,0x4(%esp)
 846dc4d:	8d 45 bd             	lea    -0x43(%ebp),%eax
 846dc50:	83 c0 1c             	add    $0x1c,%eax
 846dc53:	89 04 24             	mov    %eax,(%esp)
 846dc56:	e8 95 02 c1 ff       	call   807def0 <strcpy@plt>
 846dc5b:	0f b7 45 bf          	movzwl -0x41(%ebp),%eax
 846dc5f:	0f b7 d0             	movzwl %ax,%edx
 846dc62:	8d 45 bd             	lea    -0x43(%ebp),%eax
 846dc65:	89 54 24 08          	mov    %edx,0x8(%esp)
 846dc69:	89 44 24 04          	mov    %eax,0x4(%esp)
 846dc6d:	8b 45 08             	mov    0x8(%ebp),%eax
 846dc70:	89 04 24             	mov    %eax,(%esp)
 846dc73:	e8 56 00 00 00       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846dc78:	eb 01                	jmp    846dc7b <_ZN17CGuildServerProxy10SendLogoutEjiPcjjjh+0x7d>
 846dc7a:	90                   	nop
 846dc7b:	c9                   	leave
 846dc7c:	c3                   	ret
 846dc7d:	90                   	nop

```

```c
// CGuildServerProxy::SendLogout @ 0x846dbfe

/* CGuildServerProxy::SendLogout(unsigned int, int, char*, unsigned int, unsigned int, unsigned int,
   unsigned char) */

void __thiscall
CGuildServerProxy::SendLogout
          (CGuildServerProxy *this,uint param_1,int param_2,char *param_3,uint param_4,uint param_5,
          uint param_6,uchar param_7)

{
  Packet_Monitor_UDP_Logout local_47 [2];
  ushort local_45;
  uint local_3d;
  undefined1 local_39;
  uint local_38;
  uint local_34;
  uchar local_30;
  uint local_2f;
  char acStack_2b [39];
  
  if (param_1 != 0) {
    Packet_Monitor_UDP_Logout::Packet_Monitor_UDP_Logout(local_47);
    local_3d = param_1;
    local_39 = (undefined1)param_2;
    local_38 = param_4;
    local_34 = param_5;
    local_2f = param_6;
    local_30 = param_7;
    if (param_3 != (char *)0x0) {
      strcpy(acStack_2b,param_3);
    }
    SendTcpPacket(this,(char *)local_47,(uint)local_45);
  }
  return;
}

```

---

## SendMemoToGuild

```asm
// === 0846e254 CGuildServerProxy::SendMemoToGuild  [0x0846e254-0x846e2ab] ===
 846e254:	55                   	push   %ebp
 846e255:	89 e5                	mov    %esp,%ebp
 846e257:	83 ec 48             	sub    $0x48,%esp
 846e25a:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 846e25d:	89 04 24             	mov    %eax,(%esp)
 846e260:	e8 69 12 00 00       	call   846f4ce <_ZN36Packet_Guild_Write_Guild_Member_MemoC1Ev>
 846e265:	8b 45 10             	mov    0x10(%ebp),%eax
 846e268:	89 45 df             	mov    %eax,-0x21(%ebp)
 846e26b:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e26e:	89 45 db             	mov    %eax,-0x25(%ebp)
 846e271:	8b 45 14             	mov    0x14(%ebp),%eax
 846e274:	89 44 24 08          	mov    %eax,0x8(%esp)
 846e278:	8b 45 18             	mov    0x18(%ebp),%eax
 846e27b:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e27f:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 846e282:	83 c0 12             	add    $0x12,%eax
 846e285:	89 04 24             	mov    %eax,(%esp)
 846e288:	e8 13 f6 c0 ff       	call   807d8a0 <memcpy@plt>
 846e28d:	0f b7 45 d3          	movzwl -0x2d(%ebp),%eax
 846e291:	0f b7 d0             	movzwl %ax,%edx
 846e294:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 846e297:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e29b:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e29f:	8b 45 08             	mov    0x8(%ebp),%eax
 846e2a2:	89 04 24             	mov    %eax,(%esp)
 846e2a5:	e8 d4 f9 ff ff       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 846e2aa:	c9                   	leave
 846e2ab:	c3                   	ret

```

```c
// CGuildServerProxy::SendMemoToGuild @ 0x846e254

/* CGuildServerProxy::SendMemoToGuild(unsigned int, int, int, char*) */

void __thiscall
CGuildServerProxy::SendMemoToGuild
          (CGuildServerProxy *this,uint param_1,int param_2,int param_3,char *param_4)

{
  Packet_Guild_Write_Guild_Member_Memo local_33 [2];
  ushort local_31;
  uint local_29;
  int local_25;
  undefined1 auStack_21 [29];
  
  Packet_Guild_Write_Guild_Member_Memo::Packet_Guild_Write_Guild_Member_Memo(local_33);
  local_25 = param_2;
  local_29 = param_1;
  memcpy(auStack_21,param_4,param_3);
  SendPacket(this,(char *)local_33,(uint)local_31);
  return;
}

```

---

## SendMessageToGuild

```asm
// === 0846e1f4 CGuildServerProxy::SendMessageToGuild  [0x0846e1f4-0x846e253] ===
 846e1f4:	55                   	push   %ebp
 846e1f5:	89 e5                	mov    %esp,%ebp
 846e1f7:	81 ec 98 00 00 00    	sub    $0x98,%esp
 846e1fd:	8d 45 84             	lea    -0x7c(%ebp),%eax
 846e200:	89 04 24             	mov    %eax,(%esp)
 846e203:	e8 1c 13 00 00       	call   846f524 <_ZN34Packet_Web_Notify_Message_To_GuildC1Ev>
 846e208:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e20b:	89 45 8e             	mov    %eax,-0x72(%ebp)
 846e20e:	c6 45 92 02          	movb   $0x2,-0x6e(%ebp)
 846e212:	83 7d 10 64          	cmpl   $0x64,0x10(%ebp)
 846e216:	7f 1c                	jg     846e234 <_ZN17CGuildServerProxy18SendMessageToGuildEjiPc+0x40>
 846e218:	8b 45 10             	mov    0x10(%ebp),%eax
 846e21b:	89 44 24 08          	mov    %eax,0x8(%esp)
 846e21f:	8b 45 14             	mov    0x14(%ebp),%eax
 846e222:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e226:	8d 45 84             	lea    -0x7c(%ebp),%eax
 846e229:	83 c0 0f             	add    $0xf,%eax
 846e22c:	89 04 24             	mov    %eax,(%esp)
 846e22f:	e8 6c f6 c0 ff       	call   807d8a0 <memcpy@plt>
 846e234:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 846e238:	0f b7 d0             	movzwl %ax,%edx
 846e23b:	8d 45 84             	lea    -0x7c(%ebp),%eax
 846e23e:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e242:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e246:	8b 45 08             	mov    0x8(%ebp),%eax
 846e249:	89 04 24             	mov    %eax,(%esp)
 846e24c:	e8 2d fa ff ff       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 846e251:	c9                   	leave
 846e252:	c3                   	ret
 846e253:	90                   	nop

```

```c
// CGuildServerProxy::SendMessageToGuild @ 0x846e1f4

/* CGuildServerProxy::SendMessageToGuild(unsigned int, int, char*) */

void __thiscall
CGuildServerProxy::SendMessageToGuild
          (CGuildServerProxy *this,uint param_1,int param_2,char *param_3)

{
  Packet_Web_Notify_Message_To_Guild local_80 [2];
  ushort local_7e;
  uint local_76;
  undefined1 local_72;
  undefined1 auStack_71 [109];
  
  Packet_Web_Notify_Message_To_Guild::Packet_Web_Notify_Message_To_Guild(local_80);
  local_76 = param_1;
  local_72 = 2;
  if (param_2 < 0x65) {
    memcpy(auStack_71,param_3,param_2);
  }
  SendPacket(this,(char *)local_80,(uint)local_7e);
  return;
}

```

---

## SendPacket

```asm
// === 0846dc7e CGuildServerProxy::SendPacket  [0x0846dc7e-0x846dccd] ===
 846dc7e:	55                   	push   %ebp
 846dc7f:	89 e5                	mov    %esp,%ebp
 846dc81:	83 ec 28             	sub    $0x28,%esp
 846dc84:	8b 45 08             	mov    0x8(%ebp),%eax
 846dc87:	8b 40 04             	mov    0x4(%eax),%eax
 846dc8a:	85 c0                	test   %eax,%eax
 846dc8c:	74 3d                	je     846dccb <_ZN17CGuildServerProxy10SendPacketEPci+0x4d>
 846dc8e:	8b 45 08             	mov    0x8(%ebp),%eax
 846dc91:	89 04 24             	mov    %eax,(%esp)
 846dc94:	e8 57 88 29 00       	call   87064f0 <_ZNKSs5c_strEv>
 846dc99:	8b 55 08             	mov    0x8(%ebp),%edx
 846dc9c:	8b 52 04             	mov    0x4(%edx),%edx
 846dc9f:	0f b7 d2             	movzwl %dx,%edx
 846dca2:	8b 4d 08             	mov    0x8(%ebp),%ecx
 846dca5:	81 c1 1c 0e 03 00    	add    $0x30e1c,%ecx
 846dcab:	89 44 24 10          	mov    %eax,0x10(%esp)
 846dcaf:	89 54 24 0c          	mov    %edx,0xc(%esp)
 846dcb3:	8b 45 10             	mov    0x10(%ebp),%eax
 846dcb6:	89 44 24 08          	mov    %eax,0x8(%esp)
 846dcba:	8b 45 0c             	mov    0xc(%ebp),%eax
 846dcbd:	89 44 24 04          	mov    %eax,0x4(%esp)
 846dcc1:	89 0c 24             	mov    %ecx,(%esp)
 846dcc4:	e8 9f 5e 01 00       	call   8483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>
 846dcc9:	eb 01                	jmp    846dccc <_ZN17CGuildServerProxy10SendPacketEPci+0x4e>
 846dccb:	90                   	nop
 846dccc:	c9                   	leave
 846dccd:	c3                   	ret

```

```c
// CGuildServerProxy::SendPacket @ 0x846dc7e

/* CGuildServerProxy::SendPacket(char*, int) */

void __thiscall CGuildServerProxy::SendPacket(CGuildServerProxy *this,char *param_1,int param_2)

{
  char *pcVar1;
  
  if (*(int *)(this + 4) != 0) {
    pcVar1 = (char *)std::string::c_str((string *)this);
    CUdpHandler::SendToServer
              ((CUdpHandler *)(this + 0x30e1c),param_1,param_2,(ushort)*(undefined4 *)(this + 4),
               pcVar1);
  }
  return;
}

```

---

## SendPacketCallGuildAllMembers

```asm
// === 0846dd4e CGuildServerProxy::SendPacketCallGuildAllMembers  [0x0846dd4e-0x846dd89] ===
 846dd4e:	55                   	push   %ebp
 846dd4f:	89 e5                	mov    %esp,%ebp
 846dd51:	83 ec 38             	sub    $0x38,%esp
 846dd54:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 846dd57:	89 04 24             	mov    %eax,(%esp)
 846dd5a:	e8 6f 16 00 00       	call   846f3ce <_ZN37Packet_Monitor_Call_Guild_All_MembersC1Ev>
 846dd5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 846dd62:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846dd65:	8b 45 10             	mov    0x10(%ebp),%eax
 846dd68:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846dd6b:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 846dd6f:	0f b7 d0             	movzwl %ax,%edx
 846dd72:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 846dd75:	89 54 24 08          	mov    %edx,0x8(%esp)
 846dd79:	89 44 24 04          	mov    %eax,0x4(%esp)
 846dd7d:	8b 45 08             	mov    0x8(%ebp),%eax
 846dd80:	89 04 24             	mov    %eax,(%esp)
 846dd83:	e8 f6 fe ff ff       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 846dd88:	c9                   	leave
 846dd89:	c3                   	ret

```

```c
// CGuildServerProxy::SendPacketCallGuildAllMembers @ 0x846dd4e

/* CGuildServerProxy::SendPacketCallGuildAllMembers(unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::SendPacketCallGuildAllMembers(CGuildServerProxy *this,uint param_1,uint param_2)

{
  Packet_Monitor_Call_Guild_All_Members local_1e [2];
  ushort local_1c;
  uint local_14;
  uint local_10;
  
  Packet_Monitor_Call_Guild_All_Members::Packet_Monitor_Call_Guild_All_Members(local_1e);
  local_14 = param_1;
  local_10 = param_2;
  SendPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}

```

---

## SendPacketCallGuildMembers

```asm
// === 0846dd12 CGuildServerProxy::SendPacketCallGuildMembers  [0x0846dd12-0x846dd4d] ===
 846dd12:	55                   	push   %ebp
 846dd13:	89 e5                	mov    %esp,%ebp
 846dd15:	83 ec 38             	sub    $0x38,%esp
 846dd18:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 846dd1b:	89 04 24             	mov    %eax,(%esp)
 846dd1e:	e8 7d 16 00 00       	call   846f3a0 <_ZN33Packet_Monitor_Call_Guild_MembersC1Ev>
 846dd23:	8b 45 0c             	mov    0xc(%ebp),%eax
 846dd26:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846dd29:	8b 45 10             	mov    0x10(%ebp),%eax
 846dd2c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846dd2f:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 846dd33:	0f b7 d0             	movzwl %ax,%edx
 846dd36:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 846dd39:	89 54 24 08          	mov    %edx,0x8(%esp)
 846dd3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 846dd41:	8b 45 08             	mov    0x8(%ebp),%eax
 846dd44:	89 04 24             	mov    %eax,(%esp)
 846dd47:	e8 32 ff ff ff       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 846dd4c:	c9                   	leave
 846dd4d:	c3                   	ret

```

```c
// CGuildServerProxy::SendPacketCallGuildMembers @ 0x846dd12

/* CGuildServerProxy::SendPacketCallGuildMembers(unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::SendPacketCallGuildMembers(CGuildServerProxy *this,uint param_1,uint param_2)

{
  Packet_Monitor_Call_Guild_Members local_1e [2];
  ushort local_1c;
  uint local_14;
  uint local_10;
  
  Packet_Monitor_Call_Guild_Members::Packet_Monitor_Call_Guild_Members(local_1e);
  local_14 = param_1;
  local_10 = param_2;
  SendPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}

```

---

## SendPowerWarCfg

```asm
// === 0846dfce CGuildServerProxy::SendPowerWarCfg  [0x0846dfce-0x846e025] ===
 846dfce:	55                   	push   %ebp
 846dfcf:	89 e5                	mov    %esp,%ebp
 846dfd1:	83 ec 48             	sub    $0x48,%esp
 846dfd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 846dfd7:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 846dfdb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 846dfde:	89 04 24             	mov    %eax,(%esp)
 846dfe1:	e8 e4 17 00 00       	call   846f7ca <_ZN27Packet_Notice_Power_War_CFGC1Ev>
 846dfe6:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 846dfea:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 846dfee:	8b 45 10             	mov    0x10(%ebp),%eax
 846dff1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 846dff4:	8b 45 14             	mov    0x14(%ebp),%eax
 846dff7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 846dffa:	8b 45 18             	mov    0x18(%ebp),%eax
 846dffd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846e000:	8b 45 1c             	mov    0x1c(%ebp),%eax
 846e003:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846e006:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 846e00a:	0f b7 d0             	movzwl %ax,%edx
 846e00d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 846e010:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e014:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e018:	8b 45 08             	mov    0x8(%ebp),%eax
 846e01b:	89 04 24             	mov    %eax,(%esp)
 846e01e:	e8 ab fc ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846e023:	c9                   	leave
 846e024:	c3                   	ret
 846e025:	90                   	nop

```

```c
// CGuildServerProxy::SendPowerWarCfg @ 0x846dfce

/* CGuildServerProxy::SendPowerWarCfg(unsigned short, int, int, int, int) */

void __thiscall
CGuildServerProxy::SendPowerWarCfg
          (CGuildServerProxy *this,ushort param_1,int param_2,int param_3,int param_4,int param_5)

{
  Packet_Notice_Power_War_CFG local_28 [2];
  ushort local_26;
  ushort local_1e;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  Packet_Notice_Power_War_CFG::Packet_Notice_Power_War_CFG(local_28);
  local_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  local_10 = param_5;
  local_1e = param_1;
  SendTcpPacket(this,(char *)local_28,(uint)local_26);
  return;
}

```

---

## SendPowerWarEnd

```asm
// === 0846dece CGuildServerProxy::SendPowerWarEnd  [0x0846dece-0x846df1b] ===
 846dece:	55                   	push   %ebp
 846decf:	89 e5                	mov    %esp,%ebp
 846ded1:	83 ec 28             	sub    $0x28,%esp
 846ded4:	a1 10 f7 41 09       	mov    0x941f710,%eax
 846ded9:	8b 55 0c             	mov    0xc(%ebp),%edx
 846dedc:	89 54 24 04          	mov    %edx,0x4(%esp)
 846dee0:	89 04 24             	mov    %eax,(%esp)
 846dee3:	e8 5e b4 c9 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 846dee8:	83 f0 01             	xor    $0x1,%eax
 846deeb:	84 c0                	test   %al,%al
 846deed:	75 2a                	jne    846df19 <_ZN17CGuildServerProxy15SendPowerWarEndEj+0x4b>
 846deef:	8d 45 ee             	lea    -0x12(%ebp),%eax
 846def2:	89 04 24             	mov    %eax,(%esp)
 846def5:	e8 60 19 00 00       	call   846f85a <_ZN22Packet_GM_PowerWar_EndC1Ev>
 846defa:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
 846defe:	0f b7 d0             	movzwl %ax,%edx
 846df01:	8d 45 ee             	lea    -0x12(%ebp),%eax
 846df04:	89 54 24 08          	mov    %edx,0x8(%esp)
 846df08:	89 44 24 04          	mov    %eax,0x4(%esp)
 846df0c:	8b 45 08             	mov    0x8(%ebp),%eax
 846df0f:	89 04 24             	mov    %eax,(%esp)
 846df12:	e8 67 fd ff ff       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 846df17:	eb 01                	jmp    846df1a <_ZN17CGuildServerProxy15SendPowerWarEndEj+0x4c>
 846df19:	90                   	nop
 846df1a:	c9                   	leave
 846df1b:	c3                   	ret

```

```c
// CGuildServerProxy::SendPowerWarEnd @ 0x846dece

/* CGuildServerProxy::SendPowerWarEnd(unsigned int) */

void __thiscall CGuildServerProxy::SendPowerWarEnd(CGuildServerProxy *this,uint param_1)

{
  char cVar1;
  Packet_GM_PowerWar_End local_16 [2];
  ushort local_14;
  
  cVar1 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,param_1);
  if (cVar1 == '\x01') {
    Packet_GM_PowerWar_End::Packet_GM_PowerWar_End(local_16);
    SendPacket(this,(char *)local_16,(uint)local_14);
  }
  return;
}

```

---

## SendPowerWarPoint

```asm
// === 0846e460 CGuildServerProxy::SendPowerWarPoint  [0x0846e460-0x846e4b5] ===
 846e460:	55                   	push   %ebp
 846e461:	89 e5                	mov    %esp,%ebp
 846e463:	83 ec 18             	sub    $0x18,%esp
 846e466:	a1 30 f7 41 09       	mov    0x941f730,%eax
 846e46b:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 846e472:	00 
 846e473:	89 04 24             	mov    %eax,(%esp)
 846e476:	e8 1d 75 ca ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 846e47b:	8b 10                	mov    (%eax),%edx
 846e47d:	83 c2 34             	add    $0x34,%edx
 846e480:	8b 12                	mov    (%edx),%edx
 846e482:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 846e489:	00 
 846e48a:	89 04 24             	mov    %eax,(%esp)
 846e48d:	ff d2                	call   *%edx
 846e48f:	84 c0                	test   %al,%al
 846e491:	74 20                	je     846e4b3 <_ZN17CGuildServerProxy17SendPowerWarPointER35Packet_Guild_Change_Power_War_Point+0x53>
 846e493:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e496:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 846e49a:	0f b7 d0             	movzwl %ax,%edx
 846e49d:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e4a0:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e4a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e4a8:	8b 45 08             	mov    0x8(%ebp),%eax
 846e4ab:	89 04 24             	mov    %eax,(%esp)
 846e4ae:	e8 1b f8 ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846e4b3:	c9                   	leave
 846e4b4:	c3                   	ret
 846e4b5:	90                   	nop

```

```c
// CGuildServerProxy::SendPowerWarPoint @ 0x846e460

/* CGuildServerProxy::SendPowerWarPoint(Packet_Guild_Change_Power_War_Point&) */

void __thiscall
CGuildServerProxy::SendPowerWarPoint
          (CGuildServerProxy *this,Packet_Guild_Change_Power_War_Point *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x1e);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 != '\0') {
    SendTcpPacket(this,(char *)param_1,(uint)*(ushort *)(param_1 + 2));
  }
  return;
}

```

---

## SendPowerWarProcessInfo

```asm
// === 0846df1c CGuildServerProxy::SendPowerWarProcessInfo  [0x0846df1c-0x846df51] ===
 846df1c:	55                   	push   %ebp
 846df1d:	89 e5                	mov    %esp,%ebp
 846df1f:	83 ec 28             	sub    $0x28,%esp
 846df22:	8d 45 ea             	lea    -0x16(%ebp),%eax
 846df25:	89 04 24             	mov    %eax,(%esp)
 846df28:	e8 57 17 00 00       	call   846f684 <_ZN35Packet_Guild_Power_War_Process_InfoC1Ev>
 846df2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 846df30:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846df33:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
 846df37:	0f b7 d0             	movzwl %ax,%edx
 846df3a:	8d 45 ea             	lea    -0x16(%ebp),%eax
 846df3d:	89 54 24 08          	mov    %edx,0x8(%esp)
 846df41:	89 44 24 04          	mov    %eax,0x4(%esp)
 846df45:	8b 45 08             	mov    0x8(%ebp),%eax
 846df48:	89 04 24             	mov    %eax,(%esp)
 846df4b:	e8 2e fd ff ff       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 846df50:	c9                   	leave
 846df51:	c3                   	ret

```

```c
// CGuildServerProxy::SendPowerWarProcessInfo @ 0x846df1c

/* CGuildServerProxy::SendPowerWarProcessInfo(unsigned int) */

void __thiscall CGuildServerProxy::SendPowerWarProcessInfo(CGuildServerProxy *this,uint param_1)

{
  Packet_Guild_Power_War_Process_Info local_1a [2];
  ushort local_18;
  uint local_10;
  
  Packet_Guild_Power_War_Process_Info::Packet_Guild_Power_War_Process_Info(local_1a);
  local_10 = param_1;
  SendPacket(this,(char *)local_1a,(uint)local_18);
  return;
}

```

---

## SendPowerWarStart

```asm
// === 0846de80 CGuildServerProxy::SendPowerWarStart  [0x0846de80-0x846decd] ===
 846de80:	55                   	push   %ebp
 846de81:	89 e5                	mov    %esp,%ebp
 846de83:	83 ec 28             	sub    $0x28,%esp
 846de86:	a1 10 f7 41 09       	mov    0x941f710,%eax
 846de8b:	8b 55 0c             	mov    0xc(%ebp),%edx
 846de8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 846de92:	89 04 24             	mov    %eax,(%esp)
 846de95:	e8 ac b4 c9 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 846de9a:	83 f0 01             	xor    $0x1,%eax
 846de9d:	84 c0                	test   %al,%al
 846de9f:	75 2a                	jne    846decb <_ZN17CGuildServerProxy17SendPowerWarStartEj+0x4b>
 846dea1:	8d 45 ee             	lea    -0x12(%ebp),%eax
 846dea4:	89 04 24             	mov    %eax,(%esp)
 846dea7:	e8 8a 19 00 00       	call   846f836 <_ZN24Packet_GM_PowerWar_StartC1Ev>
 846deac:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
 846deb0:	0f b7 d0             	movzwl %ax,%edx
 846deb3:	8d 45 ee             	lea    -0x12(%ebp),%eax
 846deb6:	89 54 24 08          	mov    %edx,0x8(%esp)
 846deba:	89 44 24 04          	mov    %eax,0x4(%esp)
 846debe:	8b 45 08             	mov    0x8(%ebp),%eax
 846dec1:	89 04 24             	mov    %eax,(%esp)
 846dec4:	e8 b5 fd ff ff       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 846dec9:	eb 01                	jmp    846decc <_ZN17CGuildServerProxy17SendPowerWarStartEj+0x4c>
 846decb:	90                   	nop
 846decc:	c9                   	leave
 846decd:	c3                   	ret

```

```c
// CGuildServerProxy::SendPowerWarStart @ 0x846de80

/* CGuildServerProxy::SendPowerWarStart(unsigned int) */

void __thiscall CGuildServerProxy::SendPowerWarStart(CGuildServerProxy *this,uint param_1)

{
  char cVar1;
  Packet_GM_PowerWar_Start local_16 [2];
  ushort local_14;
  
  cVar1 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,param_1);
  if (cVar1 == '\x01') {
    Packet_GM_PowerWar_Start::Packet_GM_PowerWar_Start(local_16);
    SendPacket(this,(char *)local_16,(uint)local_14);
  }
  return;
}

```

---

## SendRefreshGuildInfo

```asm
// === 0846f16c CGuildServerProxy::SendRefreshGuildInfo  [0x0846f16c-0x846f1a7] ===
 846f16c:	55                   	push   %ebp
 846f16d:	89 e5                	mov    %esp,%ebp
 846f16f:	83 ec 38             	sub    $0x38,%esp
 846f172:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 846f175:	89 04 24             	mov    %eax,(%esp)
 846f178:	e8 eb 09 00 00       	call   846fb68 <_ZN25Packet_Refresh_Guild_InfoC1Ev>
 846f17d:	8b 45 0c             	mov    0xc(%ebp),%eax
 846f180:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846f183:	8b 45 10             	mov    0x10(%ebp),%eax
 846f186:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846f189:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 846f18d:	0f b7 d0             	movzwl %ax,%edx
 846f190:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 846f193:	89 54 24 08          	mov    %edx,0x8(%esp)
 846f197:	89 44 24 04          	mov    %eax,0x4(%esp)
 846f19b:	8b 45 08             	mov    0x8(%ebp),%eax
 846f19e:	89 04 24             	mov    %eax,(%esp)
 846f1a1:	e8 28 eb ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846f1a6:	c9                   	leave
 846f1a7:	c3                   	ret

```

```c
// CGuildServerProxy::SendRefreshGuildInfo @ 0x846f16c

/* CGuildServerProxy::SendRefreshGuildInfo(unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::SendRefreshGuildInfo(CGuildServerProxy *this,uint param_1,uint param_2)

{
  Packet_Refresh_Guild_Info local_1e [2];
  ushort local_1c;
  uint local_14;
  uint local_10;
  
  Packet_Refresh_Guild_Info::Packet_Refresh_Guild_Info(local_1e);
  local_14 = param_1;
  local_10 = param_2;
  SendTcpPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}

```

---

## SendReplyGuildInvite

```asm
// === 0846e14c CGuildServerProxy::SendReplyGuildInvite  [0x0846e14c-0x846e18f] ===
 846e14c:	55                   	push   %ebp
 846e14d:	89 e5                	mov    %esp,%ebp
 846e14f:	83 ec 38             	sub    $0x38,%esp
 846e152:	8b 45 10             	mov    0x10(%ebp),%eax
 846e155:	88 45 e4             	mov    %al,-0x1c(%ebp)
 846e158:	8d 45 e9             	lea    -0x17(%ebp),%eax
 846e15b:	89 04 24             	mov    %eax,(%esp)
 846e15e:	e8 9f 17 00 00       	call   846f902 <_ZN44Packet_Guild_Reply_Guild_Invite_From_InvitedC1Ev>
 846e163:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e166:	89 45 f3             	mov    %eax,-0xd(%ebp)
 846e169:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 846e16d:	88 45 f7             	mov    %al,-0x9(%ebp)
 846e170:	0f b7 45 eb          	movzwl -0x15(%ebp),%eax
 846e174:	0f b7 d0             	movzwl %ax,%edx
 846e177:	8d 45 e9             	lea    -0x17(%ebp),%eax
 846e17a:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e17e:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e182:	8b 45 08             	mov    0x8(%ebp),%eax
 846e185:	89 04 24             	mov    %eax,(%esp)
 846e188:	e8 f1 fa ff ff       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 846e18d:	c9                   	leave
 846e18e:	c3                   	ret
 846e18f:	90                   	nop

```

```c
// CGuildServerProxy::SendReplyGuildInvite @ 0x846e14c

/* CGuildServerProxy::SendReplyGuildInvite(unsigned int, unsigned char) */

void __thiscall
CGuildServerProxy::SendReplyGuildInvite(CGuildServerProxy *this,uint param_1,uchar param_2)

{
  Packet_Guild_Reply_Guild_Invite_From_Invited local_1b [2];
  ushort local_19;
  uint local_11;
  uchar local_d;
  
  Packet_Guild_Reply_Guild_Invite_From_Invited::Packet_Guild_Reply_Guild_Invite_From_Invited
            (local_1b);
  local_11 = param_1;
  local_d = param_2;
  SendPacket(this,(char *)local_1b,(uint)local_19);
  return;
}

```

---

## SendReqestPowerWarStartInfo

```asm
// === 0846e420 CGuildServerProxy::SendReqestPowerWarStartInfo  [0x0846e420-0x846e45f] ===
 846e420:	55                   	push   %ebp
 846e421:	89 e5                	mov    %esp,%ebp
 846e423:	83 ec 28             	sub    $0x28,%esp
 846e426:	8d 45 ea             	lea    -0x16(%ebp),%eax
 846e429:	89 04 24             	mov    %eax,(%esp)
 846e42c:	e8 2d 13 00 00       	call   846f75e <_ZN35Packet_Request_Power_War_Start_InfoC1Ev>
 846e431:	e8 4b dd c5 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 846e436:	89 04 24             	mov    %eax,(%esp)
 846e439:	e8 8c c6 cd ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 846e43e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846e441:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
 846e445:	0f b7 d0             	movzwl %ax,%edx
 846e448:	8d 45 ea             	lea    -0x16(%ebp),%eax
 846e44b:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e44f:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e453:	8b 45 08             	mov    0x8(%ebp),%eax
 846e456:	89 04 24             	mov    %eax,(%esp)
 846e459:	e8 70 f8 ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846e45e:	c9                   	leave
 846e45f:	c3                   	ret

```

```c
// CGuildServerProxy::SendReqestPowerWarStartInfo @ 0x846e420

/* CGuildServerProxy::SendReqestPowerWarStartInfo() */

void __thiscall CGuildServerProxy::SendReqestPowerWarStartInfo(CGuildServerProxy *this)

{
  CEnvironment *this_00;
  Packet_Request_Power_War_Start_Info local_1a [2];
  ushort local_18;
  undefined4 local_10;
  
  Packet_Request_Power_War_Start_Info::Packet_Request_Power_War_Start_Info(local_1a);
  this_00 = (CEnvironment *)G_CEnvironment();
  local_10 = CEnvironment::get_channel_no(this_00);
  SendTcpPacket(this,(char *)local_1a,(uint)local_18);
  return;
}

```

---

## SendRequestGuildSecede

```asm
// === 0846e190 CGuildServerProxy::SendRequestGuildSecede  [0x0846e190-0x846e1f3] ===
 846e190:	55                   	push   %ebp
 846e191:	89 e5                	mov    %esp,%ebp
 846e193:	83 ec 58             	sub    $0x58,%esp
 846e196:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 846e199:	89 04 24             	mov    %eax,(%esp)
 846e19c:	e8 85 17 00 00       	call   846f926 <_ZN33Packet_Guild_Request_Guild_SecedeC1Ev>
 846e1a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e1a4:	89 45 ce             	mov    %eax,-0x32(%ebp)
 846e1a7:	8b 45 10             	mov    0x10(%ebp),%eax
 846e1aa:	89 45 d2             	mov    %eax,-0x2e(%ebp)
 846e1ad:	8b 45 14             	mov    0x14(%ebp),%eax
 846e1b0:	89 45 d6             	mov    %eax,-0x2a(%ebp)
 846e1b3:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 846e1b7:	7e 1c                	jle    846e1d5 <_ZN17CGuildServerProxy22SendRequestGuildSecedeEjjiPc+0x45>
 846e1b9:	8b 45 14             	mov    0x14(%ebp),%eax
 846e1bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 846e1c0:	8b 45 18             	mov    0x18(%ebp),%eax
 846e1c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e1c7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 846e1ca:	83 c0 16             	add    $0x16,%eax
 846e1cd:	89 04 24             	mov    %eax,(%esp)
 846e1d0:	e8 cb f6 c0 ff       	call   807d8a0 <memcpy@plt>
 846e1d5:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 846e1d9:	0f b7 d0             	movzwl %ax,%edx
 846e1dc:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 846e1df:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e1e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e1e7:	8b 45 08             	mov    0x8(%ebp),%eax
 846e1ea:	89 04 24             	mov    %eax,(%esp)
 846e1ed:	e8 8c fa ff ff       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 846e1f2:	c9                   	leave
 846e1f3:	c3                   	ret

```

```c
// CGuildServerProxy::SendRequestGuildSecede @ 0x846e190

/* CGuildServerProxy::SendRequestGuildSecede(unsigned int, unsigned int, int, char*) */

void __thiscall
CGuildServerProxy::SendRequestGuildSecede
          (CGuildServerProxy *this,uint param_1,uint param_2,int param_3,char *param_4)

{
  Packet_Guild_Request_Guild_Secede local_40 [2];
  ushort local_3e;
  uint local_36;
  uint local_32;
  int local_2e;
  undefined1 auStack_2a [38];
  
  Packet_Guild_Request_Guild_Secede::Packet_Guild_Request_Guild_Secede(local_40);
  local_36 = param_1;
  local_32 = param_2;
  local_2e = param_3;
  if (0 < param_3) {
    memcpy(auStack_2a,param_4,param_3);
  }
  SendPacket(this,(char *)local_40,(uint)local_3e);
  return;
}

```

---

## SendSecedePower

```asm
// === 0846e500 CGuildServerProxy::SendSecedePower  [0x0846e500-0x846e53b] ===
 846e500:	55                   	push   %ebp
 846e501:	89 e5                	mov    %esp,%ebp
 846e503:	83 ec 38             	sub    $0x38,%esp
 846e506:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 846e509:	89 04 24             	mov    %eax,(%esp)
 846e50c:	e8 01 13 00 00       	call   846f812 <_ZN27Packet_Request_Secede_PowerC1Ev>
 846e511:	8b 45 0c             	mov    0xc(%ebp),%eax
 846e514:	89 45 ef             	mov    %eax,-0x11(%ebp)
 846e517:	8b 45 10             	mov    0x10(%ebp),%eax
 846e51a:	89 45 f3             	mov    %eax,-0xd(%ebp)
 846e51d:	0f b7 45 e7          	movzwl -0x19(%ebp),%eax
 846e521:	0f b7 d0             	movzwl %ax,%edx
 846e524:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 846e527:	89 54 24 08          	mov    %edx,0x8(%esp)
 846e52b:	89 44 24 04          	mov    %eax,0x4(%esp)
 846e52f:	8b 45 08             	mov    0x8(%ebp),%eax
 846e532:	89 04 24             	mov    %eax,(%esp)
 846e535:	e8 94 f7 ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846e53a:	c9                   	leave
 846e53b:	c3                   	ret

```

```c
// CGuildServerProxy::SendSecedePower @ 0x846e500

/* CGuildServerProxy::SendSecedePower(unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::SendSecedePower(CGuildServerProxy *this,uint param_1,uint param_2)

{
  Packet_Request_Secede_Power local_1f [2];
  ushort local_1d;
  uint local_15;
  uint local_11;
  
  Packet_Request_Secede_Power::Packet_Request_Secede_Power(local_1f);
  local_15 = param_1;
  local_11 = param_2;
  SendTcpPacket(this,(char *)local_1f,(uint)local_1d);
  return;
}

```

---

## SendTcpPacket

```asm
// === 0846dcce CGuildServerProxy::SendTcpPacket  [0x0846dcce-0x846dd11] ===
 846dcce:	55                   	push   %ebp
 846dccf:	89 e5                	mov    %esp,%ebp
 846dcd1:	83 ec 18             	sub    $0x18,%esp
 846dcd4:	8b 45 08             	mov    0x8(%ebp),%eax
 846dcd7:	89 04 24             	mov    %eax,(%esp)
 846dcda:	e8 af 1f 00 00       	call   846fc8e <_ZN17CGuildServerProxy13GetTcpHandlerEv>
 846dcdf:	89 04 24             	mov    %eax,(%esp)
 846dce2:	e8 67 02 e9 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 846dce7:	83 f8 ff             	cmp    $0xffffffff,%eax
 846dcea:	0f 94 c0             	sete   %al
 846dced:	84 c0                	test   %al,%al
 846dcef:	75 1e                	jne    846dd0f <_ZN17CGuildServerProxy13SendTcpPacketEPci+0x41>
 846dcf1:	8b 45 08             	mov    0x8(%ebp),%eax
 846dcf4:	8d 50 24             	lea    0x24(%eax),%edx
 846dcf7:	8b 45 10             	mov    0x10(%ebp),%eax
 846dcfa:	89 44 24 08          	mov    %eax,0x8(%esp)
 846dcfe:	8b 45 0c             	mov    0xc(%ebp),%eax
 846dd01:	89 44 24 04          	mov    %eax,0x4(%esp)
 846dd05:	89 14 24             	mov    %edx,(%esp)
 846dd08:	e8 bf 02 e9 ff       	call   82fdfcc <_ZN8CNetworkILi100000ELi100000EE11send_packetEPci>
 846dd0d:	eb 01                	jmp    846dd10 <_ZN17CGuildServerProxy13SendTcpPacketEPci+0x42>
 846dd0f:	90                   	nop
 846dd10:	c9                   	leave
 846dd11:	c3                   	ret

```

```c
// CGuildServerProxy::SendTcpPacket @ 0x846dcce

/* CGuildServerProxy::SendTcpPacket(char*, int) */

void __thiscall CGuildServerProxy::SendTcpPacket(CGuildServerProxy *this,char *param_1,int param_2)

{
  CNetwork<100000,100000> *this_00;
  int iVar1;
  
  this_00 = (CNetwork<100000,100000> *)GetTcpHandler(this);
  iVar1 = CNetwork<100000,100000>::get_socket(this_00);
  if (iVar1 != -1) {
    CNetwork<100000,100000>::send_packet((CNetwork<100000,100000> *)(this + 0x24),param_1,param_2);
  }
  return;
}

```

---

## SendUpgradeGuildAgit

```asm
// === 0846edfc CGuildServerProxy::SendUpgradeGuildAgit  [0x0846edfc-0x846ee43] ===
 846edfc:	55                   	push   %ebp
 846edfd:	89 e5                	mov    %esp,%ebp
 846edff:	83 ec 38             	sub    $0x38,%esp
 846ee02:	8d 45 de             	lea    -0x22(%ebp),%eax
 846ee05:	89 04 24             	mov    %eax,(%esp)
 846ee08:	e8 a5 08 00 00       	call   846f6b2 <_ZN31Packet_Guild_Upgrade_Guild_AgitC1Ev>
 846ee0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 846ee10:	89 45 e8             	mov    %eax,-0x18(%ebp)
 846ee13:	8b 45 10             	mov    0x10(%ebp),%eax
 846ee16:	89 45 ec             	mov    %eax,-0x14(%ebp)
 846ee19:	8b 45 14             	mov    0x14(%ebp),%eax
 846ee1c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846ee1f:	8b 45 18             	mov    0x18(%ebp),%eax
 846ee22:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846ee25:	0f b7 45 e0          	movzwl -0x20(%ebp),%eax
 846ee29:	0f b7 d0             	movzwl %ax,%edx
 846ee2c:	8d 45 de             	lea    -0x22(%ebp),%eax
 846ee2f:	89 54 24 08          	mov    %edx,0x8(%esp)
 846ee33:	89 44 24 04          	mov    %eax,0x4(%esp)
 846ee37:	8b 45 08             	mov    0x8(%ebp),%eax
 846ee3a:	89 04 24             	mov    %eax,(%esp)
 846ee3d:	e8 8c ee ff ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 846ee42:	c9                   	leave
 846ee43:	c3                   	ret

```

```c
// CGuildServerProxy::SendUpgradeGuildAgit @ 0x846edfc

/* CGuildServerProxy::SendUpgradeGuildAgit(unsigned int, unsigned int, unsigned int, unsigned int)
    */

void __thiscall
CGuildServerProxy::SendUpgradeGuildAgit
          (CGuildServerProxy *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  Packet_Guild_Upgrade_Guild_Agit local_26 [2];
  ushort local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  Packet_Guild_Upgrade_Guild_Agit::Packet_Guild_Upgrade_Guild_Agit(local_26);
  local_1c = param_1;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  SendTcpPacket(this,(char *)local_26,(uint)local_24);
  return;
}

```

