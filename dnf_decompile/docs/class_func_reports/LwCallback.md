# LwCallback

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## LwCallback

```asm
// === 08ad3a6a LwCallback::LwCallback  [0x08ad3a6a-0x8ad3ab7] ===
 8ad3a6a:	55                   	push   %ebp
 8ad3a6b:	89 e5                	mov    %esp,%ebp
 8ad3a6d:	56                   	push   %esi
 8ad3a6e:	53                   	push   %ebx
 8ad3a6f:	83 ec 10             	sub    $0x10,%esp
 8ad3a72:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3a75:	89 04 24             	mov    %eax,(%esp)
 8ad3a78:	e8 13 ff ff ff       	call   8ad3990 <_ZN9LogWriterC1Ev>
 8ad3a7d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3a80:	c7 00 38 2b e3 08    	movl   $0x8e32b38,(%eax)
 8ad3a86:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3a89:	83 c0 04             	add    $0x4,%eax
 8ad3a8c:	89 04 24             	mov    %eax,(%esp)
 8ad3a8f:	e8 c8 06 00 00       	call   8ad415c <_ZNSt8functionIFvPKcS1_iS1_EEC1Ev>
 8ad3a94:	eb 1b                	jmp    8ad3ab1 <_ZN10LwCallbackC1Ev+0x47>
 8ad3a96:	89 d3                	mov    %edx,%ebx
 8ad3a98:	89 c6                	mov    %eax,%esi
 8ad3a9a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3a9d:	89 04 24             	mov    %eax,(%esp)
 8ad3aa0:	e8 f9 fe ff ff       	call   8ad399e <_ZN9LogWriterD1Ev>
 8ad3aa5:	89 f0                	mov    %esi,%eax
 8ad3aa7:	89 da                	mov    %ebx,%edx
 8ad3aa9:	89 04 24             	mov    %eax,(%esp)
 8ad3aac:	e8 9f fc 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad3ab1:	83 c4 10             	add    $0x10,%esp
 8ad3ab4:	5b                   	pop    %ebx
 8ad3ab5:	5e                   	pop    %esi
 8ad3ab6:	5d                   	pop    %ebp
 8ad3ab7:	c3                   	ret

```

```c
// LwCallback::LwCallback @ 0x8ad3a6a

/* LwCallback::LwCallback() */

void __thiscall LwCallback::LwCallback(LwCallback *this)

{
  LogWriter::LogWriter((LogWriter *)this);
  *(undefined ***)this = &PTR__LwCallback_08e32b38;
                    /* try { // try from 08ad3a8f to 08ad3a93 has its CatchHandler @ 08ad3a96 */
  std::function<void(char_const*,char_const*,int,char_const*)>::function
            ((function<void(char_const*,char_const*,int,char_const*)> *)(this + 4));
  return;
}

```

---

## LwCallback_08ad3ab8

```asm
// === 08ad3ab8 LwCallback::LwCallback  [0x08ad3ab8-0x8ad3b0d] ===
 8ad3ab8:	55                   	push   %ebp
 8ad3ab9:	89 e5                	mov    %esp,%ebp
 8ad3abb:	56                   	push   %esi
 8ad3abc:	53                   	push   %ebx
 8ad3abd:	83 ec 10             	sub    $0x10,%esp
 8ad3ac0:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3ac3:	89 04 24             	mov    %eax,(%esp)
 8ad3ac6:	e8 c5 fe ff ff       	call   8ad3990 <_ZN9LogWriterC1Ev>
 8ad3acb:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3ace:	c7 00 38 2b e3 08    	movl   $0x8e32b38,(%eax)
 8ad3ad4:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3ad7:	8d 50 04             	lea    0x4(%eax),%edx
 8ad3ada:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3add:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad3ae1:	89 14 24             	mov    %edx,(%esp)
 8ad3ae4:	e8 91 06 00 00       	call   8ad417a <_ZNSt8functionIFvPKcS1_iS1_EEC1ERKS3_>
 8ad3ae9:	eb 1b                	jmp    8ad3b06 <_ZN10LwCallbackC1ESt8functionIFvPKcS2_iS2_EE+0x4e>
 8ad3aeb:	89 d3                	mov    %edx,%ebx
 8ad3aed:	89 c6                	mov    %eax,%esi
 8ad3aef:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3af2:	89 04 24             	mov    %eax,(%esp)
 8ad3af5:	e8 a4 fe ff ff       	call   8ad399e <_ZN9LogWriterD1Ev>
 8ad3afa:	89 f0                	mov    %esi,%eax
 8ad3afc:	89 da                	mov    %ebx,%edx
 8ad3afe:	89 04 24             	mov    %eax,(%esp)
 8ad3b01:	e8 4a fc 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad3b06:	83 c4 10             	add    $0x10,%esp
 8ad3b09:	5b                   	pop    %ebx
 8ad3b0a:	5e                   	pop    %esi
 8ad3b0b:	5d                   	pop    %ebp
 8ad3b0c:	c3                   	ret
 8ad3b0d:	90                   	nop

```

```c
// LwCallback::LwCallback @ 0x8ad3ab8

/* LwCallback::LwCallback(std::function<void (char const*, char const*, int, char const*)>) */

void __thiscall LwCallback::LwCallback(LwCallback *this,function *param_2)

{
  LogWriter::LogWriter((LogWriter *)this);
  *(undefined ***)this = &PTR__LwCallback_08e32b38;
                    /* try { // try from 08ad3ae4 to 08ad3ae8 has its CatchHandler @ 08ad3aeb */
  std::function<void(char_const*,char_const*,int,char_const*)>::function
            ((function<void(char_const*,char_const*,int,char_const*)> *)(this + 4),param_2);
  return;
}

```

---

## getCallback

```asm
// === 08ad3b0e LwCallback::getCallback  [0x08ad3b0e-0x8ad3b37] ===
 8ad3b0e:	55                   	push   %ebp
 8ad3b0f:	89 e5                	mov    %esp,%ebp
 8ad3b11:	53                   	push   %ebx
 8ad3b12:	83 ec 14             	sub    $0x14,%esp
 8ad3b15:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad3b18:	89 d8                	mov    %ebx,%eax
 8ad3b1a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad3b1d:	83 c2 04             	add    $0x4,%edx
 8ad3b20:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad3b24:	89 04 24             	mov    %eax,(%esp)
 8ad3b27:	e8 4e 06 00 00       	call   8ad417a <_ZNSt8functionIFvPKcS1_iS1_EEC1ERKS3_>
 8ad3b2c:	89 d8                	mov    %ebx,%eax
 8ad3b2e:	89 d8                	mov    %ebx,%eax
 8ad3b30:	83 c4 14             	add    $0x14,%esp
 8ad3b33:	5b                   	pop    %ebx
 8ad3b34:	5d                   	pop    %ebp
 8ad3b35:	c2 04 00             	ret    $0x4

```

```c
// LwCallback::getCallback @ 0x8ad3b0e

/* LwCallback::getCallback() const */

function<void(char_const*,char_const*,int,char_const*)> * LwCallback::getCallback(void)

{
  function<void(char_const*,char_const*,int,char_const*)> *in_stack_00000004;
  int in_stack_00000008;
  
  std::function<void(char_const*,char_const*,int,char_const*)>::function
            (in_stack_00000004,(function *)(in_stack_00000008 + 4));
  return in_stack_00000004;
}

```

---

## log

```asm
// === 08ad3b56 LwCallback::log  [0x08ad3b56-0x8ad3b9f] ===
 8ad3b56:	55                   	push   %ebp
 8ad3b57:	89 e5                	mov    %esp,%ebp
 8ad3b59:	83 ec 28             	sub    $0x28,%esp
 8ad3b5c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3b5f:	83 c0 04             	add    $0x4,%eax
 8ad3b62:	89 04 24             	mov    %eax,(%esp)
 8ad3b65:	e8 d6 06 00 00       	call   8ad4240 <_ZNKSt8functionIFvPKcS1_iS1_EEcvMNS3_12_Hidden_typeEPS4_Ev>
 8ad3b6a:	83 f8 ff             	cmp    $0xffffffff,%eax
 8ad3b6d:	0f 95 c0             	setne  %al
 8ad3b70:	84 c0                	test   %al,%al
 8ad3b72:	74 2a                	je     8ad3b9e <_ZN10LwCallback3logEPKcS1_iS1_+0x48>
 8ad3b74:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3b77:	8d 50 04             	lea    0x4(%eax),%edx
 8ad3b7a:	8b 45 18             	mov    0x18(%ebp),%eax
 8ad3b7d:	89 44 24 10          	mov    %eax,0x10(%esp)
 8ad3b81:	8b 45 14             	mov    0x14(%ebp),%eax
 8ad3b84:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad3b88:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad3b8b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad3b8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3b92:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad3b96:	89 14 24             	mov    %edx,(%esp)
 8ad3b99:	e8 30 07 00 00       	call   8ad42ce <_ZNKSt8functionIFvPKcS1_iS1_EEclES1_S1_iS1_>
 8ad3b9e:	c9                   	leave
 8ad3b9f:	c3                   	ret

```

```c
// LwCallback::log @ 0x8ad3b56

/* LwCallback::log(char const*, char const*, int, char const*) */

void __thiscall
LwCallback::log(LwCallback *this,char *param_1,char *param_2,int param_3,char *param_4)

{
  function<void *pfVar1;
  
  pfVar1 = std::function::operator_cast_to__((function *)(this + 4));
  if (pfVar1 != (function<void *)0xffffffff) {
    std::function<void(char_const*,char_const*,int,char_const*)>::operator()
              ((function<void(char_const*,char_const*,int,char_const*)> *)(this + 4),param_1,param_2
               ,param_3,param_4);
  }
  return;
}

```

---

## setCallback

```asm
// === 08ad3b38 LwCallback::setCallback  [0x08ad3b38-0x8ad3b55] ===
 8ad3b38:	55                   	push   %ebp
 8ad3b39:	89 e5                	mov    %esp,%ebp
 8ad3b3b:	83 ec 18             	sub    $0x18,%esp
 8ad3b3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3b41:	8d 50 04             	lea    0x4(%eax),%edx
 8ad3b44:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3b47:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad3b4b:	89 14 24             	mov    %edx,(%esp)
 8ad3b4e:	e8 b3 06 00 00       	call   8ad4206 <_ZNSt8functionIFvPKcS1_iS1_EEaSERKS3_>
 8ad3b53:	c9                   	leave
 8ad3b54:	c3                   	ret
 8ad3b55:	90                   	nop

```

```c
// LwCallback::setCallback @ 0x8ad3b38

/* LwCallback::setCallback(std::function<void (char const*, char const*, int, char const*)>) */

void __thiscall LwCallback::setCallback(LwCallback *this,function *param_2)

{
  std::function<void(char_const*,char_const*,int,char_const*)>::operator=
            ((function<void(char_const*,char_const*,int,char_const*)> *)(this + 4),param_2);
  return;
}

```

