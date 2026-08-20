# ExplodeString

`_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i`

`DNFFLib::ExplodeString(char*, char*, char**, int)`

| 类 | 地址 |
|---|---|
| `DNFFLib` | `0x081089c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081089c8  _ZN7DNFFLib13ExplodeStringEPcS0_PS0_i
#           DNFFLib::ExplodeString(char*, char*, char**, int)
# range [0x081089c8, 0x08108a97]
081089c8 +0x00:  push   %ebp
081089c9 +0x01:  mov    %esp,%ebp
081089cb +0x03:  sub    $0x28,%esp
081089ce +0x06:  movl   $0x0,-0x18(%ebp)
081089d5 +0x0d:  cmpl   $0x0,0x14(%ebp)
081089d9 +0x11:  jle    081089e1 <+0x19>
081089db +0x13:  cmpl   $0x0,0x8(%ebp)
081089df +0x17:  jne    081089f3 <+0x2b>
081089e1 +0x19:  mov    0x10(%ebp),%eax
081089e4 +0x1c:  mov    0x8(%ebp),%edx
081089e7 +0x1f:  mov    %edx,(%eax)
081089e9 +0x21:  mov    $0x0,%eax
081089ee +0x26:  jmp    08108a96 <+0xce>
081089f3 +0x2b:  mov    0x8(%ebp),%eax
081089f6 +0x2e:  mov    %eax,(%esp)
081089f9 +0x31:  call   0807e3b0 <_init+0xca8>
081089fe +0x36:  add    0x8(%ebp),%eax
08108a01 +0x39:  mov    %eax,-0x10(%ebp)
08108a04 +0x3c:  mov    0xc(%ebp),%eax
08108a07 +0x3f:  mov    %eax,0x4(%esp)
08108a0b +0x43:  mov    0x8(%ebp),%eax
08108a0e +0x46:  mov    %eax,(%esp)
08108a11 +0x49:  call   0807d8f0 <_init+0x1e8>
08108a16 +0x4e:  mov    %eax,-0x14(%ebp)
08108a19 +0x51:  jmp    08108a88 <+0xc0>
08108a1b +0x53:  mov    -0x18(%ebp),%eax
08108a1e +0x56:  shl    $0x2,%eax
08108a21 +0x59:  add    0x10(%ebp),%eax
08108a24 +0x5c:  mov    -0x14(%ebp),%edx
08108a27 +0x5f:  mov    %edx,(%eax)
08108a29 +0x61:  addl   $0x1,-0x18(%ebp)
08108a2d +0x65:  mov    -0x18(%ebp),%eax
08108a30 +0x68:  cmp    0x14(%ebp),%eax
08108a33 +0x6b:  jl     08108a72 <+0xaa>
08108a35 +0x6d:  mov    -0x14(%ebp),%eax
08108a38 +0x70:  mov    %eax,(%esp)
08108a3b +0x73:  call   0807e3b0 <_init+0xca8>
08108a40 +0x78:  add    -0x14(%ebp),%eax
08108a43 +0x7b:  mov    %eax,-0xc(%ebp)
08108a46 +0x7e:  mov    -0xc(%ebp),%eax
08108a49 +0x81:  cmp    -0x10(%ebp),%eax
08108a4c +0x84:  jne    08108a5f <+0x97>
08108a4e +0x86:  mov    -0x18(%ebp),%eax
08108a51 +0x89:  shl    $0x2,%eax
08108a54 +0x8c:  add    0x10(%ebp),%eax
08108a57 +0x8f:  movl   $0x0,(%eax)
08108a5d +0x95:  jmp    08108a93 <+0xcb>
08108a5f +0x97:  mov    -0x18(%ebp),%eax
08108a62 +0x9a:  shl    $0x2,%eax
08108a65 +0x9d:  add    0x10(%ebp),%eax
08108a68 +0xa0:  mov    -0xc(%ebp),%edx
08108a6b +0xa3:  add    $0x1,%edx
08108a6e +0xa6:  mov    %edx,(%eax)
08108a70 +0xa8:  jmp    08108a93 <+0xcb>
08108a72 +0xaa:  mov    0xc(%ebp),%eax
08108a75 +0xad:  mov    %eax,0x4(%esp)
08108a79 +0xb1:  movl   $0x0,(%esp)
08108a80 +0xb8:  call   0807d8f0 <_init+0x1e8>
08108a85 +0xbd:  mov    %eax,-0x14(%ebp)
08108a88 +0xc0:  cmpl   $0x0,-0x14(%ebp)
08108a8c +0xc4:  setne  %al
08108a8f +0xc7:  test   %al,%al
08108a91 +0xc9:  jne    08108a1b <+0x53>
08108a93 +0xcb:  mov    -0x18(%ebp),%eax
08108a96 +0xce:  leave
08108a97 +0xcf:  ret
```

## 反编译 C

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
