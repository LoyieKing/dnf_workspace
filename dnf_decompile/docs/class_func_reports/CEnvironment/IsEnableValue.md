# IsEnableValue

`_ZN12CEnvironment13IsEnableValueEPKc`

`CEnvironment::IsEnableValue(char const*)`

| 类 | 地址 |
|---|---|
| `CEnvironment` | `0x08292f64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08292f64  _ZN12CEnvironment13IsEnableValueEPKc
#           CEnvironment::IsEnableValue(char const*)
# range [0x08292f64, 0x08292fd3]
08292f64 +0x00:  push   %ebp
08292f65 +0x01:  mov    %esp,%ebp
08292f67 +0x03:  sub    $0x18,%esp
08292f6a +0x06:  movl   $"yes",0x4(%esp)
08292f72 +0x0e:  mov    0xc(%ebp),%eax
08292f75 +0x11:  mov    %eax,(%esp)
08292f78 +0x14:  call   0807e4e0 <_init+0xdd8>
08292f7d +0x19:  test   %eax,%eax
08292f7f +0x1b:  je     08292fc6 <+0x62>
08292f81 +0x1d:  movl   $"YES",0x4(%esp)
08292f89 +0x25:  mov    0xc(%ebp),%eax
08292f8c +0x28:  mov    %eax,(%esp)
08292f8f +0x2b:  call   0807e4e0 <_init+0xdd8>
08292f94 +0x30:  test   %eax,%eax
08292f96 +0x32:  je     08292fc6 <+0x62>
08292f98 +0x34:  movl   $"Yes",0x4(%esp)
08292fa0 +0x3c:  mov    0xc(%ebp),%eax
08292fa3 +0x3f:  mov    %eax,(%esp)
08292fa6 +0x42:  call   0807e4e0 <_init+0xdd8>
08292fab +0x47:  test   %eax,%eax
08292fad +0x49:  je     08292fc6 <+0x62>
08292faf +0x4b:  movl   $"1",0x4(%esp)
08292fb7 +0x53:  mov    0xc(%ebp),%eax
08292fba +0x56:  mov    %eax,(%esp)
08292fbd +0x59:  call   0807e4e0 <_init+0xdd8>
08292fc2 +0x5e:  test   %eax,%eax
08292fc4 +0x60:  jne    08292fcd <+0x69>
08292fc6 +0x62:  mov    $0x1,%eax
08292fcb +0x67:  jmp    08292fd2 <+0x6e>
08292fcd +0x69:  mov    $0x0,%eax
08292fd2 +0x6e:  leave
08292fd3 +0x6f:  ret
```

## 反编译 C

```c
// CEnvironment::IsEnableValue @ 0x8292f64

/* CEnvironment::IsEnableValue(char const*) */

undefined4 __thiscall CEnvironment::IsEnableValue(CEnvironment *this,char *param_1)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,"yes");
  if ((((iVar1 != 0) && (iVar1 = strcmp(param_1,"YES"), iVar1 != 0)) &&
      (iVar1 = strcmp(param_1,"Yes"), iVar1 != 0)) && (iVar1 = strcmp(param_1,"1"), iVar1 != 0)) {
    return 0;
  }
  return 1;
}
```
