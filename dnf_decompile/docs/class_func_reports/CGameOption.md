# CGameOption

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 18

---

## CGameOption

```asm
// === 084b6c58 CGameOption::CGameOption  [0x084b6c58-0x84b6cef] ===
 84b6c58:	55                   	push   %ebp
 84b6c59:	89 e5                	mov    %esp,%ebp
 84b6c5b:	56                   	push   %esi
 84b6c5c:	53                   	push   %ebx
 84b6c5d:	83 ec 10             	sub    $0x10,%esp
 84b6c60:	8b 45 08             	mov    0x8(%ebp),%eax
 84b6c63:	89 c3                	mov    %eax,%ebx
 84b6c65:	be 01 00 00 00       	mov    $0x1,%esi
 84b6c6a:	eb 11                	jmp    84b6c7d <_ZN11CGameOptionC1Ev+0x25>
 84b6c6c:	89 1c 24             	mov    %ebx,(%esp)
 84b6c6f:	e8 6c 3e d7 ff       	call   822aae0 <_ZN13CHotkeyOptionC1Ev>
 84b6c74:	81 c3 bc 00 00 00    	add    $0xbc,%ebx
 84b6c7a:	83 ee 01             	sub    $0x1,%esi
 84b6c7d:	83 fe ff             	cmp    $0xffffffff,%esi
 84b6c80:	0f 95 c0             	setne  %al
 84b6c83:	84 c0                	test   %al,%al
 84b6c85:	75 e5                	jne    84b6c6c <_ZN11CGameOptionC1Ev+0x14>
 84b6c87:	8b 45 08             	mov    0x8(%ebp),%eax
 84b6c8a:	05 7a 01 00 00       	add    $0x17a,%eax
 84b6c8f:	89 04 24             	mov    %eax,(%esp)
 84b6c92:	e8 89 3e d7 ff       	call   822ab20 <_ZN10CETCOptionC1Ev>
 84b6c97:	8b 45 08             	mov    0x8(%ebp),%eax
 84b6c9a:	05 c2 01 00 00       	add    $0x1c2,%eax
 84b6c9f:	89 c3                	mov    %eax,%ebx
 84b6ca1:	be 01 00 00 00       	mov    $0x1,%esi
 84b6ca6:	eb 11                	jmp    84b6cb9 <_ZN11CGameOptionC1Ev+0x61>
 84b6ca8:	89 1c 24             	mov    %ebx,(%esp)
 84b6cab:	e8 e8 3e d7 ff       	call   822ab98 <_ZN20CQuickChattingOptionC1Ev>
 84b6cb0:	81 c3 2c 01 00 00    	add    $0x12c,%ebx
 84b6cb6:	83 ee 01             	sub    $0x1,%esi
 84b6cb9:	83 fe ff             	cmp    $0xffffffff,%esi
 84b6cbc:	0f 95 c0             	setne  %al
 84b6cbf:	84 c0                	test   %al,%al
 84b6cc1:	75 e5                	jne    84b6ca8 <_ZN11CGameOptionC1Ev+0x50>
 84b6cc3:	8b 45 08             	mov    0x8(%ebp),%eax
 84b6cc6:	05 1b 04 00 00       	add    $0x41b,%eax
 84b6ccb:	89 04 24             	mov    %eax,(%esp)
 84b6cce:	e8 b9 06 00 00       	call   84b738c <_ZN23CChattingEmoticonConfigC1Ev>
 84b6cd3:	8b 45 08             	mov    0x8(%ebp),%eax
 84b6cd6:	89 04 24             	mov    %eax,(%esp)
 84b6cd9:	e8 24 83 d7 ff       	call   822f002 <_ZN11CGameOption25resetFlag_QuickChatChnageEv>
 84b6cde:	8b 45 08             	mov    0x8(%ebp),%eax
 84b6ce1:	89 04 24             	mov    %eax,(%esp)
 84b6ce4:	e8 99 05 00 00       	call   84b7282 <_ZN11CGameOption22reset_load_hotkey_flagEv>
 84b6ce9:	83 c4 10             	add    $0x10,%esp
 84b6cec:	5b                   	pop    %ebx
 84b6ced:	5e                   	pop    %esi
 84b6cee:	5d                   	pop    %ebp
 84b6cef:	c3                   	ret

```

```c
// CGameOption::CGameOption @ 0x84b6c58

/* CGameOption::CGameOption() */

void __thiscall CGameOption::CGameOption(CGameOption *this)

{
  CQuickChattingOption *this_00;
  CGameOption *this_01;
  int iVar1;
  
  this_01 = this;
  for (iVar1 = 1; iVar1 != -1; iVar1 = iVar1 + -1) {
    CHotkeyOption::CHotkeyOption((CHotkeyOption *)this_01);
    this_01 = this_01 + 0xbc;
  }
  CETCOption::CETCOption((CETCOption *)(this + 0x17a));
  this_00 = (CQuickChattingOption *)(this + 0x1c2);
  for (iVar1 = 1; iVar1 != -1; iVar1 = iVar1 + -1) {
    CQuickChattingOption::CQuickChattingOption(this_00);
    this_00 = this_00 + 300;
  }
  CChattingEmoticonConfig::CChattingEmoticonConfig((CChattingEmoticonConfig *)(this + 0x41b));
  resetFlag_QuickChatChnage(this);
  reset_load_hotkey_flag(this);
  return;
}

```

---

## CopyQuickChatting

```asm
// === 084b6fe0 CGameOption::CopyQuickChatting  [0x084b6fe0-0x84b707f] ===
 84b6fe0:	55                   	push   %ebp
 84b6fe1:	89 e5                	mov    %esp,%ebp
 84b6fe3:	57                   	push   %edi
 84b6fe4:	56                   	push   %esi
 84b6fe5:	53                   	push   %ebx
 84b6fe6:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 84b6fea:	74 0a                	je     84b6ff6 <_ZN11CGameOption17CopyQuickChattingER20CQuickChattingOptionj+0x16>
 84b6fec:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 84b6ff0:	0f 85 85 00 00 00    	jne    84b707b <_ZN11CGameOption17CopyQuickChattingER20CQuickChattingOptionj+0x9b>
 84b6ff6:	8b 55 10             	mov    0x10(%ebp),%edx
 84b6ff9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b6ffc:	8b 4d 08             	mov    0x8(%ebp),%ecx
 84b6fff:	69 d2 2c 01 00 00    	imul   $0x12c,%edx,%edx
 84b7005:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84b7008:	81 c2 c0 01 00 00    	add    $0x1c0,%edx
 84b700e:	83 c2 02             	add    $0x2,%edx
 84b7011:	bb 2c 01 00 00       	mov    $0x12c,%ebx
 84b7016:	89 c1                	mov    %eax,%ecx
 84b7018:	83 e1 01             	and    $0x1,%ecx
 84b701b:	85 c9                	test   %ecx,%ecx
 84b701d:	74 0e                	je     84b702d <_ZN11CGameOption17CopyQuickChattingER20CQuickChattingOptionj+0x4d>
 84b701f:	0f b6 0a             	movzbl (%edx),%ecx
 84b7022:	88 08                	mov    %cl,(%eax)
 84b7024:	83 c0 01             	add    $0x1,%eax
 84b7027:	83 c2 01             	add    $0x1,%edx
 84b702a:	83 eb 01             	sub    $0x1,%ebx
 84b702d:	89 c1                	mov    %eax,%ecx
 84b702f:	83 e1 02             	and    $0x2,%ecx
 84b7032:	85 c9                	test   %ecx,%ecx
 84b7034:	74 0f                	je     84b7045 <_ZN11CGameOption17CopyQuickChattingER20CQuickChattingOptionj+0x65>
 84b7036:	0f b7 0a             	movzwl (%edx),%ecx
 84b7039:	66 89 08             	mov    %cx,(%eax)
 84b703c:	83 c0 02             	add    $0x2,%eax
 84b703f:	83 c2 02             	add    $0x2,%edx
 84b7042:	83 eb 02             	sub    $0x2,%ebx
 84b7045:	89 d9                	mov    %ebx,%ecx
 84b7047:	c1 e9 02             	shr    $0x2,%ecx
 84b704a:	89 c7                	mov    %eax,%edi
 84b704c:	89 d6                	mov    %edx,%esi
 84b704e:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 84b7050:	89 f2                	mov    %esi,%edx
 84b7052:	89 f8                	mov    %edi,%eax
 84b7054:	b9 00 00 00 00       	mov    $0x0,%ecx
 84b7059:	89 de                	mov    %ebx,%esi
 84b705b:	83 e6 02             	and    $0x2,%esi
 84b705e:	85 f6                	test   %esi,%esi
 84b7060:	74 0b                	je     84b706d <_ZN11CGameOption17CopyQuickChattingER20CQuickChattingOptionj+0x8d>
 84b7062:	0f b7 34 0a          	movzwl (%edx,%ecx,1),%esi
 84b7066:	66 89 34 08          	mov    %si,(%eax,%ecx,1)
 84b706a:	83 c1 02             	add    $0x2,%ecx
 84b706d:	83 e3 01             	and    $0x1,%ebx
 84b7070:	85 db                	test   %ebx,%ebx
 84b7072:	74 07                	je     84b707b <_ZN11CGameOption17CopyQuickChattingER20CQuickChattingOptionj+0x9b>
 84b7074:	0f b6 14 0a          	movzbl (%edx,%ecx,1),%edx
 84b7078:	88 14 08             	mov    %dl,(%eax,%ecx,1)
 84b707b:	5b                   	pop    %ebx
 84b707c:	5e                   	pop    %esi
 84b707d:	5f                   	pop    %edi
 84b707e:	5d                   	pop    %ebp
 84b707f:	c3                   	ret

```

```c
// CGameOption::CopyQuickChatting @ 0x84b6fe0

/* CGameOption::CopyQuickChatting(CQuickChattingOption&, unsigned int) */

void __thiscall
CGameOption::CopyQuickChatting(CGameOption *this,CQuickChattingOption *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  CGameOption *pCVar3;
  uint uVar4;
  bool bVar5;
  
  if ((param_2 == 0) || (param_2 == 1)) {
    pCVar3 = this + param_2 * 300 + 0x1c2;
    uVar4 = 300;
    bVar5 = ((uint)param_1 & 1) != 0;
    if (bVar5) {
      *param_1 = (CQuickChattingOption)*pCVar3;
      param_1 = param_1 + 1;
      pCVar3 = this + param_2 * 300 + 0x1c3;
      uVar4 = 299;
    }
    if (((uint)param_1 & 2) != 0) {
      *(undefined2 *)param_1 = *(undefined2 *)pCVar3;
      param_1 = param_1 + 2;
      pCVar3 = pCVar3 + 2;
      uVar4 = uVar4 - 2;
    }
    for (uVar1 = uVar4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)param_1 = *(undefined4 *)pCVar3;
      pCVar3 = pCVar3 + 4;
      param_1 = param_1 + 4;
    }
    iVar2 = 0;
    if ((uVar4 & 2) != 0) {
      *(undefined2 *)param_1 = *(undefined2 *)pCVar3;
      iVar2 = 2;
    }
    if (bVar5) {
      *(CGameOption *)(param_1 + iVar2) = pCVar3[iVar2];
    }
  }
  return;
}

```

---

## IsEtcOptionChanged

```asm
// === 084b6f46 CGameOption::IsEtcOptionChanged  [0x084b6f46-0x84b6f83] ===
 84b6f46:	55                   	push   %ebp
 84b6f47:	89 e5                	mov    %esp,%ebp
 84b6f49:	83 ec 28             	sub    $0x28,%esp
 84b6f4c:	8b 45 08             	mov    0x8(%ebp),%eax
 84b6f4f:	8d 90 7a 01 00 00    	lea    0x17a(%eax),%edx
 84b6f55:	c7 44 24 08 48 00 00 	movl   $0x48,0x8(%esp)
 84b6f5c:	00 
 84b6f5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b6f60:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b6f64:	89 14 24             	mov    %edx,(%esp)
 84b6f67:	e8 24 6d bc ff       	call   807dc90 <memcmp@plt>
 84b6f6c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b6f6f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84b6f73:	75 07                	jne    84b6f7c <_ZN11CGameOption18IsEtcOptionChangedER10CETCOption+0x36>
 84b6f75:	b8 00 00 00 00       	mov    $0x0,%eax
 84b6f7a:	eb 05                	jmp    84b6f81 <_ZN11CGameOption18IsEtcOptionChangedER10CETCOption+0x3b>
 84b6f7c:	b8 01 00 00 00       	mov    $0x1,%eax
 84b6f81:	c9                   	leave
 84b6f82:	c3                   	ret
 84b6f83:	90                   	nop

```

```c
// CGameOption::IsEtcOptionChanged @ 0x84b6f46

/* CGameOption::IsEtcOptionChanged(CETCOption&) */

bool __thiscall CGameOption::IsEtcOptionChanged(CGameOption *this,CETCOption *param_1)

{
  int iVar1;
  
  iVar1 = memcmp(this + 0x17a,param_1,0x48);
  return iVar1 != 0;
}

```

---

## IsHotKeyOptionChanged

```asm
// === 084b6da0 CGameOption::IsHotKeyOptionChanged  [0x084b6da0-0x84b6df3] ===
 84b6da0:	55                   	push   %ebp
 84b6da1:	89 e5                	mov    %esp,%ebp
 84b6da3:	83 ec 38             	sub    $0x38,%esp
 84b6da6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b6da9:	88 45 e4             	mov    %al,-0x1c(%ebp)
 84b6dac:	80 7d e4 01          	cmpb   $0x1,-0x1c(%ebp)
 84b6db0:	76 07                	jbe    84b6db9 <_ZN11CGameOption21IsHotKeyOptionChangedEhR13CHotkeyOption+0x19>
 84b6db2:	b8 00 00 00 00       	mov    $0x0,%eax
 84b6db7:	eb 39                	jmp    84b6df2 <_ZN11CGameOption21IsHotKeyOptionChangedEhR13CHotkeyOption+0x52>
 84b6db9:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 84b6dbd:	69 c0 bc 00 00 00    	imul   $0xbc,%eax,%eax
 84b6dc3:	03 45 08             	add    0x8(%ebp),%eax
 84b6dc6:	c7 44 24 08 bc 00 00 	movl   $0xbc,0x8(%esp)
 84b6dcd:	00 
 84b6dce:	8b 55 10             	mov    0x10(%ebp),%edx
 84b6dd1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b6dd5:	89 04 24             	mov    %eax,(%esp)
 84b6dd8:	e8 b3 6e bc ff       	call   807dc90 <memcmp@plt>
 84b6ddd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b6de0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84b6de4:	75 07                	jne    84b6ded <_ZN11CGameOption21IsHotKeyOptionChangedEhR13CHotkeyOption+0x4d>
 84b6de6:	b8 00 00 00 00       	mov    $0x0,%eax
 84b6deb:	eb 05                	jmp    84b6df2 <_ZN11CGameOption21IsHotKeyOptionChangedEhR13CHotkeyOption+0x52>
 84b6ded:	b8 01 00 00 00       	mov    $0x1,%eax
 84b6df2:	c9                   	leave
 84b6df3:	c3                   	ret

```

```c
// CGameOption::IsHotKeyOptionChanged @ 0x84b6da0

/* CGameOption::IsHotKeyOptionChanged(unsigned char, CHotkeyOption&) */

undefined4 __thiscall
CGameOption::IsHotKeyOptionChanged(CGameOption *this,uchar param_1,CHotkeyOption *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 2) {
    iVar2 = memcmp(this + (uint)param_1 * 0xbc,param_2,0xbc);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## IsQuickChatOptionChanged

```asm
// === 084b6f84 CGameOption::IsQuickChatOptionChanged  [0x084b6f84-0x84b6fdf] ===
 84b6f84:	55                   	push   %ebp
 84b6f85:	89 e5                	mov    %esp,%ebp
 84b6f87:	83 ec 28             	sub    $0x28,%esp
 84b6f8a:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 84b6f8e:	74 06                	je     84b6f96 <_ZN11CGameOption24IsQuickChatOptionChangedERK20CQuickChattingOptionj+0x12>
 84b6f90:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 84b6f94:	75 42                	jne    84b6fd8 <_ZN11CGameOption24IsQuickChatOptionChangedERK20CQuickChattingOptionj+0x54>
 84b6f96:	8b 45 10             	mov    0x10(%ebp),%eax
 84b6f99:	69 c0 2c 01 00 00    	imul   $0x12c,%eax,%eax
 84b6f9f:	05 c0 01 00 00       	add    $0x1c0,%eax
 84b6fa4:	03 45 08             	add    0x8(%ebp),%eax
 84b6fa7:	8d 50 02             	lea    0x2(%eax),%edx
 84b6faa:	c7 44 24 08 2c 01 00 	movl   $0x12c,0x8(%esp)
 84b6fb1:	00 
 84b6fb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b6fb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b6fb9:	89 14 24             	mov    %edx,(%esp)
 84b6fbc:	e8 cf 6c bc ff       	call   807dc90 <memcmp@plt>
 84b6fc1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b6fc4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84b6fc8:	75 07                	jne    84b6fd1 <_ZN11CGameOption24IsQuickChatOptionChangedERK20CQuickChattingOptionj+0x4d>
 84b6fca:	b8 00 00 00 00       	mov    $0x0,%eax
 84b6fcf:	eb 0c                	jmp    84b6fdd <_ZN11CGameOption24IsQuickChatOptionChangedERK20CQuickChattingOptionj+0x59>
 84b6fd1:	b8 01 00 00 00       	mov    $0x1,%eax
 84b6fd6:	eb 05                	jmp    84b6fdd <_ZN11CGameOption24IsQuickChatOptionChangedERK20CQuickChattingOptionj+0x59>
 84b6fd8:	b8 00 00 00 00       	mov    $0x0,%eax
 84b6fdd:	c9                   	leave
 84b6fde:	c3                   	ret
 84b6fdf:	90                   	nop

```

```c
// CGameOption::IsQuickChatOptionChanged @ 0x84b6f84

/* CGameOption::IsQuickChatOptionChanged(CQuickChattingOption const&, unsigned int) */

undefined4 __thiscall
CGameOption::IsQuickChatOptionChanged(CGameOption *this,CQuickChattingOption *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0) || (param_2 == 1)) {
    iVar1 = memcmp(this + param_2 * 300 + 0x1c2,param_1,300);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## SetEmoticonInfo

```asm
// === 084b7080 CGameOption::SetEmoticonInfo  [0x084b7080-0x84b7135] ===
 84b7080:	55                   	push   %ebp
 84b7081:	89 e5                	mov    %esp,%ebp
 84b7083:	57                   	push   %edi
 84b7084:	56                   	push   %esi
 84b7085:	53                   	push   %ebx
 84b7086:	83 ec 1c             	sub    $0x1c,%esp
 84b7089:	8b 45 08             	mov    0x8(%ebp),%eax
 84b708c:	8d 90 1b 04 00 00    	lea    0x41b(%eax),%edx
 84b7092:	c7 44 24 08 10 02 00 	movl   $0x210,0x8(%esp)
 84b7099:	00 
 84b709a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b709d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b70a1:	89 14 24             	mov    %edx,(%esp)
 84b70a4:	e8 e7 6b bc ff       	call   807dc90 <memcmp@plt>
 84b70a9:	85 c0                	test   %eax,%eax
 84b70ab:	74 7c                	je     84b7129 <_ZN11CGameOption15SetEmoticonInfoERK23CChattingEmoticonConfig+0xa9>
 84b70ad:	8b 45 08             	mov    0x8(%ebp),%eax
 84b70b0:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b70b3:	05 1b 04 00 00       	add    $0x41b,%eax
 84b70b8:	bb 10 02 00 00       	mov    $0x210,%ebx
 84b70bd:	89 c1                	mov    %eax,%ecx
 84b70bf:	83 e1 01             	and    $0x1,%ecx
 84b70c2:	85 c9                	test   %ecx,%ecx
 84b70c4:	74 0e                	je     84b70d4 <_ZN11CGameOption15SetEmoticonInfoERK23CChattingEmoticonConfig+0x54>
 84b70c6:	0f b6 0a             	movzbl (%edx),%ecx
 84b70c9:	88 08                	mov    %cl,(%eax)
 84b70cb:	83 c0 01             	add    $0x1,%eax
 84b70ce:	83 c2 01             	add    $0x1,%edx
 84b70d1:	83 eb 01             	sub    $0x1,%ebx
 84b70d4:	89 c1                	mov    %eax,%ecx
 84b70d6:	83 e1 02             	and    $0x2,%ecx
 84b70d9:	85 c9                	test   %ecx,%ecx
 84b70db:	74 0f                	je     84b70ec <_ZN11CGameOption15SetEmoticonInfoERK23CChattingEmoticonConfig+0x6c>
 84b70dd:	0f b7 0a             	movzwl (%edx),%ecx
 84b70e0:	66 89 08             	mov    %cx,(%eax)
 84b70e3:	83 c0 02             	add    $0x2,%eax
 84b70e6:	83 c2 02             	add    $0x2,%edx
 84b70e9:	83 eb 02             	sub    $0x2,%ebx
 84b70ec:	89 d9                	mov    %ebx,%ecx
 84b70ee:	c1 e9 02             	shr    $0x2,%ecx
 84b70f1:	89 c7                	mov    %eax,%edi
 84b70f3:	89 d6                	mov    %edx,%esi
 84b70f5:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 84b70f7:	89 f2                	mov    %esi,%edx
 84b70f9:	89 f8                	mov    %edi,%eax
 84b70fb:	b9 00 00 00 00       	mov    $0x0,%ecx
 84b7100:	89 de                	mov    %ebx,%esi
 84b7102:	83 e6 02             	and    $0x2,%esi
 84b7105:	85 f6                	test   %esi,%esi
 84b7107:	74 0b                	je     84b7114 <_ZN11CGameOption15SetEmoticonInfoERK23CChattingEmoticonConfig+0x94>
 84b7109:	0f b7 34 0a          	movzwl (%edx,%ecx,1),%esi
 84b710d:	66 89 34 08          	mov    %si,(%eax,%ecx,1)
 84b7111:	83 c1 02             	add    $0x2,%ecx
 84b7114:	83 e3 01             	and    $0x1,%ebx
 84b7117:	85 db                	test   %ebx,%ebx
 84b7119:	74 07                	je     84b7122 <_ZN11CGameOption15SetEmoticonInfoERK23CChattingEmoticonConfig+0xa2>
 84b711b:	0f b6 14 0a          	movzbl (%edx,%ecx,1),%edx
 84b711f:	88 14 08             	mov    %dl,(%eax,%ecx,1)
 84b7122:	b8 01 00 00 00       	mov    $0x1,%eax
 84b7127:	eb 05                	jmp    84b712e <_ZN11CGameOption15SetEmoticonInfoERK23CChattingEmoticonConfig+0xae>
 84b7129:	b8 00 00 00 00       	mov    $0x0,%eax
 84b712e:	83 c4 1c             	add    $0x1c,%esp
 84b7131:	5b                   	pop    %ebx
 84b7132:	5e                   	pop    %esi
 84b7133:	5f                   	pop    %edi
 84b7134:	5d                   	pop    %ebp
 84b7135:	c3                   	ret

```

```c
// CGameOption::SetEmoticonInfo @ 0x84b7080

/* CGameOption::SetEmoticonInfo(CChattingEmoticonConfig const&) */

undefined4 __thiscall
CGameOption::SetEmoticonInfo(CGameOption *this,CChattingEmoticonConfig *param_1)

{
  int iVar1;
  CGameOption *pCVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  
  bVar7 = 0;
  iVar1 = memcmp(this + 0x41b,param_1,0x210);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    pCVar2 = this + 0x41b;
    uVar5 = 0x210;
    bVar6 = ((uint)pCVar2 & 1) != 0;
    if (bVar6) {
      *pCVar2 = *(CGameOption *)param_1;
      pCVar2 = this + 0x41c;
      param_1 = param_1 + 1;
      uVar5 = 0x20f;
    }
    if (((uint)pCVar2 & 2) != 0) {
      *(undefined2 *)pCVar2 = *(undefined2 *)param_1;
      pCVar2 = pCVar2 + 2;
      param_1 = param_1 + 2;
      uVar5 = uVar5 - 2;
    }
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pCVar2 = *(undefined4 *)param_1;
      param_1 = param_1 + (uint)bVar7 * -8 + 4;
      pCVar2 = pCVar2 + (uint)bVar7 * -8 + 4;
    }
    iVar1 = 0;
    if ((uVar5 & 2) != 0) {
      *(undefined2 *)pCVar2 = *(undefined2 *)param_1;
      iVar1 = 2;
    }
    if (bVar6) {
      pCVar2[iVar1] = *(CGameOption *)(param_1 + iVar1);
    }
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## SetEtcOption

```asm
// === 084b6df4 CGameOption::SetEtcOption  [0x084b6df4-0x84b6e73] ===
 84b6df4:	55                   	push   %ebp
 84b6df5:	89 e5                	mov    %esp,%ebp
 84b6df7:	57                   	push   %edi
 84b6df8:	56                   	push   %esi
 84b6df9:	53                   	push   %ebx
 84b6dfa:	8b 45 08             	mov    0x8(%ebp),%eax
 84b6dfd:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b6e00:	05 7a 01 00 00       	add    $0x17a,%eax
 84b6e05:	bb 48 00 00 00       	mov    $0x48,%ebx
 84b6e0a:	89 c1                	mov    %eax,%ecx
 84b6e0c:	83 e1 01             	and    $0x1,%ecx
 84b6e0f:	85 c9                	test   %ecx,%ecx
 84b6e11:	74 0e                	je     84b6e21 <_ZN11CGameOption12SetEtcOptionER10CETCOption+0x2d>
 84b6e13:	0f b6 0a             	movzbl (%edx),%ecx
 84b6e16:	88 08                	mov    %cl,(%eax)
 84b6e18:	83 c0 01             	add    $0x1,%eax
 84b6e1b:	83 c2 01             	add    $0x1,%edx
 84b6e1e:	83 eb 01             	sub    $0x1,%ebx
 84b6e21:	89 c1                	mov    %eax,%ecx
 84b6e23:	83 e1 02             	and    $0x2,%ecx
 84b6e26:	85 c9                	test   %ecx,%ecx
 84b6e28:	74 0f                	je     84b6e39 <_ZN11CGameOption12SetEtcOptionER10CETCOption+0x45>
 84b6e2a:	0f b7 0a             	movzwl (%edx),%ecx
 84b6e2d:	66 89 08             	mov    %cx,(%eax)
 84b6e30:	83 c0 02             	add    $0x2,%eax
 84b6e33:	83 c2 02             	add    $0x2,%edx
 84b6e36:	83 eb 02             	sub    $0x2,%ebx
 84b6e39:	89 d9                	mov    %ebx,%ecx
 84b6e3b:	c1 e9 02             	shr    $0x2,%ecx
 84b6e3e:	89 c7                	mov    %eax,%edi
 84b6e40:	89 d6                	mov    %edx,%esi
 84b6e42:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 84b6e44:	89 f2                	mov    %esi,%edx
 84b6e46:	89 f8                	mov    %edi,%eax
 84b6e48:	b9 00 00 00 00       	mov    $0x0,%ecx
 84b6e4d:	89 de                	mov    %ebx,%esi
 84b6e4f:	83 e6 02             	and    $0x2,%esi
 84b6e52:	85 f6                	test   %esi,%esi
 84b6e54:	74 0b                	je     84b6e61 <_ZN11CGameOption12SetEtcOptionER10CETCOption+0x6d>
 84b6e56:	0f b7 34 0a          	movzwl (%edx,%ecx,1),%esi
 84b6e5a:	66 89 34 08          	mov    %si,(%eax,%ecx,1)
 84b6e5e:	83 c1 02             	add    $0x2,%ecx
 84b6e61:	83 e3 01             	and    $0x1,%ebx
 84b6e64:	85 db                	test   %ebx,%ebx
 84b6e66:	74 07                	je     84b6e6f <_ZN11CGameOption12SetEtcOptionER10CETCOption+0x7b>
 84b6e68:	0f b6 14 0a          	movzbl (%edx,%ecx,1),%edx
 84b6e6c:	88 14 08             	mov    %dl,(%eax,%ecx,1)
 84b6e6f:	5b                   	pop    %ebx
 84b6e70:	5e                   	pop    %esi
 84b6e71:	5f                   	pop    %edi
 84b6e72:	5d                   	pop    %ebp
 84b6e73:	c3                   	ret

```

```c
// CGameOption::SetEtcOption @ 0x84b6df4

/* CGameOption::SetEtcOption(CETCOption&) */

void __thiscall CGameOption::SetEtcOption(CGameOption *this,CETCOption *param_1)

{
  CGameOption *pCVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  pCVar1 = this + 0x17a;
  uVar4 = 0x48;
  bVar5 = ((uint)pCVar1 & 1) != 0;
  if (bVar5) {
    *pCVar1 = *(CGameOption *)param_1;
    pCVar1 = this + 0x17b;
    param_1 = param_1 + 1;
    uVar4 = 0x47;
  }
  if (((uint)pCVar1 & 2) != 0) {
    *(undefined2 *)pCVar1 = *(undefined2 *)param_1;
    pCVar1 = pCVar1 + 2;
    param_1 = param_1 + 2;
    uVar4 = uVar4 - 2;
  }
  for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)pCVar1 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pCVar1 = pCVar1 + 4;
  }
  iVar3 = 0;
  if ((uVar4 & 2) != 0) {
    *(undefined2 *)pCVar1 = *(undefined2 *)param_1;
    iVar3 = 2;
  }
  if (bVar5) {
    pCVar1[iVar3] = *(CGameOption *)(param_1 + iVar3);
  }
  return;
}

```

---

## SetFlag

```asm
// === 084b71bc CGameOption::SetFlag  [0x084b71bc-0x84b71d7] ===
 84b71bc:	55                   	push   %ebp
 84b71bd:	89 e5                	mov    %esp,%ebp
 84b71bf:	83 ec 04             	sub    $0x4,%esp
 84b71c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b71c5:	88 45 fc             	mov    %al,-0x4(%ebp)
 84b71c8:	8b 45 08             	mov    0x8(%ebp),%eax
 84b71cb:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 84b71cf:	88 90 2b 06 00 00    	mov    %dl,0x62b(%eax)
 84b71d5:	c9                   	leave
 84b71d6:	c3                   	ret
 84b71d7:	90                   	nop

```

```c
// CGameOption::SetFlag @ 0x84b71bc

/* CGameOption::SetFlag(bool) */

void __thiscall CGameOption::SetFlag(CGameOption *this,bool param_1)

{
  this[0x62b] = (CGameOption)param_1;
  return;
}

```

---

## SetHotKeyOption

```asm
// === 084b6cf0 CGameOption::SetHotKeyOption  [0x084b6cf0-0x84b6d9f] ===
 84b6cf0:	55                   	push   %ebp
 84b6cf1:	89 e5                	mov    %esp,%ebp
 84b6cf3:	57                   	push   %edi
 84b6cf4:	56                   	push   %esi
 84b6cf5:	53                   	push   %ebx
 84b6cf6:	83 ec 04             	sub    $0x4,%esp
 84b6cf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b6cfc:	88 45 f0             	mov    %al,-0x10(%ebp)
 84b6cff:	80 7d f0 01          	cmpb   $0x1,-0x10(%ebp)
 84b6d03:	0f 87 8e 00 00 00    	ja     84b6d97 <_ZN11CGameOption15SetHotKeyOptionEhR13CHotkeyOption+0xa7>
 84b6d09:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 84b6d0d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 84b6d10:	69 c0 bc 00 00 00    	imul   $0xbc,%eax,%eax
 84b6d16:	8b 55 10             	mov    0x10(%ebp),%edx
 84b6d19:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84b6d1c:	bb bc 00 00 00       	mov    $0xbc,%ebx
 84b6d21:	89 c1                	mov    %eax,%ecx
 84b6d23:	83 e1 01             	and    $0x1,%ecx
 84b6d26:	85 c9                	test   %ecx,%ecx
 84b6d28:	74 0e                	je     84b6d38 <_ZN11CGameOption15SetHotKeyOptionEhR13CHotkeyOption+0x48>
 84b6d2a:	0f b6 0a             	movzbl (%edx),%ecx
 84b6d2d:	88 08                	mov    %cl,(%eax)
 84b6d2f:	83 c0 01             	add    $0x1,%eax
 84b6d32:	83 c2 01             	add    $0x1,%edx
 84b6d35:	83 eb 01             	sub    $0x1,%ebx
 84b6d38:	89 c1                	mov    %eax,%ecx
 84b6d3a:	83 e1 02             	and    $0x2,%ecx
 84b6d3d:	85 c9                	test   %ecx,%ecx
 84b6d3f:	74 0f                	je     84b6d50 <_ZN11CGameOption15SetHotKeyOptionEhR13CHotkeyOption+0x60>
 84b6d41:	0f b7 0a             	movzwl (%edx),%ecx
 84b6d44:	66 89 08             	mov    %cx,(%eax)
 84b6d47:	83 c0 02             	add    $0x2,%eax
 84b6d4a:	83 c2 02             	add    $0x2,%edx
 84b6d4d:	83 eb 02             	sub    $0x2,%ebx
 84b6d50:	89 d9                	mov    %ebx,%ecx
 84b6d52:	c1 e9 02             	shr    $0x2,%ecx
 84b6d55:	89 c7                	mov    %eax,%edi
 84b6d57:	89 d6                	mov    %edx,%esi
 84b6d59:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 84b6d5b:	89 f2                	mov    %esi,%edx
 84b6d5d:	89 f8                	mov    %edi,%eax
 84b6d5f:	b9 00 00 00 00       	mov    $0x0,%ecx
 84b6d64:	89 de                	mov    %ebx,%esi
 84b6d66:	83 e6 02             	and    $0x2,%esi
 84b6d69:	85 f6                	test   %esi,%esi
 84b6d6b:	74 0b                	je     84b6d78 <_ZN11CGameOption15SetHotKeyOptionEhR13CHotkeyOption+0x88>
 84b6d6d:	0f b7 34 0a          	movzwl (%edx,%ecx,1),%esi
 84b6d71:	66 89 34 08          	mov    %si,(%eax,%ecx,1)
 84b6d75:	83 c1 02             	add    $0x2,%ecx
 84b6d78:	83 e3 01             	and    $0x1,%ebx
 84b6d7b:	85 db                	test   %ebx,%ebx
 84b6d7d:	74 07                	je     84b6d86 <_ZN11CGameOption15SetHotKeyOptionEhR13CHotkeyOption+0x96>
 84b6d7f:	0f b6 14 0a          	movzbl (%edx,%ecx,1),%edx
 84b6d83:	88 14 08             	mov    %dl,(%eax,%ecx,1)
 84b6d86:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 84b6d8a:	8b 55 08             	mov    0x8(%ebp),%edx
 84b6d8d:	c6 84 02 78 01 00 00 	movb   $0x1,0x178(%edx,%eax,1)
 84b6d94:	01 
 84b6d95:	eb 01                	jmp    84b6d98 <_ZN11CGameOption15SetHotKeyOptionEhR13CHotkeyOption+0xa8>
 84b6d97:	90                   	nop
 84b6d98:	83 c4 04             	add    $0x4,%esp
 84b6d9b:	5b                   	pop    %ebx
 84b6d9c:	5e                   	pop    %esi
 84b6d9d:	5f                   	pop    %edi
 84b6d9e:	5d                   	pop    %ebp
 84b6d9f:	c3                   	ret

```

```c
// CGameOption::SetHotKeyOption @ 0x84b6cf0

/* CGameOption::SetHotKeyOption(unsigned char, CHotkeyOption&) */

void __thiscall CGameOption::SetHotKeyOption(CGameOption *this,uchar param_1,CHotkeyOption *param_2)

{
  CGameOption *pCVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_1 < 2) {
    pCVar1 = this + (uint)param_1 * 0xbc;
    uVar4 = 0xbc;
    bVar5 = ((uint)pCVar1 & 1) != 0;
    if (bVar5) {
      *pCVar1 = *(CGameOption *)param_2;
      pCVar1 = pCVar1 + 1;
      param_2 = param_2 + 1;
      uVar4 = 0xbb;
    }
    if (((uint)pCVar1 & 2) != 0) {
      *(undefined2 *)pCVar1 = *(undefined2 *)param_2;
      pCVar1 = pCVar1 + 2;
      param_2 = param_2 + 2;
      uVar4 = uVar4 - 2;
    }
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pCVar1 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pCVar1 = pCVar1 + 4;
    }
    iVar3 = 0;
    if ((uVar4 & 2) != 0) {
      *(undefined2 *)pCVar1 = *(undefined2 *)param_2;
      iVar3 = 2;
    }
    if (bVar5) {
      pCVar1[iVar3] = *(CGameOption *)(param_2 + iVar3);
    }
    this[param_1 + 0x178] = (CGameOption)0x1;
  }
  return;
}

```

---

## SetQuickChatOption

```asm
// === 084b6e74 CGameOption::SetQuickChatOption  [0x084b6e74-0x84b6f45] ===
 84b6e74:	55                   	push   %ebp
 84b6e75:	89 e5                	mov    %esp,%ebp
 84b6e77:	57                   	push   %edi
 84b6e78:	56                   	push   %esi
 84b6e79:	53                   	push   %ebx
 84b6e7a:	83 ec 1c             	sub    $0x1c,%esp
 84b6e7d:	8b 45 10             	mov    0x10(%ebp),%eax
 84b6e80:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b6e84:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b6e87:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b6e8b:	8b 45 08             	mov    0x8(%ebp),%eax
 84b6e8e:	89 04 24             	mov    %eax,(%esp)
 84b6e91:	e8 ee 00 00 00       	call   84b6f84 <_ZN11CGameOption24IsQuickChatOptionChangedERK20CQuickChattingOptionj>
 84b6e96:	84 c0                	test   %al,%al
 84b6e98:	0f 84 9f 00 00 00    	je     84b6f3d <_ZN11CGameOption18SetQuickChatOptionERK20CQuickChattingOptionj+0xc9>
 84b6e9e:	8b 45 08             	mov    0x8(%ebp),%eax
 84b6ea1:	89 04 24             	mov    %eax,(%esp)
 84b6ea4:	e8 d3 04 00 00       	call   84b737c <_ZN11CGameOption23setFlag_QuickChatChangeEv>
 84b6ea9:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 84b6ead:	74 0a                	je     84b6eb9 <_ZN11CGameOption18SetQuickChatOptionERK20CQuickChattingOptionj+0x45>
 84b6eaf:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 84b6eb3:	0f 85 84 00 00 00    	jne    84b6f3d <_ZN11CGameOption18SetQuickChatOptionERK20CQuickChattingOptionj+0xc9>
 84b6eb9:	8b 45 10             	mov    0x10(%ebp),%eax
 84b6ebc:	8b 55 08             	mov    0x8(%ebp),%edx
 84b6ebf:	69 c0 2c 01 00 00    	imul   $0x12c,%eax,%eax
 84b6ec5:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84b6ec8:	05 c0 01 00 00       	add    $0x1c0,%eax
 84b6ecd:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b6ed0:	83 c0 02             	add    $0x2,%eax
 84b6ed3:	bb 2c 01 00 00       	mov    $0x12c,%ebx
 84b6ed8:	89 c1                	mov    %eax,%ecx
 84b6eda:	83 e1 01             	and    $0x1,%ecx
 84b6edd:	85 c9                	test   %ecx,%ecx
 84b6edf:	74 0e                	je     84b6eef <_ZN11CGameOption18SetQuickChatOptionERK20CQuickChattingOptionj+0x7b>
 84b6ee1:	0f b6 0a             	movzbl (%edx),%ecx
 84b6ee4:	88 08                	mov    %cl,(%eax)
 84b6ee6:	83 c0 01             	add    $0x1,%eax
 84b6ee9:	83 c2 01             	add    $0x1,%edx
 84b6eec:	83 eb 01             	sub    $0x1,%ebx
 84b6eef:	89 c1                	mov    %eax,%ecx
 84b6ef1:	83 e1 02             	and    $0x2,%ecx
 84b6ef4:	85 c9                	test   %ecx,%ecx
 84b6ef6:	74 0f                	je     84b6f07 <_ZN11CGameOption18SetQuickChatOptionERK20CQuickChattingOptionj+0x93>
 84b6ef8:	0f b7 0a             	movzwl (%edx),%ecx
 84b6efb:	66 89 08             	mov    %cx,(%eax)
 84b6efe:	83 c0 02             	add    $0x2,%eax
 84b6f01:	83 c2 02             	add    $0x2,%edx
 84b6f04:	83 eb 02             	sub    $0x2,%ebx
 84b6f07:	89 d9                	mov    %ebx,%ecx
 84b6f09:	c1 e9 02             	shr    $0x2,%ecx
 84b6f0c:	89 c7                	mov    %eax,%edi
 84b6f0e:	89 d6                	mov    %edx,%esi
 84b6f10:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 84b6f12:	89 f2                	mov    %esi,%edx
 84b6f14:	89 f8                	mov    %edi,%eax
 84b6f16:	b9 00 00 00 00       	mov    $0x0,%ecx
 84b6f1b:	89 de                	mov    %ebx,%esi
 84b6f1d:	83 e6 02             	and    $0x2,%esi
 84b6f20:	85 f6                	test   %esi,%esi
 84b6f22:	74 0b                	je     84b6f2f <_ZN11CGameOption18SetQuickChatOptionERK20CQuickChattingOptionj+0xbb>
 84b6f24:	0f b7 34 0a          	movzwl (%edx,%ecx,1),%esi
 84b6f28:	66 89 34 08          	mov    %si,(%eax,%ecx,1)
 84b6f2c:	83 c1 02             	add    $0x2,%ecx
 84b6f2f:	83 e3 01             	and    $0x1,%ebx
 84b6f32:	85 db                	test   %ebx,%ebx
 84b6f34:	74 07                	je     84b6f3d <_ZN11CGameOption18SetQuickChatOptionERK20CQuickChattingOptionj+0xc9>
 84b6f36:	0f b6 14 0a          	movzbl (%edx,%ecx,1),%edx
 84b6f3a:	88 14 08             	mov    %dl,(%eax,%ecx,1)
 84b6f3d:	83 c4 1c             	add    $0x1c,%esp
 84b6f40:	5b                   	pop    %ebx
 84b6f41:	5e                   	pop    %esi
 84b6f42:	5f                   	pop    %edi
 84b6f43:	5d                   	pop    %ebp
 84b6f44:	c3                   	ret
 84b6f45:	90                   	nop

```

```c
// CGameOption::SetQuickChatOption @ 0x84b6e74

/* CGameOption::SetQuickChatOption(CQuickChattingOption const&, unsigned int) */

void __thiscall
CGameOption::SetQuickChatOption(CGameOption *this,CQuickChattingOption *param_1,uint param_2)

{
  char cVar1;
  CGameOption *pCVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  
  bVar7 = 0;
  cVar1 = IsQuickChatOptionChanged(this,param_1,param_2);
  if (cVar1 != '\0') {
    setFlag_QuickChatChange(this);
    if ((param_2 == 0) || (param_2 == 1)) {
      pCVar2 = this + param_2 * 300 + 0x1c2;
      uVar5 = 300;
      bVar6 = ((uint)pCVar2 & 1) != 0;
      if (bVar6) {
        *pCVar2 = *(CGameOption *)param_1;
        pCVar2 = this + param_2 * 300 + 0x1c3;
        param_1 = param_1 + 1;
        uVar5 = 299;
      }
      if (((uint)pCVar2 & 2) != 0) {
        *(undefined2 *)pCVar2 = *(undefined2 *)param_1;
        pCVar2 = pCVar2 + 2;
        param_1 = param_1 + 2;
        uVar5 = uVar5 - 2;
      }
      for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pCVar2 = *(undefined4 *)param_1;
        param_1 = param_1 + (uint)bVar7 * -8 + 4;
        pCVar2 = pCVar2 + (uint)bVar7 * -8 + 4;
      }
      iVar4 = 0;
      if ((uVar5 & 2) != 0) {
        *(undefined2 *)pCVar2 = *(undefined2 *)param_1;
        iVar4 = 2;
      }
      if (bVar6) {
        pCVar2[iVar4] = *(CGameOption *)(param_1 + iVar4);
      }
    }
  }
  return;
}

```

---

## getEmoticonInfo

```asm
// === 084b7136 CGameOption::getEmoticonInfo  [0x084b7136-0x84b71bb] ===
 84b7136:	55                   	push   %ebp
 84b7137:	89 e5                	mov    %esp,%ebp
 84b7139:	57                   	push   %edi
 84b713a:	56                   	push   %esi
 84b713b:	53                   	push   %ebx
 84b713c:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b713f:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7142:	81 c2 1b 04 00 00    	add    $0x41b,%edx
 84b7148:	bb 10 02 00 00       	mov    $0x210,%ebx
 84b714d:	89 c1                	mov    %eax,%ecx
 84b714f:	83 e1 01             	and    $0x1,%ecx
 84b7152:	85 c9                	test   %ecx,%ecx
 84b7154:	74 0e                	je     84b7164 <_ZNK11CGameOption15getEmoticonInfoEv+0x2e>
 84b7156:	0f b6 0a             	movzbl (%edx),%ecx
 84b7159:	88 08                	mov    %cl,(%eax)
 84b715b:	83 c0 01             	add    $0x1,%eax
 84b715e:	83 c2 01             	add    $0x1,%edx
 84b7161:	83 eb 01             	sub    $0x1,%ebx
 84b7164:	89 c1                	mov    %eax,%ecx
 84b7166:	83 e1 02             	and    $0x2,%ecx
 84b7169:	85 c9                	test   %ecx,%ecx
 84b716b:	74 0f                	je     84b717c <_ZNK11CGameOption15getEmoticonInfoEv+0x46>
 84b716d:	0f b7 0a             	movzwl (%edx),%ecx
 84b7170:	66 89 08             	mov    %cx,(%eax)
 84b7173:	83 c0 02             	add    $0x2,%eax
 84b7176:	83 c2 02             	add    $0x2,%edx
 84b7179:	83 eb 02             	sub    $0x2,%ebx
 84b717c:	89 d9                	mov    %ebx,%ecx
 84b717e:	c1 e9 02             	shr    $0x2,%ecx
 84b7181:	89 c7                	mov    %eax,%edi
 84b7183:	89 d6                	mov    %edx,%esi
 84b7185:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 84b7187:	89 f2                	mov    %esi,%edx
 84b7189:	89 f8                	mov    %edi,%eax
 84b718b:	b9 00 00 00 00       	mov    $0x0,%ecx
 84b7190:	89 de                	mov    %ebx,%esi
 84b7192:	83 e6 02             	and    $0x2,%esi
 84b7195:	85 f6                	test   %esi,%esi
 84b7197:	74 0b                	je     84b71a4 <_ZNK11CGameOption15getEmoticonInfoEv+0x6e>
 84b7199:	0f b7 34 0a          	movzwl (%edx,%ecx,1),%esi
 84b719d:	66 89 34 08          	mov    %si,(%eax,%ecx,1)
 84b71a1:	83 c1 02             	add    $0x2,%ecx
 84b71a4:	83 e3 01             	and    $0x1,%ebx
 84b71a7:	85 db                	test   %ebx,%ebx
 84b71a9:	74 07                	je     84b71b2 <_ZNK11CGameOption15getEmoticonInfoEv+0x7c>
 84b71ab:	0f b6 14 0a          	movzbl (%edx,%ecx,1),%edx
 84b71af:	88 14 08             	mov    %dl,(%eax,%ecx,1)
 84b71b2:	8b 45 08             	mov    0x8(%ebp),%eax
 84b71b5:	5b                   	pop    %ebx
 84b71b6:	5e                   	pop    %esi
 84b71b7:	5f                   	pop    %edi
 84b71b8:	5d                   	pop    %ebp
 84b71b9:	c2 04 00             	ret    $0x4

```

```c
// CGameOption::getEmoticonInfo @ 0x84b7136

/* CGameOption::getEmoticonInfo() const */

undefined4 * CGameOption::getEmoticonInfo(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  
  puVar4 = (undefined4 *)(in_stack_00000008 + 0x41b);
  uVar5 = 0x210;
  bVar6 = ((uint)in_stack_00000004 & 1) != 0;
  puVar1 = in_stack_00000004;
  if (bVar6) {
    *(undefined1 *)in_stack_00000004 = *(undefined1 *)puVar4;
    puVar1 = (undefined4 *)((int)in_stack_00000004 + 1);
    puVar4 = (undefined4 *)(in_stack_00000008 + 0x41c);
    uVar5 = 0x20f;
  }
  if (((uint)puVar1 & 2) != 0) {
    *(undefined2 *)puVar1 = *(undefined2 *)puVar4;
    puVar1 = (undefined4 *)((int)puVar1 + 2);
    puVar4 = (undefined4 *)((int)puVar4 + 2);
    uVar5 = uVar5 - 2;
  }
  for (uVar2 = uVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  iVar3 = 0;
  if ((uVar5 & 2) != 0) {
    *(undefined2 *)puVar1 = *(undefined2 *)puVar4;
    iVar3 = 2;
  }
  if (bVar6) {
    *(undefined1 *)((int)puVar1 + iVar3) = *(undefined1 *)((int)puVar4 + iVar3);
  }
  return in_stack_00000004;
}

```

---

## get_etc_option

```asm
// === 084b7246 CGameOption::get_etc_option  [0x084b7246-0x84b7265] ===
 84b7246:	55                   	push   %ebp
 84b7247:	89 e5                	mov    %esp,%ebp
 84b7249:	83 ec 18             	sub    $0x18,%esp
 84b724c:	8b 45 08             	mov    0x8(%ebp),%eax
 84b724f:	8d 90 7a 01 00 00    	lea    0x17a(%eax),%edx
 84b7255:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b7258:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b725c:	89 14 24             	mov    %edx,(%esp)
 84b725f:	e8 0e 39 d7 ff       	call   822ab72 <_ZNK10CETCOption12getETCOptionE15ENUM_OPTION_ETC>
 84b7264:	c9                   	leave
 84b7265:	c3                   	ret

```

```c
// CGameOption::get_etc_option @ 0x84b7246

/* CGameOption::get_etc_option(ENUM_OPTION_ETC) */

void __thiscall CGameOption::get_etc_option(CGameOption *this,undefined4 param_2)

{
  CETCOption::getETCOption((CETCOption *)(this + 0x17a),param_2);
  return;
}

```

---

## get_hotkey_option

```asm
// === 084b7266 CGameOption::get_hotkey_option  [0x084b7266-0x84b7281] ===
 84b7266:	55                   	push   %ebp
 84b7267:	89 e5                	mov    %esp,%ebp
 84b7269:	83 ec 04             	sub    $0x4,%esp
 84b726c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b726f:	88 45 fc             	mov    %al,-0x4(%ebp)
 84b7272:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
 84b7276:	69 c0 bc 00 00 00    	imul   $0xbc,%eax,%eax
 84b727c:	03 45 08             	add    0x8(%ebp),%eax
 84b727f:	c9                   	leave
 84b7280:	c3                   	ret
 84b7281:	90                   	nop

```

```c
// CGameOption::get_hotkey_option @ 0x84b7266

/* CGameOption::get_hotkey_option(unsigned char) */

CGameOption * __thiscall CGameOption::get_hotkey_option(CGameOption *this,uchar param_1)

{
  return this + (uint)param_1 * 0xbc;
}

```

---

## get_load_hotkey_flag

```asm
// === 084b72b0 CGameOption::get_load_hotkey_flag  [0x084b72b0-0x84b72d9] ===
 84b72b0:	55                   	push   %ebp
 84b72b1:	89 e5                	mov    %esp,%ebp
 84b72b3:	83 ec 04             	sub    $0x4,%esp
 84b72b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b72b9:	88 45 fc             	mov    %al,-0x4(%ebp)
 84b72bc:	80 7d fc 01          	cmpb   $0x1,-0x4(%ebp)
 84b72c0:	76 07                	jbe    84b72c9 <_ZN11CGameOption20get_load_hotkey_flagEh+0x19>
 84b72c2:	b8 00 00 00 00       	mov    $0x0,%eax
 84b72c7:	eb 0f                	jmp    84b72d8 <_ZN11CGameOption20get_load_hotkey_flagEh+0x28>
 84b72c9:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
 84b72cd:	8b 55 08             	mov    0x8(%ebp),%edx
 84b72d0:	0f b6 84 02 78 01 00 	movzbl 0x178(%edx,%eax,1),%eax
 84b72d7:	00 
 84b72d8:	c9                   	leave
 84b72d9:	c3                   	ret

```

```c
// CGameOption::get_load_hotkey_flag @ 0x84b72b0

/* CGameOption::get_load_hotkey_flag(unsigned char) */

CGameOption __thiscall CGameOption::get_load_hotkey_flag(CGameOption *this,uchar param_1)

{
  CGameOption CVar1;
  
  if (param_1 < 2) {
    CVar1 = this[param_1 + 0x178];
  }
  else {
    CVar1 = (CGameOption)0x0;
  }
  return CVar1;
}

```

---

## isEmoticonChanged

```asm
// === 084b71d8 CGameOption::isEmoticonChanged  [0x084b71d8-0x84b71e7] ===
 84b71d8:	55                   	push   %ebp
 84b71d9:	89 e5                	mov    %esp,%ebp
 84b71db:	8b 45 08             	mov    0x8(%ebp),%eax
 84b71de:	0f b6 80 2b 06 00 00 	movzbl 0x62b(%eax),%eax
 84b71e5:	5d                   	pop    %ebp
 84b71e6:	c3                   	ret
 84b71e7:	90                   	nop

```

```c
// CGameOption::isEmoticonChanged @ 0x84b71d8

/* CGameOption::isEmoticonChanged() */

CGameOption __thiscall CGameOption::isEmoticonChanged(CGameOption *this)

{
  return this[0x62b];
}

```

---

## isEqualEmoticon

```asm
// === 084b71e8 CGameOption::isEqualEmoticon  [0x084b71e8-0x84b7215] ===
 84b71e8:	55                   	push   %ebp
 84b71e9:	89 e5                	mov    %esp,%ebp
 84b71eb:	83 ec 18             	sub    $0x18,%esp
 84b71ee:	8b 45 08             	mov    0x8(%ebp),%eax
 84b71f1:	8d 90 1b 04 00 00    	lea    0x41b(%eax),%edx
 84b71f7:	c7 44 24 08 10 02 00 	movl   $0x210,0x8(%esp)
 84b71fe:	00 
 84b71ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b7202:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b7206:	89 14 24             	mov    %edx,(%esp)
 84b7209:	e8 82 6a bc ff       	call   807dc90 <memcmp@plt>
 84b720e:	85 c0                	test   %eax,%eax
 84b7210:	0f 94 c0             	sete   %al
 84b7213:	c9                   	leave
 84b7214:	c3                   	ret
 84b7215:	90                   	nop

```

```c
// CGameOption::isEqualEmoticon @ 0x84b71e8

/* CGameOption::isEqualEmoticon(CChattingEmoticonConfig const&) */

bool __thiscall CGameOption::isEqualEmoticon(CGameOption *this,CChattingEmoticonConfig *param_1)

{
  int iVar1;
  
  iVar1 = memcmp(this + 0x41b,param_1,0x210);
  return iVar1 == 0;
}

```

---

## reset_load_hotkey_flag

```asm
// === 084b7282 CGameOption::reset_load_hotkey_flag  [0x084b7282-0x84b72af] ===
 84b7282:	55                   	push   %ebp
 84b7283:	89 e5                	mov    %esp,%ebp
 84b7285:	83 ec 10             	sub    $0x10,%esp
 84b7288:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 84b728f:	eb 12                	jmp    84b72a3 <_ZN11CGameOption22reset_load_hotkey_flagEv+0x21>
 84b7291:	8b 45 fc             	mov    -0x4(%ebp),%eax
 84b7294:	8b 55 08             	mov    0x8(%ebp),%edx
 84b7297:	c6 84 02 78 01 00 00 	movb   $0x0,0x178(%edx,%eax,1)
 84b729e:	00 
 84b729f:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 84b72a3:	83 7d fc 01          	cmpl   $0x1,-0x4(%ebp)
 84b72a7:	0f 9e c0             	setle  %al
 84b72aa:	84 c0                	test   %al,%al
 84b72ac:	75 e3                	jne    84b7291 <_ZN11CGameOption22reset_load_hotkey_flagEv+0xf>
 84b72ae:	c9                   	leave
 84b72af:	c3                   	ret

```

```c
// CGameOption::reset_load_hotkey_flag @ 0x84b7282

/* CGameOption::reset_load_hotkey_flag() */

void __thiscall CGameOption::reset_load_hotkey_flag(CGameOption *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    this[local_8 + 0x178] = (CGameOption)0x0;
  }
  return;
}

```

---

## set_etc_option

```asm
// === 084b7216 CGameOption::set_etc_option  [0x084b7216-0x84b7245] ===
 84b7216:	55                   	push   %ebp
 84b7217:	89 e5                	mov    %esp,%ebp
 84b7219:	83 ec 28             	sub    $0x28,%esp
 84b721c:	8b 45 10             	mov    0x10(%ebp),%eax
 84b721f:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 84b7223:	0f bf 45 f4          	movswl -0xc(%ebp),%eax
 84b7227:	8b 55 08             	mov    0x8(%ebp),%edx
 84b722a:	81 c2 7a 01 00 00    	add    $0x17a,%edx
 84b7230:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b7234:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b7237:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b723b:	89 14 24             	mov    %edx,(%esp)
 84b723e:	e8 f3 00 00 00       	call   84b7336 <_ZN10CETCOption12setETCOptionE15ENUM_OPTION_ETCs>
 84b7243:	c9                   	leave
 84b7244:	c3                   	ret
 84b7245:	90                   	nop

```

```c
// CGameOption::set_etc_option @ 0x84b7216

/* CGameOption::set_etc_option(ENUM_OPTION_ETC, short) */

void __thiscall CGameOption::set_etc_option(CGameOption *this,undefined4 param_2,short param_3)

{
  CETCOption::setETCOption((CETCOption *)(this + 0x17a),param_2,(int)param_3);
  return;
}

```

