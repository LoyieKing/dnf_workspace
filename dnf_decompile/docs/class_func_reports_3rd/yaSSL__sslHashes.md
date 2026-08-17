# yaSSL__sslHashes

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## get_MD5

```asm
// === 0874e830 yaSSL::sslHashes::get_MD5  [0x0874e830-0x874e83f] ===
 874e830:	55                   	push   %ebp
 874e831:	89 e5                	mov    %esp,%ebp
 874e833:	8b 45 08             	mov    0x8(%ebp),%eax
 874e836:	5d                   	pop    %ebp
 874e837:	c3                   	ret
 874e838:	90                   	nop
 874e839:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::sslHashes::get_MD5 @ 0x874e830

/* yaSSL::sslHashes::get_MD5() const */

sslHashes * __thiscall yaSSL::sslHashes::get_MD5(sslHashes *this)

{
  return this;
}

```

---

## get_SHA

```asm
// === 0874e840 yaSSL::sslHashes::get_SHA  [0x0874e840-0x874e84f] ===
 874e840:	55                   	push   %ebp
 874e841:	89 e5                	mov    %esp,%ebp
 874e843:	8b 45 08             	mov    0x8(%ebp),%eax
 874e846:	5d                   	pop    %ebp
 874e847:	83 c0 08             	add    $0x8,%eax
 874e84a:	c3                   	ret
 874e84b:	90                   	nop
 874e84c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::sslHashes::get_SHA @ 0x874e840

/* yaSSL::sslHashes::get_SHA() const */

sslHashes * __thiscall yaSSL::sslHashes::get_SHA(sslHashes *this)

{
  return this + 8;
}

```

---

## get_certVerify

```asm
// === 0874e860 yaSSL::sslHashes::get_certVerify  [0x0874e860-0x874e86f] ===
 874e860:	55                   	push   %ebp
 874e861:	89 e5                	mov    %esp,%ebp
 874e863:	8b 45 08             	mov    0x8(%ebp),%eax
 874e866:	5d                   	pop    %ebp
 874e867:	83 c0 3c             	add    $0x3c,%eax
 874e86a:	c3                   	ret
 874e86b:	90                   	nop
 874e86c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::sslHashes::get_certVerify @ 0x874e860

/* yaSSL::sslHashes::get_certVerify() const */

sslHashes * __thiscall yaSSL::sslHashes::get_certVerify(sslHashes *this)

{
  return this + 0x3c;
}

```

---

## get_verify

```asm
// === 0874e850 yaSSL::sslHashes::get_verify  [0x0874e850-0x874e85f] ===
 874e850:	55                   	push   %ebp
 874e851:	89 e5                	mov    %esp,%ebp
 874e853:	8b 45 08             	mov    0x8(%ebp),%eax
 874e856:	5d                   	pop    %ebp
 874e857:	83 c0 10             	add    $0x10,%eax
 874e85a:	c3                   	ret
 874e85b:	90                   	nop
 874e85c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::sslHashes::get_verify @ 0x874e850

/* yaSSL::sslHashes::get_verify() const */

sslHashes * __thiscall yaSSL::sslHashes::get_verify(sslHashes *this)

{
  return this + 0x10;
}

```

---

## use_MD5

```asm
// === 0874e870 yaSSL::sslHashes::use_MD5  [0x0874e870-0x874e87f] ===
 874e870:	55                   	push   %ebp
 874e871:	89 e5                	mov    %esp,%ebp
 874e873:	8b 45 08             	mov    0x8(%ebp),%eax
 874e876:	5d                   	pop    %ebp
 874e877:	c3                   	ret
 874e878:	90                   	nop
 874e879:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::sslHashes::use_MD5 @ 0x874e870

/* yaSSL::sslHashes::use_MD5() */

sslHashes * __thiscall yaSSL::sslHashes::use_MD5(sslHashes *this)

{
  return this;
}

```

---

## use_SHA

```asm
// === 0874e880 yaSSL::sslHashes::use_SHA  [0x0874e880-0x874e88f] ===
 874e880:	55                   	push   %ebp
 874e881:	89 e5                	mov    %esp,%ebp
 874e883:	8b 45 08             	mov    0x8(%ebp),%eax
 874e886:	5d                   	pop    %ebp
 874e887:	83 c0 08             	add    $0x8,%eax
 874e88a:	c3                   	ret
 874e88b:	90                   	nop
 874e88c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::sslHashes::use_SHA @ 0x874e880

/* yaSSL::sslHashes::use_SHA() */

sslHashes * __thiscall yaSSL::sslHashes::use_SHA(sslHashes *this)

{
  return this + 8;
}

```

---

## use_certVerify

```asm
// === 0874e8a0 yaSSL::sslHashes::use_certVerify  [0x0874e8a0-0x874e8af] ===
 874e8a0:	55                   	push   %ebp
 874e8a1:	89 e5                	mov    %esp,%ebp
 874e8a3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e8a6:	5d                   	pop    %ebp
 874e8a7:	83 c0 3c             	add    $0x3c,%eax
 874e8aa:	c3                   	ret
 874e8ab:	90                   	nop
 874e8ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::sslHashes::use_certVerify @ 0x874e8a0

/* yaSSL::sslHashes::use_certVerify() */

sslHashes * __thiscall yaSSL::sslHashes::use_certVerify(sslHashes *this)

{
  return this + 0x3c;
}

```

---

## use_verify

```asm
// === 0874e890 yaSSL::sslHashes::use_verify  [0x0874e890-0x874e89f] ===
 874e890:	55                   	push   %ebp
 874e891:	89 e5                	mov    %esp,%ebp
 874e893:	8b 45 08             	mov    0x8(%ebp),%eax
 874e896:	5d                   	pop    %ebp
 874e897:	83 c0 10             	add    $0x10,%eax
 874e89a:	c3                   	ret
 874e89b:	90                   	nop
 874e89c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::sslHashes::use_verify @ 0x874e890

/* yaSSL::sslHashes::use_verify() */

sslHashes * __thiscall yaSSL::sslHashes::use_verify(sslHashes *this)

{
  return this + 0x10;
}

```

