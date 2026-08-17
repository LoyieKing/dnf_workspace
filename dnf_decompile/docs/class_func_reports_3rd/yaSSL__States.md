# yaSSL__States

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 17

---

## GetAccept

```asm
// === 0874ded0 yaSSL::States::GetAccept  [0x0874ded0-0x874dedf] ===
 874ded0:	55                   	push   %ebp
 874ded1:	89 e5                	mov    %esp,%ebp
 874ded3:	8b 45 08             	mov    0x8(%ebp),%eax
 874ded6:	5d                   	pop    %ebp
 874ded7:	83 c0 14             	add    $0x14,%eax
 874deda:	c3                   	ret
 874dedb:	90                   	nop
 874dedc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::States::GetAccept @ 0x874ded0

/* yaSSL::States::GetAccept() const */

States * __thiscall yaSSL::States::GetAccept(States *this)

{
  return this + 0x14;
}

```

---

## GetConnect

```asm
// === 0874dec0 yaSSL::States::GetConnect  [0x0874dec0-0x874decf] ===
 874dec0:	55                   	push   %ebp
 874dec1:	89 e5                	mov    %esp,%ebp
 874dec3:	8b 45 08             	mov    0x8(%ebp),%eax
 874dec6:	5d                   	pop    %ebp
 874dec7:	83 c0 10             	add    $0x10,%eax
 874deca:	c3                   	ret
 874decb:	90                   	nop
 874decc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::States::GetConnect @ 0x874dec0

/* yaSSL::States::GetConnect() const */

States * __thiscall yaSSL::States::GetConnect(States *this)

{
  return this + 0x10;
}

```

---

## SetError

```asm
// === 0874df70 yaSSL::States::SetError  [0x0874df70-0x874df7f] ===
 874df70:	55                   	push   %ebp
 874df71:	89 e5                	mov    %esp,%ebp
 874df73:	8b 55 0c             	mov    0xc(%ebp),%edx
 874df76:	8b 45 08             	mov    0x8(%ebp),%eax
 874df79:	89 50 68             	mov    %edx,0x68(%eax)
 874df7c:	5d                   	pop    %ebp
 874df7d:	c3                   	ret
 874df7e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::States::SetError @ 0x874df70

/* yaSSL::States::SetError(yaSSL::YasslError) */

void __thiscall yaSSL::States::SetError(States *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x68) = param_2;
  return;
}

```

---

## States

```asm
// === 0874de40 yaSSL::States::States  [0x0874de40-0x874de7f] ===
 874de40:	55                   	push   %ebp
 874de41:	89 e5                	mov    %esp,%ebp
 874de43:	8b 45 08             	mov    0x8(%ebp),%eax
 874de46:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 874de4c:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 874de53:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 874de5a:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 874de61:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 874de68:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 874de6f:	c7 40 68 00 00 00 00 	movl   $0x0,0x68(%eax)
 874de76:	5d                   	pop    %ebp
 874de77:	c3                   	ret
 874de78:	90                   	nop
 874de79:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::States::States @ 0x874de40

/* yaSSL::States::States() */

void __thiscall yaSSL::States::States(States *this)

{
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  return;
}

```

---

## UseAccept

```asm
// === 0874df50 yaSSL::States::UseAccept  [0x0874df50-0x874df5f] ===
 874df50:	55                   	push   %ebp
 874df51:	89 e5                	mov    %esp,%ebp
 874df53:	8b 45 08             	mov    0x8(%ebp),%eax
 874df56:	5d                   	pop    %ebp
 874df57:	83 c0 14             	add    $0x14,%eax
 874df5a:	c3                   	ret
 874df5b:	90                   	nop
 874df5c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::States::UseAccept @ 0x874df50

/* yaSSL::States::UseAccept() */

States * __thiscall yaSSL::States::UseAccept(States *this)

{
  return this + 0x14;
}

```

---

## UseConnect

```asm
// === 0874df40 yaSSL::States::UseConnect  [0x0874df40-0x874df4f] ===
 874df40:	55                   	push   %ebp
 874df41:	89 e5                	mov    %esp,%ebp
 874df43:	8b 45 08             	mov    0x8(%ebp),%eax
 874df46:	5d                   	pop    %ebp
 874df47:	83 c0 10             	add    $0x10,%eax
 874df4a:	c3                   	ret
 874df4b:	90                   	nop
 874df4c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::States::UseConnect @ 0x874df40

/* yaSSL::States::UseConnect() */

States * __thiscall yaSSL::States::UseConnect(States *this)

{
  return this + 0x10;
}

```

---

## What

```asm
// === 0874def0 yaSSL::States::What  [0x0874def0-0x874deff] ===
 874def0:	55                   	push   %ebp
 874def1:	89 e5                	mov    %esp,%ebp
 874def3:	8b 45 08             	mov    0x8(%ebp),%eax
 874def6:	5d                   	pop    %ebp
 874def7:	8b 40 68             	mov    0x68(%eax),%eax
 874defa:	c3                   	ret
 874defb:	90                   	nop
 874defc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::States::What @ 0x874def0

/* yaSSL::States::What() const */

undefined4 __thiscall yaSSL::States::What(States *this)

{
  return *(undefined4 *)(this + 0x68);
}

```

---

## getClient

```asm
// === 0874dea0 yaSSL::States::getClient  [0x0874dea0-0x874deaf] ===
 874dea0:	55                   	push   %ebp
 874dea1:	89 e5                	mov    %esp,%ebp
 874dea3:	8b 45 08             	mov    0x8(%ebp),%eax
 874dea6:	5d                   	pop    %ebp
 874dea7:	83 c0 08             	add    $0x8,%eax
 874deaa:	c3                   	ret
 874deab:	90                   	nop
 874deac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::States::getClient @ 0x874dea0

/* yaSSL::States::getClient() const */

States * __thiscall yaSSL::States::getClient(States *this)

{
  return this + 8;
}

```

---

## getHandShake

```asm
// === 0874de90 yaSSL::States::getHandShake  [0x0874de90-0x874de9f] ===
 874de90:	55                   	push   %ebp
 874de91:	89 e5                	mov    %esp,%ebp
 874de93:	8b 45 08             	mov    0x8(%ebp),%eax
 874de96:	5d                   	pop    %ebp
 874de97:	83 c0 04             	add    $0x4,%eax
 874de9a:	c3                   	ret
 874de9b:	90                   	nop
 874de9c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::States::getHandShake @ 0x874de90

/* yaSSL::States::getHandShake() const */

States * __thiscall yaSSL::States::getHandShake(States *this)

{
  return this + 4;
}

```

---

## getRecord

```asm
// === 0874de80 yaSSL::States::getRecord  [0x0874de80-0x874de8f] ===
 874de80:	55                   	push   %ebp
 874de81:	89 e5                	mov    %esp,%ebp
 874de83:	8b 45 08             	mov    0x8(%ebp),%eax
 874de86:	5d                   	pop    %ebp
 874de87:	c3                   	ret
 874de88:	90                   	nop
 874de89:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::States::getRecord @ 0x874de80

/* yaSSL::States::getRecord() const */

States * __thiscall yaSSL::States::getRecord(States *this)

{
  return this;
}

```

---

## getServer

```asm
// === 0874deb0 yaSSL::States::getServer  [0x0874deb0-0x874debf] ===
 874deb0:	55                   	push   %ebp
 874deb1:	89 e5                	mov    %esp,%ebp
 874deb3:	8b 45 08             	mov    0x8(%ebp),%eax
 874deb6:	5d                   	pop    %ebp
 874deb7:	83 c0 0c             	add    $0xc,%eax
 874deba:	c3                   	ret
 874debb:	90                   	nop
 874debc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::States::getServer @ 0x874deb0

/* yaSSL::States::getServer() const */

States * __thiscall yaSSL::States::getServer(States *this)

{
  return this + 0xc;
}

```

---

## getString

```asm
// === 0874dee0 yaSSL::States::getString  [0x0874dee0-0x874deef] ===
 874dee0:	55                   	push   %ebp
 874dee1:	89 e5                	mov    %esp,%ebp
 874dee3:	8b 45 08             	mov    0x8(%ebp),%eax
 874dee6:	5d                   	pop    %ebp
 874dee7:	83 c0 18             	add    $0x18,%eax
 874deea:	c3                   	ret
 874deeb:	90                   	nop
 874deec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::States::getString @ 0x874dee0

/* yaSSL::States::getString() const */

States * __thiscall yaSSL::States::getString(States *this)

{
  return this + 0x18;
}

```

---

## useClient

```asm
// === 0874df20 yaSSL::States::useClient  [0x0874df20-0x874df2f] ===
 874df20:	55                   	push   %ebp
 874df21:	89 e5                	mov    %esp,%ebp
 874df23:	8b 45 08             	mov    0x8(%ebp),%eax
 874df26:	5d                   	pop    %ebp
 874df27:	83 c0 08             	add    $0x8,%eax
 874df2a:	c3                   	ret
 874df2b:	90                   	nop
 874df2c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::States::useClient @ 0x874df20

/* yaSSL::States::useClient() */

States * __thiscall yaSSL::States::useClient(States *this)

{
  return this + 8;
}

```

---

## useHandShake

```asm
// === 0874df10 yaSSL::States::useHandShake  [0x0874df10-0x874df1f] ===
 874df10:	55                   	push   %ebp
 874df11:	89 e5                	mov    %esp,%ebp
 874df13:	8b 45 08             	mov    0x8(%ebp),%eax
 874df16:	5d                   	pop    %ebp
 874df17:	83 c0 04             	add    $0x4,%eax
 874df1a:	c3                   	ret
 874df1b:	90                   	nop
 874df1c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::States::useHandShake @ 0x874df10

/* yaSSL::States::useHandShake() */

States * __thiscall yaSSL::States::useHandShake(States *this)

{
  return this + 4;
}

```

---

## useRecord

```asm
// === 0874df00 yaSSL::States::useRecord  [0x0874df00-0x874df0f] ===
 874df00:	55                   	push   %ebp
 874df01:	89 e5                	mov    %esp,%ebp
 874df03:	8b 45 08             	mov    0x8(%ebp),%eax
 874df06:	5d                   	pop    %ebp
 874df07:	c3                   	ret
 874df08:	90                   	nop
 874df09:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::States::useRecord @ 0x874df00

/* yaSSL::States::useRecord() */

States * __thiscall yaSSL::States::useRecord(States *this)

{
  return this;
}

```

---

## useServer

```asm
// === 0874df30 yaSSL::States::useServer  [0x0874df30-0x874df3f] ===
 874df30:	55                   	push   %ebp
 874df31:	89 e5                	mov    %esp,%ebp
 874df33:	8b 45 08             	mov    0x8(%ebp),%eax
 874df36:	5d                   	pop    %ebp
 874df37:	83 c0 0c             	add    $0xc,%eax
 874df3a:	c3                   	ret
 874df3b:	90                   	nop
 874df3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::States::useServer @ 0x874df30

/* yaSSL::States::useServer() */

States * __thiscall yaSSL::States::useServer(States *this)

{
  return this + 0xc;
}

```

---

## useString

```asm
// === 0874df60 yaSSL::States::useString  [0x0874df60-0x874df6f] ===
 874df60:	55                   	push   %ebp
 874df61:	89 e5                	mov    %esp,%ebp
 874df63:	8b 45 08             	mov    0x8(%ebp),%eax
 874df66:	5d                   	pop    %ebp
 874df67:	83 c0 18             	add    $0x18,%eax
 874df6a:	c3                   	ret
 874df6b:	90                   	nop
 874df6c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::States::useString @ 0x874df60

/* yaSSL::States::useString() */

States * __thiscall yaSSL::States::useString(States *this)

{
  return this + 0x18;
}

```

