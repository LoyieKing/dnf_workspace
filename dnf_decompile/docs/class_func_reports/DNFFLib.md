# DNFFLib

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## Binary2Hex

```asm
// === 08108873 DNFFLib::Binary2Hex  [0x08108873-0x81088ce] ===
 8108873:	55                   	push   %ebp
 8108874:	89 e5                	mov    %esp,%ebp
 8108876:	83 ec 28             	sub    $0x28,%esp
 8108879:	8b 45 08             	mov    0x8(%ebp),%eax
 810887c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810887f:	8b 45 10             	mov    0x10(%ebp),%eax
 8108882:	c6 00 00             	movb   $0x0,(%eax)
 8108885:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 810888c:	eb 32                	jmp    81088c0 <_ZN7DNFFLib10Binary2HexEPKhiPc+0x4d>
 810888e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8108891:	0f b6 00             	movzbl (%eax),%eax
 8108894:	0f b6 c0             	movzbl %al,%eax
 8108897:	8d 55 ed             	lea    -0x13(%ebp),%edx
 810889a:	89 54 24 04          	mov    %edx,0x4(%esp)
 810889e:	89 04 24             	mov    %eax,(%esp)
 81088a1:	e8 aa fe ff ff       	call   8108750 <_Z8Char2HexhPc>
 81088a6:	8d 45 ed             	lea    -0x13(%ebp),%eax
 81088a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81088ad:	8b 45 10             	mov    0x10(%ebp),%eax
 81088b0:	89 04 24             	mov    %eax,(%esp)
 81088b3:	e8 a8 54 f7 ff       	call   807dd60 <strcat@plt>
 81088b8:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81088bc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81088c0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81088c3:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81088c6:	0f 9c c0             	setl   %al
 81088c9:	84 c0                	test   %al,%al
 81088cb:	75 c1                	jne    810888e <_ZN7DNFFLib10Binary2HexEPKhiPc+0x1b>
 81088cd:	c9                   	leave
 81088ce:	c3                   	ret

```

```c
// DNFFLib::Binary2Hex @ 0x8108873

/* DNFFLib::Binary2Hex(unsigned char const*, int, char*) */

void DNFFLib::Binary2Hex(uchar *param_1,int param_2,char *param_3)

{
  char local_17 [3];
  int local_14;
  uchar *local_10;
  
  local_10 = param_1;
  *param_3 = '\0';
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    Char2Hex(*local_10,local_17);
    strcat(param_3,local_17);
    local_10 = local_10 + 1;
  }
  return;
}

```

---

## CharacSetSwitch

```asm
// === 08108bfb DNFFLib::CharacSetSwitch  [0x08108bfb-0x8108d0d] ===
 8108bfb:	55                   	push   %ebp
 8108bfc:	89 e5                	mov    %esp,%ebp
 8108bfe:	83 ec 48             	sub    $0x48,%esp
 8108c01:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8108c08:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8108c0f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8108c16:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8108c1d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8108c24:	8b 45 08             	mov    0x8(%ebp),%eax
 8108c27:	89 44 24 04          	mov    %eax,0x4(%esp)
 8108c2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8108c2e:	89 04 24             	mov    %eax,(%esp)
 8108c31:	e8 5a 4d f7 ff       	call   807d990 <iconv_open@plt>
 8108c36:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8108c39:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 8108c3d:	75 29                	jne    8108c68 <_ZN7DNFFLib15CharacSetSwitchEPKcS1_PcS2_+0x6d>
 8108c3f:	e8 2c 51 f7 ff       	call   807dd70 <__errno_location@plt>
 8108c44:	8b 00                	mov    (%eax),%eax
 8108c46:	89 04 24             	mov    %eax,(%esp)
 8108c49:	e8 e2 4a f7 ff       	call   807d730 <strerror@plt>
 8108c4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8108c52:	c7 04 24 a2 46 b4 08 	movl   $0x8b446a2,(%esp)
 8108c59:	e8 02 4f f7 ff       	call   807db60 <printf@plt>
 8108c5e:	b8 00 00 00 00       	mov    $0x0,%eax
 8108c63:	e9 a4 00 00 00       	jmp    8108d0c <_ZN7DNFFLib15CharacSetSwitchEPKcS1_PcS2_+0x111>
 8108c68:	8b 45 10             	mov    0x10(%ebp),%eax
 8108c6b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8108c6e:	8b 45 14             	mov    0x14(%ebp),%eax
 8108c71:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8108c74:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8108c77:	89 04 24             	mov    %eax,(%esp)
 8108c7a:	e8 31 57 f7 ff       	call   807e3b0 <strlen@plt>
 8108c7f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8108c82:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8108c85:	89 d0                	mov    %edx,%eax
 8108c87:	01 c0                	add    %eax,%eax
 8108c89:	01 d0                	add    %edx,%eax
 8108c8b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8108c8e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8108c91:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8108c94:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8108c97:	89 44 24 10          	mov    %eax,0x10(%esp)
 8108c9b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8108c9e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8108ca2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8108ca5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8108ca9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8108cac:	89 44 24 04          	mov    %eax,0x4(%esp)
 8108cb0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8108cb3:	89 04 24             	mov    %eax,(%esp)
 8108cb6:	e8 25 54 f7 ff       	call   807e0e0 <iconv@plt>
 8108cbb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8108cbe:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 8108cc2:	75 26                	jne    8108cea <_ZN7DNFFLib15CharacSetSwitchEPKcS1_PcS2_+0xef>
 8108cc4:	e8 a7 50 f7 ff       	call   807dd70 <__errno_location@plt>
 8108cc9:	8b 00                	mov    (%eax),%eax
 8108ccb:	89 04 24             	mov    %eax,(%esp)
 8108cce:	e8 5d 4a f7 ff       	call   807d730 <strerror@plt>
 8108cd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8108cd7:	c7 04 24 b9 46 b4 08 	movl   $0x8b446b9,(%esp)
 8108cde:	e8 7d 4e f7 ff       	call   807db60 <printf@plt>
 8108ce3:	b8 00 00 00 00       	mov    $0x0,%eax
 8108ce8:	eb 22                	jmp    8108d0c <_ZN7DNFFLib15CharacSetSwitchEPKcS1_PcS2_+0x111>
 8108cea:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8108ced:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8108cf0:	89 d1                	mov    %edx,%ecx
 8108cf2:	29 c1                	sub    %eax,%ecx
 8108cf4:	89 c8                	mov    %ecx,%eax
 8108cf6:	03 45 14             	add    0x14(%ebp),%eax
 8108cf9:	c6 00 00             	movb   $0x0,(%eax)
 8108cfc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8108cff:	89 04 24             	mov    %eax,(%esp)
 8108d02:	e8 99 57 f7 ff       	call   807e4a0 <iconv_close@plt>
 8108d07:	b8 01 00 00 00       	mov    $0x1,%eax
 8108d0c:	c9                   	leave
 8108d0d:	c3                   	ret

```

```c
// DNFFLib::CharacSetSwitch @ 0x8108bfb

/* DNFFLib::CharacSetSwitch(char const*, char const*, char*, char*) */

undefined4 DNFFLib::CharacSetSwitch(char *param_1,char *param_2,char *param_3,char *param_4)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  size_t local_28;
  size_t local_24;
  char *local_20;
  char *local_1c;
  size_t local_18;
  size_t local_14;
  iconv_t local_10;
  
  local_1c = (char *)0x0;
  local_20 = (char *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_18 = 0;
  local_10 = iconv_open(param_2,param_1);
  if (local_10 == (iconv_t)0xffffffff) {
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    printf("iconv_open error : %s\n",pcVar2);
    uVar3 = 0;
  }
  else {
    local_1c = param_3;
    local_20 = param_4;
    local_24 = strlen(param_3);
    local_28 = local_24 * 3;
    local_18 = local_28;
    local_14 = iconv(local_10,&local_1c,&local_24,&local_20,&local_28);
    if (local_14 == 0xffffffff) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf("iconv error : %s\n",pcVar2);
      uVar3 = 0;
    }
    else {
      param_4[local_18 - local_28] = '\0';
      iconv_close(local_10);
      uVar3 = 1;
    }
  }
  return uVar3;
}

```

---

## ConvertGBKtoUTF8

```asm
// === 08108d0e DNFFLib::ConvertGBKtoUTF8  [0x08108d0e-0x8108d4a] ===
 8108d0e:	55                   	push   %ebp
 8108d0f:	89 e5                	mov    %esp,%ebp
 8108d11:	83 ec 18             	sub    $0x18,%esp
 8108d14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8108d17:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8108d1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8108d1e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8108d22:	c7 44 24 04 cb 46 b4 	movl   $0x8b446cb,0x4(%esp)
 8108d29:	08 
 8108d2a:	c7 04 24 d1 46 b4 08 	movl   $0x8b446d1,(%esp)
 8108d31:	e8 c5 fe ff ff       	call   8108bfb <_ZN7DNFFLib15CharacSetSwitchEPKcS1_PcS2_>
 8108d36:	83 f0 01             	xor    $0x1,%eax
 8108d39:	84 c0                	test   %al,%al
 8108d3b:	74 07                	je     8108d44 <_ZN7DNFFLib16ConvertGBKtoUTF8EPcS0_+0x36>
 8108d3d:	b8 00 00 00 00       	mov    $0x0,%eax
 8108d42:	eb 05                	jmp    8108d49 <_ZN7DNFFLib16ConvertGBKtoUTF8EPcS0_+0x3b>
 8108d44:	b8 01 00 00 00       	mov    $0x1,%eax
 8108d49:	c9                   	leave
 8108d4a:	c3                   	ret

```

```c
// DNFFLib::ConvertGBKtoUTF8 @ 0x8108d0e

/* DNFFLib::ConvertGBKtoUTF8(char*, char*) */

bool DNFFLib::ConvertGBKtoUTF8(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = CharacSetSwitch("GBK","UTF-8",param_1,param_2);
  return cVar1 == '\x01';
}

```

---

## ConvertUTF8toGBK

```asm
// === 08108d4b DNFFLib::ConvertUTF8toGBK  [0x08108d4b-0x8108d87] ===
 8108d4b:	55                   	push   %ebp
 8108d4c:	89 e5                	mov    %esp,%ebp
 8108d4e:	83 ec 18             	sub    $0x18,%esp
 8108d51:	8b 45 0c             	mov    0xc(%ebp),%eax
 8108d54:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8108d58:	8b 45 08             	mov    0x8(%ebp),%eax
 8108d5b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8108d5f:	c7 44 24 04 d1 46 b4 	movl   $0x8b446d1,0x4(%esp)
 8108d66:	08 
 8108d67:	c7 04 24 cb 46 b4 08 	movl   $0x8b446cb,(%esp)
 8108d6e:	e8 88 fe ff ff       	call   8108bfb <_ZN7DNFFLib15CharacSetSwitchEPKcS1_PcS2_>
 8108d73:	83 f0 01             	xor    $0x1,%eax
 8108d76:	84 c0                	test   %al,%al
 8108d78:	74 07                	je     8108d81 <_ZN7DNFFLib16ConvertUTF8toGBKEPcS0_+0x36>
 8108d7a:	b8 00 00 00 00       	mov    $0x0,%eax
 8108d7f:	eb 05                	jmp    8108d86 <_ZN7DNFFLib16ConvertUTF8toGBKEPcS0_+0x3b>
 8108d81:	b8 01 00 00 00       	mov    $0x1,%eax
 8108d86:	c9                   	leave
 8108d87:	c3                   	ret

```

```c
// DNFFLib::ConvertUTF8toGBK @ 0x8108d4b

/* DNFFLib::ConvertUTF8toGBK(char*, char*) */

bool DNFFLib::ConvertUTF8toGBK(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = CharacSetSwitch("UTF-8","GBK",param_1,param_2);
  return cVar1 == '\x01';
}

```

---

## ExplodeString

```asm
// === 081089c8 DNFFLib::ExplodeString  [0x081089c8-0x8108a97] ===
 81089c8:	55                   	push   %ebp
 81089c9:	89 e5                	mov    %esp,%ebp
 81089cb:	83 ec 28             	sub    $0x28,%esp
 81089ce:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 81089d5:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 81089d9:	7e 06                	jle    81089e1 <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i+0x19>
 81089db:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 81089df:	75 12                	jne    81089f3 <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i+0x2b>
 81089e1:	8b 45 10             	mov    0x10(%ebp),%eax
 81089e4:	8b 55 08             	mov    0x8(%ebp),%edx
 81089e7:	89 10                	mov    %edx,(%eax)
 81089e9:	b8 00 00 00 00       	mov    $0x0,%eax
 81089ee:	e9 a3 00 00 00       	jmp    8108a96 <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i+0xce>
 81089f3:	8b 45 08             	mov    0x8(%ebp),%eax
 81089f6:	89 04 24             	mov    %eax,(%esp)
 81089f9:	e8 b2 59 f7 ff       	call   807e3b0 <strlen@plt>
 81089fe:	03 45 08             	add    0x8(%ebp),%eax
 8108a01:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8108a04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8108a07:	89 44 24 04          	mov    %eax,0x4(%esp)
 8108a0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8108a0e:	89 04 24             	mov    %eax,(%esp)
 8108a11:	e8 da 4e f7 ff       	call   807d8f0 <strtok@plt>
 8108a16:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8108a19:	eb 6d                	jmp    8108a88 <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i+0xc0>
 8108a1b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8108a1e:	c1 e0 02             	shl    $0x2,%eax
 8108a21:	03 45 10             	add    0x10(%ebp),%eax
 8108a24:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8108a27:	89 10                	mov    %edx,(%eax)
 8108a29:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8108a2d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8108a30:	3b 45 14             	cmp    0x14(%ebp),%eax
 8108a33:	7c 3d                	jl     8108a72 <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i+0xaa>
 8108a35:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8108a38:	89 04 24             	mov    %eax,(%esp)
 8108a3b:	e8 70 59 f7 ff       	call   807e3b0 <strlen@plt>
 8108a40:	03 45 ec             	add    -0x14(%ebp),%eax
 8108a43:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8108a46:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8108a49:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8108a4c:	75 11                	jne    8108a5f <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i+0x97>
 8108a4e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8108a51:	c1 e0 02             	shl    $0x2,%eax
 8108a54:	03 45 10             	add    0x10(%ebp),%eax
 8108a57:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8108a5d:	eb 34                	jmp    8108a93 <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i+0xcb>
 8108a5f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8108a62:	c1 e0 02             	shl    $0x2,%eax
 8108a65:	03 45 10             	add    0x10(%ebp),%eax
 8108a68:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8108a6b:	83 c2 01             	add    $0x1,%edx
 8108a6e:	89 10                	mov    %edx,(%eax)
 8108a70:	eb 21                	jmp    8108a93 <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i+0xcb>
 8108a72:	8b 45 0c             	mov    0xc(%ebp),%eax
 8108a75:	89 44 24 04          	mov    %eax,0x4(%esp)
 8108a79:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8108a80:	e8 6b 4e f7 ff       	call   807d8f0 <strtok@plt>
 8108a85:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8108a88:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8108a8c:	0f 95 c0             	setne  %al
 8108a8f:	84 c0                	test   %al,%al
 8108a91:	75 88                	jne    8108a1b <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i+0x53>
 8108a93:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8108a96:	c9                   	leave
 8108a97:	c3                   	ret

```

```c
// DNFFLib::ExplodeString @ 0x81089c8

/* DNFFLib::ExplodeString(char*, char*, char**, int) */

int DNFFLib::ExplodeString(char *param_1,char *param_2,char **param_3,int param_4)

{
  size_t sVar1;
  size_t sVar2;
  int local_1c;
  char *local_18;
  
  local_1c = 0;
  if ((param_4 < 1) || (param_1 == (char *)0x0)) {
    *param_3 = param_1;
    local_1c = 0;
  }
  else {
    sVar1 = strlen(param_1);
    local_18 = strtok(param_1,param_2);
    while (local_18 != (char *)0x0) {
      param_3[local_1c] = local_18;
      local_1c = local_1c + 1;
      if (param_4 <= local_1c) {
        sVar2 = strlen(local_18);
        if (local_18 + sVar2 == param_1 + sVar1) {
          param_3[local_1c] = (char *)0x0;
          return local_1c;
        }
        param_3[local_1c] = local_18 + sVar2 + 1;
        return local_1c;
      }
      local_18 = strtok((char *)0x0,param_2);
    }
  }
  return local_1c;
}

```

---

## Hex2Binary

```asm
// === 081088cf DNFFLib::Hex2Binary  [0x081088cf-0x8108926] ===
 81088cf:	55                   	push   %ebp
 81088d0:	89 e5                	mov    %esp,%ebp
 81088d2:	83 ec 18             	sub    $0x18,%esp
 81088d5:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 81088dc:	eb 35                	jmp    8108913 <_ZN7DNFFLib10Hex2BinaryEPKcPhi+0x44>
 81088de:	8d 45 fb             	lea    -0x5(%ebp),%eax
 81088e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81088e5:	8b 45 08             	mov    0x8(%ebp),%eax
 81088e8:	89 04 24             	mov    %eax,(%esp)
 81088eb:	e8 a2 fe ff ff       	call   8108792 <_Z8Hex2CharPKcRh>
 81088f0:	83 f0 01             	xor    $0x1,%eax
 81088f3:	84 c0                	test   %al,%al
 81088f5:	74 07                	je     81088fe <_ZN7DNFFLib10Hex2BinaryEPKcPhi+0x2f>
 81088f7:	b8 00 00 00 00       	mov    $0x0,%eax
 81088fc:	eb 27                	jmp    8108925 <_ZN7DNFFLib10Hex2BinaryEPKcPhi+0x56>
 81088fe:	0f b6 55 fb          	movzbl -0x5(%ebp),%edx
 8108902:	8b 45 0c             	mov    0xc(%ebp),%eax
 8108905:	88 10                	mov    %dl,(%eax)
 8108907:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 810890b:	83 45 08 02          	addl   $0x2,0x8(%ebp)
 810890f:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 8108913:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8108916:	3b 45 10             	cmp    0x10(%ebp),%eax
 8108919:	0f 9c c0             	setl   %al
 810891c:	84 c0                	test   %al,%al
 810891e:	75 be                	jne    81088de <_ZN7DNFFLib10Hex2BinaryEPKcPhi+0xf>
 8108920:	b8 01 00 00 00       	mov    $0x1,%eax
 8108925:	c9                   	leave
 8108926:	c3                   	ret

```

```c
// DNFFLib::Hex2Binary @ 0x81088cf

/* DNFFLib::Hex2Binary(char const*, unsigned char*, int) */

undefined4 DNFFLib::Hex2Binary(char *param_1,uchar *param_2,int param_3)

{
  char cVar1;
  uchar local_9;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (param_3 <= local_8) {
      return 1;
    }
    cVar1 = Hex2Char(param_1,&local_9);
    if (cVar1 != '\x01') break;
    *param_2 = local_9;
    local_8 = local_8 + 1;
    param_1 = param_1 + 2;
    param_2 = param_2 + 1;
  }
  return 0;
}

```

---

## Make_Dir

```asm
// === 08108ad7 DNFFLib::Make_Dir  [0x08108ad7-0x8108b05] ===
 8108ad7:	55                   	push   %ebp
 8108ad8:	89 e5                	mov    %esp,%ebp
 8108ada:	83 ec 28             	sub    $0x28,%esp
 8108add:	8b 45 08             	mov    0x8(%ebp),%eax
 8108ae0:	89 04 24             	mov    %eax,(%esp)
 8108ae3:	e8 68 55 f7 ff       	call   807e050 <opendir@plt>
 8108ae8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8108aeb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8108aef:	75 13                	jne    8108b04 <_ZN7DNFFLib8Make_DirEPc+0x2d>
 8108af1:	c7 44 24 04 ff 01 00 	movl   $0x1ff,0x4(%esp)
 8108af8:	00 
 8108af9:	8b 45 08             	mov    0x8(%ebp),%eax
 8108afc:	89 04 24             	mov    %eax,(%esp)
 8108aff:	e8 fc 4c f7 ff       	call   807d800 <mkdir@plt>
 8108b04:	c9                   	leave
 8108b05:	c3                   	ret

```

```c
// DNFFLib::Make_Dir @ 0x8108ad7

/* DNFFLib::Make_Dir(char*) */

void DNFFLib::Make_Dir(char *param_1)

{
  DIR *pDVar1;
  
  pDVar1 = opendir(param_1);
  if (pDVar1 == (DIR *)0x0) {
    mkdir(param_1,0x1ff);
  }
  return;
}

```

---

## PrintTextFile

```asm
// === 08108927 DNFFLib::PrintTextFile  [0x08108927-0x8108967] ===
 8108927:	55                   	push   %ebp
 8108928:	89 e5                	mov    %esp,%ebp
 810892a:	83 ec 28             	sub    $0x28,%esp
 810892d:	c7 44 24 04 a0 46 b4 	movl   $0x8b446a0,0x4(%esp)
 8108934:	08 
 8108935:	8b 45 08             	mov    0x8(%ebp),%eax
 8108938:	89 04 24             	mov    %eax,(%esp)
 810893b:	e8 30 5e f7 ff       	call   807e770 <fopen@plt>
 8108940:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8108943:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8108947:	74 1d                	je     8108966 <_ZN7DNFFLib13PrintTextFileEPcS0_+0x3f>
 8108949:	8b 45 0c             	mov    0xc(%ebp),%eax
 810894c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8108950:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8108953:	89 04 24             	mov    %eax,(%esp)
 8108956:	e8 35 51 f7 ff       	call   807da90 <fprintf@plt>
 810895b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810895e:	89 04 24             	mov    %eax,(%esp)
 8108961:	e8 3a 55 f7 ff       	call   807dea0 <fclose@plt>
 8108966:	c9                   	leave
 8108967:	c3                   	ret

```

```c
// DNFFLib::PrintTextFile @ 0x8108927

/* DNFFLib::PrintTextFile(char*, char*) */

void DNFFLib::PrintTextFile(char *param_1,char *param_2)

{
  FILE *__stream;
  
  __stream = fopen(param_1,"a");
  if (__stream != (FILE *)0x0) {
    fprintf(__stream,param_2);
    fclose(__stream);
  }
  return;
}

```

---

## Sleep_Ext

```asm
// === 08108a98 DNFFLib::Sleep_Ext  [0x08108a98-0x8108ad6] ===
 8108a98:	55                   	push   %ebp
 8108a99:	89 e5                	mov    %esp,%ebp
 8108a9b:	83 ec 38             	sub    $0x38,%esp
 8108a9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8108aa1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8108aa4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8108aa7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8108aaa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8108aad:	89 44 24 10          	mov    %eax,0x10(%esp)
 8108ab1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8108ab8:	00 
 8108ab9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8108ac0:	00 
 8108ac1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8108ac8:	00 
 8108ac9:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8108ad0:	e8 6b 5d f7 ff       	call   807e840 <select@plt>
 8108ad5:	c9                   	leave
 8108ad6:	c3                   	ret

```

```c
// DNFFLib::Sleep_Ext @ 0x8108a98

/* DNFFLib::Sleep_Ext(int, int) */

void DNFFLib::Sleep_Ext(int param_1,int param_2)

{
  timeval local_14 [2];
  
  local_14[0].tv_sec = param_1;
  local_14[0].tv_usec = param_2;
  select(0,(fd_set *)0x0,(fd_set *)0x0,(fd_set *)0x0,local_14);
  return;
}

```

---

## fPrintTextFile

```asm
// === 08108968 DNFFLib::fPrintTextFile  [0x08108968-0x81089c7] ===
 8108968:	55                   	push   %ebp
 8108969:	89 e5                	mov    %esp,%ebp
 810896b:	81 ec 28 10 00 00    	sub    $0x1028,%esp
 8108971:	c7 44 24 08 00 10 00 	movl   $0x1000,0x8(%esp)
 8108978:	00 
 8108979:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8108980:	00 
 8108981:	8d 85 f4 ef ff ff    	lea    -0x100c(%ebp),%eax
 8108987:	89 04 24             	mov    %eax,(%esp)
 810898a:	e8 31 53 f7 ff       	call   807dcc0 <memset@plt>
 810898f:	8d 45 10             	lea    0x10(%ebp),%eax
 8108992:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8108995:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8108998:	89 44 24 08          	mov    %eax,0x8(%esp)
 810899c:	8b 45 0c             	mov    0xc(%ebp),%eax
 810899f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81089a3:	8d 85 f4 ef ff ff    	lea    -0x100c(%ebp),%eax
 81089a9:	89 04 24             	mov    %eax,(%esp)
 81089ac:	e8 1f 4e f7 ff       	call   807d7d0 <vsprintf@plt>
 81089b1:	8d 85 f4 ef ff ff    	lea    -0x100c(%ebp),%eax
 81089b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81089bb:	8b 45 08             	mov    0x8(%ebp),%eax
 81089be:	89 04 24             	mov    %eax,(%esp)
 81089c1:	e8 61 ff ff ff       	call   8108927 <_ZN7DNFFLib13PrintTextFileEPcS0_>
 81089c6:	c9                   	leave
 81089c7:	c3                   	ret

```

```c
// DNFFLib::fPrintTextFile @ 0x8108968

/* DNFFLib::fPrintTextFile(char*, char*, ...) */

void DNFFLib::fPrintTextFile(char *param_1,char *param_2,...)

{
  char local_1010 [4096];
  undefined1 *local_10;
  
  memset(local_1010,0,0x1000);
  local_10 = &stack0x0000000c;
  vsprintf(local_1010,param_2,local_10);
  PrintTextFile(param_1,local_1010);
  return;
}

```

---

## get_rand_int

```asm
// === 08108b06 DNFFLib::get_rand_int  [0x08108b06-0x8108bfa] ===
 8108b06:	55                   	push   %ebp
 8108b07:	89 e5                	mov    %esp,%ebp
 8108b09:	83 ec 18             	sub    $0x18,%esp
 8108b0c:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8108b10:	79 0a                	jns    8108b1c <_ZN7DNFFLib12get_rand_intEi+0x16>
 8108b12:	b8 00 00 00 00       	mov    $0x0,%eax
 8108b17:	e9 dd 00 00 00       	jmp    8108bf9 <_ZN7DNFFLib12get_rand_intEi+0xf3>
 8108b1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8108b1f:	85 c0                	test   %eax,%eax
 8108b21:	75 0a                	jne    8108b2d <_ZN7DNFFLib12get_rand_intEi+0x27>
 8108b23:	e8 78 51 f7 ff       	call   807dca0 <rand@plt>
 8108b28:	e9 cc 00 00 00       	jmp    8108bf9 <_ZN7DNFFLib12get_rand_intEi+0xf3>
 8108b2d:	e8 6e 51 f7 ff       	call   807dca0 <rand@plt>
 8108b32:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8108b35:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8108b38:	3b 45 08             	cmp    0x8(%ebp),%eax
 8108b3b:	7e 14                	jle    8108b51 <_ZN7DNFFLib12get_rand_intEi+0x4b>
 8108b3d:	e8 5e 51 f7 ff       	call   807dca0 <rand@plt>
 8108b42:	89 c2                	mov    %eax,%edx
 8108b44:	c1 fa 1f             	sar    $0x1f,%edx
 8108b47:	f7 7d 08             	idivl  0x8(%ebp)
 8108b4a:	89 d0                	mov    %edx,%eax
 8108b4c:	e9 a8 00 00 00       	jmp    8108bf9 <_ZN7DNFFLib12get_rand_intEi+0xf3>
 8108b51:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8108b54:	69 c0 6d 4e c6 41    	imul   $0x41c64e6d,%eax,%eax
 8108b5a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8108b5d:	81 45 f0 39 30 00 00 	addl   $0x3039,-0x10(%ebp)
 8108b64:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8108b67:	89 c2                	mov    %eax,%edx
 8108b69:	c1 fa 1f             	sar    $0x1f,%edx
 8108b6c:	c1 ea 10             	shr    $0x10,%edx
 8108b6f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8108b72:	c1 f8 10             	sar    $0x10,%eax
 8108b75:	25 ff 07 00 00       	and    $0x7ff,%eax
 8108b7a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8108b7d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8108b80:	69 c0 6d 4e c6 41    	imul   $0x41c64e6d,%eax,%eax
 8108b86:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8108b89:	81 45 f0 39 30 00 00 	addl   $0x3039,-0x10(%ebp)
 8108b90:	c1 65 f4 0a          	shll   $0xa,-0xc(%ebp)
 8108b94:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8108b97:	89 c2                	mov    %eax,%edx
 8108b99:	c1 fa 1f             	sar    $0x1f,%edx
 8108b9c:	c1 ea 10             	shr    $0x10,%edx
 8108b9f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8108ba2:	c1 f8 10             	sar    $0x10,%eax
 8108ba5:	25 ff 03 00 00       	and    $0x3ff,%eax
 8108baa:	31 45 f4             	xor    %eax,-0xc(%ebp)
 8108bad:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8108bb0:	69 c0 6d 4e c6 41    	imul   $0x41c64e6d,%eax,%eax
 8108bb6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8108bb9:	81 45 f0 39 30 00 00 	addl   $0x3039,-0x10(%ebp)
 8108bc0:	c1 65 f4 0a          	shll   $0xa,-0xc(%ebp)
 8108bc4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8108bc7:	89 c2                	mov    %eax,%edx
 8108bc9:	c1 fa 1f             	sar    $0x1f,%edx
 8108bcc:	c1 ea 10             	shr    $0x10,%edx
 8108bcf:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8108bd2:	c1 f8 10             	sar    $0x10,%eax
 8108bd5:	25 ff 03 00 00       	and    $0x3ff,%eax
 8108bda:	31 45 f4             	xor    %eax,-0xc(%ebp)
 8108bdd:	8b 45 08             	mov    0x8(%ebp),%eax
 8108be0:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8108be3:	73 11                	jae    8108bf6 <_ZN7DNFFLib12get_rand_intEi+0xf0>
 8108be5:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8108be8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8108beb:	ba 00 00 00 00       	mov    $0x0,%edx
 8108bf0:	f7 f1                	div    %ecx
 8108bf2:	89 d0                	mov    %edx,%eax
 8108bf4:	eb 03                	jmp    8108bf9 <_ZN7DNFFLib12get_rand_intEi+0xf3>
 8108bf6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8108bf9:	c9                   	leave
 8108bfa:	c3                   	ret

```

```c
// DNFFLib::get_rand_int @ 0x8108b06

/* DNFFLib::get_rand_int(int) */

uint DNFFLib::get_rand_int(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 < 0) {
    uVar3 = 0;
  }
  else if (param_1 == 0) {
    uVar3 = rand();
  }
  else {
    iVar4 = rand();
    if (param_1 < iVar4) {
      iVar4 = rand();
      uVar3 = iVar4 % param_1;
    }
    else {
      iVar4 = iVar4 * 0x41c64e6d + 0x3039;
      iVar1 = iVar4 * 0x41c64e6d + 0x3039;
      iVar2 = iVar1 * 0x41c64e6d + 0x3039;
      uVar3 = (((int)(((uint)(iVar4 >> 0x1f) >> 0x10) + iVar4) >> 0x10 & 0x7ffU) << 10 ^
              (int)(((uint)(iVar1 >> 0x1f) >> 0x10) + iVar1) >> 0x10 & 0x3ffU) << 10 ^
              (int)(((uint)(iVar2 >> 0x1f) >> 0x10) + iVar2) >> 0x10 & 0x3ffU;
      if ((uint)param_1 < uVar3) {
        uVar3 = uVar3 % (uint)param_1;
      }
    }
  }
  return uVar3;
}

```

