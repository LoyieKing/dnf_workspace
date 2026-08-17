# yaSSL__ProtocolVersion

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## ProtocolVersion

```asm
// === 08746950 yaSSL::ProtocolVersion::ProtocolVersion  [0x08746950-0x874696f] ===
 8746950:	55                   	push   %ebp
 8746951:	89 e5                	mov    %esp,%ebp
 8746953:	8b 55 0c             	mov    0xc(%ebp),%edx
 8746956:	8b 45 08             	mov    0x8(%ebp),%eax
 8746959:	88 10                	mov    %dl,(%eax)
 874695b:	8b 55 10             	mov    0x10(%ebp),%edx
 874695e:	88 50 01             	mov    %dl,0x1(%eax)
 8746961:	5d                   	pop    %ebp
 8746962:	c3                   	ret
 8746963:	90                   	nop
 8746964:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874696a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::ProtocolVersion::ProtocolVersion @ 0x8746950

/* yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char) */

void __thiscall
yaSSL::ProtocolVersion::ProtocolVersion(ProtocolVersion *this,uchar param_1,uchar param_2)

{
  *this = (ProtocolVersion)param_1;
  this[1] = (ProtocolVersion)param_2;
  return;
}

```

