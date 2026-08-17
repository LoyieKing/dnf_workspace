# yaSSL__HandShakeBase

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## Process

```asm
// === 08746af0 yaSSL::HandShakeBase::Process  [0x08746af0-0x8746aff] ===
 8746af0:	55                   	push   %ebp
 8746af1:	89 e5                	mov    %esp,%ebp
 8746af3:	5d                   	pop    %ebp
 8746af4:	c3                   	ret
 8746af5:	90                   	nop
 8746af6:	8d 76 00             	lea    0x0(%esi),%esi
 8746af9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::HandShakeBase::Process @ 0x8746af0

/* yaSSL::HandShakeBase::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void yaSSL::HandShakeBase::Process(input_buffer *param_1,SSL *param_2)

{
  return;
}

```

---

## get

```asm
// === 08746ae0 yaSSL::HandShakeBase::get  [0x08746ae0-0x8746aef] ===
 8746ae0:	55                   	push   %ebp
 8746ae1:	89 e5                	mov    %esp,%ebp
 8746ae3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8746ae6:	5d                   	pop    %ebp
 8746ae7:	c3                   	ret
 8746ae8:	90                   	nop
 8746ae9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::HandShakeBase::get @ 0x8746ae0

/* yaSSL::HandShakeBase::get(yaSSL::output_buffer&) const */

output_buffer * __thiscall yaSSL::HandShakeBase::get(HandShakeBase *this,output_buffer *param_1)

{
  return param_1;
}

```

---

## get_length

```asm
// === 08746aa0 yaSSL::HandShakeBase::get_length  [0x08746aa0-0x8746aaf] ===
 8746aa0:	55                   	push   %ebp
 8746aa1:	89 e5                	mov    %esp,%ebp
 8746aa3:	8b 45 08             	mov    0x8(%ebp),%eax
 8746aa6:	5d                   	pop    %ebp
 8746aa7:	8b 40 04             	mov    0x4(%eax),%eax
 8746aaa:	c3                   	ret
 8746aab:	90                   	nop
 8746aac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::HandShakeBase::get_length @ 0x8746aa0

/* yaSSL::HandShakeBase::get_length() const */

undefined4 __thiscall yaSSL::HandShakeBase::get_length(HandShakeBase *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## get_type

```asm
// === 08746ac0 yaSSL::HandShakeBase::get_type  [0x08746ac0-0x8746acf] ===
 8746ac0:	55                   	push   %ebp
 8746ac1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8746ac6:	89 e5                	mov    %esp,%ebp
 8746ac8:	5d                   	pop    %ebp
 8746ac9:	c3                   	ret
 8746aca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::HandShakeBase::get_type @ 0x8746ac0

/* yaSSL::HandShakeBase::get_type() const */

undefined4 yaSSL::HandShakeBase::get_type(void)

{
  return 0xffffffff;
}

```

---

## set

```asm
// === 08746ad0 yaSSL::HandShakeBase::set  [0x08746ad0-0x8746adf] ===
 8746ad0:	55                   	push   %ebp
 8746ad1:	89 e5                	mov    %esp,%ebp
 8746ad3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8746ad6:	5d                   	pop    %ebp
 8746ad7:	c3                   	ret
 8746ad8:	90                   	nop
 8746ad9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::HandShakeBase::set @ 0x8746ad0

/* yaSSL::HandShakeBase::set(yaSSL::input_buffer&) */

input_buffer * __thiscall yaSSL::HandShakeBase::set(HandShakeBase *this,input_buffer *param_1)

{
  return param_1;
}

```

---

## set_length

```asm
// === 08746ab0 yaSSL::HandShakeBase::set_length  [0x08746ab0-0x8746abf] ===
 8746ab0:	55                   	push   %ebp
 8746ab1:	89 e5                	mov    %esp,%ebp
 8746ab3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8746ab6:	8b 45 08             	mov    0x8(%ebp),%eax
 8746ab9:	89 50 04             	mov    %edx,0x4(%eax)
 8746abc:	5d                   	pop    %ebp
 8746abd:	c3                   	ret
 8746abe:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::HandShakeBase::set_length @ 0x8746ab0

/* yaSSL::HandShakeBase::set_length(int) */

void __thiscall yaSSL::HandShakeBase::set_length(HandShakeBase *this,int param_1)

{
  *(int *)(this + 4) = param_1;
  return;
}

```

