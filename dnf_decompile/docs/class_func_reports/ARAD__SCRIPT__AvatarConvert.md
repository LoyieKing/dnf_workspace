# ARAD__SCRIPT__AvatarConvert

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## AvatarConvert

```asm
// === 088b1b0e ARAD::SCRIPT::AvatarConvert::AvatarConvert  [0x088b1b0e-0x88b1b21] ===
 88b1b0e:	55                   	push   %ebp
 88b1b0f:	89 e5                	mov    %esp,%ebp
 88b1b11:	83 ec 18             	sub    $0x18,%esp
 88b1b14:	8b 45 08             	mov    0x8(%ebp),%eax
 88b1b17:	89 04 24             	mov    %eax,(%esp)
 88b1b1a:	e8 43 06 00 00       	call   88b2162 <_ZNSt3mapIiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultESt4lessIiESaISt4pairIKiS4_EEEC1Ev>
 88b1b1f:	c9                   	leave
 88b1b20:	c3                   	ret
 88b1b21:	90                   	nop

```

```c
// ARAD::SCRIPT::AvatarConvert::AvatarConvert @ 0x88b1b0e

/* ARAD::SCRIPT::AvatarConvert::AvatarConvert() */

void __thiscall ARAD::SCRIPT::AvatarConvert::AvatarConvert(AvatarConvert *this)

{
  std::
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  ::map((map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
         *)this);
  return;
}

```

---

## clearScript

```asm
// === 088b1dc2 ARAD::SCRIPT::AvatarConvert::clearScript  [0x088b1dc2-0x88b1e47] ===
 88b1dc2:	55                   	push   %ebp
 88b1dc3:	89 e5                	mov    %esp,%ebp
 88b1dc5:	53                   	push   %ebx
 88b1dc6:	83 ec 24             	sub    $0x24,%esp
 88b1dc9:	8b 55 08             	mov    0x8(%ebp),%edx
 88b1dcc:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b1dcf:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b1dd3:	89 04 24             	mov    %eax,(%esp)
 88b1dd6:	e8 a7 05 00 00       	call   88b2382 <_ZNSt3mapIiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultESt4lessIiESaISt4pairIKiS4_EEE5beginEv>
 88b1ddb:	83 ec 04             	sub    $0x4,%esp
 88b1dde:	8b 55 08             	mov    0x8(%ebp),%edx
 88b1de1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b1de4:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b1de8:	89 04 24             	mov    %eax,(%esp)
 88b1deb:	e8 fe 04 00 00       	call   88b22ee <_ZNSt3mapIiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 88b1df0:	83 ec 04             	sub    $0x4,%esp
 88b1df3:	eb 2d                	jmp    88b1e22 <_ZN4ARAD6SCRIPT13AvatarConvert11clearScriptEv+0x60>
 88b1df5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b1df8:	89 04 24             	mov    %eax,(%esp)
 88b1dfb:	e8 bc 05 00 00       	call   88b23bc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultEEEptEv>
 88b1e00:	8b 58 04             	mov    0x4(%eax),%ebx
 88b1e03:	85 db                	test   %ebx,%ebx
 88b1e05:	74 10                	je     88b1e17 <_ZN4ARAD6SCRIPT13AvatarConvert11clearScriptEv+0x55>
 88b1e07:	89 1c 24             	mov    %ebx,(%esp)
 88b1e0a:	e8 7f 01 00 00       	call   88b1f8e <_ZN4ARAD6SCRIPT13AvatarConvert13ConvertResultD1Ev>
 88b1e0f:	89 1c 24             	mov    %ebx,(%esp)
 88b1e12:	e8 d9 26 e7 ff       	call   87244f0 <_ZdlPv>
 88b1e17:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b1e1a:	89 04 24             	mov    %eax,(%esp)
 88b1e1d:	e8 a8 05 00 00       	call   88b23ca <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultEEEppEv>
 88b1e22:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b1e25:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1e29:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b1e2c:	89 04 24             	mov    %eax,(%esp)
 88b1e2f:	e8 74 05 00 00       	call   88b23a8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultEEEneERKS8_>
 88b1e34:	84 c0                	test   %al,%al
 88b1e36:	75 bd                	jne    88b1df5 <_ZN4ARAD6SCRIPT13AvatarConvert11clearScriptEv+0x33>
 88b1e38:	8b 45 08             	mov    0x8(%ebp),%eax
 88b1e3b:	89 04 24             	mov    %eax,(%esp)
 88b1e3e:	e8 a5 05 00 00       	call   88b23e8 <_ZNSt3mapIiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultESt4lessIiESaISt4pairIKiS4_EEE5clearEv>
 88b1e43:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 88b1e46:	c9                   	leave
 88b1e47:	c3                   	ret

```

```c
// ARAD::SCRIPT::AvatarConvert::clearScript @ 0x88b1dc2

/* ARAD::SCRIPT::AvatarConvert::clearScript() */

void __thiscall ARAD::SCRIPT::AvatarConvert::clearScript(AvatarConvert *this)

{
  ConvertResult *this_00;
  char cVar1;
  int iVar2;
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  local_14 [4];
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  local_10 [8];
  
  std::
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  ::begin(local_10);
  std::
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  ::end(local_14);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
                          *)local_10,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
                          *)local_10);
    this_00 = *(ConvertResult **)(iVar2 + 4);
    if (this_00 != (ConvertResult *)0x0) {
      ConvertResult::~ConvertResult(this_00);
      operator_delete(this_00);
    }
    std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>::
    operator++((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
                *)local_10);
  }
  std::
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  ::clear((map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
           *)this);
  return;
}

```

---

## getConvertResult

```asm
// === 088b1e48 ARAD::SCRIPT::AvatarConvert::getConvertResult  [0x088b1e48-0x88b1ebc] ===
 88b1e48:	55                   	push   %ebp
 88b1e49:	89 e5                	mov    %esp,%ebp
 88b1e4b:	83 ec 38             	sub    $0x38,%esp
 88b1e4e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b1e51:	89 04 24             	mov    %eax,(%esp)
 88b1e54:	e8 a3 05 00 00       	call   88b23fc <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultEEEC1Ev>
 88b1e59:	8b 55 08             	mov    0x8(%ebp),%edx
 88b1e5c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88b1e5f:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 88b1e62:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 88b1e66:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b1e6a:	89 04 24             	mov    %eax,(%esp)
 88b1e6d:	e8 50 04 00 00       	call   88b22c2 <_ZNSt3mapIiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultESt4lessIiESaISt4pairIKiS4_EEE4findERS8_>
 88b1e72:	83 ec 04             	sub    $0x4,%esp
 88b1e75:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88b1e78:	89 45 f0             	mov    %eax,-0x10(%ebp)
 88b1e7b:	8b 55 08             	mov    0x8(%ebp),%edx
 88b1e7e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b1e81:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b1e85:	89 04 24             	mov    %eax,(%esp)
 88b1e88:	e8 61 04 00 00       	call   88b22ee <_ZNSt3mapIiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 88b1e8d:	83 ec 04             	sub    $0x4,%esp
 88b1e90:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b1e93:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1e97:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b1e9a:	89 04 24             	mov    %eax,(%esp)
 88b1e9d:	e8 06 05 00 00       	call   88b23a8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultEEEneERKS8_>
 88b1ea2:	84 c0                	test   %al,%al
 88b1ea4:	74 10                	je     88b1eb6 <_ZN4ARAD6SCRIPT13AvatarConvert16getConvertResultEi+0x6e>
 88b1ea6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b1ea9:	89 04 24             	mov    %eax,(%esp)
 88b1eac:	e8 0b 05 00 00       	call   88b23bc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultEEEptEv>
 88b1eb1:	8b 40 04             	mov    0x4(%eax),%eax
 88b1eb4:	eb 05                	jmp    88b1ebb <_ZN4ARAD6SCRIPT13AvatarConvert16getConvertResultEi+0x73>
 88b1eb6:	b8 00 00 00 00       	mov    $0x0,%eax
 88b1ebb:	c9                   	leave
 88b1ebc:	c3                   	ret

```

```c
// ARAD::SCRIPT::AvatarConvert::getConvertResult @ 0x88b1e48

/* ARAD::SCRIPT::AvatarConvert::getConvertResult(int) */

undefined4 ARAD::SCRIPT::AvatarConvert::getConvertResult(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_20 [3];
  int local_14;
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  local_10 [12];
  
  std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>::
  _Rb_tree_iterator((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
                     *)&local_14);
  std::
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  ::find(local_20);
  local_14 = local_20[0];
  std::
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>::
          operator!=((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
                      *)&local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
                          *)&local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## loadScript

```asm
// === 088b1b36 ARAD::SCRIPT::AvatarConvert::loadScript  [0x088b1b36-0x88b1dc1] ===
 88b1b36:	55                   	push   %ebp
 88b1b37:	89 e5                	mov    %esp,%ebp
 88b1b39:	57                   	push   %edi
 88b1b3a:	56                   	push   %esi
 88b1b3b:	53                   	push   %ebx
 88b1b3c:	83 ec 5c             	sub    $0x5c,%esp
 88b1b3f:	c7 44 24 04 26 71 e0 	movl   $0x8e07126,0x4(%esp)
 88b1b46:	08 
 88b1b47:	c7 04 24 78 6f e0 08 	movl   $0x8e06f78,(%esp)
 88b1b4e:	e8 d6 a1 00 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 88b1b53:	83 f0 01             	xor    $0x1,%eax
 88b1b56:	84 c0                	test   %al,%al
 88b1b58:	74 0a                	je     88b1b64 <_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv+0x2e>
 88b1b5a:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 88b1b5f:	e9 50 02 00 00       	jmp    88b1db4 <_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv+0x27e>
 88b1b64:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88b1b67:	89 04 24             	mov    %eax,(%esp)
 88b1b6a:	e8 61 4a e5 ff       	call   87065d0 <_ZNSsC1Ev>
 88b1b6f:	c6 45 c7 00          	movb   $0x0,-0x39(%ebp)
 88b1b73:	c6 45 c6 00          	movb   $0x0,-0x3a(%ebp)
 88b1b77:	eb 01                	jmp    88b1b7a <_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv+0x44>
 88b1b79:	90                   	nop
 88b1b7a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 88b1b81:	00 
 88b1b82:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88b1b85:	89 04 24             	mov    %eax,(%esp)
 88b1b88:	e8 d2 ac 00 00       	call   88bc85f <_Z8ScanTypeRSsb>
 88b1b8d:	83 f0 01             	xor    $0x1,%eax
 88b1b90:	84 c0                	test   %al,%al
 88b1b92:	0f 85 e9 01 00 00    	jne    88b1d81 <_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv+0x24b>
 88b1b98:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 88b1b9f:	c7 04 24 24 00 00 00 	movl   $0x24,(%esp)
 88b1ba6:	e8 a5 28 e7 ff       	call   8724450 <_Znwj>
 88b1bab:	89 c3                	mov    %eax,%ebx
 88b1bad:	89 de                	mov    %ebx,%esi
 88b1baf:	89 f2                	mov    %esi,%edx
 88b1bb1:	b8 00 00 00 00       	mov    $0x0,%eax
 88b1bb6:	b9 08 00 00 00       	mov    $0x8,%ecx
 88b1bbb:	89 d7                	mov    %edx,%edi
 88b1bbd:	f3 ab                	rep stos %eax,%es:(%edi)
 88b1bbf:	89 fa                	mov    %edi,%edx
 88b1bc1:	88 02                	mov    %al,(%edx)
 88b1bc3:	83 c2 01             	add    $0x1,%edx
 88b1bc6:	89 34 24             	mov    %esi,(%esp)
 88b1bc9:	e8 74 03 00 00       	call   88b1f42 <_ZN4ARAD6SCRIPT13AvatarConvert13ConvertResultC1Ev>
 88b1bce:	eb 15                	jmp    88b1be5 <_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv+0xaf>
 88b1bd0:	89 d6                	mov    %edx,%esi
 88b1bd2:	89 c7                	mov    %eax,%edi
 88b1bd4:	89 1c 24             	mov    %ebx,(%esp)
 88b1bd7:	e8 14 29 e7 ff       	call   87244f0 <_ZdlPv>
 88b1bdc:	89 f8                	mov    %edi,%eax
 88b1bde:	89 f2                	mov    %esi,%edx
 88b1be0:	e9 a9 01 00 00       	jmp    88b1d8e <_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv+0x258>
 88b1be5:	89 d8                	mov    %ebx,%eax
 88b1be7:	89 45 bc             	mov    %eax,-0x44(%ebp)
 88b1bea:	8b 5d bc             	mov    -0x44(%ebp),%ebx
 88b1bed:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b1bf4:	e8 82 a7 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b1bf9:	89 03                	mov    %eax,(%ebx)
 88b1bfb:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b1c02:	e8 74 a7 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b1c07:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 88b1c0a:	8b 45 bc             	mov    -0x44(%ebp),%eax
 88b1c0d:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 88b1c11:	0f 94 c2             	sete   %dl
 88b1c14:	88 50 20             	mov    %dl,0x20(%eax)
 88b1c17:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 88b1c1e:	00 
 88b1c1f:	8d 45 c6             	lea    -0x3a(%ebp),%eax
 88b1c22:	89 44 24 08          	mov    %eax,0x8(%esp)
 88b1c26:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88b1c29:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1c2d:	8d 45 c7             	lea    -0x39(%ebp),%eax
 88b1c30:	89 04 24             	mov    %eax,(%esp)
 88b1c33:	e8 77 b2 00 00       	call   88bceaf <_Z13ScanTypeOrIntRbRSsS_b>
 88b1c38:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 88b1c3b:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 88b1c3f:	84 c0                	test   %al,%al
 88b1c41:	75 6a                	jne    88b1cad <_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv+0x177>
 88b1c43:	0f b6 45 c6          	movzbl -0x3a(%ebp),%eax
 88b1c47:	83 f0 01             	xor    $0x1,%eax
 88b1c4a:	84 c0                	test   %al,%al
 88b1c4c:	75 62                	jne    88b1cb0 <_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv+0x17a>
 88b1c4e:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b1c55:	e8 21 a7 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b1c5a:	66 89 45 b8          	mov    %ax,-0x48(%ebp)
 88b1c5e:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b1c65:	e8 11 a7 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b1c6a:	66 89 45 ba          	mov    %ax,-0x46(%ebp)
 88b1c6e:	8b 45 bc             	mov    -0x44(%ebp),%eax
 88b1c71:	8d 50 08             	lea    0x8(%eax),%edx
 88b1c74:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88b1c77:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1c7b:	89 14 24             	mov    %edx,(%esp)
 88b1c7e:	e8 cb 05 00 00       	call   88b224e <_ZNSt6vectorIN4ARAD6SCRIPT13AvatarConvert7GetInfoESaIS3_EE9push_backERKS3_>
 88b1c83:	0f b7 45 ba          	movzwl -0x46(%ebp),%eax
 88b1c87:	0f bf d0             	movswl %ax,%edx
 88b1c8a:	8b 45 c0             	mov    -0x40(%ebp),%eax
 88b1c8d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 88b1c90:	89 45 c0             	mov    %eax,-0x40(%ebp)
 88b1c93:	8b 45 bc             	mov    -0x44(%ebp),%eax
 88b1c96:	8d 50 14             	lea    0x14(%eax),%edx
 88b1c99:	8d 45 c0             	lea    -0x40(%ebp),%eax
 88b1c9c:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1ca0:	89 14 24             	mov    %edx,(%esp)
 88b1ca3:	e8 7e f4 85 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 88b1ca8:	e9 6a ff ff ff       	jmp    88b1c17 <_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv+0xe1>
 88b1cad:	90                   	nop
 88b1cae:	eb 01                	jmp    88b1cb1 <_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv+0x17b>
 88b1cb0:	90                   	nop
 88b1cb1:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 88b1cb5:	84 c0                	test   %al,%al
 88b1cb7:	0f 84 bc fe ff ff    	je     88b1b79 <_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv+0x43>
 88b1cbd:	8b 55 08             	mov    0x8(%ebp),%edx
 88b1cc0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 88b1cc3:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b1cc7:	89 04 24             	mov    %eax,(%esp)
 88b1cca:	e8 1f 06 00 00       	call   88b22ee <_ZNSt3mapIiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 88b1ccf:	83 ec 04             	sub    $0x4,%esp
 88b1cd2:	8b 45 bc             	mov    -0x44(%ebp),%eax
 88b1cd5:	89 c1                	mov    %eax,%ecx
 88b1cd7:	8b 55 08             	mov    0x8(%ebp),%edx
 88b1cda:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88b1cdd:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 88b1ce1:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b1ce5:	89 04 24             	mov    %eax,(%esp)
 88b1ce8:	e8 d5 05 00 00       	call   88b22c2 <_ZNSt3mapIiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultESt4lessIiESaISt4pairIKiS4_EEE4findERS8_>
 88b1ced:	83 ec 04             	sub    $0x4,%esp
 88b1cf0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 88b1cf3:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1cf7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88b1cfa:	89 04 24             	mov    %eax,(%esp)
 88b1cfd:	e8 12 06 00 00       	call   88b2314 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultEEEeqERKS8_>
 88b1d02:	84 c0                	test   %al,%al
 88b1d04:	74 50                	je     88b1d56 <_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv+0x220>
 88b1d06:	8b 5d bc             	mov    -0x44(%ebp),%ebx
 88b1d09:	8b 45 bc             	mov    -0x44(%ebp),%eax
 88b1d0c:	83 c0 14             	add    $0x14,%eax
 88b1d0f:	89 04 24             	mov    %eax,(%esp)
 88b1d12:	e8 57 d2 8c ff       	call   817ef6e <_ZNSt6vectorIiSaIiEE4backEv>
 88b1d17:	8b 00                	mov    (%eax),%eax
 88b1d19:	89 43 04             	mov    %eax,0x4(%ebx)
 88b1d1c:	8b 45 bc             	mov    -0x44(%ebp),%eax
 88b1d1f:	8d 55 bc             	lea    -0x44(%ebp),%edx
 88b1d22:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b1d26:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1d2a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 88b1d2d:	89 04 24             	mov    %eax,(%esp)
 88b1d30:	e8 f3 05 00 00       	call   88b2328 <_ZNSt4pairIKiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultEEC1IRiRS5_EEOT_OT0_>
 88b1d35:	8b 55 08             	mov    0x8(%ebp),%edx
 88b1d38:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 88b1d3b:	8d 4d dc             	lea    -0x24(%ebp),%ecx
 88b1d3e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 88b1d42:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b1d46:	89 04 24             	mov    %eax,(%esp)
 88b1d49:	e8 08 06 00 00       	call   88b2356 <_ZNSt3mapIiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultESt4lessIiESaISt4pairIKiS4_EEE6insertERKS9_>
 88b1d4e:	83 ec 04             	sub    $0x4,%esp
 88b1d51:	e9 24 fe ff ff       	jmp    88b1b7a <_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv+0x44>
 88b1d56:	8b 45 bc             	mov    -0x44(%ebp),%eax
 88b1d59:	8b 18                	mov    (%eax),%ebx
 88b1d5b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88b1d5e:	89 04 24             	mov    %eax,(%esp)
 88b1d61:	e8 8a 47 e5 ff       	call   87064f0 <_ZNKSs5c_strEv>
 88b1d66:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 88b1d6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1d6e:	c7 04 24 3d 71 e0 08 	movl   $0x8e0713d,(%esp)
 88b1d75:	e8 e6 bd 7c ff       	call   807db60 <printf@plt>
 88b1d7a:	bb fe ff ff ff       	mov    $0xfffffffe,%ebx
 88b1d7f:	eb 28                	jmp    88b1da9 <_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv+0x273>
 88b1d81:	90                   	nop
 88b1d82:	e8 cd a2 00 00       	call   88bc054 <_Z20unloadRDARScriptFilev>
 88b1d87:	bb 00 00 00 00       	mov    $0x0,%ebx
 88b1d8c:	eb 1b                	jmp    88b1da9 <_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv+0x273>
 88b1d8e:	89 d3                	mov    %edx,%ebx
 88b1d90:	89 c6                	mov    %eax,%esi
 88b1d92:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88b1d95:	89 04 24             	mov    %eax,(%esp)
 88b1d98:	e8 43 5e e5 ff       	call   8707be0 <_ZNSsD1Ev>
 88b1d9d:	89 f0                	mov    %esi,%eax
 88b1d9f:	89 da                	mov    %ebx,%edx
 88b1da1:	89 04 24             	mov    %eax,(%esp)
 88b1da4:	e8 a7 19 23 00       	call   8ae3750 <_Unwind_Resume>
 88b1da9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88b1dac:	89 04 24             	mov    %eax,(%esp)
 88b1daf:	e8 2c 5e e5 ff       	call   8707be0 <_ZNSsD1Ev>
 88b1db4:	89 d8                	mov    %ebx,%eax
 88b1db6:	8d 65 f4             	lea    -0xc(%ebp),%esp
 88b1db9:	83 c4 00             	add    $0x0,%esp
 88b1dbc:	5b                   	pop    %ebx
 88b1dbd:	5e                   	pop    %esi
 88b1dbe:	5f                   	pop    %edi
 88b1dbf:	5d                   	pop    %ebp
 88b1dc0:	c3                   	ret
 88b1dc1:	90                   	nop

```

```c
// ARAD::SCRIPT::AvatarConvert::loadScript @ 0x88b1b36

/* ARAD::SCRIPT::AvatarConvert::loadScript() */

undefined4 ARAD::SCRIPT::AvatarConvert::loadScript(void)

{
  char cVar1;
  ConvertResult *this;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  ConvertResult *pCVar6;
  byte bVar7;
  undefined4 local_50;
  undefined2 local_4c;
  short local_4a;
  ConvertResult *local_48;
  int local_44;
  bool local_3e;
  bool local_3d;
  string local_3c [4];
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  local_38 [4];
  _Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>> local_34 [4];
  pair local_30 [8];
  pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*> local_28 [8];
  int local_20;
  
  bVar7 = 0;
  cVar1 = loadRDARScriptFile("Etc/EmblemRenewal/","avatar_convert_jpn.etc");
  if (cVar1 == '\x01') {
    std::string::string(local_3c);
    local_3d = false;
    local_3e = false;
                    /* try { // try from 088b1b88 to 088b1baa has its CatchHandler @ 088b1d8e */
    while (cVar1 = ScanType(local_3c,true), cVar1 == '\x01') {
      local_44 = 0;
      this = operator_new(0x24);
      pCVar6 = this;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pCVar6 = 0;
        pCVar6 = pCVar6 + (uint)bVar7 * -8 + 4;
      }
      *pCVar6 = (ConvertResult)0x0;
                    /* try { // try from 088b1bc9 to 088b1bcd has its CatchHandler @ 088b1bd0 */
      ConvertResult::ConvertResult(this);
      local_48 = this;
                    /* try { // try from 088b1bf4 to 088b1d86 has its CatchHandler @ 088b1d8e */
      uVar5 = ScanInt((bool *)0x0);
      *(undefined4 *)this = uVar5;
      local_20 = ScanInt((bool *)0x0);
      local_48[0x20] = (ConvertResult)(local_20 == 1);
      while ((local_50 = ScanTypeOrInt(&local_3d,local_3c,&local_3e,true), local_3d == false &&
             (local_3e == true))) {
        local_4c = ScanInt((bool *)0x0);
        local_4a = ScanInt((bool *)0x0);
        std::
        vector<ARAD::SCRIPT::AvatarConvert::GetInfo,std::allocator<ARAD::SCRIPT::AvatarConvert::GetInfo>>
        ::push_back((vector<ARAD::SCRIPT::AvatarConvert::GetInfo,std::allocator<ARAD::SCRIPT::AvatarConvert::GetInfo>>
                     *)(local_48 + 8),(GetInfo *)&local_50);
        local_44 = local_4a + local_44;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(local_48 + 0x14),&local_44);
      }
      if (local_3d != false) {
        std::
        map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
        ::end(local_38);
        std::
        map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
        ::find((int *)local_34);
        cVar1 = std::
                _Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
                ::operator==(local_34,(_Rb_tree_iterator *)local_38);
        pCVar6 = local_48;
        if (cVar1 == '\0') {
          uVar5 = *(undefined4 *)local_48;
          uVar3 = std::string::c_str(local_3c);
          printf("%s duplicate grade:%d",uVar3,uVar5);
          uVar5 = 0xfffffffe;
          goto LAB_088b1da9;
        }
        puVar2 = (undefined4 *)std::vector<int,std::allocator<int>>::back();
        *(undefined4 *)(pCVar6 + 4) = *puVar2;
        std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>::
        pair<int&,ARAD::SCRIPT::AvatarConvert::ConvertResult*&>(local_28,(int *)local_48,&local_48);
        std::
        map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
        ::insert(local_30);
      }
    }
    unloadRDARScriptFile();
    uVar5 = 0;
LAB_088b1da9:
    std::string::~string(local_3c);
  }
  else {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

```

---

## ~AvatarConvert

```asm
// === 088b1b22 ARAD::SCRIPT::AvatarConvert::~AvatarConvert  [0x088b1b22-0x88b1b35] ===
 88b1b22:	55                   	push   %ebp
 88b1b23:	89 e5                	mov    %esp,%ebp
 88b1b25:	83 ec 18             	sub    $0x18,%esp
 88b1b28:	8b 45 08             	mov    0x8(%ebp),%eax
 88b1b2b:	89 04 24             	mov    %eax,(%esp)
 88b1b2e:	e8 fb 03 00 00       	call   88b1f2e <_ZNSt3mapIiPN4ARAD6SCRIPT13AvatarConvert13ConvertResultESt4lessIiESaISt4pairIKiS4_EEED1Ev>
 88b1b33:	c9                   	leave
 88b1b34:	c3                   	ret
 88b1b35:	90                   	nop

```

```c
// ARAD::SCRIPT::AvatarConvert::~AvatarConvert @ 0x88b1b22

/* ARAD::SCRIPT::AvatarConvert::~AvatarConvert() */

void __thiscall ARAD::SCRIPT::AvatarConvert::~AvatarConvert(AvatarConvert *this)

{
  std::
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  ::~map((map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
          *)this);
  return;
}

```

