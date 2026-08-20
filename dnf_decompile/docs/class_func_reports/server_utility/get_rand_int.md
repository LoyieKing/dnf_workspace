# get_rand_int

`_ZN14server_utility12get_rand_intEi`

`server_utility::get_rand_int(int)`

| 类 | 地址 |
|---|---|
| `server_utility` | `0x0808eafc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808eafc  _ZN14server_utility12get_rand_intEi
#           server_utility::get_rand_int(int)
# range [0x0808eafc, 0x0808ebf0]
0808eafc +0x00:  push   %ebp
0808eafd +0x01:  mov    %esp,%ebp
0808eaff +0x03:  sub    $0x18,%esp
0808eb02 +0x06:  cmpl   $0x0,0x8(%ebp)
0808eb06 +0x0a:  jns    0808eb12 <+0x16>
0808eb08 +0x0c:  mov    $0x0,%eax
0808eb0d +0x11:  jmp    0808ebef <+0xf3>
0808eb12 +0x16:  mov    0x8(%ebp),%eax
0808eb15 +0x19:  test   %eax,%eax
0808eb17 +0x1b:  jne    0808eb23 <+0x27>
0808eb19 +0x1d:  call   0807dca0 <_init+0x598>
0808eb1e +0x22:  jmp    0808ebef <+0xf3>
0808eb23 +0x27:  call   0807dca0 <_init+0x598>
0808eb28 +0x2c:  mov    %eax,-0x10(%ebp)
0808eb2b +0x2f:  mov    -0x10(%ebp),%eax
0808eb2e +0x32:  cmp    0x8(%ebp),%eax
0808eb31 +0x35:  jle    0808eb47 <+0x4b>
0808eb33 +0x37:  call   0807dca0 <_init+0x598>
0808eb38 +0x3c:  mov    %eax,%edx
0808eb3a +0x3e:  sar    $0x1f,%edx
0808eb3d +0x41:  idivl  0x8(%ebp)
0808eb40 +0x44:  mov    %edx,%eax
0808eb42 +0x46:  jmp    0808ebef <+0xf3>
0808eb47 +0x4b:  mov    -0x10(%ebp),%eax
0808eb4a +0x4e:  imul   $0x41c64e6d,%eax,%eax
0808eb50 +0x54:  mov    %eax,-0x10(%ebp)
0808eb53 +0x57:  addl   $0x3039,-0x10(%ebp)
0808eb5a +0x5e:  mov    -0x10(%ebp),%eax
0808eb5d +0x61:  mov    %eax,%edx
0808eb5f +0x63:  sar    $0x1f,%edx
0808eb62 +0x66:  shr    $0x10,%edx
0808eb65 +0x69:  lea    (%edx,%eax,1),%eax
0808eb68 +0x6c:  sar    $0x10,%eax
0808eb6b +0x6f:  and    $0x7ff,%eax
0808eb70 +0x74:  mov    %eax,-0xc(%ebp)
0808eb73 +0x77:  mov    -0x10(%ebp),%eax
0808eb76 +0x7a:  imul   $0x41c64e6d,%eax,%eax
0808eb7c +0x80:  mov    %eax,-0x10(%ebp)
0808eb7f +0x83:  addl   $0x3039,-0x10(%ebp)
0808eb86 +0x8a:  shll   $0xa,-0xc(%ebp)
0808eb8a +0x8e:  mov    -0x10(%ebp),%eax
0808eb8d +0x91:  mov    %eax,%edx
0808eb8f +0x93:  sar    $0x1f,%edx
0808eb92 +0x96:  shr    $0x10,%edx
0808eb95 +0x99:  lea    (%edx,%eax,1),%eax
0808eb98 +0x9c:  sar    $0x10,%eax
0808eb9b +0x9f:  and    $0x3ff,%eax
0808eba0 +0xa4:  xor    %eax,-0xc(%ebp)
0808eba3 +0xa7:  mov    -0x10(%ebp),%eax
0808eba6 +0xaa:  imul   $0x41c64e6d,%eax,%eax
0808ebac +0xb0:  mov    %eax,-0x10(%ebp)
0808ebaf +0xb3:  addl   $0x3039,-0x10(%ebp)
0808ebb6 +0xba:  shll   $0xa,-0xc(%ebp)
0808ebba +0xbe:  mov    -0x10(%ebp),%eax
0808ebbd +0xc1:  mov    %eax,%edx
0808ebbf +0xc3:  sar    $0x1f,%edx
0808ebc2 +0xc6:  shr    $0x10,%edx
0808ebc5 +0xc9:  lea    (%edx,%eax,1),%eax
0808ebc8 +0xcc:  sar    $0x10,%eax
0808ebcb +0xcf:  and    $0x3ff,%eax
0808ebd0 +0xd4:  xor    %eax,-0xc(%ebp)
0808ebd3 +0xd7:  mov    0x8(%ebp),%eax
0808ebd6 +0xda:  cmp    -0xc(%ebp),%eax
0808ebd9 +0xdd:  jae    0808ebec <+0xf0>
0808ebdb +0xdf:  mov    0x8(%ebp),%ecx
0808ebde +0xe2:  mov    -0xc(%ebp),%eax
0808ebe1 +0xe5:  mov    $0x0,%edx
0808ebe6 +0xea:  div    %ecx
0808ebe8 +0xec:  mov    %edx,%eax
0808ebea +0xee:  jmp    0808ebef <+0xf3>
0808ebec +0xf0:  mov    -0xc(%ebp),%eax
0808ebef +0xf3:  leave
0808ebf0 +0xf4:  ret
```

## 反编译 C

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
