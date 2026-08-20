# Pad

`_ZN7IMethod3PadEPciPj`

`IMethod::Pad(char*, int, unsigned int*)`

| 类 | 地址 |
|---|---|
| `IMethod` | `0x080b44a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b44a6  _ZN7IMethod3PadEPciPj
#           IMethod::Pad(char*, int, unsigned int*)
# range [0x080b44a6, 0x080b459d]
080b44a6 +0x00:  push   %ebp
080b44a7 +0x01:  mov    %esp,%ebp
080b44a9 +0x03:  sub    $0x20,%esp
080b44ac +0x06:  mov    0x8(%ebp),%eax
080b44af +0x09:  movzbl 0x4(%eax),%eax
080b44b3 +0x0d:  xor    $0x1,%eax
080b44b6 +0x10:  test   %al,%al
080b44b8 +0x12:  je     080b44d3 <+0x2d>
080b44ba +0x14:  cmpl   $0x0,0x14(%ebp)
080b44be +0x18:  je     080b44c9 <+0x23>
080b44c0 +0x1a:  mov    0x14(%ebp),%eax
080b44c3 +0x1d:  movl   $0x70000005,(%eax)
080b44c9 +0x23:  mov    $0x0,%eax
080b44ce +0x28:  jmp    080b459b <+0xf5>
080b44d3 +0x2d:  mov    0x8(%ebp),%eax
080b44d6 +0x30:  mov    0x8(%eax),%ecx
080b44d9 +0x33:  mov    0x10(%ebp),%eax
080b44dc +0x36:  mov    %eax,%edx
080b44de +0x38:  sar    $0x1f,%edx
080b44e1 +0x3b:  idiv   %ecx
080b44e3 +0x3d:  mov    %edx,-0x18(%ebp)
080b44e6 +0x40:  cmpl   $0x0,-0x18(%ebp)
080b44ea +0x44:  je     080b4598 <+0xf2>
080b44f0 +0x4a:  mov    0x8(%ebp),%eax
080b44f3 +0x4d:  mov    0x8(%eax),%eax
080b44f6 +0x50:  sub    -0x18(%ebp),%eax
080b44f9 +0x53:  mov    %eax,-0x14(%ebp)
080b44fc +0x56:  mov    0x10(%ebp),%eax
080b44ff +0x59:  add    0xc(%ebp),%eax
080b4502 +0x5c:  mov    %eax,-0x10(%ebp)
080b4505 +0x5f:  mov    0x8(%ebp),%eax
080b4508 +0x62:  mov    0x14(%eax),%eax
080b450b +0x65:  cmp    $0x1,%eax
080b450e +0x68:  je     080b453f <+0x99>
080b4510 +0x6a:  cmp    $0x2,%eax
080b4513 +0x6d:  je     080b4565 <+0xbf>
080b4515 +0x6f:  test   %eax,%eax
080b4517 +0x71:  jne    080b458d <+0xe7>
080b4519 +0x73:  movl   $0x0,-0xc(%ebp)
080b4520 +0x7a:  jmp    080b4530 <+0x8a>
080b4522 +0x7c:  mov    -0x10(%ebp),%eax
080b4525 +0x7f:  movb   $0x0,(%eax)
080b4528 +0x82:  addl   $0x1,-0xc(%ebp)
080b452c +0x86:  addl   $0x1,-0x10(%ebp)
080b4530 +0x8a:  mov    -0xc(%ebp),%eax
080b4533 +0x8d:  cmp    -0x14(%ebp),%eax
080b4536 +0x90:  setl   %al
080b4539 +0x93:  test   %al,%al
080b453b +0x95:  jne    080b4522 <+0x7c>
080b453d +0x97:  jmp    080b458d <+0xe7>
080b453f +0x99:  movl   $0x0,-0x8(%ebp)
080b4546 +0xa0:  jmp    080b4556 <+0xb0>
080b4548 +0xa2:  mov    -0x10(%ebp),%eax
080b454b +0xa5:  movb   $0x20,(%eax)
080b454e +0xa8:  addl   $0x1,-0x8(%ebp)
080b4552 +0xac:  addl   $0x1,-0x10(%ebp)
080b4556 +0xb0:  mov    -0x8(%ebp),%eax
080b4559 +0xb3:  cmp    -0x14(%ebp),%eax
080b455c +0xb6:  setl   %al
080b455f +0xb9:  test   %al,%al
080b4561 +0xbb:  jne    080b4548 <+0xa2>
080b4563 +0xbd:  jmp    080b458d <+0xe7>
080b4565 +0xbf:  movl   $0x0,-0x4(%ebp)
080b456c +0xc6:  jmp    080b4580 <+0xda>
080b456e +0xc8:  mov    -0x14(%ebp),%eax
080b4571 +0xcb:  mov    %eax,%edx
080b4573 +0xcd:  mov    -0x10(%ebp),%eax
080b4576 +0xd0:  mov    %dl,(%eax)
080b4578 +0xd2:  addl   $0x1,-0x4(%ebp)
080b457c +0xd6:  addl   $0x1,-0x10(%ebp)
080b4580 +0xda:  mov    -0x4(%ebp),%eax
080b4583 +0xdd:  cmp    -0x14(%ebp),%eax
080b4586 +0xe0:  setl   %al
080b4589 +0xe3:  test   %al,%al
080b458b +0xe5:  jne    080b456e <+0xc8>
080b458d +0xe7:  mov    -0x14(%ebp),%eax
080b4590 +0xea:  mov    0x10(%ebp),%edx
080b4593 +0xed:  lea    (%edx,%eax,1),%eax
080b4596 +0xf0:  jmp    080b459b <+0xf5>
080b4598 +0xf2:  mov    0x10(%ebp),%eax
080b459b +0xf5:  leave
080b459c +0xf6:  ret
080b459d +0xf7:  nop
```

## 反编译 C

```c
// IMethod::Pad @ 0x80b44a6

/* IMethod::Pad(char*, int, unsigned int*) */

int __thiscall IMethod::Pad(IMethod *this,char *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  char *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (this[4] == (IMethod)0x1) {
    if (param_2 % *(int *)(this + 8) != 0) {
      iVar2 = *(int *)(this + 8) - param_2 % *(int *)(this + 8);
      local_14 = param_1 + param_2;
      iVar1 = *(int *)(this + 0x14);
      if (iVar1 == 1) {
        for (local_c = 0; local_c < iVar2; local_c = local_c + 1) {
          *local_14 = ' ';
          local_14 = local_14 + 1;
        }
      }
      else if (iVar1 == 2) {
        for (local_8 = 0; local_8 < iVar2; local_8 = local_8 + 1) {
          *local_14 = (char)iVar2;
          local_14 = local_14 + 1;
        }
      }
      else if (iVar1 == 0) {
        for (local_10 = 0; local_10 < iVar2; local_10 = local_10 + 1) {
          *local_14 = '\0';
          local_14 = local_14 + 1;
        }
      }
      param_2 = param_2 + iVar2;
    }
  }
  else {
    if (param_3 != (uint *)0x0) {
      *param_3 = 0x70000005;
    }
    param_2 = 0;
  }
  return param_2;
}
```
