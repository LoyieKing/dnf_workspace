# restrict_inputting_name

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## isUtf8StrInUnicodeRange

```asm
// === 08ac2d6c restrict_inputting_name::isUtf8StrInUnicodeRange  [0x08ac2d6c-0x8ac2de3] ===
 8ac2d6c:	55                   	push   %ebp
 8ac2d6d:	89 e5                	mov    %esp,%ebp
 8ac2d6f:	56                   	push   %esi
 8ac2d70:	53                   	push   %ebx
 8ac2d71:	83 ec 20             	sub    $0x20,%esp
 8ac2d74:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac2d77:	89 04 24             	mov    %eax,(%esp)
 8ac2d7a:	e8 7f 6c 01 00       	call   8ad99fe <_ZN10WideStringC1Ev>
 8ac2d7f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac2d82:	89 04 24             	mov    %eax,(%esp)
 8ac2d85:	e8 26 b6 5b ff       	call   807e3b0 <strlen@plt>
 8ac2d8a:	8d 55 f4             	lea    -0xc(%ebp),%edx
 8ac2d8d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac2d91:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac2d95:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac2d98:	89 04 24             	mov    %eax,(%esp)
 8ac2d9b:	e8 f3 ca 01 00       	call   8adf893 <_Z15convertFromUtf8PKciP10WideString>
 8ac2da0:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac2da3:	89 04 24             	mov    %eax,(%esp)
 8ac2da6:	e8 15 01 00 00       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8ac2dab:	89 04 24             	mov    %eax,(%esp)
 8ac2dae:	e8 31 00 00 00       	call   8ac2de4 <_ZN23restrict_inputting_name23isWideStrInUnicodeRangeEPKw>
 8ac2db3:	89 c3                	mov    %eax,%ebx
 8ac2db5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac2db8:	89 04 24             	mov    %eax,(%esp)
 8ac2dbb:	e8 54 6e 01 00       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8ac2dc0:	89 d8                	mov    %ebx,%eax
 8ac2dc2:	83 c4 20             	add    $0x20,%esp
 8ac2dc5:	5b                   	pop    %ebx
 8ac2dc6:	5e                   	pop    %esi
 8ac2dc7:	5d                   	pop    %ebp
 8ac2dc8:	c3                   	ret
 8ac2dc9:	89 d3                	mov    %edx,%ebx
 8ac2dcb:	89 c6                	mov    %eax,%esi
 8ac2dcd:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac2dd0:	89 04 24             	mov    %eax,(%esp)
 8ac2dd3:	e8 3c 6e 01 00       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8ac2dd8:	89 f0                	mov    %esi,%eax
 8ac2dda:	89 da                	mov    %ebx,%edx
 8ac2ddc:	89 04 24             	mov    %eax,(%esp)
 8ac2ddf:	e8 6c 09 02 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// restrict_inputting_name::isUtf8StrInUnicodeRange @ 0x8ac2d6c

/* restrict_inputting_name::isUtf8StrInUnicodeRange(char const*) */

undefined4 restrict_inputting_name::isUtf8StrInUnicodeRange(char *param_1)

{
  size_t sourceLen;
  wchar_t *pwVar1;
  undefined4 uVar2;
  WideString local_10;
  
  WideString::WideString(&local_10);
  sourceLen = strlen(param_1);
                    /* try { // try from 08ac2d9b to 08ac2db2 has its CatchHandler @ 08ac2dc9 */
  convertFromUtf8(param_1,sourceLen,&local_10);
  pwVar1 = WideString::c_str(&local_10);
  uVar2 = isWideStrInUnicodeRange(pwVar1);
  WideString::~WideString(&local_10,sourceLen);
  return uVar2;
}

```

---

## isWideStrInUnicodeRange

```asm
// === 08ac2de4 restrict_inputting_name::isWideStrInUnicodeRange  [0x08ac2de4-0x8ac2e39] ===
 8ac2de4:	55                   	push   %ebp
 8ac2de5:	89 e5                	mov    %esp,%ebp
 8ac2de7:	83 ec 28             	sub    $0x28,%esp
 8ac2dea:	8d 45 ef             	lea    -0x11(%ebp),%eax
 8ac2ded:	89 04 24             	mov    %eax,(%esp)
 8ac2df0:	e8 4b 04 00 00       	call   8ac3240 <_ZN23restrict_inputting_name18IsNoneUnicodeRangeC1Ev>
 8ac2df5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac2df8:	89 04 24             	mov    %eax,(%esp)
 8ac2dfb:	e8 30 b3 5b ff       	call   807e130 <wcslen@plt>
 8ac2e00:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ac2e03:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ac2e06:	c1 e0 02             	shl    $0x2,%eax
 8ac2e09:	03 45 08             	add    0x8(%ebp),%eax
 8ac2e0c:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
 8ac2e10:	88 54 24 08          	mov    %dl,0x8(%esp)
 8ac2e14:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac2e18:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac2e1b:	89 04 24             	mov    %eax,(%esp)
 8ac2e1e:	e8 30 04 00 00       	call   8ac3253 <_ZSt6any_ofIPKwN23restrict_inputting_name18IsNoneUnicodeRangeEEbT_S4_T0_>
 8ac2e23:	88 45 f7             	mov    %al,-0x9(%ebp)
 8ac2e26:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 8ac2e2a:	74 07                	je     8ac2e33 <_ZN23restrict_inputting_name23isWideStrInUnicodeRangeEPKw+0x4f>
 8ac2e2c:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac2e31:	eb 05                	jmp    8ac2e38 <_ZN23restrict_inputting_name23isWideStrInUnicodeRangeEPKw+0x54>
 8ac2e33:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac2e38:	c9                   	leave
 8ac2e39:	c3                   	ret

```

```c
// restrict_inputting_name::isWideStrInUnicodeRange @ 0x8ac2de4

/* restrict_inputting_name::isWideStrInUnicodeRange(wchar_t const*) */

bool restrict_inputting_name::isWideStrInUnicodeRange(wchar_t *param_1)

{
  bool bVar1;
  IsNoneUnicodeRange local_15;
  size_t local_14;
  
  IsNoneUnicodeRange::IsNoneUnicodeRange(&local_15);
  local_14 = wcslen(param_1);
  bVar1 = std::any_of<wchar_t_const*,restrict_inputting_name::IsNoneUnicodeRange>
                    (param_1,param_1 + local_14,local_15);
  return !bVar1;
}

```

