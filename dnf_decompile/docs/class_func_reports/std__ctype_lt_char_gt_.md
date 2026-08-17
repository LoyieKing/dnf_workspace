# std__ctype_lt_char_gt_

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## _M_narrow_init

```asm
// === 08726a40 std::ctype<char>::_M_narrow_init  [0x08726a40-0x8726b1f] ===
 8726a40:	55                   	push   %ebp
 8726a41:	89 e5                	mov    %esp,%ebp
 8726a43:	57                   	push   %edi
 8726a44:	56                   	push   %esi
 8726a45:	53                   	push   %ebx
 8726a46:	81 ec 4c 01 00 00    	sub    $0x14c,%esp
 8726a4c:	8b 55 08             	mov    0x8(%ebp),%edx
 8726a4f:	65 a1 14 00 00 00    	mov    %gs:0x14,%eax
 8726a55:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8726a58:	31 c0                	xor    %eax,%eax
 8726a5a:	8d 9d e4 fe ff ff    	lea    -0x11c(%ebp),%ebx
 8726a60:	88 04 03             	mov    %al,(%ebx,%eax,1)
 8726a63:	83 c0 01             	add    $0x1,%eax
 8726a66:	3d 00 01 00 00       	cmp    $0x100,%eax
 8726a6b:	75 f3                	jne    8726a60 <_ZNKSt5ctypeIcE14_M_narrow_initEv+0x20>
 8726a6d:	8b 02                	mov    (%edx),%eax
 8726a6f:	8d ba 1d 01 00 00    	lea    0x11d(%edx),%edi
 8726a75:	89 de                	mov    %ebx,%esi
 8726a77:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 8726a7a:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8726a7e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8726a82:	89 14 24             	mov    %edx,(%esp)
 8726a85:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 8726a8b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8726a92:	00 
 8726a93:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8726a97:	ff 50 24             	call   *0x24(%eax)
 8726a9a:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 8726aa0:	b9 00 01 00 00       	mov    $0x100,%ecx
 8726aa5:	c6 82 1d 02 00 00 01 	movb   $0x1,0x21d(%edx)
 8726aac:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 8726aae:	74 1e                	je     8726ace <_ZNKSt5ctypeIcE14_M_narrow_initEv+0x8e>
 8726ab0:	c6 82 1d 02 00 00 02 	movb   $0x2,0x21d(%edx)
 8726ab7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8726aba:	65 33 05 14 00 00 00 	xor    %gs:0x14,%eax
 8726ac1:	75 4a                	jne    8726b0d <_ZNKSt5ctypeIcE14_M_narrow_initEv+0xcd>
 8726ac3:	81 c4 4c 01 00 00    	add    $0x14c,%esp
 8726ac9:	5b                   	pop    %ebx
 8726aca:	5e                   	pop    %esi
 8726acb:	5f                   	pop    %edi
 8726acc:	5d                   	pop    %ebp
 8726acd:	c3                   	ret
 8726ace:	8b 02                	mov    (%edx),%eax
 8726ad0:	8d 8d e3 fe ff ff    	lea    -0x11d(%ebp),%ecx
 8726ad6:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8726ada:	8d 8d e5 fe ff ff    	lea    -0x11b(%ebp),%ecx
 8726ae0:	89 14 24             	mov    %edx,(%esp)
 8726ae3:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 8726ae9:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8726af0:	00 
 8726af1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8726af5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8726af9:	ff 50 24             	call   *0x24(%eax)
 8726afc:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 8726b02:	80 bd e3 fe ff ff 01 	cmpb   $0x1,-0x11d(%ebp)
 8726b09:	75 ac                	jne    8726ab7 <_ZNKSt5ctypeIcE14_M_narrow_initEv+0x77>
 8726b0b:	eb a3                	jmp    8726ab0 <_ZNKSt5ctypeIcE14_M_narrow_initEv+0x70>
 8726b0d:	e8 6e 6e 95 ff       	call   807d980 <__stack_chk_fail@plt>
 8726b12:	90                   	nop
 8726b13:	90                   	nop
 8726b14:	90                   	nop
 8726b15:	90                   	nop
 8726b16:	90                   	nop
 8726b17:	90                   	nop
 8726b18:	90                   	nop
 8726b19:	90                   	nop
 8726b1a:	90                   	nop
 8726b1b:	90                   	nop
 8726b1c:	90                   	nop
 8726b1d:	90                   	nop
 8726b1e:	90                   	nop
 8726b1f:	90                   	nop

```

```c
// std::ctype<char>::_M_narrow_init @ 0x8726a40

/* std::ctype<char>::_M_narrow_init() const */

void __thiscall std::ctype<char>::_M_narrow_init(ctype<char> *this)

{
  int iVar1;
  ctype<char> *pcVar2;
  ctype<char> *pcVar3;
  int in_GS_OFFSET;
  undefined1 uVar4;
  byte bVar5;
  char local_121;
  ctype<char> local_120 [256];
  int local_20 [4];
  
  bVar5 = 0;
  local_20[0] = *(int *)(in_GS_OFFSET + 0x14);
  iVar1 = 0;
  do {
    local_120[iVar1] = SUB41(iVar1,0);
    iVar1 = iVar1 + 1;
    uVar4 = iVar1 == 0x100;
  } while (!(bool)uVar4);
  (**(code **)(*(int *)this + 0x24))(this,local_120,local_20,0,this + 0x11d);
  iVar1 = 0x100;
  this[0x21d] = (ctype<char>)0x1;
  pcVar2 = local_120;
  pcVar3 = this + 0x11d;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    uVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + (uint)bVar5 * -2 + 1;
    pcVar3 = pcVar3 + (uint)bVar5 * -2 + 1;
  } while ((bool)uVar4);
  if ((!(bool)uVar4) ||
     ((**(code **)(*(int *)this + 0x24))(this,local_120,local_120 + 1,1,&local_121),
     local_121 == '\x01')) {
    this[0x21d] = (ctype<char>)0x2;
  }
  if (local_20[0] != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

```

---

## _M_widen_init

```asm
// === 087269c0 std::ctype<char>::_M_widen_init  [0x087269c0-0x8726a3f] ===
 87269c0:	55                   	push   %ebp
 87269c1:	89 e5                	mov    %esp,%ebp
 87269c3:	57                   	push   %edi
 87269c4:	56                   	push   %esi
 87269c5:	53                   	push   %ebx
 87269c6:	81 ec 2c 01 00 00    	sub    $0x12c,%esp
 87269cc:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87269cf:	65 a1 14 00 00 00    	mov    %gs:0x14,%eax
 87269d5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87269d8:	31 c0                	xor    %eax,%eax
 87269da:	8d b5 e4 fe ff ff    	lea    -0x11c(%ebp),%esi
 87269e0:	88 04 06             	mov    %al,(%esi,%eax,1)
 87269e3:	83 c0 01             	add    $0x1,%eax
 87269e6:	3d 00 01 00 00       	cmp    $0x100,%eax
 87269eb:	75 f3                	jne    87269e0 <_ZNKSt5ctypeIcE13_M_widen_initEv+0x20>
 87269ed:	8b 03                	mov    (%ebx),%eax
 87269ef:	8d 7b 1d             	lea    0x1d(%ebx),%edi
 87269f2:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 87269f5:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 87269f9:	89 74 24 04          	mov    %esi,0x4(%esp)
 87269fd:	89 54 24 08          	mov    %edx,0x8(%esp)
 8726a01:	89 1c 24             	mov    %ebx,(%esp)
 8726a04:	ff 50 1c             	call   *0x1c(%eax)
 8726a07:	b9 00 01 00 00       	mov    $0x100,%ecx
 8726a0c:	c6 43 1c 01          	movb   $0x1,0x1c(%ebx)
 8726a10:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 8726a12:	74 04                	je     8726a18 <_ZNKSt5ctypeIcE13_M_widen_initEv+0x58>
 8726a14:	c6 43 1c 02          	movb   $0x2,0x1c(%ebx)
 8726a18:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8726a1b:	65 33 05 14 00 00 00 	xor    %gs:0x14,%eax
 8726a22:	75 0b                	jne    8726a2f <_ZNKSt5ctypeIcE13_M_widen_initEv+0x6f>
 8726a24:	81 c4 2c 01 00 00    	add    $0x12c,%esp
 8726a2a:	5b                   	pop    %ebx
 8726a2b:	5e                   	pop    %esi
 8726a2c:	5f                   	pop    %edi
 8726a2d:	5d                   	pop    %ebp
 8726a2e:	c3                   	ret
 8726a2f:	e8 4c 6f 95 ff       	call   807d980 <__stack_chk_fail@plt>
 8726a34:	90                   	nop
 8726a35:	90                   	nop
 8726a36:	90                   	nop
 8726a37:	90                   	nop
 8726a38:	90                   	nop
 8726a39:	90                   	nop
 8726a3a:	90                   	nop
 8726a3b:	90                   	nop
 8726a3c:	90                   	nop
 8726a3d:	90                   	nop
 8726a3e:	90                   	nop
 8726a3f:	90                   	nop

```

```c
// std::ctype<char>::_M_widen_init @ 0x87269c0

/* std::ctype<char>::_M_widen_init() const */

void __thiscall std::ctype<char>::_M_widen_init(ctype<char> *this)

{
  int iVar1;
  ctype<char> *pcVar2;
  ctype<char> *pcVar3;
  int in_GS_OFFSET;
  undefined1 uVar4;
  byte bVar5;
  ctype<char> local_120 [256];
  int local_20 [4];
  
  bVar5 = 0;
  local_20[0] = *(int *)(in_GS_OFFSET + 0x14);
  iVar1 = 0;
  do {
    local_120[iVar1] = SUB41(iVar1,0);
    iVar1 = iVar1 + 1;
    uVar4 = iVar1 == 0x100;
  } while (!(bool)uVar4);
  (**(code **)(*(int *)this + 0x1c))(this,local_120,local_20,this + 0x1d);
  iVar1 = 0x100;
  this[0x1c] = (ctype<char>)0x1;
  pcVar2 = local_120;
  pcVar3 = this + 0x1d;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    uVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + (uint)bVar5 * -2 + 1;
    pcVar3 = pcVar3 + (uint)bVar5 * -2 + 1;
  } while ((bool)uVar4);
  if (!(bool)uVar4) {
    this[0x1c] = (ctype<char>)0x2;
  }
  if (local_20[0] == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

```

---

## classic_table

```asm
// === 08726d80 std::ctype<char>::classic_table  [0x08726d80-0x8726daf] ===
 8726d80:	55                   	push   %ebp
 8726d81:	89 e5                	mov    %esp,%ebp
 8726d83:	83 ec 18             	sub    $0x18,%esp
 8726d86:	e8 b5 41 fb ff       	call   86daf40 <_ZNSt6locale5facet15_S_get_c_localeEv>
 8726d8b:	8b 40 34             	mov    0x34(%eax),%eax
 8726d8e:	c9                   	leave
 8726d8f:	c3                   	ret
 8726d90:	83 fa ff             	cmp    $0xffffffff,%edx
 8726d93:	74 08                	je     8726d9d <_ZNSt5ctypeIcE13classic_tableEv+0x1d>
 8726d95:	89 04 24             	mov    %eax,(%esp)
 8726d98:	e8 b3 c9 3b 00       	call   8ae3750 <_Unwind_Resume>
 8726d9d:	89 04 24             	mov    %eax,(%esp)
 8726da0:	e8 4b d0 ff ff       	call   8723df0 <__cxa_call_unexpected>
 8726da5:	90                   	nop
 8726da6:	90                   	nop
 8726da7:	90                   	nop
 8726da8:	90                   	nop
 8726da9:	90                   	nop
 8726daa:	90                   	nop
 8726dab:	90                   	nop
 8726dac:	90                   	nop
 8726dad:	90                   	nop
 8726dae:	90                   	nop
 8726daf:	90                   	nop

```

```c
// std::ctype<char>::classic_table @ 0x8726d80

/* std::ctype<char>::classic_table() */

undefined4 std::ctype<char>::classic_table(void)

{
  int iVar1;
  
                    /* try { // try from 08726d86 to 08726d8a has its CatchHandler @ 08726d90 */
  iVar1 = locale::facet::_S_get_c_locale();
  return *(undefined4 *)(iVar1 + 0x34);
}

```

---

## ctype

```asm
// === 08726ba0 std::ctype<char>::ctype  [0x08726ba0-0x8726c8f] ===
 8726ba0:	55                   	push   %ebp
 8726ba1:	31 c0                	xor    %eax,%eax
 8726ba3:	89 e5                	mov    %esp,%ebp
 8726ba5:	83 ec 28             	sub    $0x28,%esp
 8726ba8:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8726bab:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8726bae:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8726bb2:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8726bb5:	0f b6 75 10          	movzbl 0x10(%ebp),%esi
 8726bb9:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8726bbc:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8726bbf:	0f 95 c0             	setne  %al
 8726bc2:	89 43 04             	mov    %eax,0x4(%ebx)
 8726bc5:	c7 03 c8 1d d0 08    	movl   $0x8d01dc8,(%ebx)
 8726bcb:	e8 70 43 fb ff       	call   86daf40 <_ZNSt6locale5facet15_S_get_c_localeEv>
 8726bd0:	85 ff                	test   %edi,%edi
 8726bd2:	89 43 08             	mov    %eax,0x8(%ebx)
 8726bd5:	0f 84 85 00 00 00    	je     8726c60 <_ZNSt5ctypeIcEC1EPKtbj+0xc0>
 8726bdb:	89 f2                	mov    %esi,%edx
 8726bdd:	84 d2                	test   %dl,%dl
 8726bdf:	75 67                	jne    8726c48 <_ZNSt5ctypeIcEC1EPKtbj+0xa8>
 8726be1:	8b 50 3c             	mov    0x3c(%eax),%edx
 8726be4:	c6 43 0c 00          	movb   $0x0,0xc(%ebx)
 8726be8:	89 53 10             	mov    %edx,0x10(%ebx)
 8726beb:	8b 40 38             	mov    0x38(%eax),%eax
 8726bee:	89 43 14             	mov    %eax,0x14(%ebx)
 8726bf1:	89 7b 18             	mov    %edi,0x18(%ebx)
 8726bf4:	31 c0                	xor    %eax,%eax
 8726bf6:	b9 3f 00 00 00       	mov    $0x3f,%ecx
 8726bfb:	8d 7b 20             	lea    0x20(%ebx),%edi
 8726bfe:	c6 43 1d 00          	movb   $0x0,0x1d(%ebx)
 8726c02:	66 c7 43 1e 00 00    	movw   $0x0,0x1e(%ebx)
 8726c08:	f3 ab                	rep stos %eax,%es:(%edi)
 8726c0a:	c6 83 1d 01 00 00 00 	movb   $0x0,0x11d(%ebx)
 8726c11:	66 c7 83 1e 01 00 00 	movw   $0x0,0x11e(%ebx)
 8726c18:	00 00 
 8726c1a:	c6 43 1c 00          	movb   $0x0,0x1c(%ebx)
 8726c1e:	c6 83 1d 02 00 00 00 	movb   $0x0,0x21d(%ebx)
 8726c25:	c6 07 00             	movb   $0x0,(%edi)
 8726c28:	b1 3f                	mov    $0x3f,%cl
 8726c2a:	8d bb 20 01 00 00    	lea    0x120(%ebx),%edi
 8726c30:	f3 ab                	rep stos %eax,%es:(%edi)
 8726c32:	c6 07 00             	movb   $0x0,(%edi)
 8726c35:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8726c38:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8726c3b:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8726c3e:	89 ec                	mov    %ebp,%esp
 8726c40:	5d                   	pop    %ebp
 8726c41:	c3                   	ret
 8726c42:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8726c48:	8b 50 3c             	mov    0x3c(%eax),%edx
 8726c4b:	c6 43 0c 01          	movb   $0x1,0xc(%ebx)
 8726c4f:	89 53 10             	mov    %edx,0x10(%ebx)
 8726c52:	8b 40 38             	mov    0x38(%eax),%eax
 8726c55:	89 43 14             	mov    %eax,0x14(%ebx)
 8726c58:	eb 97                	jmp    8726bf1 <_ZNSt5ctypeIcEC1EPKtbj+0x51>
 8726c5a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8726c60:	8b 50 3c             	mov    0x3c(%eax),%edx
 8726c63:	c6 43 0c 00          	movb   $0x0,0xc(%ebx)
 8726c67:	8b 78 34             	mov    0x34(%eax),%edi
 8726c6a:	89 53 10             	mov    %edx,0x10(%ebx)
 8726c6d:	8b 50 38             	mov    0x38(%eax),%edx
 8726c70:	89 53 14             	mov    %edx,0x14(%ebx)
 8726c73:	e9 79 ff ff ff       	jmp    8726bf1 <_ZNSt5ctypeIcEC1EPKtbj+0x51>
 8726c78:	89 c6                	mov    %eax,%esi
 8726c7a:	89 1c 24             	mov    %ebx,(%esp)
 8726c7d:	e8 1e 41 fb ff       	call   86dada0 <_ZNSt6locale5facetD1Ev>
 8726c82:	89 34 24             	mov    %esi,(%esp)
 8726c85:	e8 c6 ca 3b 00       	call   8ae3750 <_Unwind_Resume>
 8726c8a:	90                   	nop
 8726c8b:	90                   	nop
 8726c8c:	90                   	nop
 8726c8d:	90                   	nop
 8726c8e:	90                   	nop
 8726c8f:	90                   	nop

```

```c
// std::ctype<char>::ctype @ 0x8726ba0

/* std::ctype<char>::ctype(unsigned short const*, bool, unsigned int) */

void __thiscall std::ctype<char>::ctype(ctype<char> *this,ushort *param_1,bool param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  ctype<char> *pcVar3;
  byte bVar4;
  
  bVar4 = 0;
  *(uint *)(this + 4) = (uint)(param_3 != 0);
  *(undefined ***)this = &PTR__ctype_08d01dc8;
                    /* try { // try from 08726bcb to 08726bcf has its CatchHandler @ 08726c78 */
  iVar2 = locale::facet::_S_get_c_locale();
  *(int *)(this + 8) = iVar2;
  if (param_1 == (ushort *)0x0) {
    uVar1 = *(undefined4 *)(iVar2 + 0x3c);
    this[0xc] = (ctype<char>)0x0;
    param_1 = *(ushort **)(iVar2 + 0x34);
    *(undefined4 *)(this + 0x10) = uVar1;
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(iVar2 + 0x38);
  }
  else if (param_2) {
    uVar1 = *(undefined4 *)(iVar2 + 0x3c);
    this[0xc] = (ctype<char>)0x1;
    *(undefined4 *)(this + 0x10) = uVar1;
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(iVar2 + 0x38);
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 0x3c);
    this[0xc] = (ctype<char>)0x0;
    *(undefined4 *)(this + 0x10) = uVar1;
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(iVar2 + 0x38);
  }
  *(ushort **)(this + 0x18) = param_1;
  this[0x1d] = (ctype<char>)0x0;
  *(undefined2 *)(this + 0x1e) = 0;
  pcVar3 = this + 0x20;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar3 = 0;
    pcVar3 = pcVar3 + (uint)bVar4 * -8 + 4;
  }
  this[0x11d] = (ctype<char>)0x0;
  *(undefined2 *)(this + 0x11e) = 0;
  this[0x1c] = (ctype<char>)0x0;
  this[0x21d] = (ctype<char>)0x0;
  *pcVar3 = (ctype<char>)0x0;
  pcVar3 = this + 0x120;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar3 = 0;
    pcVar3 = pcVar3 + (uint)bVar4 * -8 + 4;
  }
  *pcVar3 = (ctype<char>)0x0;
  return;
}

```

---

## ctype_08726c90

```asm
// === 08726c90 std::ctype<char>::ctype  [0x08726c90-0x8726d7f] ===
 8726c90:	55                   	push   %ebp
 8726c91:	31 c0                	xor    %eax,%eax
 8726c93:	89 e5                	mov    %esp,%ebp
 8726c95:	83 ec 28             	sub    $0x28,%esp
 8726c98:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8726c9b:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8726c9e:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 8726ca2:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8726ca5:	0f b6 75 14          	movzbl 0x14(%ebp),%esi
 8726ca9:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8726cac:	8b 7d 10             	mov    0x10(%ebp),%edi
 8726caf:	0f 95 c0             	setne  %al
 8726cb2:	89 43 04             	mov    %eax,0x4(%ebx)
 8726cb5:	8d 45 0c             	lea    0xc(%ebp),%eax
 8726cb8:	c7 03 c8 1d d0 08    	movl   $0x8d01dc8,(%ebx)
 8726cbe:	89 04 24             	mov    %eax,(%esp)
 8726cc1:	e8 4a be ff ff       	call   8722b10 <_ZNSt6locale5facet17_S_clone_c_localeERP15__locale_struct>
 8726cc6:	85 ff                	test   %edi,%edi
 8726cc8:	89 43 08             	mov    %eax,0x8(%ebx)
 8726ccb:	0f 84 7f 00 00 00    	je     8726d50 <_ZNSt5ctypeIcEC1EP15__locale_structPKtbj+0xc0>
 8726cd1:	89 f2                	mov    %esi,%edx
 8726cd3:	84 d2                	test   %dl,%dl
 8726cd5:	75 61                	jne    8726d38 <_ZNSt5ctypeIcEC1EP15__locale_structPKtbj+0xa8>
 8726cd7:	8b 50 3c             	mov    0x3c(%eax),%edx
 8726cda:	c6 43 0c 00          	movb   $0x0,0xc(%ebx)
 8726cde:	89 53 10             	mov    %edx,0x10(%ebx)
 8726ce1:	8b 40 38             	mov    0x38(%eax),%eax
 8726ce4:	89 43 14             	mov    %eax,0x14(%ebx)
 8726ce7:	89 7b 18             	mov    %edi,0x18(%ebx)
 8726cea:	31 c0                	xor    %eax,%eax
 8726cec:	b9 3f 00 00 00       	mov    $0x3f,%ecx
 8726cf1:	8d 7b 20             	lea    0x20(%ebx),%edi
 8726cf4:	c6 43 1d 00          	movb   $0x0,0x1d(%ebx)
 8726cf8:	66 c7 43 1e 00 00    	movw   $0x0,0x1e(%ebx)
 8726cfe:	f3 ab                	rep stos %eax,%es:(%edi)
 8726d00:	c6 83 1d 01 00 00 00 	movb   $0x0,0x11d(%ebx)
 8726d07:	66 c7 83 1e 01 00 00 	movw   $0x0,0x11e(%ebx)
 8726d0e:	00 00 
 8726d10:	c6 43 1c 00          	movb   $0x0,0x1c(%ebx)
 8726d14:	c6 83 1d 02 00 00 00 	movb   $0x0,0x21d(%ebx)
 8726d1b:	c6 07 00             	movb   $0x0,(%edi)
 8726d1e:	b1 3f                	mov    $0x3f,%cl
 8726d20:	8d bb 20 01 00 00    	lea    0x120(%ebx),%edi
 8726d26:	f3 ab                	rep stos %eax,%es:(%edi)
 8726d28:	c6 07 00             	movb   $0x0,(%edi)
 8726d2b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8726d2e:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8726d31:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8726d34:	89 ec                	mov    %ebp,%esp
 8726d36:	5d                   	pop    %ebp
 8726d37:	c3                   	ret
 8726d38:	8b 50 3c             	mov    0x3c(%eax),%edx
 8726d3b:	c6 43 0c 01          	movb   $0x1,0xc(%ebx)
 8726d3f:	89 53 10             	mov    %edx,0x10(%ebx)
 8726d42:	8b 40 38             	mov    0x38(%eax),%eax
 8726d45:	89 43 14             	mov    %eax,0x14(%ebx)
 8726d48:	eb 9d                	jmp    8726ce7 <_ZNSt5ctypeIcEC1EP15__locale_structPKtbj+0x57>
 8726d4a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8726d50:	8b 50 3c             	mov    0x3c(%eax),%edx
 8726d53:	c6 43 0c 00          	movb   $0x0,0xc(%ebx)
 8726d57:	8b 78 34             	mov    0x34(%eax),%edi
 8726d5a:	89 53 10             	mov    %edx,0x10(%ebx)
 8726d5d:	8b 50 38             	mov    0x38(%eax),%edx
 8726d60:	89 53 14             	mov    %edx,0x14(%ebx)
 8726d63:	eb 82                	jmp    8726ce7 <_ZNSt5ctypeIcEC1EP15__locale_structPKtbj+0x57>
 8726d65:	89 c6                	mov    %eax,%esi
 8726d67:	89 1c 24             	mov    %ebx,(%esp)
 8726d6a:	e8 31 40 fb ff       	call   86dada0 <_ZNSt6locale5facetD1Ev>
 8726d6f:	89 34 24             	mov    %esi,(%esp)
 8726d72:	e8 d9 c9 3b 00       	call   8ae3750 <_Unwind_Resume>
 8726d77:	90                   	nop
 8726d78:	90                   	nop
 8726d79:	90                   	nop
 8726d7a:	90                   	nop
 8726d7b:	90                   	nop
 8726d7c:	90                   	nop
 8726d7d:	90                   	nop
 8726d7e:	90                   	nop
 8726d7f:	90                   	nop

```

```c
// std::ctype<char>::ctype @ 0x8726c90

/* std::ctype<char>::ctype(__locale_struct*, unsigned short const*, bool, unsigned int) */

void __thiscall
std::ctype<char>::ctype
          (ctype<char> *this,__locale_struct *param_1,ushort *param_2,bool param_3,uint param_4)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  ushort *puVar4;
  ctype<char> *pcVar5;
  byte bVar6;
  
  bVar2 = param_3;
  puVar4 = param_2;
  bVar6 = 0;
  *(uint *)(this + 4) = (uint)(param_4 != 0);
  *(undefined ***)this = &PTR__ctype_08d01dc8;
                    /* try { // try from 08726cc1 to 08726cc5 has its CatchHandler @ 08726d65 */
  iVar3 = locale::facet::_S_clone_c_locale(&param_1);
  *(int *)(this + 8) = iVar3;
  if (puVar4 == (ushort *)0x0) {
    uVar1 = *(undefined4 *)(iVar3 + 0x3c);
    this[0xc] = (ctype<char>)0x0;
    puVar4 = *(ushort **)(iVar3 + 0x34);
    *(undefined4 *)(this + 0x10) = uVar1;
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(iVar3 + 0x38);
  }
  else if (bVar2) {
    uVar1 = *(undefined4 *)(iVar3 + 0x3c);
    this[0xc] = (ctype<char>)0x1;
    *(undefined4 *)(this + 0x10) = uVar1;
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(iVar3 + 0x38);
  }
  else {
    uVar1 = *(undefined4 *)(iVar3 + 0x3c);
    this[0xc] = (ctype<char>)0x0;
    *(undefined4 *)(this + 0x10) = uVar1;
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(iVar3 + 0x38);
  }
  *(ushort **)(this + 0x18) = puVar4;
  this[0x1d] = (ctype<char>)0x0;
  *(undefined2 *)(this + 0x1e) = 0;
  pcVar5 = this + 0x20;
  for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar5 = 0;
    pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
  }
  this[0x11d] = (ctype<char>)0x0;
  *(undefined2 *)(this + 0x11e) = 0;
  this[0x1c] = (ctype<char>)0x0;
  this[0x21d] = (ctype<char>)0x0;
  *pcVar5 = (ctype<char>)0x0;
  pcVar5 = this + 0x120;
  for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar5 = 0;
    pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
  }
  *pcVar5 = (ctype<char>)0x0;
  return;
}

```

---

## do_tolower

```asm
// === 087266e0 std::ctype<char>::do_tolower  [0x087266e0-0x87266ff] ===
 87266e0:	55                   	push   %ebp
 87266e1:	89 e5                	mov    %esp,%ebp
 87266e3:	8b 45 08             	mov    0x8(%ebp),%eax
 87266e6:	0f b6 55 0c          	movzbl 0xc(%ebp),%edx
 87266ea:	5d                   	pop    %ebp
 87266eb:	8b 40 14             	mov    0x14(%eax),%eax
 87266ee:	8b 04 90             	mov    (%eax,%edx,4),%eax
 87266f1:	c3                   	ret
 87266f2:	90                   	nop
 87266f3:	90                   	nop
 87266f4:	90                   	nop
 87266f5:	90                   	nop
 87266f6:	90                   	nop
 87266f7:	90                   	nop
 87266f8:	90                   	nop
 87266f9:	90                   	nop
 87266fa:	90                   	nop
 87266fb:	90                   	nop
 87266fc:	90                   	nop
 87266fd:	90                   	nop
 87266fe:	90                   	nop
 87266ff:	90                   	nop

```

```c
// std::ctype<char>::do_tolower @ 0x87266e0

/* std::ctype<char>::do_tolower(char) const */

undefined4 __thiscall std::ctype<char>::do_tolower(ctype<char> *this,char param_1)

{
  return *(undefined4 *)(*(int *)(this + 0x14) + (uint)(byte)param_1 * 4);
}

```

---

## do_tolower_08726700

```asm
// === 08726700 std::ctype<char>::do_tolower  [0x08726700-0x872672f] ===
 8726700:	55                   	push   %ebp
 8726701:	89 e5                	mov    %esp,%ebp
 8726703:	8b 55 0c             	mov    0xc(%ebp),%edx
 8726706:	8b 45 10             	mov    0x10(%ebp),%eax
 8726709:	56                   	push   %esi
 872670a:	8b 75 08             	mov    0x8(%ebp),%esi
 872670d:	53                   	push   %ebx
 872670e:	39 c2                	cmp    %eax,%edx
 8726710:	73 18                	jae    872672a <_ZNKSt5ctypeIcE10do_tolowerEPcPKc+0x2a>
 8726712:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8726718:	0f b6 1a             	movzbl (%edx),%ebx
 872671b:	8b 4e 14             	mov    0x14(%esi),%ecx
 872671e:	8b 0c 99             	mov    (%ecx,%ebx,4),%ecx
 8726721:	88 0a                	mov    %cl,(%edx)
 8726723:	83 c2 01             	add    $0x1,%edx
 8726726:	39 d0                	cmp    %edx,%eax
 8726728:	77 ee                	ja     8726718 <_ZNKSt5ctypeIcE10do_tolowerEPcPKc+0x18>
 872672a:	5b                   	pop    %ebx
 872672b:	5e                   	pop    %esi
 872672c:	5d                   	pop    %ebp
 872672d:	c3                   	ret
 872672e:	90                   	nop
 872672f:	90                   	nop

```

```c
// std::ctype<char>::do_tolower @ 0x8726700

/* std::ctype<char>::do_tolower(char*, char const*) const */

void __thiscall std::ctype<char>::do_tolower(ctype<char> *this,char *param_1,char *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    *param_1 = (byte)*(undefined4 *)(*(int *)(this + 0x14) + (uint)(byte)*param_1 * 4);
  }
  return;
}

```

---

## do_toupper

```asm
// === 08726690 std::ctype<char>::do_toupper  [0x08726690-0x87266af] ===
 8726690:	55                   	push   %ebp
 8726691:	89 e5                	mov    %esp,%ebp
 8726693:	8b 45 08             	mov    0x8(%ebp),%eax
 8726696:	0f b6 55 0c          	movzbl 0xc(%ebp),%edx
 872669a:	5d                   	pop    %ebp
 872669b:	8b 40 10             	mov    0x10(%eax),%eax
 872669e:	8b 04 90             	mov    (%eax,%edx,4),%eax
 87266a1:	c3                   	ret
 87266a2:	90                   	nop
 87266a3:	90                   	nop
 87266a4:	90                   	nop
 87266a5:	90                   	nop
 87266a6:	90                   	nop
 87266a7:	90                   	nop
 87266a8:	90                   	nop
 87266a9:	90                   	nop
 87266aa:	90                   	nop
 87266ab:	90                   	nop
 87266ac:	90                   	nop
 87266ad:	90                   	nop
 87266ae:	90                   	nop
 87266af:	90                   	nop

```

```c
// std::ctype<char>::do_toupper @ 0x8726690

/* std::ctype<char>::do_toupper(char) const */

undefined4 __thiscall std::ctype<char>::do_toupper(ctype<char> *this,char param_1)

{
  return *(undefined4 *)(*(int *)(this + 0x10) + (uint)(byte)param_1 * 4);
}

```

---

## do_toupper_087266b0

```asm
// === 087266b0 std::ctype<char>::do_toupper  [0x087266b0-0x87266df] ===
 87266b0:	55                   	push   %ebp
 87266b1:	89 e5                	mov    %esp,%ebp
 87266b3:	8b 55 0c             	mov    0xc(%ebp),%edx
 87266b6:	8b 45 10             	mov    0x10(%ebp),%eax
 87266b9:	56                   	push   %esi
 87266ba:	8b 75 08             	mov    0x8(%ebp),%esi
 87266bd:	53                   	push   %ebx
 87266be:	39 c2                	cmp    %eax,%edx
 87266c0:	73 18                	jae    87266da <_ZNKSt5ctypeIcE10do_toupperEPcPKc+0x2a>
 87266c2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87266c8:	0f b6 1a             	movzbl (%edx),%ebx
 87266cb:	8b 4e 10             	mov    0x10(%esi),%ecx
 87266ce:	8b 0c 99             	mov    (%ecx,%ebx,4),%ecx
 87266d1:	88 0a                	mov    %cl,(%edx)
 87266d3:	83 c2 01             	add    $0x1,%edx
 87266d6:	39 d0                	cmp    %edx,%eax
 87266d8:	77 ee                	ja     87266c8 <_ZNKSt5ctypeIcE10do_toupperEPcPKc+0x18>
 87266da:	5b                   	pop    %ebx
 87266db:	5e                   	pop    %esi
 87266dc:	5d                   	pop    %ebp
 87266dd:	c3                   	ret
 87266de:	90                   	nop
 87266df:	90                   	nop

```

```c
// std::ctype<char>::do_toupper @ 0x87266b0

/* std::ctype<char>::do_toupper(char*, char const*) const */

void __thiscall std::ctype<char>::do_toupper(ctype<char> *this,char *param_1,char *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    *param_1 = (byte)*(undefined4 *)(*(int *)(this + 0x10) + (uint)(byte)*param_1 * 4);
  }
  return;
}

```

---

## ~ctype

```asm
// === 08726b20 std::ctype<char>::~ctype  [0x08726b20-0x8726b7f] ===
 8726b20:	55                   	push   %ebp
 8726b21:	89 e5                	mov    %esp,%ebp
 8726b23:	53                   	push   %ebx
 8726b24:	83 ec 24             	sub    $0x24,%esp
 8726b27:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8726b2a:	c7 03 c8 1d d0 08    	movl   $0x8d01dc8,(%ebx)
 8726b30:	8d 43 08             	lea    0x8(%ebx),%eax
 8726b33:	89 04 24             	mov    %eax,(%esp)
 8726b36:	e8 f5 bf ff ff       	call   8722b30 <_ZNSt6locale5facet19_S_destroy_c_localeERP15__locale_struct>
 8726b3b:	80 7b 0c 00          	cmpb   $0x0,0xc(%ebx)
 8726b3f:	74 0f                	je     8726b50 <_ZNSt5ctypeIcED1Ev+0x30>
 8726b41:	8b 43 18             	mov    0x18(%ebx),%eax
 8726b44:	85 c0                	test   %eax,%eax
 8726b46:	74 08                	je     8726b50 <_ZNSt5ctypeIcED1Ev+0x30>
 8726b48:	89 04 24             	mov    %eax,(%esp)
 8726b4b:	e8 60 e0 ff ff       	call   8724bb0 <_ZdaPv>
 8726b50:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8726b53:	83 c4 24             	add    $0x24,%esp
 8726b56:	5b                   	pop    %ebx
 8726b57:	5d                   	pop    %ebp
 8726b58:	e9 43 42 fb ff       	jmp    86dada0 <_ZNSt6locale5facetD1Ev>
 8726b5d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8726b60:	89 1c 24             	mov    %ebx,(%esp)
 8726b63:	e8 38 42 fb ff       	call   86dada0 <_ZNSt6locale5facetD1Ev>
 8726b68:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8726b6b:	89 04 24             	mov    %eax,(%esp)
 8726b6e:	e8 dd cb 3b 00       	call   8ae3750 <_Unwind_Resume>
 8726b73:	90                   	nop
 8726b74:	90                   	nop
 8726b75:	90                   	nop
 8726b76:	90                   	nop
 8726b77:	90                   	nop
 8726b78:	90                   	nop
 8726b79:	90                   	nop
 8726b7a:	90                   	nop
 8726b7b:	90                   	nop
 8726b7c:	90                   	nop
 8726b7d:	90                   	nop
 8726b7e:	90                   	nop
 8726b7f:	90                   	nop

```

```c
// std::ctype<char>::~ctype @ 0x8726b20

/* std::ctype<char>::~ctype() */

void __thiscall std::ctype<char>::~ctype(ctype<char> *this)

{
  *(undefined ***)this = &PTR__ctype_08d01dc8;
                    /* try { // try from 08726b36 to 08726b3a has its CatchHandler @ 08726b5d */
  locale::facet::_S_destroy_c_locale((__locale_struct **)(this + 8));
  if ((this[0xc] != (ctype<char>)0x0) && (*(void **)(this + 0x18) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x18));
  }
  locale::facet::~facet((facet *)this);
  return;
}

```

---

## ~ctype_08726b80

```asm
// === 08726b80 std::ctype<char>::~ctype  [0x08726b80-0x8726b9f] ===
 8726b80:	55                   	push   %ebp
 8726b81:	89 e5                	mov    %esp,%ebp
 8726b83:	53                   	push   %ebx
 8726b84:	83 ec 14             	sub    $0x14,%esp
 8726b87:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8726b8a:	89 1c 24             	mov    %ebx,(%esp)
 8726b8d:	e8 8e ff ff ff       	call   8726b20 <_ZNSt5ctypeIcED1Ev>
 8726b92:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8726b95:	83 c4 14             	add    $0x14,%esp
 8726b98:	5b                   	pop    %ebx
 8726b99:	5d                   	pop    %ebp
 8726b9a:	e9 51 d9 ff ff       	jmp    87244f0 <_ZdlPv>
 8726b9f:	90                   	nop

```

```c
// std::ctype<char>::~ctype @ 0x8726b80

/* std::ctype<char>::~ctype() */

void __thiscall std::ctype<char>::~ctype(ctype<char> *this)

{
  ~ctype(this);
  operator_delete(this);
  return;
}

```

