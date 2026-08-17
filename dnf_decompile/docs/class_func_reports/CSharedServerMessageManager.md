# CSharedServerMessageManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## CSharedServerMessageManager

```asm
// === 0860079c CSharedServerMessageManager::CSharedServerMessageManager  [0x0860079c-0x860080d] ===
 860079c:	55                   	push   %ebp
 860079d:	89 e5                	mov    %esp,%ebp
 860079f:	56                   	push   %esi
 86007a0:	53                   	push   %ebx
 86007a1:	83 ec 10             	sub    $0x10,%esp
 86007a4:	8b 45 08             	mov    0x8(%ebp),%eax
 86007a7:	89 04 24             	mov    %eax,(%esp)
 86007aa:	e8 3d 12 00 00       	call   86019ec <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapterC1Ev>
 86007af:	8b 45 08             	mov    0x8(%ebp),%eax
 86007b2:	83 c0 08             	add    $0x8,%eax
 86007b5:	89 04 24             	mov    %eax,(%esp)
 86007b8:	e8 5d 12 00 00       	call   8601a1a <_ZN20EVENT_SERVER_MESSAGEC1Ev>
 86007bd:	8b 45 08             	mov    0x8(%ebp),%eax
 86007c0:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 86007c4:	8b 45 08             	mov    0x8(%ebp),%eax
 86007c7:	83 c0 08             	add    $0x8,%eax
 86007ca:	89 04 24             	mov    %eax,(%esp)
 86007cd:	e8 fe 11 00 00       	call   86019d0 <_ZN20EVENT_SERVER_MESSAGE5clearEv>
 86007d2:	eb 33                	jmp    8600807 <_ZN27CSharedServerMessageManagerC1Ev+0x6b>
 86007d4:	89 d3                	mov    %edx,%ebx
 86007d6:	89 c6                	mov    %eax,%esi
 86007d8:	8b 45 08             	mov    0x8(%ebp),%eax
 86007db:	83 c0 08             	add    $0x8,%eax
 86007de:	89 04 24             	mov    %eax,(%esp)
 86007e1:	e8 4a 12 00 00       	call   8601a30 <_ZN20EVENT_SERVER_MESSAGED1Ev>
 86007e6:	89 f0                	mov    %esi,%eax
 86007e8:	89 da                	mov    %ebx,%edx
 86007ea:	eb 00                	jmp    86007ec <_ZN27CSharedServerMessageManagerC1Ev+0x50>
 86007ec:	89 d3                	mov    %edx,%ebx
 86007ee:	89 c6                	mov    %eax,%esi
 86007f0:	8b 45 08             	mov    0x8(%ebp),%eax
 86007f3:	89 04 24             	mov    %eax,(%esp)
 86007f6:	e8 ff 11 00 00       	call   86019fa <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapterD1Ev>
 86007fb:	89 f0                	mov    %esi,%eax
 86007fd:	89 da                	mov    %ebx,%edx
 86007ff:	89 04 24             	mov    %eax,(%esp)
 8600802:	e8 49 2f 4e 00       	call   8ae3750 <_Unwind_Resume>
 8600807:	83 c4 10             	add    $0x10,%esp
 860080a:	5b                   	pop    %ebx
 860080b:	5e                   	pop    %esi
 860080c:	5d                   	pop    %ebp
 860080d:	c3                   	ret

```

```c
// CSharedServerMessageManager::CSharedServerMessageManager @ 0x860079c

/* CSharedServerMessageManager::CSharedServerMessageManager() */

void __thiscall
CSharedServerMessageManager::CSharedServerMessageManager(CSharedServerMessageManager *this)

{
  CSharedServerMessageAdapter::CSharedServerMessageAdapter((CSharedServerMessageAdapter *)this);
                    /* try { // try from 086007b8 to 086007bc has its CatchHandler @ 086007ec */
  EVENT_SERVER_MESSAGE::EVENT_SERVER_MESSAGE((EVENT_SERVER_MESSAGE *)(this + 8));
  this[4] = (CSharedServerMessageManager)0x0;
                    /* try { // try from 086007cd to 086007d1 has its CatchHandler @ 086007d4 */
  EVENT_SERVER_MESSAGE::clear((EVENT_SERVER_MESSAGE *)(this + 8));
  return;
}

```

---

## CSharedServerMessageManager_0860080e

```asm
// === 0860080e CSharedServerMessageManager::CSharedServerMessageManager  [0x0860080e-0x8600891] ===
 860080e:	55                   	push   %ebp
 860080f:	89 e5                	mov    %esp,%ebp
 8600811:	56                   	push   %esi
 8600812:	53                   	push   %ebx
 8600813:	83 ec 10             	sub    $0x10,%esp
 8600816:	8b 45 08             	mov    0x8(%ebp),%eax
 8600819:	89 04 24             	mov    %eax,(%esp)
 860081c:	e8 cb 11 00 00       	call   86019ec <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapterC1Ev>
 8600821:	8b 45 08             	mov    0x8(%ebp),%eax
 8600824:	83 c0 08             	add    $0x8,%eax
 8600827:	89 04 24             	mov    %eax,(%esp)
 860082a:	e8 eb 11 00 00       	call   8601a1a <_ZN20EVENT_SERVER_MESSAGEC1Ev>
 860082f:	8b 45 08             	mov    0x8(%ebp),%eax
 8600832:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 8600836:	8b 45 08             	mov    0x8(%ebp),%eax
 8600839:	8b 55 0c             	mov    0xc(%ebp),%edx
 860083c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8600840:	89 04 24             	mov    %eax,(%esp)
 8600843:	e8 b8 11 00 00       	call   8601a00 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter23SetServerMessageAddInfoEP25stSharedServerMessageInfo>
 8600848:	8b 45 08             	mov    0x8(%ebp),%eax
 860084b:	83 c0 08             	add    $0x8,%eax
 860084e:	89 04 24             	mov    %eax,(%esp)
 8600851:	e8 7a 11 00 00       	call   86019d0 <_ZN20EVENT_SERVER_MESSAGE5clearEv>
 8600856:	eb 33                	jmp    860088b <_ZN27CSharedServerMessageManagerC1EP25stSharedServerMessageInfo+0x7d>
 8600858:	89 d3                	mov    %edx,%ebx
 860085a:	89 c6                	mov    %eax,%esi
 860085c:	8b 45 08             	mov    0x8(%ebp),%eax
 860085f:	83 c0 08             	add    $0x8,%eax
 8600862:	89 04 24             	mov    %eax,(%esp)
 8600865:	e8 c6 11 00 00       	call   8601a30 <_ZN20EVENT_SERVER_MESSAGED1Ev>
 860086a:	89 f0                	mov    %esi,%eax
 860086c:	89 da                	mov    %ebx,%edx
 860086e:	eb 00                	jmp    8600870 <_ZN27CSharedServerMessageManagerC1EP25stSharedServerMessageInfo+0x62>
 8600870:	89 d3                	mov    %edx,%ebx
 8600872:	89 c6                	mov    %eax,%esi
 8600874:	8b 45 08             	mov    0x8(%ebp),%eax
 8600877:	89 04 24             	mov    %eax,(%esp)
 860087a:	e8 7b 11 00 00       	call   86019fa <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapterD1Ev>
 860087f:	89 f0                	mov    %esi,%eax
 8600881:	89 da                	mov    %ebx,%edx
 8600883:	89 04 24             	mov    %eax,(%esp)
 8600886:	e8 c5 2e 4e 00       	call   8ae3750 <_Unwind_Resume>
 860088b:	83 c4 10             	add    $0x10,%esp
 860088e:	5b                   	pop    %ebx
 860088f:	5e                   	pop    %esi
 8600890:	5d                   	pop    %ebp
 8600891:	c3                   	ret

```

```c
// CSharedServerMessageManager::CSharedServerMessageManager @ 0x860080e

/* CSharedServerMessageManager::CSharedServerMessageManager(stSharedServerMessageInfo*) */

void __thiscall
CSharedServerMessageManager::CSharedServerMessageManager
          (CSharedServerMessageManager *this,stSharedServerMessageInfo *param_1)

{
  CSharedServerMessageAdapter::CSharedServerMessageAdapter((CSharedServerMessageAdapter *)this);
                    /* try { // try from 0860082a to 0860082e has its CatchHandler @ 08600870 */
  EVENT_SERVER_MESSAGE::EVENT_SERVER_MESSAGE((EVENT_SERVER_MESSAGE *)(this + 8));
  this[4] = (CSharedServerMessageManager)0x0;
  CSharedServerMessageAdapter::SetServerMessageAddInfo((CSharedServerMessageAdapter *)this,param_1);
                    /* try { // try from 08600851 to 08600855 has its CatchHandler @ 08600858 */
  EVENT_SERVER_MESSAGE::clear((EVENT_SERVER_MESSAGE *)(this + 8));
  return;
}

```

---

## CheckUserCondition

```asm
// === 08600dcc CSharedServerMessageManager::CheckUserCondition  [0x08600dcc-0x8600ebf] ===
 8600dcc:	55                   	push   %ebp
 8600dcd:	89 e5                	mov    %esp,%ebp
 8600dcf:	83 ec 28             	sub    $0x28,%esp
 8600dd2:	8b 45 08             	mov    0x8(%ebp),%eax
 8600dd5:	8b 55 10             	mov    0x10(%ebp),%edx
 8600dd8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8600ddc:	89 04 24             	mov    %eax,(%esp)
 8600ddf:	e8 5c 08 00 00       	call   8601640 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter16GetMappedEventIDEi>
 8600de4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8600de7:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 8600deb:	75 0a                	jne    8600df7 <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0x2b>
 8600ded:	b8 00 00 00 00       	mov    $0x0,%eax
 8600df2:	e9 c6 00 00 00       	jmp    8600ebd <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0xf1>
 8600df7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8600dfe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8600e01:	83 f8 01             	cmp    $0x1,%eax
 8600e04:	0f 84 a4 00 00 00    	je     8600eae <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0xe2>
 8600e0a:	83 f8 01             	cmp    $0x1,%eax
 8600e0d:	7f 09                	jg     8600e18 <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0x4c>
 8600e0f:	85 c0                	test   %eax,%eax
 8600e11:	74 3e                	je     8600e51 <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0x85>
 8600e13:	e9 8f 00 00 00       	jmp    8600ea7 <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0xdb>
 8600e18:	83 f8 02             	cmp    $0x2,%eax
 8600e1b:	74 5f                	je     8600e7c <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0xb0>
 8600e1d:	83 f8 03             	cmp    $0x3,%eax
 8600e20:	0f 85 81 00 00 00    	jne    8600ea7 <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0xdb>
 8600e26:	8b 45 0c             	mov    0xc(%ebp),%eax
 8600e29:	89 04 24             	mov    %eax,(%esp)
 8600e2c:	e8 4d 94 ad ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8600e31:	c7 44 24 04 aa d3 28 	movl   $0x28d3aa,0x4(%esp)
 8600e38:	00 
 8600e39:	89 04 24             	mov    %eax,(%esp)
 8600e3c:	e8 31 43 f0 ff       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 8600e41:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8600e44:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 8600e48:	75 67                	jne    8600eb1 <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0xe5>
 8600e4a:	b8 00 00 00 00       	mov    $0x0,%eax
 8600e4f:	eb 6c                	jmp    8600ebd <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0xf1>
 8600e51:	8b 45 0c             	mov    0xc(%ebp),%eax
 8600e54:	89 04 24             	mov    %eax,(%esp)
 8600e57:	e8 22 94 ad ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8600e5c:	c7 44 24 04 aa d3 28 	movl   $0x28d3aa,0x4(%esp)
 8600e63:	00 
 8600e64:	89 04 24             	mov    %eax,(%esp)
 8600e67:	e8 06 43 f0 ff       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 8600e6c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8600e6f:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 8600e73:	75 3f                	jne    8600eb4 <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0xe8>
 8600e75:	b8 00 00 00 00       	mov    $0x0,%eax
 8600e7a:	eb 41                	jmp    8600ebd <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0xf1>
 8600e7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8600e7f:	89 04 24             	mov    %eax,(%esp)
 8600e82:	e8 f7 93 ad ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8600e87:	c7 44 24 04 9d 1d 00 	movl   $0x1d9d,0x4(%esp)
 8600e8e:	00 
 8600e8f:	89 04 24             	mov    %eax,(%esp)
 8600e92:	e8 db 42 f0 ff       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 8600e97:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8600e9a:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 8600e9e:	75 17                	jne    8600eb7 <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0xeb>
 8600ea0:	b8 00 00 00 00       	mov    $0x0,%eax
 8600ea5:	eb 16                	jmp    8600ebd <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0xf1>
 8600ea7:	b8 00 00 00 00       	mov    $0x0,%eax
 8600eac:	eb 0f                	jmp    8600ebd <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0xf1>
 8600eae:	90                   	nop
 8600eaf:	eb 07                	jmp    8600eb8 <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0xec>
 8600eb1:	90                   	nop
 8600eb2:	eb 04                	jmp    8600eb8 <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0xec>
 8600eb4:	90                   	nop
 8600eb5:	eb 01                	jmp    8600eb8 <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi+0xec>
 8600eb7:	90                   	nop
 8600eb8:	b8 01 00 00 00       	mov    $0x1,%eax
 8600ebd:	c9                   	leave
 8600ebe:	c3                   	ret
 8600ebf:	90                   	nop

```

```c
// CSharedServerMessageManager::CheckUserCondition @ 0x8600dcc

/* CSharedServerMessageManager::CheckUserCondition(CUser*, int, int&) */

undefined4 CSharedServerMessageManager::CheckUserCondition(CUser *param_1,int param_2,int *param_3)

{
  int iVar1;
  CInventory *pCVar2;
  
  iVar1 = CSharedServerMessageAdapter::GetMappedEventID
                    ((CSharedServerMessageAdapter *)param_1,(int)param_3);
  if (iVar1 == -1) {
    return 0;
  }
  if (iVar1 != 1) {
    if (iVar1 < 2) {
      if (iVar1 != 0) {
        return 0;
      }
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      iVar1 = CInventory::check_item_exist(pCVar2,0x28d3aa);
      if (iVar1 == -1) {
        return 0;
      }
    }
    else if (iVar1 == 2) {
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      iVar1 = CInventory::check_item_exist(pCVar2,0x1d9d);
      if (iVar1 == -1) {
        return 0;
      }
    }
    else {
      if (iVar1 != 3) {
        return 0;
      }
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      iVar1 = CInventory::check_item_exist(pCVar2,0x28d3aa);
      if (iVar1 == -1) {
        return 0;
      }
    }
  }
  return 1;
}

```

---

## DeleteSpecificMessage

```asm
// === 08600d0c CSharedServerMessageManager::DeleteSpecificMessage  [0x08600d0c-0x8600dcb] ===
 8600d0c:	55                   	push   %ebp
 8600d0d:	89 e5                	mov    %esp,%ebp
 8600d0f:	83 ec 38             	sub    $0x38,%esp
 8600d12:	8b 45 08             	mov    0x8(%ebp),%eax
 8600d15:	8d 50 0c             	lea    0xc(%eax),%edx
 8600d18:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8600d1b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8600d1f:	89 04 24             	mov    %eax,(%esp)
 8600d22:	e8 d5 06 ef ff       	call   84f13fc <_ZNSt6vectorI16stSERVER_MESSAGESaIS0_EE5beginEv>
 8600d27:	83 ec 04             	sub    $0x4,%esp
 8600d2a:	eb 6b                	jmp    8600d97 <_ZN27CSharedServerMessageManager21DeleteSpecificMessageEi+0x8b>
 8600d2c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8600d2f:	89 04 24             	mov    %eax,(%esp)
 8600d32:	e8 4b 0e 00 00       	call   8601b82 <_ZNK9__gnu_cxx17__normal_iteratorIP16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEdeEv>
 8600d37:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8600d3a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8600d3d:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8600d41:	0f b6 c0             	movzbl %al,%eax
 8600d44:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8600d47:	75 31                	jne    8600d7a <_ZN27CSharedServerMessageManager21DeleteSpecificMessageEi+0x6e>
 8600d49:	8b 45 08             	mov    0x8(%ebp),%eax
 8600d4c:	8d 48 0c             	lea    0xc(%eax),%ecx
 8600d4f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8600d52:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8600d55:	89 54 24 08          	mov    %edx,0x8(%esp)
 8600d59:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8600d5d:	89 04 24             	mov    %eax,(%esp)
 8600d60:	e8 5b 0e 00 00       	call   8601bc0 <_ZNSt6vectorI16stSERVER_MESSAGESaIS0_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS0_S2_EE>
 8600d65:	83 ec 04             	sub    $0x4,%esp
 8600d68:	8b 45 08             	mov    0x8(%ebp),%eax
 8600d6b:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8600d6f:	8d 50 ff             	lea    -0x1(%eax),%edx
 8600d72:	8b 45 08             	mov    0x8(%ebp),%eax
 8600d75:	88 50 08             	mov    %dl,0x8(%eax)
 8600d78:	eb 4f                	jmp    8600dc9 <_ZN27CSharedServerMessageManager21DeleteSpecificMessageEi+0xbd>
 8600d7a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8600d7d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8600d84:	00 
 8600d85:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8600d88:	89 54 24 04          	mov    %edx,0x4(%esp)
 8600d8c:	89 04 24             	mov    %eax,(%esp)
 8600d8f:	e8 f8 0d 00 00       	call   8601b8c <_ZN9__gnu_cxx17__normal_iteratorIP16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEppEi>
 8600d94:	83 ec 04             	sub    $0x4,%esp
 8600d97:	8b 45 08             	mov    0x8(%ebp),%eax
 8600d9a:	8d 50 0c             	lea    0xc(%eax),%edx
 8600d9d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8600da0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8600da4:	89 04 24             	mov    %eax,(%esp)
 8600da7:	e8 8e 06 ef ff       	call   84f143a <_ZNSt6vectorI16stSERVER_MESSAGESaIS0_EE3endEv>
 8600dac:	83 ec 04             	sub    $0x4,%esp
 8600daf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8600db2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8600db6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8600db9:	89 04 24             	mov    %eax,(%esp)
 8600dbc:	e8 95 0d 00 00       	call   8601b56 <_ZN9__gnu_cxxneIP16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8600dc1:	84 c0                	test   %al,%al
 8600dc3:	0f 85 63 ff ff ff    	jne    8600d2c <_ZN27CSharedServerMessageManager21DeleteSpecificMessageEi+0x20>
 8600dc9:	c9                   	leave
 8600dca:	c3                   	ret
 8600dcb:	90                   	nop

```

```c
// CSharedServerMessageManager::DeleteSpecificMessage @ 0x8600d0c

/* CSharedServerMessageManager::DeleteSpecificMessage(int) */

void __thiscall
CSharedServerMessageManager::DeleteSpecificMessage(CSharedServerMessageManager *this,int param_1)

{
  bool bVar1;
  undefined4 local_20;
  __normal_iterator local_1c [4];
  undefined1 local_18 [4];
  __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
  local_14 [4];
  int local_10;
  
  std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::begin();
  while( true ) {
    std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,local_1c);
    if (!bVar1) {
      return;
    }
    local_10 = __gnu_cxx::
               __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
               ::operator*((__normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                            *)&local_20);
    if ((uint)*(byte *)(local_10 + 1) == param_1) break;
    __gnu_cxx::
    __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
    ::operator++(local_14,(int)&local_20);
  }
  std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::erase
            (local_18,this + 0xc,local_20);
  this[8] = (CSharedServerMessageManager)((char)this[8] + -1);
  return;
}

```

---

## IsChangableMessage

```asm
// === 08600cc8 CSharedServerMessageManager::IsChangableMessage  [0x08600cc8-0x8600d0b] ===
 8600cc8:	55                   	push   %ebp
 8600cc9:	89 e5                	mov    %esp,%ebp
 8600ccb:	83 ec 28             	sub    $0x28,%esp
 8600cce:	8b 45 0c             	mov    0xc(%ebp),%eax
 8600cd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8600cd5:	8b 45 08             	mov    0x8(%ebp),%eax
 8600cd8:	89 04 24             	mov    %eax,(%esp)
 8600cdb:	e8 54 ff ff ff       	call   8600c34 <_ZN27CSharedServerMessageManager13getCurMessageEi>
 8600ce0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8600ce3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8600ce7:	75 07                	jne    8600cf0 <_ZN27CSharedServerMessageManager18IsChangableMessageEii+0x28>
 8600ce9:	b8 01 00 00 00       	mov    $0x1,%eax
 8600cee:	eb 1a                	jmp    8600d0a <_ZN27CSharedServerMessageManager18IsChangableMessageEii+0x42>
 8600cf0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8600cf3:	8b 40 54             	mov    0x54(%eax),%eax
 8600cf6:	83 c0 78             	add    $0x78,%eax
 8600cf9:	3b 45 10             	cmp    0x10(%ebp),%eax
 8600cfc:	7c 07                	jl     8600d05 <_ZN27CSharedServerMessageManager18IsChangableMessageEii+0x3d>
 8600cfe:	b8 00 00 00 00       	mov    $0x0,%eax
 8600d03:	eb 05                	jmp    8600d0a <_ZN27CSharedServerMessageManager18IsChangableMessageEii+0x42>
 8600d05:	b8 01 00 00 00       	mov    $0x1,%eax
 8600d0a:	c9                   	leave
 8600d0b:	c3                   	ret

```

```c
// CSharedServerMessageManager::IsChangableMessage @ 0x8600cc8

/* CSharedServerMessageManager::IsChangableMessage(int, int) */

undefined4 __thiscall
CSharedServerMessageManager::IsChangableMessage
          (CSharedServerMessageManager *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = getCurMessage(this,param_1);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (*(int *)(iVar1 + 0x54) + 0x78 < param_2) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## LoadServerMessageFromDB

```asm
// === 08601878 CSharedServerMessageManager::LoadServerMessageFromDB  [0x08601878-0x8601973] ===
 8601878:	55                   	push   %ebp
 8601879:	89 e5                	mov    %esp,%ebp
 860187b:	56                   	push   %esi
 860187c:	53                   	push   %ebx
 860187d:	83 ec 20             	sub    $0x20,%esp
 8601880:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8601885:	c7 44 24 08 1b 02 00 	movl   $0x21b,0x8(%esp)
 860188c:	00 
 860188d:	c7 44 24 04 38 84 cd 	movl   $0x8cd8438,0x4(%esp)
 8601894:	08 
 8601895:	89 04 24             	mov    %eax,(%esp)
 8601898:	e8 e9 e1 c8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 860189d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86018a4:	00 
 86018a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86018a9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86018ac:	89 04 24             	mov    %eax,(%esp)
 86018af:	e8 72 73 ac ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 86018b4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86018b7:	89 04 24             	mov    %eax,(%esp)
 86018ba:	e8 87 73 ac ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 86018bf:	c7 44 24 04 6d 01 00 	movl   $0x16d,0x4(%esp)
 86018c6:	00 
 86018c7:	89 04 24             	mov    %eax,(%esp)
 86018ca:	e8 87 73 ac ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 86018cf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86018d2:	89 04 24             	mov    %eax,(%esp)
 86018d5:	e8 6c 73 ac ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 86018da:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 86018e1:	ff 
 86018e2:	89 04 24             	mov    %eax,(%esp)
 86018e5:	e8 6c 73 ac ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 86018ea:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86018ed:	89 04 24             	mov    %eax,(%esp)
 86018f0:	e8 59 73 ac ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 86018f5:	89 04 24             	mov    %eax,(%esp)
 86018f8:	e8 a9 03 00 00       	call   8601ca6 <_ZN12CStreamGuard11GetInBufferI25SIG_SELECT_SERVER_MESSAGEEEPT_v>
 86018fd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8601900:	e8 7c a8 ac ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8601905:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 860190b:	89 c2                	mov    %eax,%edx
 860190d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8601910:	66 89 10             	mov    %dx,(%eax)
 8601913:	e8 69 a8 ac ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8601918:	89 04 24             	mov    %eax,(%esp)
 860191b:	e8 aa 91 b4 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8601920:	89 c2                	mov    %eax,%edx
 8601922:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8601925:	66 89 50 02          	mov    %dx,0x2(%eax)
 8601929:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 860192e:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8601931:	89 54 24 08          	mov    %edx,0x8(%esp)
 8601935:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 860193c:	00 
 860193d:	89 04 24             	mov    %eax,(%esp)
 8601940:	e8 99 f6 f6 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8601945:	eb 1b                	jmp    8601962 <_ZN27CSharedServerMessageManager23LoadServerMessageFromDBEv+0xea>
 8601947:	89 d3                	mov    %edx,%ebx
 8601949:	89 c6                	mov    %eax,%esi
 860194b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860194e:	89 04 24             	mov    %eax,(%esp)
 8601951:	e8 7c af 01 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8601956:	89 f0                	mov    %esi,%eax
 8601958:	89 da                	mov    %ebx,%edx
 860195a:	89 04 24             	mov    %eax,(%esp)
 860195d:	e8 ee 1d 4e 00       	call   8ae3750 <_Unwind_Resume>
 8601962:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8601965:	89 04 24             	mov    %eax,(%esp)
 8601968:	e8 65 af 01 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860196d:	83 c4 20             	add    $0x20,%esp
 8601970:	5b                   	pop    %ebx
 8601971:	5e                   	pop    %esi
 8601972:	5d                   	pop    %ebp
 8601973:	c3                   	ret

```

```c
// CSharedServerMessageManager::LoadServerMessageFromDB @ 0x8601878

/* CSharedServerMessageManager::LoadServerMessageFromDB() */

void CSharedServerMessageManager::LoadServerMessageFromDB(void)

{
  undefined2 uVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  CEnvironment *this;
  CStreamGuard local_18 [8];
  SIG_SELECT_SERVER_MESSAGE *local_10;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"SharedServerMessageManager.cpp",0x21b);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 086018ca to 08601944 has its CatchHandler @ 08601947 */
  CStreamGuard::operator<<(pCVar3,0x16d);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,-1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SELECT_SERVER_MESSAGE>(pCVar3);
  iVar4 = G_CEnvironment();
  *(short *)local_10 = (short)*(undefined4 *)(iVar4 + 0x378);
  this = (CEnvironment *)G_CEnvironment();
  uVar1 = CEnvironment::get_channel_no(this);
  *(undefined2 *)(local_10 + 2) = uVar1;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

---

## SendServerMessageInfo

```asm
// === 086008d8 CSharedServerMessageManager::SendServerMessageInfo  [0x086008d8-0x8600b79] ===
 86008d8:	55                   	push   %ebp
 86008d9:	89 e5                	mov    %esp,%ebp
 86008db:	56                   	push   %esi
 86008dc:	53                   	push   %ebx
 86008dd:	83 ec 60             	sub    $0x60,%esp
 86008e0:	8b 45 14             	mov    0x14(%ebp),%eax
 86008e3:	88 45 b4             	mov    %al,-0x4c(%ebp)
 86008e6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86008e9:	89 04 24             	mov    %eax,(%esp)
 86008ec:	e8 5b d4 f8 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86008f1:	c7 44 24 08 c0 00 00 	movl   $0xc0,0x8(%esp)
 86008f8:	00 
 86008f9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8600900:	00 
 8600901:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8600904:	89 04 24             	mov    %eax,(%esp)
 8600907:	e8 f0 af ac ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 860090c:	0f be 45 b4          	movsbl -0x4c(%ebp),%eax
 8600910:	89 44 24 04          	mov    %eax,0x4(%esp)
 8600914:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8600917:	89 04 24             	mov    %eax,(%esp)
 860091a:	e8 01 b0 ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 860091f:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8600926:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8600929:	89 04 24             	mov    %eax,(%esp)
 860092c:	e8 e9 10 00 00       	call   8601a1a <_ZN20EVENT_SERVER_MESSAGEC1Ev>
 8600931:	c6 45 c4 00          	movb   $0x0,-0x3c(%ebp)
 8600935:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 860093c:	eb 50                	jmp    860098e <_ZN27CSharedServerMessageManager21SendServerMessageInfoEP5CUserP24SIG_EVENT_SERVER_MESSAGEc+0xb6>
 860093e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8600941:	8b 45 10             	mov    0x10(%ebp),%eax
 8600944:	6b d2 58             	imul   $0x58,%edx,%edx
 8600947:	0f b6 44 02 05       	movzbl 0x5(%edx,%eax,1),%eax
 860094c:	0f b6 d0             	movzbl %al,%edx
 860094f:	8b 45 08             	mov    0x8(%ebp),%eax
 8600952:	89 54 24 04          	mov    %edx,0x4(%esp)
 8600956:	89 04 24             	mov    %eax,(%esp)
 8600959:	e8 a2 0d 00 00       	call   8601700 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter9IsOnIndexEi>
 860095e:	84 c0                	test   %al,%al
 8600960:	74 28                	je     860098a <_ZN27CSharedServerMessageManager21SendServerMessageInfoEP5CUserP24SIG_EVENT_SERVER_MESSAGEc+0xb2>
 8600962:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 8600966:	83 c0 01             	add    $0x1,%eax
 8600969:	88 45 c4             	mov    %al,-0x3c(%ebp)
 860096c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 860096f:	6b c0 58             	imul   $0x58,%eax,%eax
 8600972:	03 45 10             	add    0x10(%ebp),%eax
 8600975:	83 c0 04             	add    $0x4,%eax
 8600978:	89 44 24 04          	mov    %eax,0x4(%esp)
 860097c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 860097f:	83 c0 04             	add    $0x4,%eax
 8600982:	89 04 24             	mov    %eax,(%esp)
 8600985:	e8 4a 11 00 00       	call   8601ad4 <_ZNSt6vectorI16stSERVER_MESSAGESaIS0_EE9push_backERKS0_>
 860098a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 860098e:	8b 45 10             	mov    0x10(%ebp),%eax
 8600991:	0f b6 00             	movzbl (%eax),%eax
 8600994:	0f b6 c0             	movzbl %al,%eax
 8600997:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 860099a:	0f 9f c0             	setg   %al
 860099d:	84 c0                	test   %al,%al
 860099f:	75 9d                	jne    860093e <_ZN27CSharedServerMessageManager21SendServerMessageInfoEP5CUserP24SIG_EVENT_SERVER_MESSAGEc+0x66>
 86009a1:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 86009a5:	3c 32                	cmp    $0x32,%al
 86009a7:	76 0a                	jbe    86009b3 <_ZN27CSharedServerMessageManager21SendServerMessageInfoEP5CUserP24SIG_EVENT_SERVER_MESSAGEc+0xdb>
 86009a9:	bb 00 00 00 00       	mov    $0x0,%ebx
 86009ae:	e9 8a 01 00 00       	jmp    8600b3d <_ZN27CSharedServerMessageManager21SendServerMessageInfoEP5CUserP24SIG_EVENT_SERVER_MESSAGEc+0x265>
 86009b3:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 86009b7:	0f b6 c0             	movzbl %al,%eax
 86009ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 86009be:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86009c1:	89 04 24             	mov    %eax,(%esp)
 86009c4:	e8 57 af ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86009c9:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86009cc:	89 04 24             	mov    %eax,(%esp)
 86009cf:	e8 74 11 00 00       	call   8601b48 <_ZN9__gnu_cxx17__normal_iteratorIP16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEC1Ev>
 86009d4:	8d 45 b0             	lea    -0x50(%ebp),%eax
 86009d7:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 86009da:	83 c2 04             	add    $0x4,%edx
 86009dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 86009e1:	89 04 24             	mov    %eax,(%esp)
 86009e4:	e8 13 0a ef ff       	call   84f13fc <_ZNSt6vectorI16stSERVER_MESSAGESaIS0_EE5beginEv>
 86009e9:	83 ec 04             	sub    $0x4,%esp
 86009ec:	8b 45 b0             	mov    -0x50(%ebp),%eax
 86009ef:	89 45 c0             	mov    %eax,-0x40(%ebp)
 86009f2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86009f9:	e9 b0 00 00 00       	jmp    8600aae <_ZN27CSharedServerMessageManager21SendServerMessageInfoEP5CUserP24SIG_EVENT_SERVER_MESSAGEc+0x1d6>
 86009fe:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8600a01:	89 04 24             	mov    %eax,(%esp)
 8600a04:	e8 79 11 00 00       	call   8601b82 <_ZNK9__gnu_cxx17__normal_iteratorIP16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEdeEv>
 8600a09:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8600a0c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8600a0f:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8600a13:	0f b6 c0             	movzbl %al,%eax
 8600a16:	89 44 24 04          	mov    %eax,0x4(%esp)
 8600a1a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8600a1d:	89 04 24             	mov    %eax,(%esp)
 8600a20:	e8 fb ae ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8600a25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8600a28:	8b 40 04             	mov    0x4(%eax),%eax
 8600a2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8600a2f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8600a32:	89 04 24             	mov    %eax,(%esp)
 8600a35:	e8 02 af ac ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8600a3a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8600a3d:	8b 40 04             	mov    0x4(%eax),%eax
 8600a40:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8600a43:	83 c2 08             	add    $0x8,%edx
 8600a46:	89 44 24 08          	mov    %eax,0x8(%esp)
 8600a4a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8600a4e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8600a51:	89 04 24             	mov    %eax,(%esp)
 8600a54:	e8 8b 69 bb ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 8600a59:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8600a5c:	8b 40 3c             	mov    0x3c(%eax),%eax
 8600a5f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8600a63:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8600a66:	89 04 24             	mov    %eax,(%esp)
 8600a69:	e8 ce ae ac ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8600a6e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8600a71:	8b 40 3c             	mov    0x3c(%eax),%eax
 8600a74:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8600a77:	83 c2 40             	add    $0x40,%edx
 8600a7a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8600a7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8600a82:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8600a85:	89 04 24             	mov    %eax,(%esp)
 8600a88:	e8 57 69 bb ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 8600a8d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8600a90:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8600a97:	00 
 8600a98:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8600a9b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8600a9f:	89 04 24             	mov    %eax,(%esp)
 8600aa2:	e8 e5 10 00 00       	call   8601b8c <_ZN9__gnu_cxx17__normal_iteratorIP16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEppEi>
 8600aa7:	83 ec 04             	sub    $0x4,%esp
 8600aaa:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8600aae:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 8600ab2:	0f b6 c0             	movzbl %al,%eax
 8600ab5:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8600ab8:	7f 2e                	jg     8600ae8 <_ZN27CSharedServerMessageManager21SendServerMessageInfoEP5CUserP24SIG_EVENT_SERVER_MESSAGEc+0x210>
 8600aba:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8600abd:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8600ac0:	83 c2 04             	add    $0x4,%edx
 8600ac3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8600ac7:	89 04 24             	mov    %eax,(%esp)
 8600aca:	e8 6b 09 ef ff       	call   84f143a <_ZNSt6vectorI16stSERVER_MESSAGESaIS0_EE3endEv>
 8600acf:	83 ec 04             	sub    $0x4,%esp
 8600ad2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8600ad5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8600ad9:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8600adc:	89 04 24             	mov    %eax,(%esp)
 8600adf:	e8 72 10 00 00       	call   8601b56 <_ZN9__gnu_cxxneIP16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8600ae4:	84 c0                	test   %al,%al
 8600ae6:	74 07                	je     8600aef <_ZN27CSharedServerMessageManager21SendServerMessageInfoEP5CUserP24SIG_EVENT_SERVER_MESSAGEc+0x217>
 8600ae8:	b8 01 00 00 00       	mov    $0x1,%eax
 8600aed:	eb 05                	jmp    8600af4 <_ZN27CSharedServerMessageManager21SendServerMessageInfoEP5CUserP24SIG_EVENT_SERVER_MESSAGEc+0x21c>
 8600aef:	b8 00 00 00 00       	mov    $0x0,%eax
 8600af4:	84 c0                	test   %al,%al
 8600af6:	0f 85 02 ff ff ff    	jne    86009fe <_ZN27CSharedServerMessageManager21SendServerMessageInfoEP5CUserP24SIG_EVENT_SERVER_MESSAGEc+0x126>
 8600afc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8600b03:	00 
 8600b04:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8600b07:	89 04 24             	mov    %eax,(%esp)
 8600b0a:	e8 49 ae ac ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8600b0f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8600b12:	89 44 24 04          	mov    %eax,0x4(%esp)
 8600b16:	8b 45 0c             	mov    0xc(%ebp),%eax
 8600b19:	89 04 24             	mov    %eax,(%esp)
 8600b1c:	e8 99 7a 04 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8600b21:	bb 01 00 00 00       	mov    $0x1,%ebx
 8600b26:	eb 15                	jmp    8600b3d <_ZN27CSharedServerMessageManager21SendServerMessageInfoEP5CUserP24SIG_EVENT_SERVER_MESSAGEc+0x265>
 8600b28:	89 d3                	mov    %edx,%ebx
 8600b2a:	89 c6                	mov    %eax,%esi
 8600b2c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8600b2f:	89 04 24             	mov    %eax,(%esp)
 8600b32:	e8 f9 0e 00 00       	call   8601a30 <_ZN20EVENT_SERVER_MESSAGED1Ev>
 8600b37:	89 f0                	mov    %esi,%eax
 8600b39:	89 da                	mov    %ebx,%edx
 8600b3b:	eb 22                	jmp    8600b5f <_ZN27CSharedServerMessageManager21SendServerMessageInfoEP5CUserP24SIG_EVENT_SERVER_MESSAGEc+0x287>
 8600b3d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8600b40:	89 04 24             	mov    %eax,(%esp)
 8600b43:	e8 e8 0e 00 00       	call   8601a30 <_ZN20EVENT_SERVER_MESSAGED1Ev>
 8600b48:	85 db                	test   %ebx,%ebx
 8600b4a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8600b4d:	89 04 24             	mov    %eax,(%esp)
 8600b50:	e8 2b d3 f8 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8600b55:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8600b58:	83 c4 00             	add    $0x0,%esp
 8600b5b:	5b                   	pop    %ebx
 8600b5c:	5e                   	pop    %esi
 8600b5d:	5d                   	pop    %ebp
 8600b5e:	c3                   	ret
 8600b5f:	89 d3                	mov    %edx,%ebx
 8600b61:	89 c6                	mov    %eax,%esi
 8600b63:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8600b66:	89 04 24             	mov    %eax,(%esp)
 8600b69:	e8 12 d3 f8 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8600b6e:	89 f0                	mov    %esi,%eax
 8600b70:	89 da                	mov    %ebx,%edx
 8600b72:	89 04 24             	mov    %eax,(%esp)
 8600b75:	e8 d6 2b 4e 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CSharedServerMessageManager::SendServerMessageInfo @ 0x86008d8

/* CSharedServerMessageManager::SendServerMessageInfo(CUser*, SIG_EVENT_SERVER_MESSAGE*, char) */

void __thiscall
CSharedServerMessageManager::SendServerMessageInfo
          (CSharedServerMessageManager *this,CUser *param_1,SIG_EVENT_SERVER_MESSAGE *param_2,
          char param_3)

{
  char cVar1;
  bool bVar2;
  __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
  local_44 [4];
  EVENT_SERVER_MESSAGE local_40 [4];
  vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>> avStack_3c [12];
  PacketGuard local_30 [12];
  __normal_iterator local_24 [4];
  __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
  local_20 [4];
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 08600907 to 08600930 has its CatchHandler @ 08600b5f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0xc0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)param_3);
  local_1c = 0;
  EVENT_SERVER_MESSAGE::EVENT_SERVER_MESSAGE(local_40);
  local_40[0] = (EVENT_SERVER_MESSAGE)0x0;
  for (local_18 = 0; local_18 < (int)(uint)(byte)*param_2; local_18 = local_18 + 1) {
                    /* try { // try from 08600959 to 08600b20 has its CatchHandler @ 08600b28 */
    cVar1 = CSharedServerMessageAdapter::IsOnIndex
                      ((CSharedServerMessageAdapter *)this,(uint)(byte)param_2[local_18 * 0x58 + 5])
    ;
    if (cVar1 != '\0') {
      local_40[0] = (EVENT_SERVER_MESSAGE)((char)local_40[0] + 1);
      std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::push_back
                (avStack_3c,(stSERVER_MESSAGE *)(param_2 + local_18 * 0x58 + 4));
    }
  }
  if ((byte)local_40[0] < 0x33) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)(byte)local_40[0]);
    __gnu_cxx::
    __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
    ::__normal_iterator(local_44);
    std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::begin();
    local_14 = 0;
    do {
      if (local_14 < (int)(uint)(byte)local_40[0]) {
LAB_08600ae8:
        bVar2 = true;
      }
      else {
        std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::end();
        bVar2 = __gnu_cxx::operator!=(local_44,local_24);
        if (bVar2) goto LAB_08600ae8;
        bVar2 = false;
      }
      if (!bVar2) goto code_r0x08600afc;
      local_10 = __gnu_cxx::
                 __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                 ::operator*(local_44);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)*(byte *)(local_10 + 1));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*(int *)(local_10 + 4));
      InterfacePacketBuf::put_str
                ((InterfacePacketBuf *)local_30,(char *)(local_10 + 8),*(int *)(local_10 + 4));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*(int *)(local_10 + 0x3c));
      InterfacePacketBuf::put_str
                ((InterfacePacketBuf *)local_30,(char *)(local_10 + 0x40),*(int *)(local_10 + 0x3c))
      ;
      __gnu_cxx::
      __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
      ::operator++(local_20,(int)local_44);
      local_14 = local_14 + 1;
    } while( true );
  }
LAB_08600b3d:
                    /* try { // try from 08600b43 to 08600b47 has its CatchHandler @ 08600b5f */
  EVENT_SERVER_MESSAGE::~EVENT_SERVER_MESSAGE(local_40);
  PacketGuard::~PacketGuard(local_30);
  return;
code_r0x08600afc:
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  CUser::Send(param_1,local_30);
  goto LAB_08600b3d;
}

```

---

## SetServerMessage

```asm
// === 08600b7a CSharedServerMessageManager::SetServerMessage  [0x08600b7a-0x8600c33] ===
 8600b7a:	55                   	push   %ebp
 8600b7b:	89 e5                	mov    %esp,%ebp
 8600b7d:	83 ec 28             	sub    $0x28,%esp
 8600b80:	8b 45 08             	mov    0x8(%ebp),%eax
 8600b83:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8600b87:	83 f0 01             	xor    $0x1,%eax
 8600b8a:	84 c0                	test   %al,%al
 8600b8c:	0f 84 92 00 00 00    	je     8600c24 <_ZN27CSharedServerMessageManager16SetServerMessageEP24SIG_EVENT_SERVER_MESSAGE+0xaa>
 8600b92:	8b 45 0c             	mov    0xc(%ebp),%eax
 8600b95:	0f b6 00             	movzbl (%eax),%eax
 8600b98:	84 c0                	test   %al,%al
 8600b9a:	0f 84 91 00 00 00    	je     8600c31 <_ZN27CSharedServerMessageManager16SetServerMessageEP24SIG_EVENT_SERVER_MESSAGE+0xb7>
 8600ba0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8600ba3:	0f b6 10             	movzbl (%eax),%edx
 8600ba6:	8b 45 08             	mov    0x8(%ebp),%eax
 8600ba9:	88 50 08             	mov    %dl,0x8(%eax)
 8600bac:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8600bb3:	eb 46                	jmp    8600bfb <_ZN27CSharedServerMessageManager16SetServerMessageEP24SIG_EVENT_SERVER_MESSAGE+0x81>
 8600bb5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8600bb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8600bbb:	6b d2 58             	imul   $0x58,%edx,%edx
 8600bbe:	0f b6 44 02 05       	movzbl 0x5(%edx,%eax,1),%eax
 8600bc3:	0f b6 d0             	movzbl %al,%edx
 8600bc6:	8b 45 08             	mov    0x8(%ebp),%eax
 8600bc9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8600bcd:	89 04 24             	mov    %eax,(%esp)
 8600bd0:	e8 2b 0b 00 00       	call   8601700 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter9IsOnIndexEi>
 8600bd5:	84 c0                	test   %al,%al
 8600bd7:	74 1e                	je     8600bf7 <_ZN27CSharedServerMessageManager16SetServerMessageEP24SIG_EVENT_SERVER_MESSAGE+0x7d>
 8600bd9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8600bdc:	6b c0 58             	imul   $0x58,%eax,%eax
 8600bdf:	03 45 0c             	add    0xc(%ebp),%eax
 8600be2:	8d 50 04             	lea    0x4(%eax),%edx
 8600be5:	8b 45 08             	mov    0x8(%ebp),%eax
 8600be8:	83 c0 0c             	add    $0xc,%eax
 8600beb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8600bef:	89 04 24             	mov    %eax,(%esp)
 8600bf2:	e8 dd 0e 00 00       	call   8601ad4 <_ZNSt6vectorI16stSERVER_MESSAGESaIS0_EE9push_backERKS0_>
 8600bf7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8600bfb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8600bfe:	0f b6 00             	movzbl (%eax),%eax
 8600c01:	0f b6 c0             	movzbl %al,%eax
 8600c04:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8600c07:	0f 9f c0             	setg   %al
 8600c0a:	84 c0                	test   %al,%al
 8600c0c:	75 a7                	jne    8600bb5 <_ZN27CSharedServerMessageManager16SetServerMessageEP24SIG_EVENT_SERVER_MESSAGE+0x3b>
 8600c0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8600c11:	83 c0 0c             	add    $0xc,%eax
 8600c14:	89 04 24             	mov    %eax,(%esp)
 8600c17:	e8 be 07 ef ff       	call   84f13da <_ZNKSt6vectorI16stSERVER_MESSAGESaIS0_EE4sizeEv>
 8600c1c:	89 c2                	mov    %eax,%edx
 8600c1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8600c21:	88 50 08             	mov    %dl,0x8(%eax)
 8600c24:	8b 45 08             	mov    0x8(%ebp),%eax
 8600c27:	89 04 24             	mov    %eax,(%esp)
 8600c2a:	e8 df 0d 00 00       	call   8601a0e <_ZN27CSharedServerMessageManager18setLoadingCompleteEv>
 8600c2f:	eb 01                	jmp    8600c32 <_ZN27CSharedServerMessageManager16SetServerMessageEP24SIG_EVENT_SERVER_MESSAGE+0xb8>
 8600c31:	90                   	nop
 8600c32:	c9                   	leave
 8600c33:	c3                   	ret

```

```c
// CSharedServerMessageManager::SetServerMessage @ 0x8600b7a

/* CSharedServerMessageManager::SetServerMessage(SIG_EVENT_SERVER_MESSAGE*) */

void __thiscall
CSharedServerMessageManager::SetServerMessage
          (CSharedServerMessageManager *this,SIG_EVENT_SERVER_MESSAGE *param_1)

{
  char cVar1;
  CSharedServerMessageManager CVar2;
  int local_10;
  
  if (this[4] != (CSharedServerMessageManager)0x1) {
    if (*param_1 == (SIG_EVENT_SERVER_MESSAGE)0x0) {
      return;
    }
    this[8] = *(CSharedServerMessageManager *)param_1;
    for (local_10 = 0; local_10 < (int)(uint)(byte)*param_1; local_10 = local_10 + 1) {
      cVar1 = CSharedServerMessageAdapter::IsOnIndex
                        ((CSharedServerMessageAdapter *)this,
                         (uint)(byte)param_1[local_10 * 0x58 + 5]);
      if (cVar1 != '\0') {
        std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::push_back
                  ((vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>> *)(this + 0xc),
                   (stSERVER_MESSAGE *)(param_1 + local_10 * 0x58 + 4));
      }
    }
    CVar2 = (CSharedServerMessageManager)
            std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::size
                      ((vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>> *)(this + 0xc));
    this[8] = CVar2;
  }
  setLoadingComplete(this);
  return;
}

```

---

## UpdateServerMessage

```asm
// === 08600ec0 CSharedServerMessageManager::UpdateServerMessage  [0x08600ec0-0x8601475] ===
 8600ec0:	55                   	push   %ebp
 8600ec1:	89 e5                	mov    %esp,%ebp
 8600ec3:	56                   	push   %esi
 8600ec4:	53                   	push   %ebx
 8600ec5:	81 ec b0 00 00 00    	sub    $0xb0,%esp
 8600ecb:	8b 45 10             	mov    0x10(%ebp),%eax
 8600ece:	89 44 24 04          	mov    %eax,0x4(%esp)
 8600ed2:	8b 45 08             	mov    0x8(%ebp),%eax
 8600ed5:	89 04 24             	mov    %eax,(%esp)
 8600ed8:	e8 57 fd ff ff       	call   8600c34 <_ZN27CSharedServerMessageManager13getCurMessageEi>
 8600edd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8600ee0:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8600ee4:	0f 85 28 01 00 00    	jne    8601012 <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x152>
 8600eea:	8b 45 08             	mov    0x8(%ebp),%eax
 8600eed:	8b 55 10             	mov    0x10(%ebp),%edx
 8600ef0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8600ef4:	89 04 24             	mov    %eax,(%esp)
 8600ef7:	e8 04 08 00 00       	call   8601700 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter9IsOnIndexEi>
 8600efc:	84 c0                	test   %al,%al
 8600efe:	0f 84 d3 00 00 00    	je     8600fd7 <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x117>
 8600f04:	8b 45 08             	mov    0x8(%ebp),%eax
 8600f07:	8b 55 10             	mov    0x10(%ebp),%edx
 8600f0a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8600f0e:	89 04 24             	mov    %eax,(%esp)
 8600f11:	e8 7e 08 00 00       	call   8601794 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter21GetShareKindWithIndexEi>
 8600f16:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8600f19:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 8600f1d:	0f 84 33 05 00 00    	je     8601456 <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x596>
 8600f23:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8600f26:	88 85 74 ff ff ff    	mov    %al,-0x8c(%ebp)
 8600f2c:	8b 45 10             	mov    0x10(%ebp),%eax
 8600f2f:	88 85 75 ff ff ff    	mov    %al,-0x8b(%ebp)
 8600f35:	8b 45 18             	mov    0x18(%ebp),%eax
 8600f38:	89 04 24             	mov    %eax,(%esp)
 8600f3b:	e8 70 d4 a7 ff       	call   807e3b0 <strlen@plt>
 8600f40:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8600f43:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8600f46:	83 c0 01             	add    $0x1,%eax
 8600f49:	89 44 24 08          	mov    %eax,0x8(%esp)
 8600f4d:	8b 45 18             	mov    0x18(%ebp),%eax
 8600f50:	89 44 24 04          	mov    %eax,0x4(%esp)
 8600f54:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8600f5a:	83 c0 40             	add    $0x40,%eax
 8600f5d:	89 04 24             	mov    %eax,(%esp)
 8600f60:	e8 6b c9 a7 ff       	call   807d8d0 <strncpy@plt>
 8600f65:	8b 45 14             	mov    0x14(%ebp),%eax
 8600f68:	89 04 24             	mov    %eax,(%esp)
 8600f6b:	e8 40 d4 a7 ff       	call   807e3b0 <strlen@plt>
 8600f70:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8600f76:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8600f7c:	83 c0 01             	add    $0x1,%eax
 8600f7f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8600f83:	8b 45 14             	mov    0x14(%ebp),%eax
 8600f86:	89 44 24 04          	mov    %eax,0x4(%esp)
 8600f8a:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8600f90:	83 c0 08             	add    $0x8,%eax
 8600f93:	89 04 24             	mov    %eax,(%esp)
 8600f96:	e8 35 c9 a7 ff       	call   807d8d0 <strncpy@plt>
 8600f9b:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8600f9e:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8600fa1:	8b 45 08             	mov    0x8(%ebp),%eax
 8600fa4:	8d 50 0c             	lea    0xc(%eax),%edx
 8600fa7:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8600fad:	89 44 24 04          	mov    %eax,0x4(%esp)
 8600fb1:	89 14 24             	mov    %edx,(%esp)
 8600fb4:	e8 1b 0b 00 00       	call   8601ad4 <_ZNSt6vectorI16stSERVER_MESSAGESaIS0_EE9push_backERKS0_>
 8600fb9:	8b 45 08             	mov    0x8(%ebp),%eax
 8600fbc:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8600fc0:	8d 50 01             	lea    0x1(%eax),%edx
 8600fc3:	8b 45 08             	mov    0x8(%ebp),%eax
 8600fc6:	88 50 08             	mov    %dl,0x8(%eax)
 8600fc9:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8600fcf:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8600fd2:	e9 aa 00 00 00       	jmp    8601081 <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x1c1>
 8600fd7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8600fde:	00 
 8600fdf:	c7 44 24 08 26 01 00 	movl   $0x126,0x8(%esp)
 8600fe6:	00 
 8600fe7:	c7 44 24 04 e0 90 cd 	movl   $0x8cd90e0,0x4(%esp)
 8600fee:	08 
 8600fef:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8600ff2:	89 04 24             	mov    %eax,(%esp)
 8600ff5:	e8 1e e7 f4 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8600ffa:	c7 44 24 04 04 84 cd 	movl   $0x8cd8404,0x4(%esp)
 8601001:	08 
 8601002:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8601005:	89 04 24             	mov    %eax,(%esp)
 8601008:	e8 7b e7 f4 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 860100d:	e9 5a 04 00 00       	jmp    860146c <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x5ac>
 8601012:	8b 45 14             	mov    0x14(%ebp),%eax
 8601015:	89 04 24             	mov    %eax,(%esp)
 8601018:	e8 93 d3 a7 ff       	call   807e3b0 <strlen@plt>
 860101d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8601020:	89 42 04             	mov    %eax,0x4(%edx)
 8601023:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8601026:	8b 40 04             	mov    0x4(%eax),%eax
 8601029:	83 c0 01             	add    $0x1,%eax
 860102c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 860102f:	83 c2 08             	add    $0x8,%edx
 8601032:	89 44 24 08          	mov    %eax,0x8(%esp)
 8601036:	8b 45 14             	mov    0x14(%ebp),%eax
 8601039:	89 44 24 04          	mov    %eax,0x4(%esp)
 860103d:	89 14 24             	mov    %edx,(%esp)
 8601040:	e8 8b c8 a7 ff       	call   807d8d0 <strncpy@plt>
 8601045:	8b 45 18             	mov    0x18(%ebp),%eax
 8601048:	89 04 24             	mov    %eax,(%esp)
 860104b:	e8 60 d3 a7 ff       	call   807e3b0 <strlen@plt>
 8601050:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8601053:	89 42 3c             	mov    %eax,0x3c(%edx)
 8601056:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8601059:	8b 40 3c             	mov    0x3c(%eax),%eax
 860105c:	83 c0 01             	add    $0x1,%eax
 860105f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8601062:	83 c2 40             	add    $0x40,%edx
 8601065:	89 44 24 08          	mov    %eax,0x8(%esp)
 8601069:	8b 45 18             	mov    0x18(%ebp),%eax
 860106c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8601070:	89 14 24             	mov    %edx,(%esp)
 8601073:	e8 58 c8 a7 ff       	call   807d8d0 <strncpy@plt>
 8601078:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 860107b:	8b 55 1c             	mov    0x1c(%ebp),%edx
 860107e:	89 50 54             	mov    %edx,0x54(%eax)
 8601081:	8b 45 08             	mov    0x8(%ebp),%eax
 8601084:	89 04 24             	mov    %eax,(%esp)
 8601087:	e8 f6 c0 ee ff       	call   84ed182 <_ZN27CSharedServerMessageManager18IsSetServerMessageEv>
 860108c:	83 f0 01             	xor    $0x1,%eax
 860108f:	84 c0                	test   %al,%al
 8601091:	74 0b                	je     860109e <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x1de>
 8601093:	8b 45 08             	mov    0x8(%ebp),%eax
 8601096:	89 04 24             	mov    %eax,(%esp)
 8601099:	e8 70 09 00 00       	call   8601a0e <_ZN27CSharedServerMessageManager18setLoadingCompleteEv>
 860109e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86010a1:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 86010a5:	0f b6 d0             	movzbl %al,%edx
 86010a8:	8b 45 08             	mov    0x8(%ebp),%eax
 86010ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 86010af:	89 04 24             	mov    %eax,(%esp)
 86010b2:	e8 89 05 00 00       	call   8601640 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter16GetMappedEventIDEi>
 86010b7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 86010ba:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 86010c1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86010c4:	83 f8 02             	cmp    $0x2,%eax
 86010c7:	0f 84 50 01 00 00    	je     860121d <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x35d>
 86010cd:	83 f8 03             	cmp    $0x3,%eax
 86010d0:	74 0d                	je     86010df <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x21f>
 86010d2:	85 c0                	test   %eax,%eax
 86010d4:	0f 84 a4 00 00 00    	je     860117e <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x2be>
 86010da:	e9 de 01 00 00       	jmp    86012bd <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x3fd>
 86010df:	8b 45 0c             	mov    0xc(%ebp),%eax
 86010e2:	89 04 24             	mov    %eax,(%esp)
 86010e5:	e8 94 91 ad ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 86010ea:	c7 44 24 04 aa d3 28 	movl   $0x28d3aa,0x4(%esp)
 86010f1:	00 
 86010f2:	89 04 24             	mov    %eax,(%esp)
 86010f5:	e8 78 40 f0 ff       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 86010fa:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86010fd:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
 8601101:	0f 84 52 03 00 00    	je     8601459 <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x599>
 8601107:	8b 45 0c             	mov    0xc(%ebp),%eax
 860110a:	89 04 24             	mov    %eax,(%esp)
 860110d:	e8 7c 91 ad ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8601112:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8601119:	00 
 860111a:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 8601121:	00 
 8601122:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8601129:	00 
 860112a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 860112d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8601131:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8601138:	00 
 8601139:	89 04 24             	mov    %eax,(%esp)
 860113c:	e8 cb 2e f0 ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8601141:	83 f0 01             	xor    $0x1,%eax
 8601144:	84 c0                	test   %al,%al
 8601146:	0f 85 10 03 00 00    	jne    860145c <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x59c>
 860114c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 860114f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8601153:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 860115a:	00 
 860115b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8601162:	00 
 8601163:	8b 45 0c             	mov    0xc(%ebp),%eax
 8601166:	89 04 24             	mov    %eax,(%esp)
 8601169:	e8 6a b1 07 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 860116e:	83 f0 01             	xor    $0x1,%eax
 8601171:	84 c0                	test   %al,%al
 8601173:	0f 84 40 01 00 00    	je     86012b9 <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x3f9>
 8601179:	e9 ee 02 00 00       	jmp    860146c <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x5ac>
 860117e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8601181:	89 04 24             	mov    %eax,(%esp)
 8601184:	e8 f5 90 ad ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8601189:	c7 44 24 04 aa d3 28 	movl   $0x28d3aa,0x4(%esp)
 8601190:	00 
 8601191:	89 04 24             	mov    %eax,(%esp)
 8601194:	e8 d9 3f f0 ff       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 8601199:	89 45 ec             	mov    %eax,-0x14(%ebp)
 860119c:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
 86011a0:	0f 84 b9 02 00 00    	je     860145f <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x59f>
 86011a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 86011a9:	89 04 24             	mov    %eax,(%esp)
 86011ac:	e8 dd 90 ad ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86011b1:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 86011b8:	00 
 86011b9:	c7 44 24 10 1d 00 00 	movl   $0x1d,0x10(%esp)
 86011c0:	00 
 86011c1:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 86011c8:	00 
 86011c9:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86011cc:	89 54 24 08          	mov    %edx,0x8(%esp)
 86011d0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86011d7:	00 
 86011d8:	89 04 24             	mov    %eax,(%esp)
 86011db:	e8 2c 2e f0 ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 86011e0:	83 f0 01             	xor    $0x1,%eax
 86011e3:	84 c0                	test   %al,%al
 86011e5:	0f 85 77 02 00 00    	jne    8601462 <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x5a2>
 86011eb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86011ee:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86011f2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86011f9:	00 
 86011fa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8601201:	00 
 8601202:	8b 45 0c             	mov    0xc(%ebp),%eax
 8601205:	89 04 24             	mov    %eax,(%esp)
 8601208:	e8 cb b0 07 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 860120d:	83 f0 01             	xor    $0x1,%eax
 8601210:	84 c0                	test   %al,%al
 8601212:	0f 84 a4 00 00 00    	je     86012bc <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x3fc>
 8601218:	e9 4f 02 00 00       	jmp    860146c <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x5ac>
 860121d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8601220:	89 04 24             	mov    %eax,(%esp)
 8601223:	e8 56 90 ad ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8601228:	c7 44 24 04 9d 1d 00 	movl   $0x1d9d,0x4(%esp)
 860122f:	00 
 8601230:	89 04 24             	mov    %eax,(%esp)
 8601233:	e8 3a 3f f0 ff       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 8601238:	89 45 ec             	mov    %eax,-0x14(%ebp)
 860123b:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
 860123f:	0f 84 20 02 00 00    	je     8601465 <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x5a5>
 8601245:	8b 45 0c             	mov    0xc(%ebp),%eax
 8601248:	89 04 24             	mov    %eax,(%esp)
 860124b:	e8 3e 90 ad ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8601250:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8601257:	00 
 8601258:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 860125f:	00 
 8601260:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8601267:	00 
 8601268:	8b 55 ec             	mov    -0x14(%ebp),%edx
 860126b:	89 54 24 08          	mov    %edx,0x8(%esp)
 860126f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8601276:	00 
 8601277:	89 04 24             	mov    %eax,(%esp)
 860127a:	e8 8d 2d f0 ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 860127f:	83 f0 01             	xor    $0x1,%eax
 8601282:	84 c0                	test   %al,%al
 8601284:	0f 85 de 01 00 00    	jne    8601468 <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x5a8>
 860128a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 860128d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8601291:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8601298:	00 
 8601299:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86012a0:	00 
 86012a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 86012a4:	89 04 24             	mov    %eax,(%esp)
 86012a7:	e8 2c b0 07 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 86012ac:	83 f0 01             	xor    $0x1,%eax
 86012af:	84 c0                	test   %al,%al
 86012b1:	0f 85 b4 01 00 00    	jne    860146b <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x5ab>
 86012b7:	eb 04                	jmp    86012bd <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x3fd>
 86012b9:	90                   	nop
 86012ba:	eb 01                	jmp    86012bd <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x3fd>
 86012bc:	90                   	nop
 86012bd:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 86012c2:	c7 44 24 08 6c 01 00 	movl   $0x16c,0x8(%esp)
 86012c9:	00 
 86012ca:	c7 44 24 04 38 84 cd 	movl   $0x8cd8438,0x4(%esp)
 86012d1:	08 
 86012d2:	89 04 24             	mov    %eax,(%esp)
 86012d5:	e8 ac e7 c8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 86012da:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86012e1:	00 
 86012e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86012e6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86012e9:	89 04 24             	mov    %eax,(%esp)
 86012ec:	e8 35 79 ac ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 86012f1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86012f4:	89 04 24             	mov    %eax,(%esp)
 86012f7:	e8 4a 79 ac ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 86012fc:	c7 44 24 04 6c 01 00 	movl   $0x16c,0x4(%esp)
 8601303:	00 
 8601304:	89 04 24             	mov    %eax,(%esp)
 8601307:	e8 4a 79 ac ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860130c:	8b 45 0c             	mov    0xc(%ebp),%eax
 860130f:	89 04 24             	mov    %eax,(%esp)
 8601312:	e8 7f 79 ac ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8601317:	89 c3                	mov    %eax,%ebx
 8601319:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860131c:	89 04 24             	mov    %eax,(%esp)
 860131f:	e8 22 79 ac ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8601324:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8601328:	89 04 24             	mov    %eax,(%esp)
 860132b:	e8 26 79 ac ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8601330:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8601333:	89 04 24             	mov    %eax,(%esp)
 8601336:	e8 13 79 ac ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 860133b:	89 04 24             	mov    %eax,(%esp)
 860133e:	e8 6f 1e e5 ff       	call   84531b2 <_ZN12CStreamGuard11GetInBufferI25SIG_UPDATE_SERVER_MESSAGEEEPT_v>
 8601343:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8601346:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8601349:	0f b6 50 01          	movzbl 0x1(%eax),%edx
 860134d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8601350:	88 50 09             	mov    %dl,0x9(%eax)
 8601353:	e8 29 ae ac ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8601358:	8b 90 78 03 00 00    	mov    0x378(%eax),%edx
 860135e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8601361:	89 10                	mov    %edx,(%eax)
 8601363:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8601366:	0f b6 00             	movzbl (%eax),%eax
 8601369:	84 c0                	test   %al,%al
 860136b:	75 15                	jne    8601382 <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x4c2>
 860136d:	e8 0f ae ac ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8601372:	89 04 24             	mov    %eax,(%esp)
 8601375:	e8 50 97 b4 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 860137a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 860137d:	89 42 04             	mov    %eax,0x4(%edx)
 8601380:	eb 14                	jmp    8601396 <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x4d6>
 8601382:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8601385:	0f b6 00             	movzbl (%eax),%eax
 8601388:	3c 01                	cmp    $0x1,%al
 860138a:	75 0a                	jne    8601396 <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x4d6>
 860138c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860138f:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8601396:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8601399:	0f b6 10             	movzbl (%eax),%edx
 860139c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860139f:	88 50 08             	mov    %dl,0x8(%eax)
 86013a2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86013a5:	8b 50 3c             	mov    0x3c(%eax),%edx
 86013a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86013ab:	89 50 44             	mov    %edx,0x44(%eax)
 86013ae:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86013b1:	8b 50 04             	mov    0x4(%eax),%edx
 86013b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86013b7:	89 50 0c             	mov    %edx,0xc(%eax)
 86013ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86013bd:	8b 40 0c             	mov    0xc(%eax),%eax
 86013c0:	8d 48 01             	lea    0x1(%eax),%ecx
 86013c3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86013c6:	8d 50 08             	lea    0x8(%eax),%edx
 86013c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86013cc:	83 c0 10             	add    $0x10,%eax
 86013cf:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86013d3:	89 54 24 04          	mov    %edx,0x4(%esp)
 86013d7:	89 04 24             	mov    %eax,(%esp)
 86013da:	e8 f1 c4 a7 ff       	call   807d8d0 <strncpy@plt>
 86013df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86013e2:	8b 40 44             	mov    0x44(%eax),%eax
 86013e5:	8d 48 01             	lea    0x1(%eax),%ecx
 86013e8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86013eb:	8d 50 40             	lea    0x40(%eax),%edx
 86013ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86013f1:	83 c0 48             	add    $0x48,%eax
 86013f4:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86013f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 86013fc:	89 04 24             	mov    %eax,(%esp)
 86013ff:	e8 cc c4 a7 ff       	call   807d8d0 <strncpy@plt>
 8601404:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8601407:	8b 50 54             	mov    0x54(%eax),%edx
 860140a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860140d:	89 50 5c             	mov    %edx,0x5c(%eax)
 8601410:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8601415:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8601418:	89 54 24 08          	mov    %edx,0x8(%esp)
 860141c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8601423:	00 
 8601424:	89 04 24             	mov    %eax,(%esp)
 8601427:	e8 b2 fb f6 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 860142c:	eb 1b                	jmp    8601449 <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x589>
 860142e:	89 d3                	mov    %edx,%ebx
 8601430:	89 c6                	mov    %eax,%esi
 8601432:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8601435:	89 04 24             	mov    %eax,(%esp)
 8601438:	e8 95 b4 01 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860143d:	89 f0                	mov    %esi,%eax
 860143f:	89 da                	mov    %ebx,%edx
 8601441:	89 04 24             	mov    %eax,(%esp)
 8601444:	e8 07 23 4e 00       	call   8ae3750 <_Unwind_Resume>
 8601449:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860144c:	89 04 24             	mov    %eax,(%esp)
 860144f:	e8 7e b4 01 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8601454:	eb 16                	jmp    860146c <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x5ac>
 8601456:	90                   	nop
 8601457:	eb 13                	jmp    860146c <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x5ac>
 8601459:	90                   	nop
 860145a:	eb 10                	jmp    860146c <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x5ac>
 860145c:	90                   	nop
 860145d:	eb 0d                	jmp    860146c <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x5ac>
 860145f:	90                   	nop
 8601460:	eb 0a                	jmp    860146c <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x5ac>
 8601462:	90                   	nop
 8601463:	eb 07                	jmp    860146c <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x5ac>
 8601465:	90                   	nop
 8601466:	eb 04                	jmp    860146c <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x5ac>
 8601468:	90                   	nop
 8601469:	eb 01                	jmp    860146c <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i+0x5ac>
 860146b:	90                   	nop
 860146c:	81 c4 b0 00 00 00    	add    $0xb0,%esp
 8601472:	5b                   	pop    %ebx
 8601473:	5e                   	pop    %esi
 8601474:	5d                   	pop    %ebp
 8601475:	c3                   	ret

```

```c
// CSharedServerMessageManager::UpdateServerMessage @ 0x8600ec0

/* CSharedServerMessageManager::UpdateServerMessage(CUser*, int, char*, char*, int) */

void __thiscall
CSharedServerMessageManager::UpdateServerMessage
          (CSharedServerMessageManager *this,CUser *param_1,int param_2,char *param_3,char *param_4,
          int param_5)

{
  char cVar1;
  size_t sVar2;
  CInventory *pCVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  int iVar6;
  CEnvironment *this_00;
  undefined4 uVar7;
  stSERVER_MESSAGE local_90;
  undefined1 local_8f;
  size_t local_8c;
  char local_88 [52];
  size_t local_54;
  char local_50 [20];
  int local_3c;
  CStreamGuard local_38 [8];
  cMyTrace local_30 [16];
  SIG_UPDATE_SERVER_MESSAGE *local_20;
  int local_1c;
  int local_18;
  int local_14;
  SIG_UPDATE_SERVER_MESSAGE *local_10;
  
  local_20 = (SIG_UPDATE_SERVER_MESSAGE *)getCurMessage(this,param_2);
  if (local_20 == (SIG_UPDATE_SERVER_MESSAGE *)0x0) {
    cVar1 = CSharedServerMessageAdapter::IsOnIndex((CSharedServerMessageAdapter *)this,param_2);
    if (cVar1 == '\0') {
      cMyTrace::cMyTrace(local_30,
                         "void CSharedServerMessageManager::UpdateServerMessage(CUser*, int, char*, char*, int)"
                         ,0x126,0);
      cMyTrace::operator()(local_30,"SERVER_MESSAGE : NOT EXIST INDEX and NOT EXIST DATA");
      return;
    }
    local_14 = CSharedServerMessageAdapter::GetShareKindWithIndex
                         ((CSharedServerMessageAdapter *)this,param_2);
    if (local_14 == -1) {
      return;
    }
    local_90 = SUB41(local_14,0);
    local_8f = (undefined1)param_2;
    local_54 = strlen(param_4);
    strncpy(local_50,param_4,local_54 + 1);
    local_8c = strlen(param_3);
    strncpy(local_88,param_3,local_8c + 1);
    local_3c = param_5;
    std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::push_back
              ((vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>> *)(this + 0xc),&local_90);
    this[8] = (CSharedServerMessageManager)((char)this[8] + '\x01');
    local_20 = (SIG_UPDATE_SERVER_MESSAGE *)&local_90;
  }
  else {
    sVar2 = strlen(param_3);
    *(size_t *)(local_20 + 4) = sVar2;
    strncpy((char *)(local_20 + 8),param_3,*(int *)(local_20 + 4) + 1);
    sVar2 = strlen(param_4);
    *(size_t *)(local_20 + 0x3c) = sVar2;
    strncpy((char *)(local_20 + 0x40),param_4,*(int *)(local_20 + 0x3c) + 1);
    *(int *)(local_20 + 0x54) = param_5;
  }
  cVar1 = IsSetServerMessage(this);
  if (cVar1 != '\x01') {
    setLoadingComplete(this);
  }
  local_1c = CSharedServerMessageAdapter::GetMappedEventID
                       ((CSharedServerMessageAdapter *)this,(uint)(byte)local_20[1]);
  local_18 = 0;
  if (local_1c == 2) {
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_18 = CInventory::check_item_exist(pCVar3,0x1d9d);
    if (local_18 == -1) {
      return;
    }
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar1 = CInventory::delete_item(pCVar3,1,local_18,1,3,1);
    if (cVar1 != '\x01') {
      return;
    }
    cVar1 = CUser::SendUpdateItem(param_1,1,0,local_18);
  }
  else if (local_1c == 3) {
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_18 = CInventory::check_item_exist(pCVar3,0x28d3aa);
    if (local_18 == -1) {
      return;
    }
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar1 = CInventory::delete_item(pCVar3,1,local_18,1,3,1);
    if (cVar1 != '\x01') {
      return;
    }
    cVar1 = CUser::SendUpdateItem(param_1,1,0,local_18);
  }
  else {
    if (local_1c != 0) goto LAB_086012bd;
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_18 = CInventory::check_item_exist(pCVar3,0x28d3aa);
    if (local_18 == -1) {
      return;
    }
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar1 = CInventory::delete_item(pCVar3,1,local_18,1,0x1d,1);
    if (cVar1 != '\x01') {
      return;
    }
    cVar1 = CUser::SendUpdateItem(param_1,1,0,local_18);
  }
  if (cVar1 != '\x01') {
    return;
  }
LAB_086012bd:
  pSVar4 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"SharedServerMessageManager.cpp",0x16c);
  CStreamGuard::CStreamGuard(local_38,pSVar4,true);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 08601307 to 0860142b has its CatchHandler @ 0860142e */
  CStreamGuard::operator<<(pCVar5,0x16c);
  iVar6 = CUser::GetUID(param_1);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_38);
  CStreamGuard::operator<<(pCVar5,iVar6);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_38);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_SERVER_MESSAGE>(pCVar5);
  local_10[9] = local_20[1];
  iVar6 = G_CEnvironment();
  *(undefined4 *)local_10 = *(undefined4 *)(iVar6 + 0x378);
  if (*local_20 == (SIG_UPDATE_SERVER_MESSAGE)0x0) {
    this_00 = (CEnvironment *)G_CEnvironment();
    uVar7 = CEnvironment::get_channel_no(this_00);
    *(undefined4 *)(local_10 + 4) = uVar7;
  }
  else if (*local_20 == (SIG_UPDATE_SERVER_MESSAGE)0x1) {
    *(undefined4 *)(local_10 + 4) = 0;
  }
  local_10[8] = *local_20;
  *(undefined4 *)(local_10 + 0x44) = *(undefined4 *)(local_20 + 0x3c);
  *(undefined4 *)(local_10 + 0xc) = *(undefined4 *)(local_20 + 4);
  strncpy((char *)(local_10 + 0x10),(char *)(local_20 + 8),*(int *)(local_10 + 0xc) + 1);
  strncpy((char *)(local_10 + 0x48),(char *)(local_20 + 0x40),*(int *)(local_10 + 0x44) + 1);
  *(undefined4 *)(local_10 + 0x5c) = *(undefined4 *)(local_20 + 0x54);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_38);
  CStreamGuard::~CStreamGuard(local_38);
  return;
}

```

---

## UpdateServerMessageByBroadcast

```asm
// === 08601476 CSharedServerMessageManager::UpdateServerMessageByBroadcast  [0x08601476-0x860163f] ===
 8601476:	55                   	push   %ebp
 8601477:	89 e5                	mov    %esp,%ebp
 8601479:	81 ec 88 00 00 00    	sub    $0x88,%esp
 860147f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8601482:	89 44 24 04          	mov    %eax,0x4(%esp)
 8601486:	8b 45 08             	mov    0x8(%ebp),%eax
 8601489:	89 04 24             	mov    %eax,(%esp)
 860148c:	e8 a3 f7 ff ff       	call   8600c34 <_ZN27CSharedServerMessageManager13getCurMessageEi>
 8601491:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8601494:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8601498:	0f 85 10 01 00 00    	jne    86015ae <_ZN27CSharedServerMessageManager30UpdateServerMessageByBroadcastEiPcS0_i+0x138>
 860149e:	8b 45 08             	mov    0x8(%ebp),%eax
 86014a1:	8b 55 0c             	mov    0xc(%ebp),%edx
 86014a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 86014a8:	89 04 24             	mov    %eax,(%esp)
 86014ab:	e8 50 02 00 00       	call   8601700 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter9IsOnIndexEi>
 86014b0:	84 c0                	test   %al,%al
 86014b2:	0f 84 bb 00 00 00    	je     8601573 <_ZN27CSharedServerMessageManager30UpdateServerMessageByBroadcastEiPcS0_i+0xfd>
 86014b8:	8b 45 08             	mov    0x8(%ebp),%eax
 86014bb:	8b 55 0c             	mov    0xc(%ebp),%edx
 86014be:	89 54 24 04          	mov    %edx,0x4(%esp)
 86014c2:	89 04 24             	mov    %eax,(%esp)
 86014c5:	e8 ca 02 00 00       	call   8601794 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter21GetShareKindWithIndexEi>
 86014ca:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86014cd:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 86014d1:	0f 84 65 01 00 00    	je     860163c <_ZN27CSharedServerMessageManager30UpdateServerMessageByBroadcastEiPcS0_i+0x1c6>
 86014d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86014da:	88 45 88             	mov    %al,-0x78(%ebp)
 86014dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 86014e0:	88 45 89             	mov    %al,-0x77(%ebp)
 86014e3:	8b 45 14             	mov    0x14(%ebp),%eax
 86014e6:	89 04 24             	mov    %eax,(%esp)
 86014e9:	e8 c2 ce a7 ff       	call   807e3b0 <strlen@plt>
 86014ee:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 86014f1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86014f4:	83 c0 01             	add    $0x1,%eax
 86014f7:	89 44 24 08          	mov    %eax,0x8(%esp)
 86014fb:	8b 45 14             	mov    0x14(%ebp),%eax
 86014fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8601502:	8d 45 88             	lea    -0x78(%ebp),%eax
 8601505:	83 c0 40             	add    $0x40,%eax
 8601508:	89 04 24             	mov    %eax,(%esp)
 860150b:	e8 c0 c3 a7 ff       	call   807d8d0 <strncpy@plt>
 8601510:	8b 45 10             	mov    0x10(%ebp),%eax
 8601513:	89 04 24             	mov    %eax,(%esp)
 8601516:	e8 95 ce a7 ff       	call   807e3b0 <strlen@plt>
 860151b:	89 45 8c             	mov    %eax,-0x74(%ebp)
 860151e:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8601521:	83 c0 01             	add    $0x1,%eax
 8601524:	89 44 24 08          	mov    %eax,0x8(%esp)
 8601528:	8b 45 10             	mov    0x10(%ebp),%eax
 860152b:	89 44 24 04          	mov    %eax,0x4(%esp)
 860152f:	8d 45 88             	lea    -0x78(%ebp),%eax
 8601532:	83 c0 08             	add    $0x8,%eax
 8601535:	89 04 24             	mov    %eax,(%esp)
 8601538:	e8 93 c3 a7 ff       	call   807d8d0 <strncpy@plt>
 860153d:	8b 45 18             	mov    0x18(%ebp),%eax
 8601540:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8601543:	8b 45 08             	mov    0x8(%ebp),%eax
 8601546:	8d 50 0c             	lea    0xc(%eax),%edx
 8601549:	8d 45 88             	lea    -0x78(%ebp),%eax
 860154c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8601550:	89 14 24             	mov    %edx,(%esp)
 8601553:	e8 7c 05 00 00       	call   8601ad4 <_ZNSt6vectorI16stSERVER_MESSAGESaIS0_EE9push_backERKS0_>
 8601558:	8b 45 08             	mov    0x8(%ebp),%eax
 860155b:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 860155f:	8d 50 01             	lea    0x1(%eax),%edx
 8601562:	8b 45 08             	mov    0x8(%ebp),%eax
 8601565:	88 50 08             	mov    %dl,0x8(%eax)
 8601568:	8d 45 88             	lea    -0x78(%ebp),%eax
 860156b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 860156e:	e9 aa 00 00 00       	jmp    860161d <_ZN27CSharedServerMessageManager30UpdateServerMessageByBroadcastEiPcS0_i+0x1a7>
 8601573:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 860157a:	00 
 860157b:	c7 44 24 08 c6 01 00 	movl   $0x1c6,0x8(%esp)
 8601582:	00 
 8601583:	c7 44 24 04 80 90 cd 	movl   $0x8cd9080,0x4(%esp)
 860158a:	08 
 860158b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860158e:	89 04 24             	mov    %eax,(%esp)
 8601591:	e8 82 e1 f4 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8601596:	c7 44 24 04 04 84 cd 	movl   $0x8cd8404,0x4(%esp)
 860159d:	08 
 860159e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86015a1:	89 04 24             	mov    %eax,(%esp)
 86015a4:	e8 df e1 f4 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86015a9:	e9 8f 00 00 00       	jmp    860163d <_ZN27CSharedServerMessageManager30UpdateServerMessageByBroadcastEiPcS0_i+0x1c7>
 86015ae:	8b 45 10             	mov    0x10(%ebp),%eax
 86015b1:	89 04 24             	mov    %eax,(%esp)
 86015b4:	e8 f7 cd a7 ff       	call   807e3b0 <strlen@plt>
 86015b9:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86015bc:	89 42 04             	mov    %eax,0x4(%edx)
 86015bf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86015c2:	8b 40 04             	mov    0x4(%eax),%eax
 86015c5:	83 c0 01             	add    $0x1,%eax
 86015c8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86015cb:	83 c2 08             	add    $0x8,%edx
 86015ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 86015d2:	8b 45 10             	mov    0x10(%ebp),%eax
 86015d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86015d9:	89 14 24             	mov    %edx,(%esp)
 86015dc:	e8 ef c2 a7 ff       	call   807d8d0 <strncpy@plt>
 86015e1:	8b 45 14             	mov    0x14(%ebp),%eax
 86015e4:	89 04 24             	mov    %eax,(%esp)
 86015e7:	e8 c4 cd a7 ff       	call   807e3b0 <strlen@plt>
 86015ec:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86015ef:	89 42 3c             	mov    %eax,0x3c(%edx)
 86015f2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86015f5:	8b 40 3c             	mov    0x3c(%eax),%eax
 86015f8:	83 c0 01             	add    $0x1,%eax
 86015fb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86015fe:	83 c2 40             	add    $0x40,%edx
 8601601:	89 44 24 08          	mov    %eax,0x8(%esp)
 8601605:	8b 45 14             	mov    0x14(%ebp),%eax
 8601608:	89 44 24 04          	mov    %eax,0x4(%esp)
 860160c:	89 14 24             	mov    %edx,(%esp)
 860160f:	e8 bc c2 a7 ff       	call   807d8d0 <strncpy@plt>
 8601614:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8601617:	8b 55 18             	mov    0x18(%ebp),%edx
 860161a:	89 50 54             	mov    %edx,0x54(%eax)
 860161d:	8b 45 08             	mov    0x8(%ebp),%eax
 8601620:	89 04 24             	mov    %eax,(%esp)
 8601623:	e8 5a bb ee ff       	call   84ed182 <_ZN27CSharedServerMessageManager18IsSetServerMessageEv>
 8601628:	83 f0 01             	xor    $0x1,%eax
 860162b:	84 c0                	test   %al,%al
 860162d:	74 0e                	je     860163d <_ZN27CSharedServerMessageManager30UpdateServerMessageByBroadcastEiPcS0_i+0x1c7>
 860162f:	8b 45 08             	mov    0x8(%ebp),%eax
 8601632:	89 04 24             	mov    %eax,(%esp)
 8601635:	e8 d4 03 00 00       	call   8601a0e <_ZN27CSharedServerMessageManager18setLoadingCompleteEv>
 860163a:	eb 01                	jmp    860163d <_ZN27CSharedServerMessageManager30UpdateServerMessageByBroadcastEiPcS0_i+0x1c7>
 860163c:	90                   	nop
 860163d:	c9                   	leave
 860163e:	c3                   	ret
 860163f:	90                   	nop

```

```c
// CSharedServerMessageManager::UpdateServerMessageByBroadcast @ 0x8601476

/* CSharedServerMessageManager::UpdateServerMessageByBroadcast(int, char*, char*, int) */

void __thiscall
CSharedServerMessageManager::UpdateServerMessageByBroadcast
          (CSharedServerMessageManager *this,int param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  size_t sVar2;
  stSERVER_MESSAGE local_7c;
  undefined1 local_7b;
  size_t local_78;
  char acStack_74 [52];
  size_t local_40;
  char acStack_3c [20];
  int local_28;
  cMyTrace local_24 [16];
  stSERVER_MESSAGE *local_14;
  int local_10;
  
  local_14 = (stSERVER_MESSAGE *)getCurMessage(this,param_1);
  if (local_14 == (stSERVER_MESSAGE *)0x0) {
    cVar1 = CSharedServerMessageAdapter::IsOnIndex((CSharedServerMessageAdapter *)this,param_1);
    if (cVar1 == '\0') {
      cMyTrace::cMyTrace(local_24,
                         "void CSharedServerMessageManager::UpdateServerMessageByBroadcast(int, char*, char*, int)"
                         ,0x1c6,0);
      cMyTrace::operator()(local_24,"SERVER_MESSAGE : NOT EXIST INDEX and NOT EXIST DATA");
      return;
    }
    local_10 = CSharedServerMessageAdapter::GetShareKindWithIndex
                         ((CSharedServerMessageAdapter *)this,param_1);
    if (local_10 == -1) {
      return;
    }
    local_7c = SUB41(local_10,0);
    local_7b = (undefined1)param_1;
    local_40 = strlen(param_3);
    strncpy(acStack_3c,param_3,local_40 + 1);
    local_78 = strlen(param_2);
    strncpy(acStack_74,param_2,local_78 + 1);
    local_28 = param_4;
    std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::push_back
              ((vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>> *)(this + 0xc),&local_7c);
    this[8] = (CSharedServerMessageManager)((char)this[8] + '\x01');
    local_14 = &local_7c;
  }
  else {
    sVar2 = strlen(param_2);
    *(size_t *)(local_14 + 4) = sVar2;
    strncpy((char *)(local_14 + 8),param_2,*(int *)(local_14 + 4) + 1);
    sVar2 = strlen(param_3);
    *(size_t *)(local_14 + 0x3c) = sVar2;
    strncpy((char *)(local_14 + 0x40),param_3,*(int *)(local_14 + 0x3c) + 1);
    *(int *)(local_14 + 0x54) = param_4;
  }
  cVar1 = IsSetServerMessage(this);
  if (cVar1 != '\x01') {
    setLoadingComplete(this);
  }
  return;
}

```

---

## getCurMessage

```asm
// === 08600c34 CSharedServerMessageManager::getCurMessage  [0x08600c34-0x8600cc7] ===
 8600c34:	55                   	push   %ebp
 8600c35:	89 e5                	mov    %esp,%ebp
 8600c37:	83 ec 28             	sub    $0x28,%esp
 8600c3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8600c3d:	8d 50 0c             	lea    0xc(%eax),%edx
 8600c40:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8600c43:	89 54 24 04          	mov    %edx,0x4(%esp)
 8600c47:	89 04 24             	mov    %eax,(%esp)
 8600c4a:	e8 ad 07 ef ff       	call   84f13fc <_ZNSt6vectorI16stSERVER_MESSAGESaIS0_EE5beginEv>
 8600c4f:	83 ec 04             	sub    $0x4,%esp
 8600c52:	eb 3f                	jmp    8600c93 <_ZN27CSharedServerMessageManager13getCurMessageEi+0x5f>
 8600c54:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8600c57:	89 04 24             	mov    %eax,(%esp)
 8600c5a:	e8 23 0f 00 00       	call   8601b82 <_ZNK9__gnu_cxx17__normal_iteratorIP16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEdeEv>
 8600c5f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8600c62:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8600c65:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8600c69:	0f b6 c0             	movzbl %al,%eax
 8600c6c:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8600c6f:	75 05                	jne    8600c76 <_ZN27CSharedServerMessageManager13getCurMessageEi+0x42>
 8600c71:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8600c74:	eb 50                	jmp    8600cc6 <_ZN27CSharedServerMessageManager13getCurMessageEi+0x92>
 8600c76:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8600c79:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8600c80:	00 
 8600c81:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8600c84:	89 54 24 04          	mov    %edx,0x4(%esp)
 8600c88:	89 04 24             	mov    %eax,(%esp)
 8600c8b:	e8 fc 0e 00 00       	call   8601b8c <_ZN9__gnu_cxx17__normal_iteratorIP16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEppEi>
 8600c90:	83 ec 04             	sub    $0x4,%esp
 8600c93:	8b 45 08             	mov    0x8(%ebp),%eax
 8600c96:	8d 50 0c             	lea    0xc(%eax),%edx
 8600c99:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8600c9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8600ca0:	89 04 24             	mov    %eax,(%esp)
 8600ca3:	e8 92 07 ef ff       	call   84f143a <_ZNSt6vectorI16stSERVER_MESSAGESaIS0_EE3endEv>
 8600ca8:	83 ec 04             	sub    $0x4,%esp
 8600cab:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8600cae:	89 44 24 04          	mov    %eax,0x4(%esp)
 8600cb2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8600cb5:	89 04 24             	mov    %eax,(%esp)
 8600cb8:	e8 99 0e 00 00       	call   8601b56 <_ZN9__gnu_cxxneIP16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8600cbd:	84 c0                	test   %al,%al
 8600cbf:	75 93                	jne    8600c54 <_ZN27CSharedServerMessageManager13getCurMessageEi+0x20>
 8600cc1:	b8 00 00 00 00       	mov    $0x0,%eax
 8600cc6:	c9                   	leave
 8600cc7:	c3                   	ret

```

```c
// CSharedServerMessageManager::getCurMessage @ 0x8600c34

/* CSharedServerMessageManager::getCurMessage(int) */

int __thiscall
CSharedServerMessageManager::getCurMessage(CSharedServerMessageManager *this,int param_1)

{
  bool bVar1;
  __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
  local_14 [4];
  int local_10;
  
  std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::begin();
  while( true ) {
    std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if (!bVar1) {
      return 0;
    }
    local_10 = __gnu_cxx::
               __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
               ::operator*(local_1c);
    if ((uint)*(byte *)(local_10 + 1) == param_1) break;
    __gnu_cxx::
    __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
    ::operator++(local_14,(int)local_1c);
  }
  return local_10;
}

```

---

## ~CSharedServerMessageManager

```asm
// === 08600892 CSharedServerMessageManager::~CSharedServerMessageManager  [0x08600892-0x86008d7] ===
 8600892:	55                   	push   %ebp
 8600893:	89 e5                	mov    %esp,%ebp
 8600895:	56                   	push   %esi
 8600896:	53                   	push   %ebx
 8600897:	83 ec 10             	sub    $0x10,%esp
 860089a:	8b 45 08             	mov    0x8(%ebp),%eax
 860089d:	83 c0 08             	add    $0x8,%eax
 86008a0:	89 04 24             	mov    %eax,(%esp)
 86008a3:	e8 88 11 00 00       	call   8601a30 <_ZN20EVENT_SERVER_MESSAGED1Ev>
 86008a8:	eb 1b                	jmp    86008c5 <_ZN27CSharedServerMessageManagerD1Ev+0x33>
 86008aa:	89 d3                	mov    %edx,%ebx
 86008ac:	89 c6                	mov    %eax,%esi
 86008ae:	8b 45 08             	mov    0x8(%ebp),%eax
 86008b1:	89 04 24             	mov    %eax,(%esp)
 86008b4:	e8 41 11 00 00       	call   86019fa <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapterD1Ev>
 86008b9:	89 f0                	mov    %esi,%eax
 86008bb:	89 da                	mov    %ebx,%edx
 86008bd:	89 04 24             	mov    %eax,(%esp)
 86008c0:	e8 8b 2e 4e 00       	call   8ae3750 <_Unwind_Resume>
 86008c5:	8b 45 08             	mov    0x8(%ebp),%eax
 86008c8:	89 04 24             	mov    %eax,(%esp)
 86008cb:	e8 2a 11 00 00       	call   86019fa <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapterD1Ev>
 86008d0:	83 c4 10             	add    $0x10,%esp
 86008d3:	5b                   	pop    %ebx
 86008d4:	5e                   	pop    %esi
 86008d5:	5d                   	pop    %ebp
 86008d6:	c3                   	ret
 86008d7:	90                   	nop

```

```c
// CSharedServerMessageManager::~CSharedServerMessageManager @ 0x8600892

/* CSharedServerMessageManager::~CSharedServerMessageManager() */

void __thiscall
CSharedServerMessageManager::~CSharedServerMessageManager(CSharedServerMessageManager *this)

{
                    /* try { // try from 086008a3 to 086008a7 has its CatchHandler @ 086008aa */
  EVENT_SERVER_MESSAGE::~EVENT_SERVER_MESSAGE((EVENT_SERVER_MESSAGE *)(this + 8));
  CSharedServerMessageAdapter::~CSharedServerMessageAdapter((CSharedServerMessageAdapter *)this);
  return;
}

```

