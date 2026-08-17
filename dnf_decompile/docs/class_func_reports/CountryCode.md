# CountryCode

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## CountryCode

```asm
// === 08ad2fa4 CountryCode::CountryCode  [0x08ad2fa4-0x8ad2faf] ===
 8ad2fa4:	55                   	push   %ebp
 8ad2fa5:	89 e5                	mov    %esp,%ebp
 8ad2fa7:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad2faa:	c6 00 00             	movb   $0x0,(%eax)
 8ad2fad:	5d                   	pop    %ebp
 8ad2fae:	c3                   	ret
 8ad2faf:	90                   	nop

```

```c
// CountryCode::CountryCode @ 0x8ad2fa4

/* DWARF original prototype: void CountryCode(CountryCode * this) */

void __thiscall CountryCode::CountryCode(CountryCode *this)

{
  this->idx_ = '\0';
  return;
}

```

---

## CountryCode_08ad2fb0

```asm
// === 08ad2fb0 CountryCode::CountryCode  [0x08ad2fb0-0x8ad3099] ===
 8ad2fb0:	55                   	push   %ebp
 8ad2fb1:	89 e5                	mov    %esp,%ebp
 8ad2fb3:	83 ec 10             	sub    $0x10,%esp
 8ad2fb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad2fb9:	0f b6 00             	movzbl (%eax),%eax
 8ad2fbc:	3c 60                	cmp    $0x60,%al
 8ad2fbe:	7e 20                	jle    8ad2fe0 <_ZN11CountryCodeC1EPKc+0x30>
 8ad2fc0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad2fc3:	0f b6 00             	movzbl (%eax),%eax
 8ad2fc6:	3c 7a                	cmp    $0x7a,%al
 8ad2fc8:	7f 16                	jg     8ad2fe0 <_ZN11CountryCodeC1EPKc+0x30>
 8ad2fca:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad2fcd:	0f b6 00             	movzbl (%eax),%eax
 8ad2fd0:	0f be c0             	movsbl %al,%eax
 8ad2fd3:	6b c0 1a             	imul   $0x1a,%eax,%eax
 8ad2fd6:	2d da 09 00 00       	sub    $0x9da,%eax
 8ad2fdb:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8ad2fde:	eb 35                	jmp    8ad3015 <_ZN11CountryCodeC1EPKc+0x65>
 8ad2fe0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad2fe3:	0f b6 00             	movzbl (%eax),%eax
 8ad2fe6:	3c 40                	cmp    $0x40,%al
 8ad2fe8:	7e 20                	jle    8ad300a <_ZN11CountryCodeC1EPKc+0x5a>
 8ad2fea:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad2fed:	0f b6 00             	movzbl (%eax),%eax
 8ad2ff0:	3c 5a                	cmp    $0x5a,%al
 8ad2ff2:	7f 16                	jg     8ad300a <_ZN11CountryCodeC1EPKc+0x5a>
 8ad2ff4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad2ff7:	0f b6 00             	movzbl (%eax),%eax
 8ad2ffa:	0f be c0             	movsbl %al,%eax
 8ad2ffd:	6b c0 1a             	imul   $0x1a,%eax,%eax
 8ad3000:	2d 9a 06 00 00       	sub    $0x69a,%eax
 8ad3005:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8ad3008:	eb 0b                	jmp    8ad3015 <_ZN11CountryCodeC1EPKc+0x65>
 8ad300a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad300d:	c6 00 00             	movb   $0x0,(%eax)
 8ad3010:	e9 83 00 00 00       	jmp    8ad3098 <_ZN11CountryCodeC1EPKc+0xe8>
 8ad3015:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3018:	83 c0 01             	add    $0x1,%eax
 8ad301b:	0f b6 00             	movzbl (%eax),%eax
 8ad301e:	3c 60                	cmp    $0x60,%al
 8ad3020:	7e 21                	jle    8ad3043 <_ZN11CountryCodeC1EPKc+0x93>
 8ad3022:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3025:	83 c0 01             	add    $0x1,%eax
 8ad3028:	0f b6 00             	movzbl (%eax),%eax
 8ad302b:	3c 7a                	cmp    $0x7a,%al
 8ad302d:	7f 14                	jg     8ad3043 <_ZN11CountryCodeC1EPKc+0x93>
 8ad302f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3032:	83 c0 01             	add    $0x1,%eax
 8ad3035:	0f b6 00             	movzbl (%eax),%eax
 8ad3038:	0f be c0             	movsbl %al,%eax
 8ad303b:	83 e8 61             	sub    $0x61,%eax
 8ad303e:	01 45 fc             	add    %eax,-0x4(%ebp)
 8ad3041:	eb 36                	jmp    8ad3079 <_ZN11CountryCodeC1EPKc+0xc9>
 8ad3043:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3046:	83 c0 01             	add    $0x1,%eax
 8ad3049:	0f b6 00             	movzbl (%eax),%eax
 8ad304c:	3c 40                	cmp    $0x40,%al
 8ad304e:	7e 21                	jle    8ad3071 <_ZN11CountryCodeC1EPKc+0xc1>
 8ad3050:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3053:	83 c0 01             	add    $0x1,%eax
 8ad3056:	0f b6 00             	movzbl (%eax),%eax
 8ad3059:	3c 5a                	cmp    $0x5a,%al
 8ad305b:	7f 14                	jg     8ad3071 <_ZN11CountryCodeC1EPKc+0xc1>
 8ad305d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3060:	83 c0 01             	add    $0x1,%eax
 8ad3063:	0f b6 00             	movzbl (%eax),%eax
 8ad3066:	0f be c0             	movsbl %al,%eax
 8ad3069:	83 e8 41             	sub    $0x41,%eax
 8ad306c:	01 45 fc             	add    %eax,-0x4(%ebp)
 8ad306f:	eb 08                	jmp    8ad3079 <_ZN11CountryCodeC1EPKc+0xc9>
 8ad3071:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3074:	c6 00 00             	movb   $0x0,(%eax)
 8ad3077:	eb 1f                	jmp    8ad3098 <_ZN11CountryCodeC1EPKc+0xe8>
 8ad3079:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8ad307c:	0f b6 90 60 28 e3 08 	movzbl 0x8e32860(%eax),%edx
 8ad3083:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3086:	88 10                	mov    %dl,(%eax)
 8ad3088:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad308b:	0f b6 00             	movzbl (%eax),%eax
 8ad308e:	3c ff                	cmp    $0xff,%al
 8ad3090:	75 06                	jne    8ad3098 <_ZN11CountryCodeC1EPKc+0xe8>
 8ad3092:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3095:	c6 00 00             	movb   $0x0,(%eax)
 8ad3098:	c9                   	leave
 8ad3099:	c3                   	ret

```

```c
// CountryCode::CountryCode @ 0x8ad2fb0

/* DWARF original prototype: void CountryCode(CountryCode * this, char * a2Code) */

void __thiscall CountryCode::CountryCode(CountryCode *this,char *a2Code)

{
  int iVar1;
  int local_8;
  
                    /* Unresolved local var: int32 idx@[???] */
  if ((*a2Code < 'a') || ('z' < *a2Code)) {
    if ((*a2Code < 'A') || ('Z' < *a2Code)) {
      this->idx_ = '\0';
      return;
    }
    local_8 = *a2Code * 0x1a + -0x69a;
  }
  else {
    local_8 = *a2Code * 0x1a + -0x9da;
  }
  if ((a2Code[1] < 'a') || ('z' < a2Code[1])) {
    if ((a2Code[1] < 'A') || ('Z' < a2Code[1])) {
      this->idx_ = '\0';
      return;
    }
    iVar1 = a2Code[1] + -0x41;
  }
  else {
    iVar1 = a2Code[1] + -0x61;
  }
  local_8 = local_8 + iVar1;
  this->idx_ = ""[local_8];
  if (this->idx_ == 0xff) {
    this->idx_ = '\0';
  }
  return;
}

```

---

## CountryCode_08ad309a

```asm
// === 08ad309a CountryCode::CountryCode  [0x08ad309a-0x8ad3171] ===
 8ad309a:	55                   	push   %ebp
 8ad309b:	89 e5                	mov    %esp,%ebp
 8ad309d:	83 ec 10             	sub    $0x10,%esp
 8ad30a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad30a3:	8b 00                	mov    (%eax),%eax
 8ad30a5:	83 f8 60             	cmp    $0x60,%eax
 8ad30a8:	7e 1c                	jle    8ad30c6 <_ZN11CountryCodeC1EPKw+0x2c>
 8ad30aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad30ad:	8b 00                	mov    (%eax),%eax
 8ad30af:	83 f8 7a             	cmp    $0x7a,%eax
 8ad30b2:	7f 12                	jg     8ad30c6 <_ZN11CountryCodeC1EPKw+0x2c>
 8ad30b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad30b7:	8b 00                	mov    (%eax),%eax
 8ad30b9:	6b c0 1a             	imul   $0x1a,%eax,%eax
 8ad30bc:	2d da 09 00 00       	sub    $0x9da,%eax
 8ad30c1:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8ad30c4:	eb 2e                	jmp    8ad30f4 <_ZN11CountryCodeC1EPKw+0x5a>
 8ad30c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad30c9:	8b 00                	mov    (%eax),%eax
 8ad30cb:	83 f8 40             	cmp    $0x40,%eax
 8ad30ce:	7e 1c                	jle    8ad30ec <_ZN11CountryCodeC1EPKw+0x52>
 8ad30d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad30d3:	8b 00                	mov    (%eax),%eax
 8ad30d5:	83 f8 5a             	cmp    $0x5a,%eax
 8ad30d8:	7f 12                	jg     8ad30ec <_ZN11CountryCodeC1EPKw+0x52>
 8ad30da:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad30dd:	8b 00                	mov    (%eax),%eax
 8ad30df:	6b c0 1a             	imul   $0x1a,%eax,%eax
 8ad30e2:	2d 9a 06 00 00       	sub    $0x69a,%eax
 8ad30e7:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8ad30ea:	eb 08                	jmp    8ad30f4 <_ZN11CountryCodeC1EPKw+0x5a>
 8ad30ec:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad30ef:	c6 00 00             	movb   $0x0,(%eax)
 8ad30f2:	eb 7b                	jmp    8ad316f <_ZN11CountryCodeC1EPKw+0xd5>
 8ad30f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad30f7:	83 c0 04             	add    $0x4,%eax
 8ad30fa:	8b 00                	mov    (%eax),%eax
 8ad30fc:	83 f8 60             	cmp    $0x60,%eax
 8ad30ff:	7e 1d                	jle    8ad311e <_ZN11CountryCodeC1EPKw+0x84>
 8ad3101:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3104:	83 c0 04             	add    $0x4,%eax
 8ad3107:	8b 00                	mov    (%eax),%eax
 8ad3109:	83 f8 7a             	cmp    $0x7a,%eax
 8ad310c:	7f 10                	jg     8ad311e <_ZN11CountryCodeC1EPKw+0x84>
 8ad310e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3111:	83 c0 04             	add    $0x4,%eax
 8ad3114:	8b 00                	mov    (%eax),%eax
 8ad3116:	83 e8 61             	sub    $0x61,%eax
 8ad3119:	01 45 fc             	add    %eax,-0x4(%ebp)
 8ad311c:	eb 32                	jmp    8ad3150 <_ZN11CountryCodeC1EPKw+0xb6>
 8ad311e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3121:	83 c0 04             	add    $0x4,%eax
 8ad3124:	8b 00                	mov    (%eax),%eax
 8ad3126:	83 f8 40             	cmp    $0x40,%eax
 8ad3129:	7e 1d                	jle    8ad3148 <_ZN11CountryCodeC1EPKw+0xae>
 8ad312b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad312e:	83 c0 04             	add    $0x4,%eax
 8ad3131:	8b 00                	mov    (%eax),%eax
 8ad3133:	83 f8 5a             	cmp    $0x5a,%eax
 8ad3136:	7f 10                	jg     8ad3148 <_ZN11CountryCodeC1EPKw+0xae>
 8ad3138:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad313b:	83 c0 04             	add    $0x4,%eax
 8ad313e:	8b 00                	mov    (%eax),%eax
 8ad3140:	83 e8 41             	sub    $0x41,%eax
 8ad3143:	01 45 fc             	add    %eax,-0x4(%ebp)
 8ad3146:	eb 08                	jmp    8ad3150 <_ZN11CountryCodeC1EPKw+0xb6>
 8ad3148:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad314b:	c6 00 00             	movb   $0x0,(%eax)
 8ad314e:	eb 1f                	jmp    8ad316f <_ZN11CountryCodeC1EPKw+0xd5>
 8ad3150:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8ad3153:	0f b6 90 60 28 e3 08 	movzbl 0x8e32860(%eax),%edx
 8ad315a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad315d:	88 10                	mov    %dl,(%eax)
 8ad315f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3162:	0f b6 00             	movzbl (%eax),%eax
 8ad3165:	3c ff                	cmp    $0xff,%al
 8ad3167:	75 06                	jne    8ad316f <_ZN11CountryCodeC1EPKw+0xd5>
 8ad3169:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad316c:	c6 00 00             	movb   $0x0,(%eax)
 8ad316f:	c9                   	leave
 8ad3170:	c3                   	ret
 8ad3171:	90                   	nop

```

```c
// CountryCode::CountryCode @ 0x8ad309a

/* DWARF original prototype: void CountryCode(CountryCode * this, wchar * a2Code) */

void __thiscall CountryCode::CountryCode(CountryCode *this,wchar *a2Code)

{
  int iVar1;
  int local_8;
  
                    /* Unresolved local var: int32 idx@[???] */
  if ((*a2Code < 0x61) || (0x7a < *a2Code)) {
    if ((*a2Code < 0x41) || (0x5a < *a2Code)) {
      this->idx_ = '\0';
      return;
    }
    local_8 = *a2Code * 0x1a + -0x69a;
  }
  else {
    local_8 = *a2Code * 0x1a + -0x9da;
  }
  if ((a2Code[1] < 0x61) || (0x7a < a2Code[1])) {
    if ((a2Code[1] < 0x41) || (0x5a < a2Code[1])) {
      this->idx_ = '\0';
      return;
    }
    iVar1 = a2Code[1] + -0x41;
  }
  else {
    iVar1 = a2Code[1] + -0x61;
  }
  local_8 = local_8 + iVar1;
  this->idx_ = ""[local_8];
  if (this->idx_ == 0xff) {
    this->idx_ = '\0';
  }
  return;
}

```

---

## CountryCode_08ad3172

```asm
// === 08ad3172 CountryCode::CountryCode  [0x08ad3172-0x8ad3189] ===
 8ad3172:	55                   	push   %ebp
 8ad3173:	89 e5                	mov    %esp,%ebp
 8ad3175:	83 ec 04             	sub    $0x4,%esp
 8ad3178:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad317b:	88 45 fc             	mov    %al,-0x4(%ebp)
 8ad317e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3181:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 8ad3185:	88 10                	mov    %dl,(%eax)
 8ad3187:	c9                   	leave
 8ad3188:	c3                   	ret
 8ad3189:	90                   	nop

```

```c
// CountryCode::CountryCode @ 0x8ad3172

/* DWARF original prototype: void CountryCode(CountryCode * this, byte idx) */

void __thiscall CountryCode::CountryCode(CountryCode *this,byte idx)

{
  this->idx_ = idx;
  return;
}

```

---

## getAlpha2Code

```asm
// === 08ad319a CountryCode::getAlpha2Code  [0x08ad319a-0x8ad322f] ===
 8ad319a:	55                   	push   %ebp
 8ad319b:	89 e5                	mov    %esp,%ebp
 8ad319d:	56                   	push   %esi
 8ad319e:	53                   	push   %ebx
 8ad319f:	83 ec 20             	sub    $0x20,%esp
 8ad31a2:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad31a5:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
 8ad31ab:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
 8ad31af:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad31b2:	0f b6 00             	movzbl (%eax),%eax
 8ad31b5:	0f b6 c0             	movzbl %al,%eax
 8ad31b8:	0f b6 04 c5 c0 20 e3 	movzbl 0x8e320c0(,%eax,8),%eax
 8ad31bf:	08 
 8ad31c0:	88 45 f4             	mov    %al,-0xc(%ebp)
 8ad31c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad31c6:	0f b6 00             	movzbl (%eax),%eax
 8ad31c9:	0f b6 c0             	movzbl %al,%eax
 8ad31cc:	0f b6 04 c5 c1 20 e3 	movzbl 0x8e320c1(,%eax,8),%eax
 8ad31d3:	08 
 8ad31d4:	88 45 f5             	mov    %al,-0xb(%ebp)
 8ad31d7:	89 de                	mov    %ebx,%esi
 8ad31d9:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8ad31dc:	89 04 24             	mov    %eax,(%esp)
 8ad31df:	e8 ec ce c0 ff       	call   86e00d0 <_ZNSaIcEC1Ev>
 8ad31e4:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8ad31e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad31eb:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ad31ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad31f2:	89 34 24             	mov    %esi,(%esp)
 8ad31f5:	e8 36 44 c3 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8ad31fa:	eb 1b                	jmp    8ad3217 <_ZNK11CountryCode13getAlpha2CodeEv+0x7d>
 8ad31fc:	89 d3                	mov    %edx,%ebx
 8ad31fe:	89 c6                	mov    %eax,%esi
 8ad3200:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8ad3203:	89 04 24             	mov    %eax,(%esp)
 8ad3206:	e8 e5 ce c0 ff       	call   86e00f0 <_ZNSaIcED1Ev>
 8ad320b:	89 f0                	mov    %esi,%eax
 8ad320d:	89 da                	mov    %ebx,%edx
 8ad320f:	89 04 24             	mov    %eax,(%esp)
 8ad3212:	e8 39 05 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad3217:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8ad321a:	89 04 24             	mov    %eax,(%esp)
 8ad321d:	e8 ce ce c0 ff       	call   86e00f0 <_ZNSaIcED1Ev>
 8ad3222:	89 d8                	mov    %ebx,%eax
 8ad3224:	89 d8                	mov    %ebx,%eax
 8ad3226:	83 c4 20             	add    $0x20,%esp
 8ad3229:	5b                   	pop    %ebx
 8ad322a:	5e                   	pop    %esi
 8ad322b:	5d                   	pop    %ebp
 8ad322c:	c2 04 00             	ret    $0x4
 8ad322f:	90                   	nop

```

```c
// CountryCode::getAlpha2Code @ 0x8ad319a

/* DWARF original prototype: tstring getAlpha2Code(CountryCode * this) */

tstring __thiscall CountryCode::getAlpha2Code(CountryCode *this)

{
  byte *in_stack_00000008;
  byte local_10;
  byte bStack_f;
  undefined1 local_e;
  allocator<char> local_d;
  
                    /* Unresolved local var: TCHAR[3] t@[???] */
  local_e = 0;
  _local_10 = CONCAT11(ccTable[*in_stack_00000008].alpha2_2,ccTable[*in_stack_00000008].alpha2_1);
  std::allocator<char>::allocator();
                    /* try { // try from 08ad31f5 to 08ad31f9 has its CatchHandler @ 08ad31fc */
  std::string::string((string *)this,(char *)&local_10,(allocator *)&local_d);
  std::allocator<char>::~allocator(&local_d);
  return (tstring)(_Alloc_hider)this;
}

```

---

## getAlpha2CodeByte

```asm
// === 08ad3230 CountryCode::getAlpha2CodeByte  [0x08ad3230-0x8ad3245] ===
 8ad3230:	55                   	push   %ebp
 8ad3231:	89 e5                	mov    %esp,%ebp
 8ad3233:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3236:	0f b6 00             	movzbl (%eax),%eax
 8ad3239:	0f b6 c0             	movzbl %al,%eax
 8ad323c:	c1 e0 03             	shl    $0x3,%eax
 8ad323f:	05 c0 20 e3 08       	add    $0x8e320c0,%eax
 8ad3244:	5d                   	pop    %ebp
 8ad3245:	c3                   	ret

```

```c
// CountryCode::getAlpha2CodeByte @ 0x8ad3230

/* DWARF original prototype: byte * getAlpha2CodeByte(CountryCode * this) */

byte * __thiscall CountryCode::getAlpha2CodeByte(CountryCode *this)

{
  return &ccTable[this->idx_].alpha2_1;
}

```

---

## getCountryName

```asm
// === 08ad3246 CountryCode::getCountryName  [0x08ad3246-0x8ad32bd] ===
 8ad3246:	55                   	push   %ebp
 8ad3247:	89 e5                	mov    %esp,%ebp
 8ad3249:	56                   	push   %esi
 8ad324a:	53                   	push   %ebx
 8ad324b:	83 ec 20             	sub    $0x20,%esp
 8ad324e:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad3251:	89 de                	mov    %ebx,%esi
 8ad3253:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8ad3256:	89 04 24             	mov    %eax,(%esp)
 8ad3259:	e8 72 ce c0 ff       	call   86e00d0 <_ZNSaIcEC1Ev>
 8ad325e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3261:	0f b6 00             	movzbl (%eax),%eax
 8ad3264:	0f b6 c0             	movzbl %al,%eax
 8ad3267:	8b 04 c5 c4 20 e3 08 	mov    0x8e320c4(,%eax,8),%eax
 8ad326e:	89 04 24             	mov    %eax,(%esp)
 8ad3271:	e8 ff b8 00 00       	call   8adeb75 <_Z9toTStringPKc>
 8ad3276:	8d 55 f7             	lea    -0x9(%ebp),%edx
 8ad3279:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad327d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad3281:	89 34 24             	mov    %esi,(%esp)
 8ad3284:	e8 a7 43 c3 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8ad3289:	eb 1b                	jmp    8ad32a6 <_ZNK11CountryCode14getCountryNameEv+0x60>
 8ad328b:	89 d3                	mov    %edx,%ebx
 8ad328d:	89 c6                	mov    %eax,%esi
 8ad328f:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8ad3292:	89 04 24             	mov    %eax,(%esp)
 8ad3295:	e8 56 ce c0 ff       	call   86e00f0 <_ZNSaIcED1Ev>
 8ad329a:	89 f0                	mov    %esi,%eax
 8ad329c:	89 da                	mov    %ebx,%edx
 8ad329e:	89 04 24             	mov    %eax,(%esp)
 8ad32a1:	e8 aa 04 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad32a6:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8ad32a9:	89 04 24             	mov    %eax,(%esp)
 8ad32ac:	e8 3f ce c0 ff       	call   86e00f0 <_ZNSaIcED1Ev>
 8ad32b1:	89 d8                	mov    %ebx,%eax
 8ad32b3:	89 d8                	mov    %ebx,%eax
 8ad32b5:	83 c4 20             	add    $0x20,%esp
 8ad32b8:	5b                   	pop    %ebx
 8ad32b9:	5e                   	pop    %esi
 8ad32ba:	5d                   	pop    %ebp
 8ad32bb:	c2 04 00             	ret    $0x4

```

```c
// CountryCode::getCountryName @ 0x8ad3246

/* DWARF original prototype: tstring getCountryName(CountryCode * this) */

tstring __thiscall CountryCode::getCountryName(CountryCode *this)

{
  TCHAR *pTVar1;
  byte *in_stack_00000008;
  allocator<char> local_d;
  
  std::allocator<char>::allocator();
                    /* try { // try from 08ad3271 to 08ad3288 has its CatchHandler @ 08ad328b */
  pTVar1 = toTString(ccTable[*in_stack_00000008].name);
  std::string::string((string *)this,pTVar1,(allocator *)&local_d);
  std::allocator<char>::~allocator(&local_d);
  return (tstring)(_Alloc_hider)this;
}

```

---

## getInternalValue

```asm
// === 08ad32be CountryCode::getInternalValue  [0x08ad32be-0x8ad32c9] ===
 8ad32be:	55                   	push   %ebp
 8ad32bf:	89 e5                	mov    %esp,%ebp
 8ad32c1:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad32c4:	0f b6 00             	movzbl (%eax),%eax
 8ad32c7:	5d                   	pop    %ebp
 8ad32c8:	c3                   	ret
 8ad32c9:	90                   	nop

```

```c
// CountryCode::getInternalValue @ 0x8ad32be

/* DWARF original prototype: byte getInternalValue(CountryCode * this) */

byte __thiscall CountryCode::getInternalValue(CountryCode *this)

{
  return this->idx_;
}

```

---

## isNone

```asm
// === 08ad318a CountryCode::isNone  [0x08ad318a-0x8ad3199] ===
 8ad318a:	55                   	push   %ebp
 8ad318b:	89 e5                	mov    %esp,%ebp
 8ad318d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3190:	0f b6 00             	movzbl (%eax),%eax
 8ad3193:	84 c0                	test   %al,%al
 8ad3195:	0f 94 c0             	sete   %al
 8ad3198:	5d                   	pop    %ebp
 8ad3199:	c3                   	ret

```

```c
// CountryCode::isNone @ 0x8ad318a

/* DWARF original prototype: bool isNone(CountryCode * this) */

bool __thiscall CountryCode::isNone(CountryCode *this)

{
  return this->idx_ == '\0';
}

```

---

## operator!=

```asm
// === 08ad3342 CountryCode::operator!=  [0x08ad3342-0x8ad3355] ===
 8ad3342:	55                   	push   %ebp
 8ad3343:	89 e5                	mov    %esp,%ebp
 8ad3345:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3348:	0f b6 10             	movzbl (%eax),%edx
 8ad334b:	0f b6 45 0c          	movzbl 0xc(%ebp),%eax
 8ad334f:	38 c2                	cmp    %al,%dl
 8ad3351:	0f 95 c0             	setne  %al
 8ad3354:	5d                   	pop    %ebp
 8ad3355:	c3                   	ret

```

```c
// CountryCode::operator!= @ 0x8ad3342

/* DWARF original prototype: bool operator!=(CountryCode * this, CountryCode op) */

bool __thiscall CountryCode::operator!=(CountryCode *this,CountryCode op)

{
  return this->idx_ != op.idx_;
}

```

---

## operator=

```asm
// === 08ad32e2 CountryCode::operator=  [0x08ad32e2-0x8ad3307] ===
 8ad32e2:	55                   	push   %ebp
 8ad32e3:	89 e5                	mov    %esp,%ebp
 8ad32e5:	83 ec 18             	sub    $0x18,%esp
 8ad32e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad32eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad32ef:	8d 45 ff             	lea    -0x1(%ebp),%eax
 8ad32f2:	89 04 24             	mov    %eax,(%esp)
 8ad32f5:	e8 b6 fc ff ff       	call   8ad2fb0 <_ZN11CountryCodeC1EPKc>
 8ad32fa:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad32fd:	0f b6 55 ff          	movzbl -0x1(%ebp),%edx
 8ad3301:	88 10                	mov    %dl,(%eax)
 8ad3303:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3306:	c9                   	leave
 8ad3307:	c3                   	ret

```

```c
// CountryCode::operator= @ 0x8ad32e2

/* DWARF original prototype: CountryCode * operator=(CountryCode * this, char * a2Code) */

CountryCode * __thiscall CountryCode::operator=(CountryCode *this,char *a2Code)

{
  CountryCode local_5;
  
  CountryCode(&local_5,a2Code);
  this->idx_ = (byte)local_5;
  return this;
}

```

---

## operator==

```asm
// === 08ad332e CountryCode::operator==  [0x08ad332e-0x8ad3341] ===
 8ad332e:	55                   	push   %ebp
 8ad332f:	89 e5                	mov    %esp,%ebp
 8ad3331:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3334:	0f b6 10             	movzbl (%eax),%edx
 8ad3337:	0f b6 45 0c          	movzbl 0xc(%ebp),%eax
 8ad333b:	38 c2                	cmp    %al,%dl
 8ad333d:	0f 94 c0             	sete   %al
 8ad3340:	5d                   	pop    %ebp
 8ad3341:	c3                   	ret

```

```c
// CountryCode::operator== @ 0x8ad332e

/* DWARF original prototype: bool operator==(CountryCode * this, CountryCode op) */

bool __thiscall CountryCode::operator==(CountryCode *this,CountryCode op)

{
  return this->idx_ == op.idx_;
}

```

---

## operator=_08ad3308

```asm
// === 08ad3308 CountryCode::operator=  [0x08ad3308-0x8ad332d] ===
 8ad3308:	55                   	push   %ebp
 8ad3309:	89 e5                	mov    %esp,%ebp
 8ad330b:	83 ec 18             	sub    $0x18,%esp
 8ad330e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3311:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad3315:	8d 45 ff             	lea    -0x1(%ebp),%eax
 8ad3318:	89 04 24             	mov    %eax,(%esp)
 8ad331b:	e8 7a fd ff ff       	call   8ad309a <_ZN11CountryCodeC1EPKw>
 8ad3320:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3323:	0f b6 55 ff          	movzbl -0x1(%ebp),%edx
 8ad3327:	88 10                	mov    %dl,(%eax)
 8ad3329:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad332c:	c9                   	leave
 8ad332d:	c3                   	ret

```

```c
// CountryCode::operator= @ 0x8ad3308

/* DWARF original prototype: CountryCode * operator=(CountryCode * this, wchar * a2Code) */

CountryCode * __thiscall CountryCode::operator=(CountryCode *this,wchar *a2Code)

{
  CountryCode local_5;
  
  CountryCode(&local_5,a2Code);
  this->idx_ = (byte)local_5;
  return this;
}

```

---

## setInternalValue

```asm
// === 08ad32ca CountryCode::setInternalValue  [0x08ad32ca-0x8ad32e1] ===
 8ad32ca:	55                   	push   %ebp
 8ad32cb:	89 e5                	mov    %esp,%ebp
 8ad32cd:	83 ec 04             	sub    $0x4,%esp
 8ad32d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad32d3:	88 45 fc             	mov    %al,-0x4(%ebp)
 8ad32d6:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad32d9:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 8ad32dd:	88 10                	mov    %dl,(%eax)
 8ad32df:	c9                   	leave
 8ad32e0:	c3                   	ret
 8ad32e1:	90                   	nop

```

```c
// CountryCode::setInternalValue @ 0x8ad32ca

/* DWARF original prototype: void setInternalValue(CountryCode * this, byte value) */

void __thiscall CountryCode::setInternalValue(CountryCode *this,byte value)

{
  this->idx_ = value;
  return;
}

```

