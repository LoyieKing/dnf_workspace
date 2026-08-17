# server_utility

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## get_rand_int

```asm
// === 0808eafc server_utility::get_rand_int  [0x0808eafc-0x808ebf0] ===
 808eafc:	55                   	push   %ebp
 808eafd:	89 e5                	mov    %esp,%ebp
 808eaff:	83 ec 18             	sub    $0x18,%esp
 808eb02:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 808eb06:	79 0a                	jns    808eb12 <_ZN14server_utility12get_rand_intEi+0x16>
 808eb08:	b8 00 00 00 00       	mov    $0x0,%eax
 808eb0d:	e9 dd 00 00 00       	jmp    808ebef <_ZN14server_utility12get_rand_intEi+0xf3>
 808eb12:	8b 45 08             	mov    0x8(%ebp),%eax
 808eb15:	85 c0                	test   %eax,%eax
 808eb17:	75 0a                	jne    808eb23 <_ZN14server_utility12get_rand_intEi+0x27>
 808eb19:	e8 82 f1 fe ff       	call   807dca0 <rand@plt>
 808eb1e:	e9 cc 00 00 00       	jmp    808ebef <_ZN14server_utility12get_rand_intEi+0xf3>
 808eb23:	e8 78 f1 fe ff       	call   807dca0 <rand@plt>
 808eb28:	89 45 f0             	mov    %eax,-0x10(%ebp)
 808eb2b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808eb2e:	3b 45 08             	cmp    0x8(%ebp),%eax
 808eb31:	7e 14                	jle    808eb47 <_ZN14server_utility12get_rand_intEi+0x4b>
 808eb33:	e8 68 f1 fe ff       	call   807dca0 <rand@plt>
 808eb38:	89 c2                	mov    %eax,%edx
 808eb3a:	c1 fa 1f             	sar    $0x1f,%edx
 808eb3d:	f7 7d 08             	idivl  0x8(%ebp)
 808eb40:	89 d0                	mov    %edx,%eax
 808eb42:	e9 a8 00 00 00       	jmp    808ebef <_ZN14server_utility12get_rand_intEi+0xf3>
 808eb47:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808eb4a:	69 c0 6d 4e c6 41    	imul   $0x41c64e6d,%eax,%eax
 808eb50:	89 45 f0             	mov    %eax,-0x10(%ebp)
 808eb53:	81 45 f0 39 30 00 00 	addl   $0x3039,-0x10(%ebp)
 808eb5a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808eb5d:	89 c2                	mov    %eax,%edx
 808eb5f:	c1 fa 1f             	sar    $0x1f,%edx
 808eb62:	c1 ea 10             	shr    $0x10,%edx
 808eb65:	8d 04 02             	lea    (%edx,%eax,1),%eax
 808eb68:	c1 f8 10             	sar    $0x10,%eax
 808eb6b:	25 ff 07 00 00       	and    $0x7ff,%eax
 808eb70:	89 45 f4             	mov    %eax,-0xc(%ebp)
 808eb73:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808eb76:	69 c0 6d 4e c6 41    	imul   $0x41c64e6d,%eax,%eax
 808eb7c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 808eb7f:	81 45 f0 39 30 00 00 	addl   $0x3039,-0x10(%ebp)
 808eb86:	c1 65 f4 0a          	shll   $0xa,-0xc(%ebp)
 808eb8a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808eb8d:	89 c2                	mov    %eax,%edx
 808eb8f:	c1 fa 1f             	sar    $0x1f,%edx
 808eb92:	c1 ea 10             	shr    $0x10,%edx
 808eb95:	8d 04 02             	lea    (%edx,%eax,1),%eax
 808eb98:	c1 f8 10             	sar    $0x10,%eax
 808eb9b:	25 ff 03 00 00       	and    $0x3ff,%eax
 808eba0:	31 45 f4             	xor    %eax,-0xc(%ebp)
 808eba3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808eba6:	69 c0 6d 4e c6 41    	imul   $0x41c64e6d,%eax,%eax
 808ebac:	89 45 f0             	mov    %eax,-0x10(%ebp)
 808ebaf:	81 45 f0 39 30 00 00 	addl   $0x3039,-0x10(%ebp)
 808ebb6:	c1 65 f4 0a          	shll   $0xa,-0xc(%ebp)
 808ebba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808ebbd:	89 c2                	mov    %eax,%edx
 808ebbf:	c1 fa 1f             	sar    $0x1f,%edx
 808ebc2:	c1 ea 10             	shr    $0x10,%edx
 808ebc5:	8d 04 02             	lea    (%edx,%eax,1),%eax
 808ebc8:	c1 f8 10             	sar    $0x10,%eax
 808ebcb:	25 ff 03 00 00       	and    $0x3ff,%eax
 808ebd0:	31 45 f4             	xor    %eax,-0xc(%ebp)
 808ebd3:	8b 45 08             	mov    0x8(%ebp),%eax
 808ebd6:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 808ebd9:	73 11                	jae    808ebec <_ZN14server_utility12get_rand_intEi+0xf0>
 808ebdb:	8b 4d 08             	mov    0x8(%ebp),%ecx
 808ebde:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808ebe1:	ba 00 00 00 00       	mov    $0x0,%edx
 808ebe6:	f7 f1                	div    %ecx
 808ebe8:	89 d0                	mov    %edx,%eax
 808ebea:	eb 03                	jmp    808ebef <_ZN14server_utility12get_rand_intEi+0xf3>
 808ebec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808ebef:	c9                   	leave
 808ebf0:	c3                   	ret

```

```c
// server_utility::get_rand_int @ 0x808eafc

/* server_utility::get_rand_int(int) */

uint server_utility::get_rand_int(int param_1)

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

