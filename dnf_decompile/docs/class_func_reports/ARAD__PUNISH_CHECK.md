# ARAD__PUNISH_CHECK

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## punish_check_by_ARS

```asm
// === 08196d51 ARAD::PUNISH_CHECK::punish_check_by_ARS  [0x08196d51-0x8196d87] ===
 8196d51:	55                   	push   %ebp
 8196d52:	89 e5                	mov    %esp,%ebp
 8196d54:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 8196d58:	75 27                	jne    8196d81 <_ZN4ARAD12PUNISH_CHECK19punish_check_by_ARSEP14SIG_LOGIN_DATAli+0x30>
 8196d5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8196d5d:	c7 80 b8 00 00 00 04 	movl   $0x4,0xb8(%eax)
 8196d64:	00 00 00 
 8196d67:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8196d6b:	75 0d                	jne    8196d7a <_ZN4ARAD12PUNISH_CHECK19punish_check_by_ARSEP14SIG_LOGIN_DATAli+0x29>
 8196d6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8196d70:	c7 80 b8 00 00 00 eb 	movl   $0x3eb,0xb8(%eax)
 8196d77:	03 00 00 
 8196d7a:	b8 00 00 00 00       	mov    $0x0,%eax
 8196d7f:	eb 05                	jmp    8196d86 <_ZN4ARAD12PUNISH_CHECK19punish_check_by_ARSEP14SIG_LOGIN_DATAli+0x35>
 8196d81:	b8 01 00 00 00       	mov    $0x1,%eax
 8196d86:	5d                   	pop    %ebp
 8196d87:	c3                   	ret

```

```c
// ARAD::PUNISH_CHECK::punish_check_by_ARS @ 0x8196d51

/* ARAD::PUNISH_CHECK::punish_check_by_ARS(SIG_LOGIN_DATA*, long, int) */

undefined4 ARAD::PUNISH_CHECK::punish_check_by_ARS(SIG_LOGIN_DATA *param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 1) {
    *(undefined4 *)(param_1 + 0xb8) = 4;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0x3eb;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## punish_check_by_HUB

```asm
// === 08196dbf ARAD::PUNISH_CHECK::punish_check_by_HUB  [0x08196dbf-0x8196dcd] ===
 8196dbf:	55                   	push   %ebp
 8196dc0:	89 e5                	mov    %esp,%ebp
 8196dc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8196dc5:	c6 80 20 3a 00 00 01 	movb   $0x1,0x3a20(%eax)
 8196dcc:	5d                   	pop    %ebp
 8196dcd:	c3                   	ret

```

```c
// ARAD::PUNISH_CHECK::punish_check_by_HUB @ 0x8196dbf

/* ARAD::PUNISH_CHECK::punish_check_by_HUB(SIG_LOGIN_DATA*, int) */

void ARAD::PUNISH_CHECK::punish_check_by_HUB(SIG_LOGIN_DATA *param_1,int param_2)

{
  param_1[0x3a20] = (SIG_LOGIN_DATA)0x1;
  return;
}

```

---

## punish_check_by_RES

```asm
// === 08196dce ARAD::PUNISH_CHECK::punish_check_by_RES  [0x08196dce-0x8196dd2] ===
 8196dce:	55                   	push   %ebp
 8196dcf:	89 e5                	mov    %esp,%ebp
 8196dd1:	5d                   	pop    %ebp
 8196dd2:	c3                   	ret

```

```c
// ARAD::PUNISH_CHECK::punish_check_by_RES @ 0x8196dce

/* ARAD::PUNISH_CHECK::punish_check_by_RES(SIG_LOGIN_DATA*, int) */

void ARAD::PUNISH_CHECK::punish_check_by_RES(SIG_LOGIN_DATA *param_1,int param_2)

{
  return;
}

```

---

## punish_check_by_SYS

```asm
// === 08196d88 ARAD::PUNISH_CHECK::punish_check_by_SYS  [0x08196d88-0x8196dbe] ===
 8196d88:	55                   	push   %ebp
 8196d89:	89 e5                	mov    %esp,%ebp
 8196d8b:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 8196d8f:	75 27                	jne    8196db8 <_ZN4ARAD12PUNISH_CHECK19punish_check_by_SYSEP14SIG_LOGIN_DATAli+0x30>
 8196d91:	8b 45 08             	mov    0x8(%ebp),%eax
 8196d94:	c7 80 b8 00 00 00 04 	movl   $0x4,0xb8(%eax)
 8196d9b:	00 00 00 
 8196d9e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8196da2:	75 0d                	jne    8196db1 <_ZN4ARAD12PUNISH_CHECK19punish_check_by_SYSEP14SIG_LOGIN_DATAli+0x29>
 8196da4:	8b 45 08             	mov    0x8(%ebp),%eax
 8196da7:	c7 80 b8 00 00 00 ea 	movl   $0x3ea,0xb8(%eax)
 8196dae:	03 00 00 
 8196db1:	b8 00 00 00 00       	mov    $0x0,%eax
 8196db6:	eb 05                	jmp    8196dbd <_ZN4ARAD12PUNISH_CHECK19punish_check_by_SYSEP14SIG_LOGIN_DATAli+0x35>
 8196db8:	b8 01 00 00 00       	mov    $0x1,%eax
 8196dbd:	5d                   	pop    %ebp
 8196dbe:	c3                   	ret

```

```c
// ARAD::PUNISH_CHECK::punish_check_by_SYS @ 0x8196d88

/* ARAD::PUNISH_CHECK::punish_check_by_SYS(SIG_LOGIN_DATA*, long, int) */

undefined4 ARAD::PUNISH_CHECK::punish_check_by_SYS(SIG_LOGIN_DATA *param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 1) {
    *(undefined4 *)(param_1 + 0xb8) = 4;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0x3ea;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## punish_check_by_WEB

```asm
// === 08196d1a ARAD::PUNISH_CHECK::punish_check_by_WEB  [0x08196d1a-0x8196d50] ===
 8196d1a:	55                   	push   %ebp
 8196d1b:	89 e5                	mov    %esp,%ebp
 8196d1d:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 8196d21:	75 27                	jne    8196d4a <_ZN4ARAD12PUNISH_CHECK19punish_check_by_WEBEP14SIG_LOGIN_DATAli+0x30>
 8196d23:	8b 45 08             	mov    0x8(%ebp),%eax
 8196d26:	c7 80 b8 00 00 00 04 	movl   $0x4,0xb8(%eax)
 8196d2d:	00 00 00 
 8196d30:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8196d34:	75 0d                	jne    8196d43 <_ZN4ARAD12PUNISH_CHECK19punish_check_by_WEBEP14SIG_LOGIN_DATAli+0x29>
 8196d36:	8b 45 08             	mov    0x8(%ebp),%eax
 8196d39:	c7 80 b8 00 00 00 e9 	movl   $0x3e9,0xb8(%eax)
 8196d40:	03 00 00 
 8196d43:	b8 00 00 00 00       	mov    $0x0,%eax
 8196d48:	eb 05                	jmp    8196d4f <_ZN4ARAD12PUNISH_CHECK19punish_check_by_WEBEP14SIG_LOGIN_DATAli+0x35>
 8196d4a:	b8 01 00 00 00       	mov    $0x1,%eax
 8196d4f:	5d                   	pop    %ebp
 8196d50:	c3                   	ret

```

```c
// ARAD::PUNISH_CHECK::punish_check_by_WEB @ 0x8196d1a

/* ARAD::PUNISH_CHECK::punish_check_by_WEB(SIG_LOGIN_DATA*, long, int) */

undefined4 ARAD::PUNISH_CHECK::punish_check_by_WEB(SIG_LOGIN_DATA *param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 1) {
    *(undefined4 *)(param_1 + 0xb8) = 4;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0x3e9;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

