# user_creature__CStomach

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## CStomach

```asm
// === 08336cd8 user_creature::CStomach::CStomach  [0x08336cd8-0x8336cfb] ===
 8336cd8:	55                   	push   %ebp
 8336cd9:	89 e5                	mov    %esp,%ebp
 8336cdb:	83 ec 18             	sub    $0x18,%esp
 8336cde:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8336ce5:	e8 b4 4f d9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8336cea:	8b 55 08             	mov    0x8(%ebp),%edx
 8336ced:	89 02                	mov    %eax,(%edx)
 8336cef:	8b 45 08             	mov    0x8(%ebp),%eax
 8336cf2:	ba 00 00 c8 42       	mov    $0x42c80000,%edx
 8336cf7:	89 50 04             	mov    %edx,0x4(%eax)
 8336cfa:	c9                   	leave
 8336cfb:	c3                   	ret

```

```c
// user_creature::CStomach::CStomach @ 0x8336cd8

/* user_creature::CStomach::CStomach() */

void __thiscall user_creature::CStomach::CStomach(CStomach *this)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = 0x42c80000;
  return;
}

```

---

## GetStomachValue

```asm
// === 08336cfc user_creature::CStomach::GetStomachValue  [0x08336cfc-0x8336ded] ===
 8336cfc:	55                   	push   %ebp
 8336cfd:	89 e5                	mov    %esp,%ebp
 8336cff:	83 ec 48             	sub    $0x48,%esp
 8336d02:	8b 45 10             	mov    0x10(%ebp),%eax
 8336d05:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8336d08:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 8336d0c:	83 f0 01             	xor    $0x1,%eax
 8336d0f:	84 c0                	test   %al,%al
 8336d11:	74 0a                	je     8336d1d <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb+0x21>
 8336d13:	b8 00 00 c8 42       	mov    $0x42c80000,%eax
 8336d18:	e9 c9 00 00 00       	jmp    8336de6 <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb+0xea>
 8336d1d:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8336d24:	e8 75 4f d9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8336d29:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8336d2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8336d2f:	8b 00                	mov    (%eax),%eax
 8336d31:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8336d34:	89 d1                	mov    %edx,%ecx
 8336d36:	29 c1                	sub    %eax,%ecx
 8336d38:	89 c8                	mov    %ecx,%eax
 8336d3a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8336d3d:	db 45 e0             	fildl  -0x20(%ebp)
 8336d40:	d9 5d f4             	fstps  -0xc(%ebp)
 8336d43:	8b 45 0c             	mov    0xc(%ebp),%eax
 8336d46:	83 f8 01             	cmp    $0x1,%eax
 8336d49:	74 10                	je     8336d5b <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb+0x5f>
 8336d4b:	83 f8 01             	cmp    $0x1,%eax
 8336d4e:	0f 8c 84 00 00 00    	jl     8336dd8 <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb+0xdc>
 8336d54:	83 f8 03             	cmp    $0x3,%eax
 8336d57:	7f 7f                	jg     8336dd8 <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb+0xdc>
 8336d59:	eb 3c                	jmp    8336d97 <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb+0x9b>
 8336d5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8336d5e:	d9 40 04             	flds   0x4(%eax)
 8336d61:	d9 45 f4             	flds   -0xc(%ebp)
 8336d64:	d9 05 54 f4 c2 08    	flds   0x8c2f454
 8336d6a:	de f9                	fdivrp %st,%st(1)
 8336d6c:	de c1                	faddp  %st,%st(1)
 8336d6e:	8b 45 08             	mov    0x8(%ebp),%eax
 8336d71:	d9 58 04             	fstps  0x4(%eax)
 8336d74:	8b 45 08             	mov    0x8(%ebp),%eax
 8336d77:	d9 40 04             	flds   0x4(%eax)
 8336d7a:	d9 ee                	fldz
 8336d7c:	da e9                	fucompp
 8336d7e:	df e0                	fnstsw %ax
 8336d80:	f6 c4 45             	test   $0x45,%ah
 8336d83:	0f 94 c0             	sete   %al
 8336d86:	84 c0                	test   %al,%al
 8336d88:	74 4d                	je     8336dd7 <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb+0xdb>
 8336d8a:	8b 45 08             	mov    0x8(%ebp),%eax
 8336d8d:	ba 00 00 00 00       	mov    $0x0,%edx
 8336d92:	89 50 04             	mov    %edx,0x4(%eax)
 8336d95:	eb 41                	jmp    8336dd8 <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb+0xdc>
 8336d97:	8b 45 08             	mov    0x8(%ebp),%eax
 8336d9a:	d9 40 04             	flds   0x4(%eax)
 8336d9d:	d9 45 f4             	flds   -0xc(%ebp)
 8336da0:	d9 05 58 f4 c2 08    	flds   0x8c2f458
 8336da6:	de f9                	fdivrp %st,%st(1)
 8336da8:	de c1                	faddp  %st,%st(1)
 8336daa:	8b 45 08             	mov    0x8(%ebp),%eax
 8336dad:	d9 58 04             	fstps  0x4(%eax)
 8336db0:	8b 45 08             	mov    0x8(%ebp),%eax
 8336db3:	d9 40 04             	flds   0x4(%eax)
 8336db6:	d9 05 50 f4 c2 08    	flds   0x8c2f450
 8336dbc:	d9 c9                	fxch   %st(1)
 8336dbe:	da e9                	fucompp
 8336dc0:	df e0                	fnstsw %ax
 8336dc2:	9e                   	sahf
 8336dc3:	0f 97 c0             	seta   %al
 8336dc6:	84 c0                	test   %al,%al
 8336dc8:	74 0e                	je     8336dd8 <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb+0xdc>
 8336dca:	8b 45 08             	mov    0x8(%ebp),%eax
 8336dcd:	ba 00 00 c8 42       	mov    $0x42c80000,%edx
 8336dd2:	89 50 04             	mov    %edx,0x4(%eax)
 8336dd5:	eb 01                	jmp    8336dd8 <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb+0xdc>
 8336dd7:	90                   	nop
 8336dd8:	8b 45 08             	mov    0x8(%ebp),%eax
 8336ddb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8336dde:	89 10                	mov    %edx,(%eax)
 8336de0:	8b 45 08             	mov    0x8(%ebp),%eax
 8336de3:	8b 40 04             	mov    0x4(%eax),%eax
 8336de6:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8336de9:	d9 45 d4             	flds   -0x2c(%ebp)
 8336dec:	c9                   	leave
 8336ded:	c3                   	ret

```

```c
// user_creature::CStomach::GetStomachValue @ 0x8336cfc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* user_creature::CStomach::GetStomachValue(user_creature::CREATURE_STATE, bool) */

longdouble __thiscall
user_creature::CStomach::GetStomachValue(CStomach *this,int param_2,char param_3)

{
  float fVar1;
  int iVar2;
  
  if (param_3 == '\x01') {
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (param_2 == 1) {
      *(float *)(this + 4) = (float)(iVar2 - *(int *)this) / _DAT_08c2f454 + *(float *)(this + 4);
      if (*(float *)(this + 4) < 0.0) {
        *(undefined4 *)(this + 4) = 0;
      }
    }
    else if (((0 < param_2) && (param_2 < 4)) &&
            (*(float *)(this + 4) =
                  (float)(iVar2 - *(int *)this) / _DAT_08c2f458 + *(float *)(this + 4),
            _DAT_08c2f450 < *(float *)(this + 4))) {
      *(undefined4 *)(this + 4) = 0x42c80000;
    }
    *(int *)this = iVar2;
    fVar1 = *(float *)(this + 4);
  }
  else {
    fVar1 = 100.0;
  }
  return (longdouble)fVar1;
}

```

---

## IncrementValue

```asm
// === 08336e66 user_creature::CStomach::IncrementValue  [0x08336e66-0x8336ead] ===
 8336e66:	55                   	push   %ebp
 8336e67:	89 e5                	mov    %esp,%ebp
 8336e69:	83 ec 04             	sub    $0x4,%esp
 8336e6c:	8b 45 08             	mov    0x8(%ebp),%eax
 8336e6f:	d9 40 04             	flds   0x4(%eax)
 8336e72:	d8 45 0c             	fadds  0xc(%ebp)
 8336e75:	8b 45 08             	mov    0x8(%ebp),%eax
 8336e78:	d9 58 04             	fstps  0x4(%eax)
 8336e7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8336e7e:	d9 40 04             	flds   0x4(%eax)
 8336e81:	d9 05 50 f4 c2 08    	flds   0x8c2f450
 8336e87:	d9 c9                	fxch   %st(1)
 8336e89:	da e9                	fucompp
 8336e8b:	df e0                	fnstsw %ax
 8336e8d:	9e                   	sahf
 8336e8e:	0f 97 c0             	seta   %al
 8336e91:	84 c0                	test   %al,%al
 8336e93:	74 0b                	je     8336ea0 <_ZN13user_creature8CStomach14IncrementValueEf+0x3a>
 8336e95:	8b 45 08             	mov    0x8(%ebp),%eax
 8336e98:	ba 00 00 c8 42       	mov    $0x42c80000,%edx
 8336e9d:	89 50 04             	mov    %edx,0x4(%eax)
 8336ea0:	8b 45 08             	mov    0x8(%ebp),%eax
 8336ea3:	8b 40 04             	mov    0x4(%eax),%eax
 8336ea6:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8336ea9:	d9 45 fc             	flds   -0x4(%ebp)
 8336eac:	c9                   	leave
 8336ead:	c3                   	ret

```

```c
// user_creature::CStomach::IncrementValue @ 0x8336e66

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* user_creature::CStomach::IncrementValue(float) */

longdouble __thiscall user_creature::CStomach::IncrementValue(CStomach *this,float param_1)

{
  *(float *)(this + 4) = *(float *)(this + 4) + param_1;
  if (_DAT_08c2f450 < *(float *)(this + 4)) {
    *(undefined4 *)(this + 4) = 0x42c80000;
  }
  return (longdouble)*(float *)(this + 4);
}

```

---

## IsSaveStomach

```asm
// === 08336dee user_creature::CStomach::IsSaveStomach  [0x08336dee-0x8336e4b] ===
 8336dee:	55                   	push   %ebp
 8336def:	89 e5                	mov    %esp,%ebp
 8336df1:	83 ec 10             	sub    $0x10,%esp
 8336df4:	c6 45 ff 01          	movb   $0x1,-0x1(%ebp)
 8336df8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8336dfb:	83 f8 01             	cmp    $0x1,%eax
 8336dfe:	74 0c                	je     8336e0c <_ZN13user_creature8CStomach13IsSaveStomachENS_14CREATURE_STATEE+0x1e>
 8336e00:	83 f8 01             	cmp    $0x1,%eax
 8336e03:	7c 41                	jl     8336e46 <_ZN13user_creature8CStomach13IsSaveStomachENS_14CREATURE_STATEE+0x58>
 8336e05:	83 f8 03             	cmp    $0x3,%eax
 8336e08:	7f 3c                	jg     8336e46 <_ZN13user_creature8CStomach13IsSaveStomachENS_14CREATURE_STATEE+0x58>
 8336e0a:	eb 1c                	jmp    8336e28 <_ZN13user_creature8CStomach13IsSaveStomachENS_14CREATURE_STATEE+0x3a>
 8336e0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8336e0f:	d9 40 04             	flds   0x4(%eax)
 8336e12:	d9 ee                	fldz
 8336e14:	da e9                	fucompp
 8336e16:	df e0                	fnstsw %ax
 8336e18:	f6 c4 05             	test   $0x5,%ah
 8336e1b:	0f 94 c0             	sete   %al
 8336e1e:	84 c0                	test   %al,%al
 8336e20:	74 23                	je     8336e45 <_ZN13user_creature8CStomach13IsSaveStomachENS_14CREATURE_STATEE+0x57>
 8336e22:	c6 45 ff 00          	movb   $0x0,-0x1(%ebp)
 8336e26:	eb 1e                	jmp    8336e46 <_ZN13user_creature8CStomach13IsSaveStomachENS_14CREATURE_STATEE+0x58>
 8336e28:	8b 45 08             	mov    0x8(%ebp),%eax
 8336e2b:	d9 40 04             	flds   0x4(%eax)
 8336e2e:	d9 05 50 f4 c2 08    	flds   0x8c2f450
 8336e34:	d9 c9                	fxch   %st(1)
 8336e36:	da e9                	fucompp
 8336e38:	df e0                	fnstsw %ax
 8336e3a:	9e                   	sahf
 8336e3b:	75 09                	jne    8336e46 <_ZN13user_creature8CStomach13IsSaveStomachENS_14CREATURE_STATEE+0x58>
 8336e3d:	7a 07                	jp     8336e46 <_ZN13user_creature8CStomach13IsSaveStomachENS_14CREATURE_STATEE+0x58>
 8336e3f:	c6 45 ff 00          	movb   $0x0,-0x1(%ebp)
 8336e43:	eb 01                	jmp    8336e46 <_ZN13user_creature8CStomach13IsSaveStomachENS_14CREATURE_STATEE+0x58>
 8336e45:	90                   	nop
 8336e46:	0f b6 45 ff          	movzbl -0x1(%ebp),%eax
 8336e4a:	c9                   	leave
 8336e4b:	c3                   	ret

```

```c
// user_creature::CStomach::IsSaveStomach @ 0x8336dee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* user_creature::CStomach::IsSaveStomach(user_creature::CREATURE_STATE) */

undefined1 __thiscall user_creature::CStomach::IsSaveStomach(CStomach *this,int param_2)

{
  undefined1 local_5;
  
  local_5 = 1;
  if (param_2 == 1) {
    if (*(float *)(this + 4) <= 0.0) {
      local_5 = 0;
    }
  }
  else if ((((0 < param_2) && (param_2 < 4)) && (*(float *)(this + 4) == _DAT_08c2f450)) &&
          (!NAN(*(float *)(this + 4)) && !NAN(_DAT_08c2f450))) {
    local_5 = 0;
  }
  return local_5;
}

```

---

## Resume

```asm
// === 08336e4c user_creature::CStomach::Resume  [0x08336e4c-0x8336e65] ===
 8336e4c:	55                   	push   %ebp
 8336e4d:	89 e5                	mov    %esp,%ebp
 8336e4f:	83 ec 18             	sub    $0x18,%esp
 8336e52:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8336e59:	e8 40 4e d9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8336e5e:	8b 55 08             	mov    0x8(%ebp),%edx
 8336e61:	89 02                	mov    %eax,(%edx)
 8336e63:	c9                   	leave
 8336e64:	c3                   	ret
 8336e65:	90                   	nop

```

```c
// user_creature::CStomach::Resume @ 0x8336e4c

/* user_creature::CStomach::Resume() */

void __thiscall user_creature::CStomach::Resume(CStomach *this)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)this = uVar1;
  return;
}

```

