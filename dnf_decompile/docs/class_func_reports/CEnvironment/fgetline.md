# fgetline

`_ZN12CEnvironment8fgetlineEP8_IO_FILEPc`

`CEnvironment::fgetline(_IO_FILE*, char*)`

| 类 | 地址 |
|---|---|
| `CEnvironment` | `0x08290540` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08290540  _ZN12CEnvironment8fgetlineEP8_IO_FILEPc
#           CEnvironment::fgetline(_IO_FILE*, char*)
# range [0x08290540, 0x0829060f]
08290540 +0x00:  push   %ebp
08290541 +0x01:  mov    %esp,%ebp
08290543 +0x03:  sub    $0x28,%esp
08290546 +0x06:  movl   $0x400,0x8(%esp)
0829054e +0x0e:  movl   $0x0,0x4(%esp)
08290556 +0x16:  mov    0x10(%ebp),%eax
08290559 +0x19:  mov    %eax,(%esp)
0829055c +0x1c:  call   0807dcc0 <_init+0x5b8>
08290561 +0x21:  movl   $0x0,-0x10(%ebp)
08290568 +0x28:  jmp    082905f6 <+0xb6>
0829056d +0x2d:  mov    0xc(%ebp),%eax
08290570 +0x30:  mov    %eax,(%esp)
08290573 +0x33:  call   0807ded0 <_init+0x7c8>
08290578 +0x38:  mov    %eax,-0xc(%ebp)
0829057b +0x3b:  mov    0xc(%ebp),%eax
0829057e +0x3e:  mov    %eax,(%esp)
08290581 +0x41:  call   0807d7b0 <_init+0xa8>
08290586 +0x46:  test   %eax,%eax
08290588 +0x48:  setne  %al
0829058b +0x4b:  test   %al,%al
0829058d +0x4d:  je     082905a1 <+0x61>
0829058f +0x4f:  mov    -0x10(%ebp),%eax
08290592 +0x52:  add    0x10(%ebp),%eax
08290595 +0x55:  movb   $0x0,(%eax)
08290598 +0x58:  cmpl   $0x0,-0x10(%ebp)
0829059c +0x5c:  setg   %al
0829059f +0x5f:  jmp    0829060d <+0xcd>
082905a1 +0x61:  mov    -0x10(%ebp),%eax
082905a4 +0x64:  add    0x10(%ebp),%eax
082905a7 +0x67:  mov    -0xc(%ebp),%edx
082905aa +0x6a:  mov    %dl,(%eax)
082905ac +0x6c:  mov    -0x10(%ebp),%eax
082905af +0x6f:  add    0x10(%ebp),%eax
082905b2 +0x72:  movzbl (%eax),%eax
082905b5 +0x75:  cmp    $0xa,%al
082905b7 +0x77:  jne    082905f2 <+0xb2>
082905b9 +0x79:  mov    -0x10(%ebp),%eax
082905bc +0x7c:  add    0x10(%ebp),%eax
082905bf +0x7f:  movb   $0x0,(%eax)
082905c2 +0x82:  cmpl   $0x0,-0x10(%ebp)
082905c6 +0x86:  jle    082905eb <+0xab>
082905c8 +0x88:  mov    -0x10(%ebp),%eax
082905cb +0x8b:  sub    $0x1,%eax
082905ce +0x8e:  add    0x10(%ebp),%eax
082905d1 +0x91:  movzbl (%eax),%eax
082905d4 +0x94:  cmp    $0xd,%al
082905d6 +0x96:  jne    082905eb <+0xab>
082905d8 +0x98:  mov    -0x10(%ebp),%eax
082905db +0x9b:  sub    $0x1,%eax
082905de +0x9e:  add    0x10(%ebp),%eax
082905e1 +0xa1:  movb   $0x0,(%eax)
082905e4 +0xa4:  mov    $0x1,%eax
082905e9 +0xa9:  jmp    0829060d <+0xcd>
082905eb +0xab:  mov    $0x1,%eax
082905f0 +0xb0:  jmp    0829060d <+0xcd>
082905f2 +0xb2:  addl   $0x1,-0x10(%ebp)
082905f6 +0xb6:  cmpl   $0x3ff,-0x10(%ebp)
082905fd +0xbd:  setle  %al
08290600 +0xc0:  test   %al,%al
08290602 +0xc2:  jne    0829056d <+0x2d>
08290608 +0xc8:  mov    $0x1,%eax
0829060d +0xcd:  leave
0829060e +0xce:  ret
0829060f +0xcf:  nop
```

## 反编译 C

```c
// CEnvironment::fgetline @ 0x8290540

/* CEnvironment::fgetline(_IO_FILE*, char*) */

undefined4 __thiscall CEnvironment::fgetline(CEnvironment *this,_IO_FILE *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  memset(param_2,0,0x400);
  local_14 = 0;
  while( true ) {
    if (0x3ff < local_14) {
      return 1;
    }
    iVar1 = fgetc(param_1);
    iVar2 = feof(param_1);
    if (iVar2 != 0) break;
    param_2[local_14] = (char)iVar1;
    if (param_2[local_14] == '\n') {
      param_2[local_14] = '\0';
      if ((0 < local_14) && (param_2[local_14 + -1] == '\r')) {
        param_2[local_14 + -1] = '\0';
        return 1;
      }
      return 1;
    }
    local_14 = local_14 + 1;
  }
  param_2[local_14] = '\0';
  return CONCAT31((int3)((uint)(param_2 + local_14) >> 8),0 < local_14);
}
```
