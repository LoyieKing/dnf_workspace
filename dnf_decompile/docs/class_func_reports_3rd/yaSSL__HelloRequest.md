# yaSSL__HelloRequest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Process

```asm
// === 08746b20 yaSSL::HelloRequest::Process  [0x08746b20-0x8746b2f] ===
 8746b20:	55                   	push   %ebp
 8746b21:	89 e5                	mov    %esp,%ebp
 8746b23:	5d                   	pop    %ebp
 8746b24:	c3                   	ret
 8746b25:	90                   	nop
 8746b26:	8d 76 00             	lea    0x0(%esi),%esi
 8746b29:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::HelloRequest::Process @ 0x8746b20

/* yaSSL::HelloRequest::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void yaSSL::HelloRequest::Process(input_buffer *param_1,SSL *param_2)

{
  return;
}

```

---

## get

```asm
// === 08746b10 yaSSL::HelloRequest::get  [0x08746b10-0x8746b1f] ===
 8746b10:	55                   	push   %ebp
 8746b11:	89 e5                	mov    %esp,%ebp
 8746b13:	8b 45 0c             	mov    0xc(%ebp),%eax
 8746b16:	5d                   	pop    %ebp
 8746b17:	c3                   	ret
 8746b18:	90                   	nop
 8746b19:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::HelloRequest::get @ 0x8746b10

/* yaSSL::HelloRequest::get(yaSSL::output_buffer&) const */

output_buffer * __thiscall yaSSL::HelloRequest::get(HelloRequest *this,output_buffer *param_1)

{
  return param_1;
}

```

---

## get_type

```asm
// === 08746b30 yaSSL::HelloRequest::get_type  [0x08746b30-0x8746b3f] ===
 8746b30:	55                   	push   %ebp
 8746b31:	31 c0                	xor    %eax,%eax
 8746b33:	89 e5                	mov    %esp,%ebp
 8746b35:	5d                   	pop    %ebp
 8746b36:	c3                   	ret
 8746b37:	90                   	nop
 8746b38:	90                   	nop
 8746b39:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::HelloRequest::get_type @ 0x8746b30

/* yaSSL::HelloRequest::get_type() const */

undefined4 yaSSL::HelloRequest::get_type(void)

{
  return 0;
}

```

---

## set

```asm
// === 08746b00 yaSSL::HelloRequest::set  [0x08746b00-0x8746b0f] ===
 8746b00:	55                   	push   %ebp
 8746b01:	89 e5                	mov    %esp,%ebp
 8746b03:	8b 45 0c             	mov    0xc(%ebp),%eax
 8746b06:	5d                   	pop    %ebp
 8746b07:	c3                   	ret
 8746b08:	90                   	nop
 8746b09:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::HelloRequest::set @ 0x8746b00

/* yaSSL::HelloRequest::set(yaSSL::input_buffer&) */

input_buffer * __thiscall yaSSL::HelloRequest::set(HelloRequest *this,input_buffer *param_1)

{
  return param_1;
}

```

