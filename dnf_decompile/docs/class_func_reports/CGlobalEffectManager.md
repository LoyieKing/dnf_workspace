# CGlobalEffectManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## beginReservedEffect

```asm
// === 084b7c50 CGlobalEffectManager::beginReservedEffect  [0x084b7c50-0x84b7d2b] ===
 84b7c50:	55                   	push   %ebp
 84b7c51:	89 e5                	mov    %esp,%ebp
 84b7c53:	83 ec 28             	sub    $0x28,%esp
 84b7c56:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7c59:	83 c0 0c             	add    $0xc,%eax
 84b7c5c:	89 04 24             	mov    %eax,(%esp)
 84b7c5f:	e8 a8 05 00 00       	call   84b820c <_ZNKSt6vectorI13CGlobalEffectSaIS0_EE5emptyEv>
 84b7c64:	84 c0                	test   %al,%al
 84b7c66:	0f 85 bc 00 00 00    	jne    84b7d28 <_ZN20CGlobalEffectManager19beginReservedEffectEj+0xd8>
 84b7c6c:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7c6f:	8d 50 0c             	lea    0xc(%eax),%edx
 84b7c72:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b7c75:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7c79:	89 04 24             	mov    %eax,(%esp)
 84b7c7c:	e8 0f 04 00 00       	call   84b8090 <_ZNSt6vectorI13CGlobalEffectSaIS0_EE5beginEv>
 84b7c81:	83 ec 04             	sub    $0x4,%esp
 84b7c84:	eb 63                	jmp    84b7ce9 <_ZN20CGlobalEffectManager19beginReservedEffectEj+0x99>
 84b7c86:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b7c89:	89 04 24             	mov    %eax,(%esp)
 84b7c8c:	e8 75 04 00 00       	call   84b8106 <_ZNK9__gnu_cxx17__normal_iteratorIP13CGlobalEffectSt6vectorIS1_SaIS1_EEEptEv>
 84b7c91:	89 04 24             	mov    %eax,(%esp)
 84b7c94:	e8 41 03 00 00       	call   84b7fda <_ZNK13CGlobalEffect7getTypeEv>
 84b7c99:	3b 45 0c             	cmp    0xc(%ebp),%eax
 84b7c9c:	0f 94 c0             	sete   %al
 84b7c9f:	84 c0                	test   %al,%al
 84b7ca1:	74 3b                	je     84b7cde <_ZN20CGlobalEffectManager19beginReservedEffectEj+0x8e>
 84b7ca3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b7ca6:	89 04 24             	mov    %eax,(%esp)
 84b7ca9:	e8 a2 05 00 00       	call   84b8250 <_ZNK9__gnu_cxx17__normal_iteratorIP13CGlobalEffectSt6vectorIS1_SaIS1_EEEdeEv>
 84b7cae:	8b 55 08             	mov    0x8(%ebp),%edx
 84b7cb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b7cb5:	89 14 24             	mov    %edx,(%esp)
 84b7cb8:	e8 9d 05 00 00       	call   84b825a <_ZNSt6vectorI13CGlobalEffectSaIS0_EE9push_backERKS0_>
 84b7cbd:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7cc0:	8d 48 0c             	lea    0xc(%eax),%ecx
 84b7cc3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b7cc6:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84b7cc9:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b7ccd:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84b7cd1:	89 04 24             	mov    %eax,(%esp)
 84b7cd4:	e8 37 04 00 00       	call   84b8110 <_ZNSt6vectorI13CGlobalEffectSaIS0_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS0_S2_EE>
 84b7cd9:	83 ec 04             	sub    $0x4,%esp
 84b7cdc:	eb 0b                	jmp    84b7ce9 <_ZN20CGlobalEffectManager19beginReservedEffectEj+0x99>
 84b7cde:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b7ce1:	89 04 24             	mov    %eax,(%esp)
 84b7ce4:	e8 0d 05 00 00       	call   84b81f6 <_ZN9__gnu_cxx17__normal_iteratorIP13CGlobalEffectSt6vectorIS1_SaIS1_EEEppEv>
 84b7ce9:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7cec:	8d 50 0c             	lea    0xc(%eax),%edx
 84b7cef:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b7cf2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7cf6:	89 04 24             	mov    %eax,(%esp)
 84b7cf9:	e8 b6 03 00 00       	call   84b80b4 <_ZNSt6vectorI13CGlobalEffectSaIS0_EE3endEv>
 84b7cfe:	83 ec 04             	sub    $0x4,%esp
 84b7d01:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b7d04:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b7d08:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b7d0b:	89 04 24             	mov    %eax,(%esp)
 84b7d0e:	e8 c7 03 00 00       	call   84b80da <_ZN9__gnu_cxxneIP13CGlobalEffectSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 84b7d13:	84 c0                	test   %al,%al
 84b7d15:	0f 85 6b ff ff ff    	jne    84b7c86 <_ZN20CGlobalEffectManager19beginReservedEffectEj+0x36>
 84b7d1b:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7d1e:	89 04 24             	mov    %eax,(%esp)
 84b7d21:	e8 22 01 00 00       	call   84b7e48 <_ZNK20CGlobalEffectManager22notifyGlobalEffectInfoEv>
 84b7d26:	eb 01                	jmp    84b7d29 <_ZN20CGlobalEffectManager19beginReservedEffectEj+0xd9>
 84b7d28:	90                   	nop
 84b7d29:	c9                   	leave
 84b7d2a:	c3                   	ret
 84b7d2b:	90                   	nop

```

```c
// CGlobalEffectManager::beginReservedEffect @ 0x84b7c50

/* CGlobalEffectManager::beginReservedEffect(unsigned int) */

void __thiscall CGlobalEffectManager::beginReservedEffect(CGlobalEffectManager *this,uint param_1)

{
  char cVar1;
  bool bVar2;
  CGlobalEffect *pCVar3;
  uint uVar4;
  undefined4 local_18;
  __normal_iterator local_14 [4];
  undefined1 local_10 [12];
  
  cVar1 = std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::empty();
  if (cVar1 == '\0') {
    std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::begin();
    while( true ) {
      std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::end();
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,local_14);
      if (!bVar2) break;
      pCVar3 = (CGlobalEffect *)
               __gnu_cxx::
               __normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
               ::operator->((__normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
                             *)&local_18);
      uVar4 = CGlobalEffect::getType(pCVar3);
      if (uVar4 == param_1) {
        pCVar3 = (CGlobalEffect *)
                 __gnu_cxx::
                 __normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
                 ::operator*((__normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
                              *)&local_18);
        std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::push_back
                  ((vector<CGlobalEffect,std::allocator<CGlobalEffect>> *)this,pCVar3);
        std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::erase
                  (local_10,this + 0xc,local_18);
      }
      else {
        __gnu_cxx::
        __normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>::
        operator++((__normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
                    *)&local_18);
      }
    }
    notifyGlobalEffectInfo(this);
  }
  return;
}

```

---

## checkTimeout

```asm
// === 084b7a94 CGlobalEffectManager::checkTimeout  [0x084b7a94-0x84b7c4f] ===
 84b7a94:	55                   	push   %ebp
 84b7a95:	89 e5                	mov    %esp,%ebp
 84b7a97:	56                   	push   %esi
 84b7a98:	53                   	push   %ebx
 84b7a99:	83 ec 40             	sub    $0x40,%esp
 84b7a9c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b7a9f:	89 04 24             	mov    %eax,(%esp)
 84b7aa2:	e8 a5 62 0d 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84b7aa7:	c7 44 24 08 b5 00 00 	movl   $0xb5,0x8(%esp)
 84b7aae:	00 
 84b7aaf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b7ab6:	00 
 84b7ab7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b7aba:	89 04 24             	mov    %eax,(%esp)
 84b7abd:	e8 3a 3e c1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84b7ac2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b7ac9:	00 
 84b7aca:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b7acd:	89 04 24             	mov    %eax,(%esp)
 84b7ad0:	e8 4b 3e c1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84b7ad5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b7ad8:	89 04 24             	mov    %eax,(%esp)
 84b7adb:	e8 6c 90 c5 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 84b7ae0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84b7ae3:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84b7aea:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 84b7aee:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b7af5:	00 
 84b7af6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b7af9:	89 04 24             	mov    %eax,(%esp)
 84b7afc:	e8 3b 3e c1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84b7b01:	8b 55 08             	mov    0x8(%ebp),%edx
 84b7b04:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84b7b07:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7b0b:	89 04 24             	mov    %eax,(%esp)
 84b7b0e:	e8 7d 05 00 00       	call   84b8090 <_ZNSt6vectorI13CGlobalEffectSaIS0_EE5beginEv>
 84b7b13:	83 ec 04             	sub    $0x4,%esp
 84b7b16:	e9 93 00 00 00       	jmp    84b7bae <_ZN20CGlobalEffectManager12checkTimeoutEjj+0x11a>
 84b7b1b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84b7b1e:	89 04 24             	mov    %eax,(%esp)
 84b7b21:	e8 e0 05 00 00       	call   84b8106 <_ZNK9__gnu_cxx17__normal_iteratorIP13CGlobalEffectSt6vectorIS1_SaIS1_EEEptEv>
 84b7b26:	89 04 24             	mov    %eax,(%esp)
 84b7b29:	e8 ac 04 00 00       	call   84b7fda <_ZNK13CGlobalEffect7getTypeEv>
 84b7b2e:	3b 45 0c             	cmp    0xc(%ebp),%eax
 84b7b31:	75 25                	jne    84b7b58 <_ZN20CGlobalEffectManager12checkTimeoutEjj+0xc4>
 84b7b33:	8b 5d 10             	mov    0x10(%ebp),%ebx
 84b7b36:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84b7b39:	89 04 24             	mov    %eax,(%esp)
 84b7b3c:	e8 c5 05 00 00       	call   84b8106 <_ZNK9__gnu_cxx17__normal_iteratorIP13CGlobalEffectSt6vectorIS1_SaIS1_EEEptEv>
 84b7b41:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84b7b45:	89 04 24             	mov    %eax,(%esp)
 84b7b48:	e8 ab 04 00 00       	call   84b7ff8 <_ZNK13CGlobalEffect9isTimeoutEl>
 84b7b4d:	84 c0                	test   %al,%al
 84b7b4f:	74 07                	je     84b7b58 <_ZN20CGlobalEffectManager12checkTimeoutEjj+0xc4>
 84b7b51:	b8 01 00 00 00       	mov    $0x1,%eax
 84b7b56:	eb 05                	jmp    84b7b5d <_ZN20CGlobalEffectManager12checkTimeoutEjj+0xc9>
 84b7b58:	b8 00 00 00 00       	mov    $0x0,%eax
 84b7b5d:	84 c0                	test   %al,%al
 84b7b5f:	74 42                	je     84b7ba3 <_ZN20CGlobalEffectManager12checkTimeoutEjj+0x10f>
 84b7b61:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84b7b64:	89 04 24             	mov    %eax,(%esp)
 84b7b67:	e8 9a 05 00 00       	call   84b8106 <_ZNK9__gnu_cxx17__normal_iteratorIP13CGlobalEffectSt6vectorIS1_SaIS1_EEEptEv>
 84b7b6c:	8d 55 e0             	lea    -0x20(%ebp),%edx
 84b7b6f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7b73:	89 04 24             	mov    %eax,(%esp)
 84b7b76:	e8 05 fd ff ff       	call   84b7880 <_ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard>
 84b7b7b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84b7b7f:	8b 55 08             	mov    0x8(%ebp),%edx
 84b7b82:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84b7b85:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 84b7b88:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84b7b8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7b90:	89 04 24             	mov    %eax,(%esp)
 84b7b93:	e8 78 05 00 00       	call   84b8110 <_ZNSt6vectorI13CGlobalEffectSaIS0_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS0_S2_EE>
 84b7b98:	83 ec 04             	sub    $0x4,%esp
 84b7b9b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84b7b9e:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84b7ba1:	eb 0b                	jmp    84b7bae <_ZN20CGlobalEffectManager12checkTimeoutEjj+0x11a>
 84b7ba3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84b7ba6:	89 04 24             	mov    %eax,(%esp)
 84b7ba9:	e8 48 06 00 00       	call   84b81f6 <_ZN9__gnu_cxx17__normal_iteratorIP13CGlobalEffectSt6vectorIS1_SaIS1_EEEppEv>
 84b7bae:	8b 55 08             	mov    0x8(%ebp),%edx
 84b7bb1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b7bb4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7bb8:	89 04 24             	mov    %eax,(%esp)
 84b7bbb:	e8 f4 04 00 00       	call   84b80b4 <_ZNSt6vectorI13CGlobalEffectSaIS0_EE3endEv>
 84b7bc0:	83 ec 04             	sub    $0x4,%esp
 84b7bc3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b7bc6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b7bca:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84b7bcd:	89 04 24             	mov    %eax,(%esp)
 84b7bd0:	e8 05 05 00 00       	call   84b80da <_ZN9__gnu_cxxneIP13CGlobalEffectSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 84b7bd5:	84 c0                	test   %al,%al
 84b7bd7:	0f 85 3e ff ff ff    	jne    84b7b1b <_ZN20CGlobalEffectManager12checkTimeoutEjj+0x87>
 84b7bdd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84b7be0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b7be4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84b7be7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b7beb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b7bee:	89 04 24             	mov    %eax,(%esp)
 84b7bf1:	e8 54 04 00 00       	call   84b804a <_ZN18InterfacePacketBuf7put_intERii>
 84b7bf6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b7bfd:	00 
 84b7bfe:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b7c01:	89 04 24             	mov    %eax,(%esp)
 84b7c04:	e8 4f 3d c1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84b7c09:	e8 99 27 c2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84b7c0e:	8d 55 e0             	lea    -0x20(%ebp),%edx
 84b7c11:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7c15:	89 04 24             	mov    %eax,(%esp)
 84b7c18:	e8 f7 0f 21 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84b7c1d:	eb 1b                	jmp    84b7c3a <_ZN20CGlobalEffectManager12checkTimeoutEjj+0x1a6>
 84b7c1f:	89 d3                	mov    %edx,%ebx
 84b7c21:	89 c6                	mov    %eax,%esi
 84b7c23:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b7c26:	89 04 24             	mov    %eax,(%esp)
 84b7c29:	e8 52 62 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b7c2e:	89 f0                	mov    %esi,%eax
 84b7c30:	89 da                	mov    %ebx,%edx
 84b7c32:	89 04 24             	mov    %eax,(%esp)
 84b7c35:	e8 16 bb 62 00       	call   8ae3750 <_Unwind_Resume>
 84b7c3a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b7c3d:	89 04 24             	mov    %eax,(%esp)
 84b7c40:	e8 3b 62 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b7c45:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84b7c48:	83 c4 00             	add    $0x0,%esp
 84b7c4b:	5b                   	pop    %ebx
 84b7c4c:	5e                   	pop    %esi
 84b7c4d:	5d                   	pop    %ebp
 84b7c4e:	c3                   	ret
 84b7c4f:	90                   	nop

```

```c
// CGlobalEffectManager::checkTimeout @ 0x84b7a94

/* CGlobalEffectManager::checkTimeout(unsigned int, unsigned int) */

void __thiscall
CGlobalEffectManager::checkTimeout(CGlobalEffectManager *this,uint param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  CGlobalEffect *pCVar3;
  uint uVar4;
  GameWorld *this_00;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  PacketGuard local_24 [12];
  __normal_iterator local_18 [4];
  int local_14;
  undefined1 local_d;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084b7abd to 084b7c1c has its CatchHandler @ 084b7c1f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xb5);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
  local_28 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_24);
  local_14 = 0;
  local_d = 0;
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,0);
  std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::begin();
  do {
    std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::end();
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_2c,local_18);
    if (!bVar2) {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,&local_28,local_14);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this_00,local_24);
      PacketGuard::~PacketGuard(local_24);
      return;
    }
    pCVar3 = (CGlobalEffect *)
             __gnu_cxx::
             __normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
             ::operator->((__normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
                           *)&local_2c);
    uVar4 = CGlobalEffect::getType(pCVar3);
    if (uVar4 == param_1) {
      pCVar3 = (CGlobalEffect *)
               __gnu_cxx::
               __normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
               ::operator->((__normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
                             *)&local_2c);
      cVar1 = CGlobalEffect::isTimeout(pCVar3,param_2);
      if (cVar1 == '\0') goto LAB_084b7b58;
      bVar2 = true;
    }
    else {
LAB_084b7b58:
      bVar2 = false;
    }
    if (bVar2) {
      pCVar3 = (CGlobalEffect *)
               __gnu_cxx::
               __normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
               ::operator->((__normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
                             *)&local_2c);
      CGlobalEffect::makeNotifyInfo(pCVar3,local_24);
      local_14 = local_14 + 1;
      std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::erase(&local_30,this,local_2c);
      local_2c = local_30;
    }
    else {
      __gnu_cxx::
      __normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>::
      operator++((__normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
                  *)&local_2c);
    }
  } while( true );
}

```

---

## getEffectValue

```asm
// === 084b7daa CGlobalEffectManager::getEffectValue  [0x084b7daa-0x84b7e47] ===
 84b7daa:	55                   	push   %ebp
 84b7dab:	89 e5                	mov    %esp,%ebp
 84b7dad:	83 ec 38             	sub    $0x38,%esp
 84b7db0:	b8 00 00 00 00       	mov    $0x0,%eax
 84b7db5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b7db8:	8b 55 08             	mov    0x8(%ebp),%edx
 84b7dbb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b7dbe:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7dc2:	89 04 24             	mov    %eax,(%esp)
 84b7dc5:	e8 04 05 00 00       	call   84b82ce <_ZNKSt6vectorI13CGlobalEffectSaIS0_EE5beginEv>
 84b7dca:	83 ec 04             	sub    $0x4,%esp
 84b7dcd:	8b 55 08             	mov    0x8(%ebp),%edx
 84b7dd0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b7dd3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7dd7:	89 04 24             	mov    %eax,(%esp)
 84b7dda:	e8 1b 05 00 00       	call   84b82fa <_ZNKSt6vectorI13CGlobalEffectSaIS0_EE3endEv>
 84b7ddf:	83 ec 04             	sub    $0x4,%esp
 84b7de2:	eb 43                	jmp    84b7e27 <_ZNK20CGlobalEffectManager14getEffectValueEj+0x7d>
 84b7de4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b7de7:	89 04 24             	mov    %eax,(%esp)
 84b7dea:	e8 79 05 00 00       	call   84b8368 <_ZNK9__gnu_cxx17__normal_iteratorIPK13CGlobalEffectSt6vectorIS1_SaIS1_EEEptEv>
 84b7def:	89 04 24             	mov    %eax,(%esp)
 84b7df2:	e8 e3 01 00 00       	call   84b7fda <_ZNK13CGlobalEffect7getTypeEv>
 84b7df7:	3b 45 0c             	cmp    0xc(%ebp),%eax
 84b7dfa:	0f 94 c0             	sete   %al
 84b7dfd:	84 c0                	test   %al,%al
 84b7dff:	74 1b                	je     84b7e1c <_ZNK20CGlobalEffectManager14getEffectValueEj+0x72>
 84b7e01:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b7e04:	89 04 24             	mov    %eax,(%esp)
 84b7e07:	e8 5c 05 00 00       	call   84b8368 <_ZNK9__gnu_cxx17__normal_iteratorIPK13CGlobalEffectSt6vectorIS1_SaIS1_EEEptEv>
 84b7e0c:	89 04 24             	mov    %eax,(%esp)
 84b7e0f:	e8 d0 01 00 00       	call   84b7fe4 <_ZNK13CGlobalEffect8getValueEv>
 84b7e14:	d9 45 f4             	flds   -0xc(%ebp)
 84b7e17:	de c1                	faddp  %st,%st(1)
 84b7e19:	d9 5d f4             	fstps  -0xc(%ebp)
 84b7e1c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b7e1f:	89 04 24             	mov    %eax,(%esp)
 84b7e22:	e8 2b 05 00 00       	call   84b8352 <_ZN9__gnu_cxx17__normal_iteratorIPK13CGlobalEffectSt6vectorIS1_SaIS1_EEEppEv>
 84b7e27:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b7e2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b7e2e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b7e31:	89 04 24             	mov    %eax,(%esp)
 84b7e34:	e8 ed 04 00 00       	call   84b8326 <_ZN9__gnu_cxxneIPK13CGlobalEffectSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 84b7e39:	84 c0                	test   %al,%al
 84b7e3b:	75 a7                	jne    84b7de4 <_ZNK20CGlobalEffectManager14getEffectValueEj+0x3a>
 84b7e3d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b7e40:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84b7e43:	d9 45 e4             	flds   -0x1c(%ebp)
 84b7e46:	c9                   	leave
 84b7e47:	c3                   	ret

```

```c
// CGlobalEffectManager::getEffectValue @ 0x84b7daa

/* CGlobalEffectManager::getEffectValue(unsigned int) const */

longdouble __thiscall CGlobalEffectManager::getEffectValue(CGlobalEffectManager *this,uint param_1)

{
  bool bVar1;
  CGlobalEffect *pCVar2;
  uint uVar3;
  longdouble lVar4;
  __normal_iterator local_18 [4];
  __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
  local_14 [4];
  float local_10;
  
  local_10 = 0.0;
  std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::begin();
  std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_14,local_18);
    if (!bVar1) break;
    pCVar2 = (CGlobalEffect *)
             __gnu_cxx::
             __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
             ::operator->(local_14);
    uVar3 = CGlobalEffect::getType(pCVar2);
    if (uVar3 == param_1) {
      pCVar2 = (CGlobalEffect *)
               __gnu_cxx::
               __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
               ::operator->(local_14);
      lVar4 = (longdouble)CGlobalEffect::getValue(pCVar2);
      local_10 = (float)((longdouble)local_10 + lVar4);
    }
    __gnu_cxx::
    __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
    ::operator++(local_14);
  }
  return (longdouble)local_10;
}

```

---

## isAffectedEffect

```asm
// === 084b7d2c CGlobalEffectManager::isAffectedEffect  [0x084b7d2c-0x84b7da9] ===
 84b7d2c:	55                   	push   %ebp
 84b7d2d:	89 e5                	mov    %esp,%ebp
 84b7d2f:	83 ec 28             	sub    $0x28,%esp
 84b7d32:	8b 55 08             	mov    0x8(%ebp),%edx
 84b7d35:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b7d38:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7d3c:	89 04 24             	mov    %eax,(%esp)
 84b7d3f:	e8 8a 05 00 00       	call   84b82ce <_ZNKSt6vectorI13CGlobalEffectSaIS0_EE5beginEv>
 84b7d44:	83 ec 04             	sub    $0x4,%esp
 84b7d47:	8b 55 08             	mov    0x8(%ebp),%edx
 84b7d4a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b7d4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7d51:	89 04 24             	mov    %eax,(%esp)
 84b7d54:	e8 a1 05 00 00       	call   84b82fa <_ZNKSt6vectorI13CGlobalEffectSaIS0_EE3endEv>
 84b7d59:	83 ec 04             	sub    $0x4,%esp
 84b7d5c:	eb 2f                	jmp    84b7d8d <_ZNK20CGlobalEffectManager16isAffectedEffectEj+0x61>
 84b7d5e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b7d61:	89 04 24             	mov    %eax,(%esp)
 84b7d64:	e8 ff 05 00 00       	call   84b8368 <_ZNK9__gnu_cxx17__normal_iteratorIPK13CGlobalEffectSt6vectorIS1_SaIS1_EEEptEv>
 84b7d69:	89 04 24             	mov    %eax,(%esp)
 84b7d6c:	e8 69 02 00 00       	call   84b7fda <_ZNK13CGlobalEffect7getTypeEv>
 84b7d71:	3b 45 0c             	cmp    0xc(%ebp),%eax
 84b7d74:	0f 94 c0             	sete   %al
 84b7d77:	84 c0                	test   %al,%al
 84b7d79:	74 07                	je     84b7d82 <_ZNK20CGlobalEffectManager16isAffectedEffectEj+0x56>
 84b7d7b:	b8 01 00 00 00       	mov    $0x1,%eax
 84b7d80:	eb 26                	jmp    84b7da8 <_ZNK20CGlobalEffectManager16isAffectedEffectEj+0x7c>
 84b7d82:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b7d85:	89 04 24             	mov    %eax,(%esp)
 84b7d88:	e8 c5 05 00 00       	call   84b8352 <_ZN9__gnu_cxx17__normal_iteratorIPK13CGlobalEffectSt6vectorIS1_SaIS1_EEEppEv>
 84b7d8d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b7d90:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b7d94:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b7d97:	89 04 24             	mov    %eax,(%esp)
 84b7d9a:	e8 87 05 00 00       	call   84b8326 <_ZN9__gnu_cxxneIPK13CGlobalEffectSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 84b7d9f:	84 c0                	test   %al,%al
 84b7da1:	75 bb                	jne    84b7d5e <_ZNK20CGlobalEffectManager16isAffectedEffectEj+0x32>
 84b7da3:	b8 00 00 00 00       	mov    $0x0,%eax
 84b7da8:	c9                   	leave
 84b7da9:	c3                   	ret

```

```c
// CGlobalEffectManager::isAffectedEffect @ 0x84b7d2c

/* CGlobalEffectManager::isAffectedEffect(unsigned int) const */

undefined4 __thiscall
CGlobalEffectManager::isAffectedEffect(CGlobalEffectManager *this,uint param_1)

{
  bool bVar1;
  CGlobalEffect *this_00;
  uint uVar2;
  __normal_iterator local_14 [4];
  __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
  local_10 [12];
  
  std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::begin();
  std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) {
      return 0;
    }
    this_00 = (CGlobalEffect *)
              __gnu_cxx::
              __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
              ::operator->(local_10);
    uVar2 = CGlobalEffect::getType(this_00);
    if (uVar2 == param_1) break;
    __gnu_cxx::
    __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
    ::operator++(local_10);
  }
  return 1;
}

```

---

## makeGlobalEffectInfo

```asm
// === 084b7ec4 CGlobalEffectManager::makeGlobalEffectInfo  [0x084b7ec4-0x84b7f7c] ===
 84b7ec4:	55                   	push   %ebp
 84b7ec5:	89 e5                	mov    %esp,%ebp
 84b7ec7:	83 ec 28             	sub    $0x28,%esp
 84b7eca:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b7ecd:	c7 44 24 08 b5 00 00 	movl   $0xb5,0x8(%esp)
 84b7ed4:	00 
 84b7ed5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b7edc:	00 
 84b7edd:	89 04 24             	mov    %eax,(%esp)
 84b7ee0:	e8 17 3a c1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84b7ee5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b7ee8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b7eef:	00 
 84b7ef0:	89 04 24             	mov    %eax,(%esp)
 84b7ef3:	e8 28 3a c1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84b7ef8:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7efb:	89 04 24             	mov    %eax,(%esp)
 84b7efe:	e8 2d ed d7 ff       	call   8236c30 <_ZNKSt6vectorI13CGlobalEffectSaIS0_EE4sizeEv>
 84b7f03:	89 c2                	mov    %eax,%edx
 84b7f05:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b7f08:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7f0c:	89 04 24             	mov    %eax,(%esp)
 84b7f0f:	e8 28 3a c1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84b7f14:	8b 55 08             	mov    0x8(%ebp),%edx
 84b7f17:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b7f1a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7f1e:	89 04 24             	mov    %eax,(%esp)
 84b7f21:	e8 a8 03 00 00       	call   84b82ce <_ZNKSt6vectorI13CGlobalEffectSaIS0_EE5beginEv>
 84b7f26:	83 ec 04             	sub    $0x4,%esp
 84b7f29:	8b 55 08             	mov    0x8(%ebp),%edx
 84b7f2c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b7f2f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7f33:	89 04 24             	mov    %eax,(%esp)
 84b7f36:	e8 bf 03 00 00       	call   84b82fa <_ZNKSt6vectorI13CGlobalEffectSaIS0_EE3endEv>
 84b7f3b:	83 ec 04             	sub    $0x4,%esp
 84b7f3e:	eb 25                	jmp    84b7f65 <_ZNK20CGlobalEffectManager20makeGlobalEffectInfoER11PacketGuard+0xa1>
 84b7f40:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b7f43:	89 04 24             	mov    %eax,(%esp)
 84b7f46:	e8 1d 04 00 00       	call   84b8368 <_ZNK9__gnu_cxx17__normal_iteratorIPK13CGlobalEffectSt6vectorIS1_SaIS1_EEEptEv>
 84b7f4b:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b7f4e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7f52:	89 04 24             	mov    %eax,(%esp)
 84b7f55:	e8 26 f9 ff ff       	call   84b7880 <_ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard>
 84b7f5a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b7f5d:	89 04 24             	mov    %eax,(%esp)
 84b7f60:	e8 ed 03 00 00       	call   84b8352 <_ZN9__gnu_cxx17__normal_iteratorIPK13CGlobalEffectSt6vectorIS1_SaIS1_EEEppEv>
 84b7f65:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b7f68:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b7f6c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b7f6f:	89 04 24             	mov    %eax,(%esp)
 84b7f72:	e8 af 03 00 00       	call   84b8326 <_ZN9__gnu_cxxneIPK13CGlobalEffectSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 84b7f77:	84 c0                	test   %al,%al
 84b7f79:	75 c5                	jne    84b7f40 <_ZNK20CGlobalEffectManager20makeGlobalEffectInfoER11PacketGuard+0x7c>
 84b7f7b:	c9                   	leave
 84b7f7c:	c3                   	ret

```

```c
// CGlobalEffectManager::makeGlobalEffectInfo @ 0x84b7ec4

/* CGlobalEffectManager::makeGlobalEffectInfo(PacketGuard&) const */

void __thiscall
CGlobalEffectManager::makeGlobalEffectInfo(CGlobalEffectManager *this,PacketGuard *param_1)

{
  bool bVar1;
  int iVar2;
  CGlobalEffect *this_00;
  __normal_iterator local_14 [4];
  __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
  local_10 [12];
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0xb5);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,1);
  iVar2 = std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::size
                    ((vector<CGlobalEffect,std::allocator<CGlobalEffect>> *)this);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::begin();
  std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) break;
    this_00 = (CGlobalEffect *)
              __gnu_cxx::
              __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
              ::operator->(local_10);
    CGlobalEffect::makeNotifyInfo(this_00,param_1);
    __gnu_cxx::
    __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
    ::operator++(local_10);
  }
  return;
}

```

---

## notifyGlobalEffectInfo

```asm
// === 084b7e48 CGlobalEffectManager::notifyGlobalEffectInfo  [0x084b7e48-0x84b7ec3] ===
 84b7e48:	55                   	push   %ebp
 84b7e49:	89 e5                	mov    %esp,%ebp
 84b7e4b:	56                   	push   %esi
 84b7e4c:	53                   	push   %ebx
 84b7e4d:	83 ec 20             	sub    $0x20,%esp
 84b7e50:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b7e53:	89 04 24             	mov    %eax,(%esp)
 84b7e56:	e8 f1 5e 0d 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84b7e5b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b7e5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b7e62:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7e65:	89 04 24             	mov    %eax,(%esp)
 84b7e68:	e8 57 00 00 00       	call   84b7ec4 <_ZNK20CGlobalEffectManager20makeGlobalEffectInfoER11PacketGuard>
 84b7e6d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b7e74:	00 
 84b7e75:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b7e78:	89 04 24             	mov    %eax,(%esp)
 84b7e7b:	e8 d8 3a c1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84b7e80:	e8 22 25 c2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84b7e85:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84b7e88:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7e8c:	89 04 24             	mov    %eax,(%esp)
 84b7e8f:	e8 80 0d 21 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84b7e94:	eb 1b                	jmp    84b7eb1 <_ZNK20CGlobalEffectManager22notifyGlobalEffectInfoEv+0x69>
 84b7e96:	89 d3                	mov    %edx,%ebx
 84b7e98:	89 c6                	mov    %eax,%esi
 84b7e9a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b7e9d:	89 04 24             	mov    %eax,(%esp)
 84b7ea0:	e8 db 5f 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b7ea5:	89 f0                	mov    %esi,%eax
 84b7ea7:	89 da                	mov    %ebx,%edx
 84b7ea9:	89 04 24             	mov    %eax,(%esp)
 84b7eac:	e8 9f b8 62 00       	call   8ae3750 <_Unwind_Resume>
 84b7eb1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b7eb4:	89 04 24             	mov    %eax,(%esp)
 84b7eb7:	e8 c4 5f 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b7ebc:	83 c4 20             	add    $0x20,%esp
 84b7ebf:	5b                   	pop    %ebx
 84b7ec0:	5e                   	pop    %esi
 84b7ec1:	5d                   	pop    %ebp
 84b7ec2:	c3                   	ret
 84b7ec3:	90                   	nop

```

```c
// CGlobalEffectManager::notifyGlobalEffectInfo @ 0x84b7e48

/* CGlobalEffectManager::notifyGlobalEffectInfo() const */

void __thiscall CGlobalEffectManager::notifyGlobalEffectInfo(CGlobalEffectManager *this)

{
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 084b7e68 to 084b7e93 has its CatchHandler @ 084b7e96 */
  makeGlobalEffectInfo(this,local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## registNewEffect

```asm
// === 084b7932 CGlobalEffectManager::registNewEffect  [0x084b7932-0x84b7a93] ===
 84b7932:	55                   	push   %ebp
 84b7933:	89 e5                	mov    %esp,%ebp
 84b7935:	56                   	push   %esi
 84b7936:	53                   	push   %ebx
 84b7937:	83 c4 80             	add    $0xffffff80,%esp
 84b793a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b793d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b7941:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7944:	89 04 24             	mov    %eax,(%esp)
 84b7947:	e8 e0 03 00 00       	call   84b7d2c <_ZNK20CGlobalEffectManager16isAffectedEffectEj>
 84b794c:	84 c0                	test   %al,%al
 84b794e:	0f 85 38 01 00 00    	jne    84b7a8c <_ZN20CGlobalEffectManager15registNewEffectEjfPKcll+0x15a>
 84b7954:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 84b7958:	0f 85 8f 00 00 00    	jne    84b79ed <_ZN20CGlobalEffectManager15registNewEffectEjfPKcll+0xbb>
 84b795e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84b7965:	e8 34 43 c1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84b796a:	03 45 1c             	add    0x1c(%ebp),%eax
 84b796d:	89 44 24 10          	mov    %eax,0x10(%esp)
 84b7971:	8b 45 14             	mov    0x14(%ebp),%eax
 84b7974:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b7978:	8b 45 10             	mov    0x10(%ebp),%eax
 84b797b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b797f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b7982:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b7986:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84b7989:	89 04 24             	mov    %eax,(%esp)
 84b798c:	e8 79 06 00 00       	call   84b800a <_ZN13CGlobalEffectC1EjfPKcl>
 84b7991:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7994:	8d 55 a0             	lea    -0x60(%ebp),%edx
 84b7997:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b799b:	89 04 24             	mov    %eax,(%esp)
 84b799e:	e8 cb 06 00 00       	call   84b806e <_ZNSt6vectorI13CGlobalEffectSaIS0_EE9push_backEOS0_>
 84b79a3:	eb 1b                	jmp    84b79c0 <_ZN20CGlobalEffectManager15registNewEffectEjfPKcll+0x8e>
 84b79a5:	89 d3                	mov    %edx,%ebx
 84b79a7:	89 c6                	mov    %eax,%esi
 84b79a9:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84b79ac:	89 04 24             	mov    %eax,(%esp)
 84b79af:	e8 60 f8 de ff       	call   82a7214 <_ZN13CGlobalEffectD1Ev>
 84b79b4:	89 f0                	mov    %esi,%eax
 84b79b6:	89 da                	mov    %ebx,%edx
 84b79b8:	89 04 24             	mov    %eax,(%esp)
 84b79bb:	e8 90 bd 62 00       	call   8ae3750 <_Unwind_Resume>
 84b79c0:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84b79c3:	89 04 24             	mov    %eax,(%esp)
 84b79c6:	e8 49 f8 de ff       	call   82a7214 <_ZN13CGlobalEffectD1Ev>
 84b79cb:	8b 45 08             	mov    0x8(%ebp),%eax
 84b79ce:	89 04 24             	mov    %eax,(%esp)
 84b79d1:	e8 72 04 00 00       	call   84b7e48 <_ZNK20CGlobalEffectManager22notifyGlobalEffectInfoEv>
 84b79d6:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84b79d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b79dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b79e0:	89 04 24             	mov    %eax,(%esp)
 84b79e3:	e8 0e 05 18 00       	call   8637ef6 <_ZN28TimerGlobalEffectItemTimeout11registTimerEjj>
 84b79e8:	e9 a0 00 00 00       	jmp    84b7a8d <_ZN20CGlobalEffectManager15registNewEffectEjfPKcll+0x15b>
 84b79ed:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84b79f4:	e8 a5 42 c1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84b79f9:	03 45 18             	add    0x18(%ebp),%eax
 84b79fc:	03 45 1c             	add    0x1c(%ebp),%eax
 84b79ff:	89 44 24 10          	mov    %eax,0x10(%esp)
 84b7a03:	8b 45 14             	mov    0x14(%ebp),%eax
 84b7a06:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b7a0a:	8b 45 10             	mov    0x10(%ebp),%eax
 84b7a0d:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b7a11:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b7a14:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b7a18:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84b7a1b:	89 04 24             	mov    %eax,(%esp)
 84b7a1e:	e8 e7 05 00 00       	call   84b800a <_ZN13CGlobalEffectC1EjfPKcl>
 84b7a23:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7a26:	8d 50 0c             	lea    0xc(%eax),%edx
 84b7a29:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84b7a2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b7a30:	89 14 24             	mov    %edx,(%esp)
 84b7a33:	e8 36 06 00 00       	call   84b806e <_ZNSt6vectorI13CGlobalEffectSaIS0_EE9push_backEOS0_>
 84b7a38:	eb 1b                	jmp    84b7a55 <_ZN20CGlobalEffectManager15registNewEffectEjfPKcll+0x123>
 84b7a3a:	89 d3                	mov    %edx,%ebx
 84b7a3c:	89 c6                	mov    %eax,%esi
 84b7a3e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84b7a41:	89 04 24             	mov    %eax,(%esp)
 84b7a44:	e8 cb f7 de ff       	call   82a7214 <_ZN13CGlobalEffectD1Ev>
 84b7a49:	89 f0                	mov    %esi,%eax
 84b7a4b:	89 da                	mov    %ebx,%edx
 84b7a4d:	89 04 24             	mov    %eax,(%esp)
 84b7a50:	e8 fb bc 62 00       	call   8ae3750 <_Unwind_Resume>
 84b7a55:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84b7a58:	89 04 24             	mov    %eax,(%esp)
 84b7a5b:	e8 b4 f7 de ff       	call   82a7214 <_ZN13CGlobalEffectD1Ev>
 84b7a60:	8b 45 18             	mov    0x18(%ebp),%eax
 84b7a63:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b7a67:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b7a6a:	89 04 24             	mov    %eax,(%esp)
 84b7a6d:	e8 06 04 18 00       	call   8637e78 <_ZN26TimerGlobalEffectItemBegin11registTimerEjj>
 84b7a72:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84b7a75:	8b 55 18             	mov    0x18(%ebp),%edx
 84b7a78:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84b7a7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b7a7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b7a82:	89 04 24             	mov    %eax,(%esp)
 84b7a85:	e8 6c 04 18 00       	call   8637ef6 <_ZN28TimerGlobalEffectItemTimeout11registTimerEjj>
 84b7a8a:	eb 01                	jmp    84b7a8d <_ZN20CGlobalEffectManager15registNewEffectEjfPKcll+0x15b>
 84b7a8c:	90                   	nop
 84b7a8d:	83 ec 80             	sub    $0xffffff80,%esp
 84b7a90:	5b                   	pop    %ebx
 84b7a91:	5e                   	pop    %esi
 84b7a92:	5d                   	pop    %ebp
 84b7a93:	c3                   	ret

```

```c
// CGlobalEffectManager::registNewEffect @ 0x84b7932

/* CGlobalEffectManager::registNewEffect(unsigned int, float, char const*, long, long) */

void __thiscall
CGlobalEffectManager::registNewEffect
          (CGlobalEffectManager *this,uint param_1,float param_2,char *param_3,long param_4,
          long param_5)

{
  char cVar1;
  int iVar2;
  CGlobalEffect local_64 [44];
  CGlobalEffect local_38 [44];
  
  cVar1 = isAffectedEffect(this,param_1);
  if (cVar1 == '\0') {
    if (param_4 == 0) {
      iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      CGlobalEffect::CGlobalEffect(local_64,param_1,param_2,param_3,iVar2 + param_5);
                    /* try { // try from 084b799e to 084b79a2 has its CatchHandler @ 084b79a5 */
      std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::push_back
                ((vector<CGlobalEffect,std::allocator<CGlobalEffect>> *)this,local_64);
      CGlobalEffect::~CGlobalEffect(local_64);
      notifyGlobalEffectInfo(this);
      TimerGlobalEffectItemTimeout::registTimer(param_1,param_5);
    }
    else {
      iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      CGlobalEffect::CGlobalEffect(local_38,param_1,param_2,param_3,iVar2 + param_4 + param_5);
                    /* try { // try from 084b7a33 to 084b7a37 has its CatchHandler @ 084b7a3a */
      std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::push_back
                ((vector<CGlobalEffect,std::allocator<CGlobalEffect>> *)(this + 0xc),local_38);
      CGlobalEffect::~CGlobalEffect(local_38);
      TimerGlobalEffectItemBegin::registTimer(param_1,param_4);
      TimerGlobalEffectItemTimeout::registTimer(param_1,param_4 + param_5);
    }
  }
  return;
}

```

