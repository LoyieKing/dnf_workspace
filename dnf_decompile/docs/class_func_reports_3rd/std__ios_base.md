# std__ios_base

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## _M_call_callbacks

```asm
// === 08726e50 std::ios_base::_M_call_callbacks  [0x08726e50-0x8726eaf] ===
 8726e50:	55                   	push   %ebp
 8726e51:	89 e5                	mov    %esp,%ebp
 8726e53:	57                   	push   %edi
 8726e54:	56                   	push   %esi
 8726e55:	53                   	push   %ebx
 8726e56:	83 ec 1c             	sub    $0x1c,%esp
 8726e59:	8b 75 08             	mov    0x8(%ebp),%esi
 8726e5c:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8726e5f:	8b 5e 18             	mov    0x18(%esi),%ebx
 8726e62:	85 db                	test   %ebx,%ebx
 8726e64:	74 19                	je     8726e7f <_ZNSt8ios_base17_M_call_callbacksENS_5eventE+0x2f>
 8726e66:	66 90                	xchg   %ax,%ax
 8726e68:	8b 43 08             	mov    0x8(%ebx),%eax
 8726e6b:	89 74 24 04          	mov    %esi,0x4(%esp)
 8726e6f:	89 3c 24             	mov    %edi,(%esp)
 8726e72:	89 44 24 08          	mov    %eax,0x8(%esp)
 8726e76:	ff 53 04             	call   *0x4(%ebx)
 8726e79:	8b 1b                	mov    (%ebx),%ebx
 8726e7b:	85 db                	test   %ebx,%ebx
 8726e7d:	75 e9                	jne    8726e68 <_ZNSt8ios_base17_M_call_callbacksENS_5eventE+0x18>
 8726e7f:	83 c4 1c             	add    $0x1c,%esp
 8726e82:	5b                   	pop    %ebx
 8726e83:	5e                   	pop    %esi
 8726e84:	5f                   	pop    %edi
 8726e85:	5d                   	pop    %ebp
 8726e86:	c3                   	ret
 8726e87:	89 04 24             	mov    %eax,(%esp)
 8726e8a:	e8 51 ee ff ff       	call   8725ce0 <__cxa_begin_catch>
 8726e8f:	e8 9c ed ff ff       	call   8725c30 <__cxa_end_catch>
 8726e94:	eb e3                	jmp    8726e79 <_ZNSt8ios_base17_M_call_callbacksENS_5eventE+0x29>
 8726e96:	83 fa ff             	cmp    $0xffffffff,%edx
 8726e99:	74 0a                	je     8726ea5 <_ZNSt8ios_base17_M_call_callbacksENS_5eventE+0x55>
 8726e9b:	89 04 24             	mov    %eax,(%esp)
 8726e9e:	66 90                	xchg   %ax,%ax
 8726ea0:	e8 ab c8 3b 00       	call   8ae3750 <_Unwind_Resume>
 8726ea5:	89 04 24             	mov    %eax,(%esp)
 8726ea8:	e8 43 cf ff ff       	call   8723df0 <__cxa_call_unexpected>
 8726ead:	90                   	nop
 8726eae:	90                   	nop
 8726eaf:	90                   	nop

```

```c
// std::ios_base::_M_call_callbacks @ 0x8726e50

/* std::ios_base::_M_call_callbacks(std::ios_base::event) */

void __thiscall std::ios_base::_M_call_callbacks(ios_base *this,undefined4 param_2)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(this + 0x18); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
                    /* try { // try from 08726e76 to 08726e78 has its CatchHandler @ 08726e87 */
    (*(code *)puVar1[1])(param_2,this,puVar1[2]);
  }
  return;
}

```

---

## _M_dispose_callbacks

```asm
// === 08726db0 std::ios_base::_M_dispose_callbacks  [0x08726db0-0x8726e1f] ===
 8726db0:	55                   	push   %ebp
 8726db1:	89 e5                	mov    %esp,%ebp
 8726db3:	57                   	push   %edi
 8726db4:	56                   	push   %esi
 8726db5:	53                   	push   %ebx
 8726db6:	83 ec 2c             	sub    $0x2c,%esp
 8726db9:	8b 7d 08             	mov    0x8(%ebp),%edi
 8726dbc:	8b 47 18             	mov    0x18(%edi),%eax
 8726dbf:	85 c0                	test   %eax,%eax
 8726dc1:	74 35                	je     8726df8 <_ZNSt8ios_base20_M_dispose_callbacksEv+0x48>
 8726dc3:	bb 60 e5 07 08       	mov    $0x807e560,%ebx
 8726dc8:	be ff ff ff ff       	mov    $0xffffffff,%esi
 8726dcd:	8d 76 00             	lea    0x0(%esi),%esi
 8726dd0:	85 db                	test   %ebx,%ebx
 8726dd2:	74 33                	je     8726e07 <_ZNSt8ios_base20_M_dispose_callbacksEv+0x57>
 8726dd4:	89 f2                	mov    %esi,%edx
 8726dd6:	f0 0f c1 50 0c       	lock xadd %edx,0xc(%eax)
 8726ddb:	85 d2                	test   %edx,%edx
 8726ddd:	75 19                	jne    8726df8 <_ZNSt8ios_base20_M_dispose_callbacksEv+0x48>
 8726ddf:	8b 10                	mov    (%eax),%edx
 8726de1:	89 04 24             	mov    %eax,(%esp)
 8726de4:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8726de7:	e8 04 d7 ff ff       	call   87244f0 <_ZdlPv>
 8726dec:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8726def:	85 c0                	test   %eax,%eax
 8726df1:	75 dd                	jne    8726dd0 <_ZNSt8ios_base20_M_dispose_callbacksEv+0x20>
 8726df3:	90                   	nop
 8726df4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8726df8:	c7 47 18 00 00 00 00 	movl   $0x0,0x18(%edi)
 8726dff:	83 c4 2c             	add    $0x2c,%esp
 8726e02:	5b                   	pop    %ebx
 8726e03:	5e                   	pop    %esi
 8726e04:	5f                   	pop    %edi
 8726e05:	5d                   	pop    %ebp
 8726e06:	c3                   	ret
 8726e07:	8b 50 0c             	mov    0xc(%eax),%edx
 8726e0a:	8d 4a ff             	lea    -0x1(%edx),%ecx
 8726e0d:	89 48 0c             	mov    %ecx,0xc(%eax)
 8726e10:	eb c9                	jmp    8726ddb <_ZNSt8ios_base20_M_dispose_callbacksEv+0x2b>
 8726e12:	90                   	nop
 8726e13:	90                   	nop
 8726e14:	90                   	nop
 8726e15:	90                   	nop
 8726e16:	90                   	nop
 8726e17:	90                   	nop
 8726e18:	90                   	nop
 8726e19:	90                   	nop
 8726e1a:	90                   	nop
 8726e1b:	90                   	nop
 8726e1c:	90                   	nop
 8726e1d:	90                   	nop
 8726e1e:	90                   	nop
 8726e1f:	90                   	nop

```

```c
// std::ios_base::_M_dispose_callbacks @ 0x8726db0

/* WARNING: Removing unreachable block (ram,0x08726e07) */
/* std::ios_base::_M_dispose_callbacks() */

void __thiscall std::ios_base::_M_dispose_callbacks(ios_base *this)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(this + 0x18);
  while (puVar4 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar4 + 3;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 0) break;
    puVar3 = (undefined4 *)*puVar4;
    operator_delete(puVar4);
    puVar4 = puVar3;
  }
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

```

---

## _M_grow_words

```asm
// === 08726eb0 std::ios_base::_M_grow_words  [0x08726eb0-0x872702f] ===
 8726eb0:	55                   	push   %ebp
 8726eb1:	89 e5                	mov    %esp,%ebp
 8726eb3:	57                   	push   %edi
 8726eb4:	56                   	push   %esi
 8726eb5:	53                   	push   %ebx
 8726eb6:	83 ec 2c             	sub    $0x2c,%esp
 8726eb9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8726ebc:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 8726ec0:	0f b6 75 10          	movzbl 0x10(%ebp),%esi
 8726ec4:	c7 45 e0 08 00 00 00 	movl   $0x8,-0x20(%ebp)
 8726ecb:	8d 43 24             	lea    0x24(%ebx),%eax
 8726ece:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8726ed1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8726ed4:	0f 8e 8e 00 00 00    	jle    8726f68 <_ZNSt8ios_base13_M_grow_wordsEib+0xb8>
 8726eda:	81 7d 0c ff ff ff 7f 	cmpl   $0x7fffffff,0xc(%ebp)
 8726ee1:	0f 84 a1 00 00 00    	je     8726f88 <_ZNSt8ios_base13_M_grow_wordsEib+0xd8>
 8726ee7:	8b 55 0c             	mov    0xc(%ebp),%edx
 8726eea:	83 c2 01             	add    $0x1,%edx
 8726eed:	89 d0                	mov    %edx,%eax
 8726eef:	c1 e0 03             	shl    $0x3,%eax
 8726ef2:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8726ef5:	89 04 24             	mov    %eax,(%esp)
 8726ef8:	e8 c3 be ff ff       	call   8722dc0 <_Znaj>
 8726efd:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8726f00:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8726f03:	85 c9                	test   %ecx,%ecx
 8726f05:	74 21                	je     8726f28 <_ZNSt8ios_base13_M_grow_wordsEib+0x78>
 8726f07:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8726f0a:	89 c2                	mov    %eax,%edx
 8726f0c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8726f10:	83 e9 01             	sub    $0x1,%ecx
 8726f13:	c7 02 00 00 00 00    	movl   $0x0,(%edx)
 8726f19:	c7 42 04 00 00 00 00 	movl   $0x0,0x4(%edx)
 8726f20:	83 c2 08             	add    $0x8,%edx
 8726f23:	83 f9 ff             	cmp    $0xffffffff,%ecx
 8726f26:	75 e8                	jne    8726f10 <_ZNSt8ios_base13_M_grow_wordsEib+0x60>
 8726f28:	8b 53 64             	mov    0x64(%ebx),%edx
 8726f2b:	85 d2                	test   %edx,%edx
 8726f2d:	0f 8e 86 00 00 00    	jle    8726fb9 <_ZNSt8ios_base13_M_grow_wordsEib+0x109>
 8726f33:	8b 4b 68             	mov    0x68(%ebx),%ecx
 8726f36:	31 d2                	xor    %edx,%edx
 8726f38:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 8726f3b:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 8726f3f:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 8726f42:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 8726f46:	83 c2 01             	add    $0x1,%edx
 8726f49:	39 53 64             	cmp    %edx,0x64(%ebx)
 8726f4c:	7f ea                	jg     8726f38 <_ZNSt8ios_base13_M_grow_wordsEib+0x88>
 8726f4e:	85 c9                	test   %ecx,%ecx
 8726f50:	74 16                	je     8726f68 <_ZNSt8ios_base13_M_grow_wordsEib+0xb8>
 8726f52:	39 4d dc             	cmp    %ecx,-0x24(%ebp)
 8726f55:	74 11                	je     8726f68 <_ZNSt8ios_base13_M_grow_wordsEib+0xb8>
 8726f57:	89 0c 24             	mov    %ecx,(%esp)
 8726f5a:	e8 51 dc ff ff       	call   8724bb0 <_ZdaPv>
 8726f5f:	c7 43 68 00 00 00 00 	movl   $0x0,0x68(%ebx)
 8726f66:	66 90                	xchg   %ax,%ax
 8726f68:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8726f6b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8726f6e:	89 4b 64             	mov    %ecx,0x64(%ebx)
 8726f71:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8726f74:	89 53 68             	mov    %edx,0x68(%ebx)
 8726f77:	8d 04 ca             	lea    (%edx,%ecx,8),%eax
 8726f7a:	83 c4 2c             	add    $0x2c,%esp
 8726f7d:	5b                   	pop    %ebx
 8726f7e:	5e                   	pop    %esi
 8726f7f:	5f                   	pop    %edi
 8726f80:	5d                   	pop    %ebp
 8726f81:	c3                   	ret
 8726f82:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8726f88:	8b 43 14             	mov    0x14(%ebx),%eax
 8726f8b:	83 c8 01             	or     $0x1,%eax
 8726f8e:	85 43 10             	test   %eax,0x10(%ebx)
 8726f91:	89 43 14             	mov    %eax,0x14(%ebx)
 8726f94:	75 5b                	jne    8726ff1 <_ZNSt8ios_base13_M_grow_wordsEib+0x141>
 8726f96:	89 f0                	mov    %esi,%eax
 8726f98:	84 c0                	test   %al,%al
 8726f9a:	75 14                	jne    8726fb0 <_ZNSt8ios_base13_M_grow_wordsEib+0x100>
 8726f9c:	c7 43 1c 00 00 00 00 	movl   $0x0,0x1c(%ebx)
 8726fa3:	83 c4 2c             	add    $0x2c,%esp
 8726fa6:	8d 43 1c             	lea    0x1c(%ebx),%eax
 8726fa9:	5b                   	pop    %ebx
 8726faa:	5e                   	pop    %esi
 8726fab:	5f                   	pop    %edi
 8726fac:	5d                   	pop    %ebp
 8726fad:	c3                   	ret
 8726fae:	66 90                	xchg   %ax,%ax
 8726fb0:	c7 43 20 00 00 00 00 	movl   $0x0,0x20(%ebx)
 8726fb7:	eb ea                	jmp    8726fa3 <_ZNSt8ios_base13_M_grow_wordsEib+0xf3>
 8726fb9:	8b 4b 68             	mov    0x68(%ebx),%ecx
 8726fbc:	eb 90                	jmp    8726f4e <_ZNSt8ios_base13_M_grow_wordsEib+0x9e>
 8726fbe:	89 04 24             	mov    %eax,(%esp)
 8726fc1:	e8 1a ed ff ff       	call   8725ce0 <__cxa_begin_catch>
 8726fc6:	8b 43 14             	mov    0x14(%ebx),%eax
 8726fc9:	83 c8 01             	or     $0x1,%eax
 8726fcc:	85 43 10             	test   %eax,0x10(%ebx)
 8726fcf:	89 43 14             	mov    %eax,0x14(%ebx)
 8726fd2:	75 32                	jne    8727006 <_ZNSt8ios_base13_M_grow_wordsEib+0x156>
 8726fd4:	89 f1                	mov    %esi,%ecx
 8726fd6:	84 c9                	test   %cl,%cl
 8726fd8:	74 23                	je     8726ffd <_ZNSt8ios_base13_M_grow_wordsEib+0x14d>
 8726fda:	c7 43 20 00 00 00 00 	movl   $0x0,0x20(%ebx)
 8726fe1:	8d 43 1c             	lea    0x1c(%ebx),%eax
 8726fe4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8726fe7:	e8 44 ec ff ff       	call   8725c30 <__cxa_end_catch>
 8726fec:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8726fef:	eb 89                	jmp    8726f7a <_ZNSt8ios_base13_M_grow_wordsEib+0xca>
 8726ff1:	c7 04 24 8c 1e d0 08 	movl   $0x8d01e8c,(%esp)
 8726ff8:	e8 83 27 fb ff       	call   86d9780 <_ZSt19__throw_ios_failurePKc>
 8726ffd:	c7 43 1c 00 00 00 00 	movl   $0x0,0x1c(%ebx)
 8727004:	eb db                	jmp    8726fe1 <_ZNSt8ios_base13_M_grow_wordsEib+0x131>
 8727006:	c7 04 24 60 1e d0 08 	movl   $0x8d01e60,(%esp)
 872700d:	e8 6e 27 fb ff       	call   86d9780 <_ZSt19__throw_ios_failurePKc>
 8727012:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8727015:	e8 16 ec ff ff       	call   8725c30 <__cxa_end_catch>
 872701a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 872701d:	89 04 24             	mov    %eax,(%esp)
 8727020:	e8 2b c7 3b 00       	call   8ae3750 <_Unwind_Resume>
 8727025:	90                   	nop
 8727026:	90                   	nop
 8727027:	90                   	nop
 8727028:	90                   	nop
 8727029:	90                   	nop
 872702a:	90                   	nop
 872702b:	90                   	nop
 872702c:	90                   	nop
 872702d:	90                   	nop
 872702e:	90                   	nop
 872702f:	90                   	nop

```

```c
// std::ios_base::_M_grow_words @ 0x8726eb0

/* std::ios_base::_M_grow_words(int, bool) */

ios_base * __thiscall std::ios_base::_M_grow_words(ios_base *this,int param_1,bool param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ios_base *piVar4;
  int local_24;
  ios_base *local_20;
  
  local_24 = 8;
  local_20 = this + 0x24;
  if (7 < param_1) {
    if (param_1 == 0x7fffffff) {
      uVar2 = *(uint *)(this + 0x14);
      *(uint *)(this + 0x14) = uVar2 | 1;
      if ((*(uint *)(this + 0x10) & (uVar2 | 1)) != 0) {
                    /* WARNING: Subroutine does not return */
        __throw_ios_failure("ios_base::_M_grow_words is not valid");
      }
      if (param_2) {
        *(undefined4 *)(this + 0x20) = 0;
      }
      else {
        *(undefined4 *)(this + 0x1c) = 0;
      }
      return this + 0x1c;
    }
    local_24 = param_1 + 1;
                    /* try { // try from 08726ef8 to 08726efc has its CatchHandler @ 08726fbe */
    local_20 = operator_new__(local_24 * 8);
    iVar3 = param_1;
    piVar4 = local_20;
    if (local_24 != 0) {
      do {
        iVar3 = iVar3 + -1;
        *(undefined4 *)piVar4 = 0;
        *(undefined4 *)(piVar4 + 4) = 0;
        piVar4 = piVar4 + 8;
      } while (iVar3 != -1);
    }
    if (*(int *)(this + 100) < 1) {
      piVar4 = *(ios_base **)(this + 0x68);
    }
    else {
      piVar4 = *(ios_base **)(this + 0x68);
      iVar3 = 0;
      do {
        uVar1 = *(undefined4 *)(piVar4 + iVar3 * 8 + 4);
        *(undefined4 *)(local_20 + iVar3 * 8) = *(undefined4 *)(piVar4 + iVar3 * 8);
        *(undefined4 *)(local_20 + iVar3 * 8 + 4) = uVar1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(this + 100));
    }
    if ((piVar4 != (ios_base *)0x0) && (this + 0x24 != piVar4)) {
      operator_delete__(piVar4);
      *(undefined4 *)(this + 0x68) = 0;
    }
  }
  *(int *)(this + 100) = local_24;
  *(ios_base **)(this + 0x68) = local_20;
  return local_20 + param_1 * 8;
}

```

---

## _M_init

```asm
// === 087271d0 std::ios_base::_M_init  [0x087271d0-0x872721f] ===
 87271d0:	55                   	push   %ebp
 87271d1:	89 e5                	mov    %esp,%ebp
 87271d3:	83 ec 28             	sub    $0x28,%esp
 87271d6:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87271d9:	8b 75 08             	mov    0x8(%ebp),%esi
 87271dc:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87271df:	8d 5d f4             	lea    -0xc(%ebp),%ebx
 87271e2:	c7 46 04 06 00 00 00 	movl   $0x6,0x4(%esi)
 87271e9:	c7 46 08 00 00 00 00 	movl   $0x0,0x8(%esi)
 87271f0:	c7 46 0c 02 10 00 00 	movl   $0x1002,0xc(%esi)
 87271f7:	83 c6 6c             	add    $0x6c,%esi
 87271fa:	89 1c 24             	mov    %ebx,(%esp)
 87271fd:	e8 4e 5e fb ff       	call   86dd050 <_ZNSt6localeC1Ev>
 8727202:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8727206:	89 34 24             	mov    %esi,(%esp)
 8727209:	e8 82 48 fb ff       	call   86dba90 <_ZNSt6localeaSERKS_>
 872720e:	89 1c 24             	mov    %ebx,(%esp)
 8727211:	e8 ba 4a fb ff       	call   86dbcd0 <_ZNSt6localeD1Ev>
 8727216:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8727219:	8b 75 fc             	mov    -0x4(%ebp),%esi
 872721c:	89 ec                	mov    %ebp,%esp
 872721e:	5d                   	pop    %ebp
 872721f:	c3                   	ret

```

```c
// std::ios_base::_M_init @ 0x87271d0

/* std::ios_base::_M_init() */

void __thiscall std::ios_base::_M_init(ios_base *this)

{
  locale local_10;
  
  *(undefined4 *)(this + 4) = 6;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0x1002;
  locale::locale(&local_10);
  locale::operator=((locale *)(this + 0x6c),&local_10);
  locale::~locale(&local_10);
  return;
}

```

---

## imbue

```asm
// === 08727170 std::ios_base::imbue  [0x08727170-0x87271cf] ===
 8727170:	55                   	push   %ebp
 8727171:	89 e5                	mov    %esp,%ebp
 8727173:	83 ec 28             	sub    $0x28,%esp
 8727176:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8727179:	8b 75 0c             	mov    0xc(%ebp),%esi
 872717c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 872717f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8727182:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8727185:	8d 7e 6c             	lea    0x6c(%esi),%edi
 8727188:	89 7c 24 04          	mov    %edi,0x4(%esp)
 872718c:	89 1c 24             	mov    %ebx,(%esp)
 872718f:	e8 5c 3c fb ff       	call   86dadf0 <_ZNSt6localeC1ERKS_>
 8727194:	8b 45 10             	mov    0x10(%ebp),%eax
 8727197:	89 3c 24             	mov    %edi,(%esp)
 872719a:	89 44 24 04          	mov    %eax,0x4(%esp)
 872719e:	e8 ed 48 fb ff       	call   86dba90 <_ZNSt6localeaSERKS_>
 87271a3:	89 34 24             	mov    %esi,(%esp)
 87271a6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 87271ad:	00 
 87271ae:	e8 9d fc ff ff       	call   8726e50 <_ZNSt8ios_base17_M_call_callbacksENS_5eventE>
 87271b3:	89 d8                	mov    %ebx,%eax
 87271b5:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87271b8:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87271bb:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87271be:	89 ec                	mov    %ebp,%esp
 87271c0:	5d                   	pop    %ebp
 87271c1:	c2 04 00             	ret    $0x4
 87271c4:	90                   	nop
 87271c5:	90                   	nop
 87271c6:	90                   	nop
 87271c7:	90                   	nop
 87271c8:	90                   	nop
 87271c9:	90                   	nop
 87271ca:	90                   	nop
 87271cb:	90                   	nop
 87271cc:	90                   	nop
 87271cd:	90                   	nop
 87271ce:	90                   	nop
 87271cf:	90                   	nop

```

```c
// std::ios_base::imbue @ 0x8727170

/* std::ios_base::imbue(std::locale const&) */

locale * std::ios_base::imbue(locale *param_1)

{
  int in_stack_00000008;
  locale *in_stack_0000000c;
  
  locale::locale(param_1,(locale *)(in_stack_00000008 + 0x6c));
  locale::operator=((locale *)(in_stack_00000008 + 0x6c),in_stack_0000000c);
  _M_call_callbacks();
  return param_1;
}

```

---

## ios_base

```asm
// === 087270f0 std::ios_base::ios_base  [0x087270f0-0x872716f] ===
 87270f0:	55                   	push   %ebp
 87270f1:	31 c0                	xor    %eax,%eax
 87270f3:	89 e5                	mov    %esp,%ebp
 87270f5:	83 ec 08             	sub    $0x8,%esp
 87270f8:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87270fb:	c7 01 38 1f d0 08    	movl   $0x8d01f38,(%ecx)
 8727101:	8d 51 24             	lea    0x24(%ecx),%edx
 8727104:	c7 41 04 00 00 00 00 	movl   $0x0,0x4(%ecx)
 872710b:	c7 41 08 00 00 00 00 	movl   $0x0,0x8(%ecx)
 8727112:	c7 41 0c 00 00 00 00 	movl   $0x0,0xc(%ecx)
 8727119:	c7 41 10 00 00 00 00 	movl   $0x0,0x10(%ecx)
 8727120:	c7 41 14 00 00 00 00 	movl   $0x0,0x14(%ecx)
 8727127:	c7 41 18 00 00 00 00 	movl   $0x0,0x18(%ecx)
 872712e:	c7 41 1c 00 00 00 00 	movl   $0x0,0x1c(%ecx)
 8727135:	c7 41 20 00 00 00 00 	movl   $0x0,0x20(%ecx)
 872713c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8727140:	c7 04 02 00 00 00 00 	movl   $0x0,(%edx,%eax,1)
 8727147:	c7 44 02 04 00 00 00 	movl   $0x0,0x4(%edx,%eax,1)
 872714e:	00 
 872714f:	83 c0 08             	add    $0x8,%eax
 8727152:	83 f8 40             	cmp    $0x40,%eax
 8727155:	75 e9                	jne    8727140 <_ZNSt8ios_baseC1Ev+0x50>
 8727157:	c7 41 64 08 00 00 00 	movl   $0x8,0x64(%ecx)
 872715e:	89 51 68             	mov    %edx,0x68(%ecx)
 8727161:	83 c1 6c             	add    $0x6c,%ecx
 8727164:	89 4d 08             	mov    %ecx,0x8(%ebp)
 8727167:	c9                   	leave
 8727168:	e9 e3 5e fb ff       	jmp    86dd050 <_ZNSt6localeC1Ev>
 872716d:	90                   	nop
 872716e:	90                   	nop
 872716f:	90                   	nop

```

```c
// std::ios_base::ios_base @ 0x87270f0

/* std::ios_base::ios_base() */

void __thiscall std::ios_base::ios_base(ios_base *this)

{
  int iVar1;
  
  iVar1 = 0;
  *(undefined ***)this = &PTR__ios_base_08d01f38;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  do {
    *(undefined4 *)(this + 0x24 + iVar1) = 0;
    *(undefined4 *)(this + iVar1 + 0x28) = 0;
    iVar1 = iVar1 + 8;
  } while (iVar1 != 0x40);
  *(undefined4 *)(this + 100) = 8;
  *(ios_base **)(this + 0x68) = this + 0x24;
  locale::locale((locale *)(this + 0x6c));
  return;
}

```

---

## register_callback

```asm
// === 08727030 std::ios_base::register_callback  [0x08727030-0x872706f] ===
 8727030:	55                   	push   %ebp
 8727031:	89 e5                	mov    %esp,%ebp
 8727033:	53                   	push   %ebx
 8727034:	83 ec 14             	sub    $0x14,%esp
 8727037:	8b 5d 08             	mov    0x8(%ebp),%ebx
 872703a:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8727041:	e8 0a d4 ff ff       	call   8724450 <_Znwj>
 8727046:	8b 53 18             	mov    0x18(%ebx),%edx
 8727049:	89 10                	mov    %edx,(%eax)
 872704b:	8b 55 0c             	mov    0xc(%ebp),%edx
 872704e:	89 43 18             	mov    %eax,0x18(%ebx)
 8727051:	89 50 04             	mov    %edx,0x4(%eax)
 8727054:	8b 55 10             	mov    0x10(%ebp),%edx
 8727057:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 872705e:	89 50 08             	mov    %edx,0x8(%eax)
 8727061:	83 c4 14             	add    $0x14,%esp
 8727064:	5b                   	pop    %ebx
 8727065:	5d                   	pop    %ebp
 8727066:	c3                   	ret
 8727067:	90                   	nop
 8727068:	90                   	nop
 8727069:	90                   	nop
 872706a:	90                   	nop
 872706b:	90                   	nop
 872706c:	90                   	nop
 872706d:	90                   	nop
 872706e:	90                   	nop
 872706f:	90                   	nop

```

```c
// std::ios_base::register_callback @ 0x8727030

/* std::ios_base::register_callback(void (*)(std::ios_base::event, std::ios_base&, int), int) */

void __thiscall
std::ios_base::register_callback
          (ios_base *this,_func_void_event_ios_base_ptr_int *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = *(undefined4 *)(this + 0x18);
  *(undefined4 **)(this + 0x18) = puVar1;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = param_2;
  return;
}

```

---

## sync_with_stdio

```asm
// === 086da9a0 std::ios_base::sync_with_stdio  [0x086da9a0-0x86dac2f] ===
 86da9a0:	55                   	push   %ebp
 86da9a1:	89 e5                	mov    %esp,%ebp
 86da9a3:	56                   	push   %esi
 86da9a4:	53                   	push   %ebx
 86da9a5:	83 ec 30             	sub    $0x30,%esp
 86da9a8:	0f b6 1d a0 cf 3a 09 	movzbl 0x93acfa0,%ebx
 86da9af:	80 7d 08 00          	cmpb   $0x0,0x8(%ebp)
 86da9b3:	75 04                	jne    86da9b9 <_ZNSt8ios_base15sync_with_stdioEb+0x19>
 86da9b5:	84 db                	test   %bl,%bl
 86da9b7:	75 0f                	jne    86da9c8 <_ZNSt8ios_base15sync_with_stdioEb+0x28>
 86da9b9:	83 c4 30             	add    $0x30,%esp
 86da9bc:	89 d8                	mov    %ebx,%eax
 86da9be:	5b                   	pop    %ebx
 86da9bf:	5e                   	pop    %esi
 86da9c0:	5d                   	pop    %ebp
 86da9c1:	c3                   	ret
 86da9c2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 86da9c8:	8d 75 f7             	lea    -0x9(%ebp),%esi
 86da9cb:	89 34 24             	mov    %esi,(%esp)
 86da9ce:	e8 0d f8 ff ff       	call   86da1e0 <_ZNSt8ios_base4InitC1Ev>
 86da9d3:	c6 05 a0 cf 3a 09 00 	movb   $0x0,0x93acfa0
 86da9da:	c7 05 20 b8 48 09 68 	movl   $0x8d00368,0x948b820
 86da9e1:	03 d0 08 
 86da9e4:	c7 04 24 3c b8 48 09 	movl   $0x948b83c,(%esp)
 86da9eb:	e8 e0 12 00 00       	call   86dbcd0 <_ZNSt6localeD1Ev>
 86da9f0:	c7 05 60 b8 48 09 68 	movl   $0x8d00368,0x948b860
 86da9f7:	03 d0 08 
 86da9fa:	c7 04 24 7c b8 48 09 	movl   $0x948b87c,(%esp)
 86daa01:	e8 ca 12 00 00       	call   86dbcd0 <_ZNSt6localeD1Ev>
 86daa06:	c7 05 a0 b8 48 09 68 	movl   $0x8d00368,0x948b8a0
 86daa0d:	03 d0 08 
 86daa10:	c7 04 24 bc b8 48 09 	movl   $0x948b8bc,(%esp)
 86daa17:	e8 b4 12 00 00       	call   86dbcd0 <_ZNSt6localeD1Ev>
 86daa1c:	c7 05 c0 ba 48 09 28 	movl   $0x8d00328,0x948bac0
 86daa23:	03 d0 08 
 86daa26:	c7 04 24 dc ba 48 09 	movl   $0x948badc,(%esp)
 86daa2d:	e8 9e 12 00 00       	call   86dbcd0 <_ZNSt6localeD1Ev>
 86daa32:	c7 05 00 bb 48 09 28 	movl   $0x8d00328,0x948bb00
 86daa39:	03 d0 08 
 86daa3c:	c7 04 24 1c bb 48 09 	movl   $0x948bb1c,(%esp)
 86daa43:	e8 88 12 00 00       	call   86dbcd0 <_ZNSt6localeD1Ev>
 86daa48:	c7 05 40 bb 48 09 28 	movl   $0x8d00328,0x948bb40
 86daa4f:	03 d0 08 
 86daa52:	c7 04 24 5c bb 48 09 	movl   $0x948bb5c,(%esp)
 86daa59:	e8 72 12 00 00       	call   86dbcd0 <_ZNSt6localeD1Ev>
 86daa5e:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 86daa63:	c7 44 24 0c 00 20 00 	movl   $0x2000,0xc(%esp)
 86daa6a:	00 
 86daa6b:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 86daa72:	00 
 86daa73:	c7 04 24 e0 b8 48 09 	movl   $0x948b8e0,(%esp)
 86daa7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 86daa7e:	e8 dd 58 00 00       	call   86e0360 <_ZN9__gnu_cxx13stdio_filebufIcSt11char_traitsIcEEC1EP8_IO_FILESt13_Ios_Openmodej>
 86daa83:	a1 c0 56 3f 09       	mov    0x93f56c0,%eax
 86daa88:	c7 44 24 0c 00 20 00 	movl   $0x2000,0xc(%esp)
 86daa8f:	00 
 86daa90:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 86daa97:	00 
 86daa98:	c7 04 24 80 b9 48 09 	movl   $0x948b980,(%esp)
 86daa9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86daaa3:	e8 b8 58 00 00       	call   86e0360 <_ZN9__gnu_cxx13stdio_filebufIcSt11char_traitsIcEEC1EP8_IO_FILESt13_Ios_Openmodej>
 86daaa8:	a1 c4 56 3f 09       	mov    0x93f56c4,%eax
 86daaad:	c7 44 24 0c 00 20 00 	movl   $0x2000,0xc(%esp)
 86daab4:	00 
 86daab5:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 86daabc:	00 
 86daabd:	c7 04 24 20 ba 48 09 	movl   $0x948ba20,(%esp)
 86daac4:	89 44 24 04          	mov    %eax,0x4(%esp)
 86daac8:	e8 93 58 00 00       	call   86e0360 <_ZN9__gnu_cxx13stdio_filebufIcSt11char_traitsIcEEC1EP8_IO_FILESt13_Ios_Openmodej>
 86daacd:	c7 44 24 04 e0 b8 48 	movl   $0x948b8e0,0x4(%esp)
 86daad4:	09 
 86daad5:	c7 04 24 c4 b3 48 09 	movl   $0x948b3c4,(%esp)
 86daadc:	e8 ff 62 00 00       	call   86e0de0 <_ZNSt9basic_iosIcSt11char_traitsIcEE5rdbufEPSt15basic_streambufIcS1_E>
 86daae1:	c7 44 24 04 80 b9 48 	movl   $0x948b980,0x4(%esp)
 86daae8:	09 
 86daae9:	c7 04 24 28 b3 48 09 	movl   $0x948b328,(%esp)
 86daaf0:	e8 eb 62 00 00       	call   86e0de0 <_ZNSt9basic_iosIcSt11char_traitsIcEE5rdbufEPSt15basic_streambufIcS1_E>
 86daaf5:	c7 44 24 04 20 ba 48 	movl   $0x948ba20,0x4(%esp)
 86daafc:	09 
 86daafd:	c7 04 24 64 b4 48 09 	movl   $0x948b464,(%esp)
 86dab04:	e8 d7 62 00 00       	call   86e0de0 <_ZNSt9basic_iosIcSt11char_traitsIcEE5rdbufEPSt15basic_streambufIcS1_E>
 86dab09:	c7 44 24 04 20 ba 48 	movl   $0x948ba20,0x4(%esp)
 86dab10:	09 
 86dab11:	c7 04 24 04 b5 48 09 	movl   $0x948b504,(%esp)
 86dab18:	e8 c3 62 00 00       	call   86e0de0 <_ZNSt9basic_iosIcSt11char_traitsIcEE5rdbufEPSt15basic_streambufIcS1_E>
 86dab1d:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 86dab22:	c7 44 24 0c 00 20 00 	movl   $0x2000,0xc(%esp)
 86dab29:	00 
 86dab2a:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 86dab31:	00 
 86dab32:	c7 04 24 80 bb 48 09 	movl   $0x948bb80,(%esp)
 86dab39:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dab3d:	e8 be 59 00 00       	call   86e0500 <_ZN9__gnu_cxx13stdio_filebufIwSt11char_traitsIwEEC1EP8_IO_FILESt13_Ios_Openmodej>
 86dab42:	a1 c0 56 3f 09       	mov    0x93f56c0,%eax
 86dab47:	c7 44 24 0c 00 20 00 	movl   $0x2000,0xc(%esp)
 86dab4e:	00 
 86dab4f:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 86dab56:	00 
 86dab57:	c7 04 24 20 bc 48 09 	movl   $0x948bc20,(%esp)
 86dab5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dab62:	e8 99 59 00 00       	call   86e0500 <_ZN9__gnu_cxx13stdio_filebufIwSt11char_traitsIwEEC1EP8_IO_FILESt13_Ios_Openmodej>
 86dab67:	a1 c4 56 3f 09       	mov    0x93f56c4,%eax
 86dab6c:	c7 44 24 0c 00 20 00 	movl   $0x2000,0xc(%esp)
 86dab73:	00 
 86dab74:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 86dab7b:	00 
 86dab7c:	c7 04 24 c0 bc 48 09 	movl   $0x948bcc0,(%esp)
 86dab83:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dab87:	e8 74 59 00 00       	call   86e0500 <_ZN9__gnu_cxx13stdio_filebufIwSt11char_traitsIwEEC1EP8_IO_FILESt13_Ios_Openmodej>
 86dab8c:	c7 44 24 04 80 bb 48 	movl   $0x948bb80,0x4(%esp)
 86dab93:	09 
 86dab94:	c7 04 24 44 b6 48 09 	movl   $0x948b644,(%esp)
 86dab9b:	e8 90 61 00 00       	call   86e0d30 <_ZNSt9basic_iosIwSt11char_traitsIwEE5rdbufEPSt15basic_streambufIwS1_E>
 86daba0:	c7 44 24 04 20 bc 48 	movl   $0x948bc20,0x4(%esp)
 86daba7:	09 
 86daba8:	c7 04 24 a8 b5 48 09 	movl   $0x948b5a8,(%esp)
 86dabaf:	e8 7c 61 00 00       	call   86e0d30 <_ZNSt9basic_iosIwSt11char_traitsIwEE5rdbufEPSt15basic_streambufIwS1_E>
 86dabb4:	c7 44 24 04 c0 bc 48 	movl   $0x948bcc0,0x4(%esp)
 86dabbb:	09 
 86dabbc:	c7 04 24 e4 b6 48 09 	movl   $0x948b6e4,(%esp)
 86dabc3:	e8 68 61 00 00       	call   86e0d30 <_ZNSt9basic_iosIwSt11char_traitsIwEE5rdbufEPSt15basic_streambufIwS1_E>
 86dabc8:	c7 44 24 04 c0 bc 48 	movl   $0x948bcc0,0x4(%esp)
 86dabcf:	09 
 86dabd0:	c7 04 24 84 b7 48 09 	movl   $0x948b784,(%esp)
 86dabd7:	e8 54 61 00 00       	call   86e0d30 <_ZNSt9basic_iosIwSt11char_traitsIwEE5rdbufEPSt15basic_streambufIwS1_E>
 86dabdc:	89 34 24             	mov    %esi,(%esp)
 86dabdf:	e8 5c f5 ff ff       	call   86da140 <_ZNSt8ios_base4InitD1Ev>
 86dabe4:	83 c4 30             	add    $0x30,%esp
 86dabe7:	89 d8                	mov    %ebx,%eax
 86dabe9:	5b                   	pop    %ebx
 86dabea:	5e                   	pop    %esi
 86dabeb:	5d                   	pop    %ebp
 86dabec:	c3                   	ret
 86dabed:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86dabf0:	89 34 24             	mov    %esi,(%esp)
 86dabf3:	e8 48 f5 ff ff       	call   86da140 <_ZNSt8ios_base4InitD1Ev>
 86dabf8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86dabfb:	89 04 24             	mov    %eax,(%esp)
 86dabfe:	e8 4d 8b 40 00       	call   8ae3750 <_Unwind_Resume>
 86dac03:	eb e8                	jmp    86dabed <_ZNSt8ios_base15sync_with_stdioEb+0x24d>
 86dac05:	eb e6                	jmp    86dabed <_ZNSt8ios_base15sync_with_stdioEb+0x24d>
 86dac07:	89 f6                	mov    %esi,%esi
 86dac09:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 86dac10:	eb db                	jmp    86dabed <_ZNSt8ios_base15sync_with_stdioEb+0x24d>
 86dac12:	eb d9                	jmp    86dabed <_ZNSt8ios_base15sync_with_stdioEb+0x24d>
 86dac14:	eb d7                	jmp    86dabed <_ZNSt8ios_base15sync_with_stdioEb+0x24d>
 86dac16:	8d 76 00             	lea    0x0(%esi),%esi
 86dac19:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 86dac20:	eb cb                	jmp    86dabed <_ZNSt8ios_base15sync_with_stdioEb+0x24d>
 86dac22:	90                   	nop
 86dac23:	90                   	nop
 86dac24:	90                   	nop
 86dac25:	90                   	nop
 86dac26:	90                   	nop
 86dac27:	90                   	nop
 86dac28:	90                   	nop
 86dac29:	90                   	nop
 86dac2a:	90                   	nop
 86dac2b:	90                   	nop
 86dac2c:	90                   	nop
 86dac2d:	90                   	nop
 86dac2e:	90                   	nop
 86dac2f:	90                   	nop

```

```c
// std::ios_base::sync_with_stdio @ 0x86da9a0

/* std::ios_base::sync_with_stdio(bool) */

char std::ios_base::sync_with_stdio(bool param_1)

{
  char cVar1;
  Init local_d;
  
  cVar1 = Init::_S_synced_with_stdio;
  if ((!param_1) && (Init::_S_synced_with_stdio != '\0')) {
    Init::Init(&local_d);
    Init::_S_synced_with_stdio = 0;
    __gnu_internal::buf_cout_sync._0_4_ = &PTR__streambuf_08d00368;
    locale::~locale((locale *)(__gnu_internal::buf_cout_sync + 0x1c));
    __gnu_internal::buf_cin_sync._0_4_ = &PTR__streambuf_08d00368;
    locale::~locale((locale *)(__gnu_internal::buf_cin_sync + 0x1c));
    __gnu_internal::buf_cerr_sync._0_4_ = &PTR__streambuf_08d00368;
    locale::~locale((locale *)(__gnu_internal::buf_cerr_sync + 0x1c));
    __gnu_internal::buf_wcout_sync._0_4_ = &PTR__wstreambuf_08d00328;
    locale::~locale((locale *)(__gnu_internal::buf_wcout_sync + 0x1c));
    __gnu_internal::buf_wcin_sync._0_4_ = &PTR__wstreambuf_08d00328;
    locale::~locale((locale *)(__gnu_internal::buf_wcin_sync + 0x1c));
    __gnu_internal::buf_wcerr_sync._0_4_ = &PTR__wstreambuf_08d00328;
    locale::~locale((locale *)(__gnu_internal::buf_wcerr_sync + 0x1c));
                    /* try { // try from 086daa7e to 086daa82 has its CatchHandler @ 086dabed */
    __gnu_cxx::stdio_filebuf<char,std::char_traits<char>>::stdio_filebuf
              ((stdio_filebuf<char,std::char_traits<char>> *)__gnu_internal::buf_cout,stdout,_S_out,
               0x2000);
                    /* try { // try from 086daaa3 to 086daaa7 has its CatchHandler @ 086dac03 */
    __gnu_cxx::stdio_filebuf<char,std::char_traits<char>>::stdio_filebuf
              ((stdio_filebuf<char,std::char_traits<char>> *)__gnu_internal::buf_cin,stdin,_S_in,
               0x2000);
                    /* try { // try from 086daac8 to 086daacc has its CatchHandler @ 086dac05 */
    __gnu_cxx::stdio_filebuf<char,std::char_traits<char>>::stdio_filebuf
              ((stdio_filebuf<char,std::char_traits<char>> *)__gnu_internal::buf_cerr,stderr,_S_out,
               0x2000);
                    /* try { // try from 086daadc to 086dab1c has its CatchHandler @ 086dac07 */
    ios::rdbuf((ios *)(cout + 4),(streambuf *)__gnu_internal::buf_cout);
    ios::rdbuf((ios *)(cin + 8),(streambuf *)__gnu_internal::buf_cin);
    ios::rdbuf((ios *)&DAT_0948b464,(streambuf *)__gnu_internal::buf_cerr);
    ios::rdbuf((ios *)(clog + 4),(streambuf *)__gnu_internal::buf_cerr);
                    /* try { // try from 086dab3d to 086dab41 has its CatchHandler @ 086dac12 */
    __gnu_cxx::stdio_filebuf<wchar_t,std::char_traits<wchar_t>>::stdio_filebuf
              ((stdio_filebuf<wchar_t,std::char_traits<wchar_t>> *)__gnu_internal::buf_wcout,stdout,
               _S_out,0x2000);
                    /* try { // try from 086dab62 to 086dab66 has its CatchHandler @ 086dac14 */
    __gnu_cxx::stdio_filebuf<wchar_t,std::char_traits<wchar_t>>::stdio_filebuf
              ((stdio_filebuf<wchar_t,std::char_traits<wchar_t>> *)__gnu_internal::buf_wcin,stdin,
               _S_in,0x2000);
                    /* try { // try from 086dab87 to 086dab8b has its CatchHandler @ 086dac16 */
    __gnu_cxx::stdio_filebuf<wchar_t,std::char_traits<wchar_t>>::stdio_filebuf
              ((stdio_filebuf<wchar_t,std::char_traits<wchar_t>> *)__gnu_internal::buf_wcerr,stderr,
               _S_out,0x2000);
                    /* try { // try from 086dab9b to 086dabdb has its CatchHandler @ 086dac07 */
    wios::rdbuf((wios *)(wcout + 4),(wstreambuf *)__gnu_internal::buf_wcout);
    wios::rdbuf((wios *)(wcin + 8),(wstreambuf *)__gnu_internal::buf_wcin);
    wios::rdbuf((wios *)(wcerr + 4),(wstreambuf *)__gnu_internal::buf_wcerr);
    wios::rdbuf((wios *)(wclog + 4),(wstreambuf *)__gnu_internal::buf_wcerr);
    Init::~Init(&local_d);
    return cVar1;
  }
  return Init::_S_synced_with_stdio;
}

```

---

## xalloc

```asm
// === 08726e20 std::ios_base::xalloc  [0x08726e20-0x8726e4f] ===
 8726e20:	b8 60 e5 07 08       	mov    $0x807e560,%eax
 8726e25:	55                   	push   %ebp
 8726e26:	85 c0                	test   %eax,%eax
 8726e28:	89 e5                	mov    %esp,%ebp
 8726e2a:	74 12                	je     8726e3e <_ZNSt8ios_base6xallocEv+0x1e>
 8726e2c:	b8 01 00 00 00       	mov    $0x1,%eax
 8726e31:	f0 0f c1 05 f8 17 49 	lock xadd %eax,0x94917f8
 8726e38:	09 
 8726e39:	83 c0 04             	add    $0x4,%eax
 8726e3c:	5d                   	pop    %ebp
 8726e3d:	c3                   	ret
 8726e3e:	a1 f8 17 49 09       	mov    0x94917f8,%eax
 8726e43:	8d 50 01             	lea    0x1(%eax),%edx
 8726e46:	89 15 f8 17 49 09    	mov    %edx,0x94917f8
 8726e4c:	eb eb                	jmp    8726e39 <_ZNSt8ios_base6xallocEv+0x19>
 8726e4e:	90                   	nop
 8726e4f:	90                   	nop

```

```c
// std::ios_base::xalloc @ 0x8726e20

/* WARNING: Removing unreachable block (ram,0x08726e3e) */
/* std::ios_base::xalloc() */

int std::ios_base::xalloc(void)

{
  int iVar1;
  
  iVar1 = xalloc()::_S_top;
  LOCK();
  xalloc()::_S_top = xalloc()::_S_top + 1;
  UNLOCK();
  return iVar1 + 4;
}

```

---

## ~ios_base

```asm
// === 08727070 std::ios_base::~ios_base  [0x08727070-0x87270cf] ===
 8727070:	55                   	push   %ebp
 8727071:	89 e5                	mov    %esp,%ebp
 8727073:	53                   	push   %ebx
 8727074:	83 ec 14             	sub    $0x14,%esp
 8727077:	8b 5d 08             	mov    0x8(%ebp),%ebx
 872707a:	c7 03 38 1f d0 08    	movl   $0x8d01f38,(%ebx)
 8727080:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8727087:	00 
 8727088:	89 1c 24             	mov    %ebx,(%esp)
 872708b:	e8 c0 fd ff ff       	call   8726e50 <_ZNSt8ios_base17_M_call_callbacksENS_5eventE>
 8727090:	89 1c 24             	mov    %ebx,(%esp)
 8727093:	e8 18 fd ff ff       	call   8726db0 <_ZNSt8ios_base20_M_dispose_callbacksEv>
 8727098:	8b 43 68             	mov    0x68(%ebx),%eax
 872709b:	8d 53 24             	lea    0x24(%ebx),%edx
 872709e:	39 d0                	cmp    %edx,%eax
 87270a0:	74 13                	je     87270b5 <_ZNSt8ios_baseD1Ev+0x45>
 87270a2:	85 c0                	test   %eax,%eax
 87270a4:	74 08                	je     87270ae <_ZNSt8ios_baseD1Ev+0x3e>
 87270a6:	89 04 24             	mov    %eax,(%esp)
 87270a9:	e8 02 db ff ff       	call   8724bb0 <_ZdaPv>
 87270ae:	c7 43 68 00 00 00 00 	movl   $0x0,0x68(%ebx)
 87270b5:	83 c3 6c             	add    $0x6c,%ebx
 87270b8:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87270bb:	83 c4 14             	add    $0x14,%esp
 87270be:	5b                   	pop    %ebx
 87270bf:	5d                   	pop    %ebp
 87270c0:	e9 0b 4c fb ff       	jmp    86dbcd0 <_ZNSt6localeD1Ev>
 87270c5:	90                   	nop
 87270c6:	90                   	nop
 87270c7:	90                   	nop
 87270c8:	90                   	nop
 87270c9:	90                   	nop
 87270ca:	90                   	nop
 87270cb:	90                   	nop
 87270cc:	90                   	nop
 87270cd:	90                   	nop
 87270ce:	90                   	nop
 87270cf:	90                   	nop

```

```c
// std::ios_base::~ios_base @ 0x8727070

/* std::ios_base::~ios_base() */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  ios_base *piVar1;
  
  *(undefined ***)this = &PTR__ios_base_08d01f38;
  _M_call_callbacks(this,0);
  _M_dispose_callbacks(this);
  piVar1 = *(ios_base **)(this + 0x68);
  if (piVar1 != this + 0x24) {
    if (piVar1 != (ios_base *)0x0) {
      operator_delete__(piVar1);
    }
    *(undefined4 *)(this + 0x68) = 0;
  }
  locale::~locale((locale *)(this + 0x6c));
  return;
}

```

---

## ~ios_base_087270d0

```asm
// === 087270d0 std::ios_base::~ios_base  [0x087270d0-0x87270ef] ===
 87270d0:	55                   	push   %ebp
 87270d1:	89 e5                	mov    %esp,%ebp
 87270d3:	53                   	push   %ebx
 87270d4:	83 ec 14             	sub    $0x14,%esp
 87270d7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87270da:	89 1c 24             	mov    %ebx,(%esp)
 87270dd:	e8 8e ff ff ff       	call   8727070 <_ZNSt8ios_baseD1Ev>
 87270e2:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87270e5:	83 c4 14             	add    $0x14,%esp
 87270e8:	5b                   	pop    %ebx
 87270e9:	5d                   	pop    %ebp
 87270ea:	e9 01 d4 ff ff       	jmp    87244f0 <_ZdlPv>
 87270ef:	90                   	nop

```

```c
// std::ios_base::~ios_base @ 0x87270d0

/* std::ios_base::~ios_base() */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  ~ios_base(this);
  operator_delete(this);
  return;
}

```

