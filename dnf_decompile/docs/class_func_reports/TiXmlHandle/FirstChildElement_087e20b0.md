# FirstChildElement

`_ZNK11TiXmlHandle17FirstChildElementEPKc`

`TiXmlHandle::FirstChildElement(char const*) const`

| 类 | 地址 |
|---|---|
| `TiXmlHandle` | `0x087e20b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e20b0  _ZNK11TiXmlHandle17FirstChildElementEPKc
#           TiXmlHandle::FirstChildElement(char const*) const
# range [0x087e20b0, 0x087e214e]
087e20b0 +0x00:  push   %ebp
087e20b1 +0x01:  mov    %esp,%ebp
087e20b3 +0x03:  push   %edi
087e20b4 +0x04:  push   %esi
087e20b5 +0x05:  push   %ebx
087e20b6 +0x06:  sub    $0x1c,%esp
087e20b9 +0x09:  mov    0xc(%ebp),%eax
087e20bc +0x0c:  mov    0x8(%ebp),%edi
087e20bf +0x0f:  mov    0x10(%ebp),%esi
087e20c2 +0x12:  mov    (%eax),%eax
087e20c4 +0x14:  test   %eax,%eax
087e20c6 +0x16:  je     087e2122 <+0x72>
087e20c8 +0x18:  mov    0x18(%eax),%ebx
087e20cb +0x1b:  test   %ebx,%ebx
087e20cd +0x1d:  jne    087e20df <+0x2f>
087e20cf +0x1f:  jmp    087e2122 <+0x72>
087e20d1 +0x21:  lea    0x0(%esi,%eiz,1),%esi
087e20d8 +0x28:  mov    0x28(%ebx),%ebx
087e20db +0x2b:  test   %ebx,%ebx
087e20dd +0x2d:  je     087e2122 <+0x72>
087e20df +0x2f:  mov    0x20(%ebx),%eax
087e20e2 +0x32:  mov    %esi,0x4(%esp)
087e20e6 +0x36:  mov    %eax,(%esp)
087e20e9 +0x39:  call   0807e4e0 <_init+0xdd8>
087e20ee +0x3e:  test   %eax,%eax
087e20f0 +0x40:  jne    087e20d8 <+0x28>
087e20f2 +0x42:  lea    0x0(%esi),%esi
087e20f8 +0x48:  mov    (%ebx),%eax
087e20fa +0x4a:  mov    %ebx,(%esp)
087e20fd +0x4d:  call   *0x14(%eax)
087e2100 +0x50:  test   %eax,%eax
087e2102 +0x52:  je     087e211b <+0x6b>
087e2104 +0x54:  jmp    087e2134 <+0x84>
087e2106 +0x56:  xchg   %ax,%ax
087e2108 +0x58:  mov    0x20(%ebx),%eax
087e210b +0x5b:  mov    %esi,0x4(%esp)
087e210f +0x5f:  mov    %eax,(%esp)
087e2112 +0x62:  call   0807e4e0 <_init+0xdd8>
087e2117 +0x67:  test   %eax,%eax
087e2119 +0x69:  je     087e20f8 <+0x48>
087e211b +0x6b:  mov    0x28(%ebx),%ebx
087e211e +0x6e:  test   %ebx,%ebx
087e2120 +0x70:  jne    087e2108 <+0x58>
087e2122 +0x72:  movl   $0x0,(%edi)
087e2128 +0x78:  mov    %edi,%eax
087e212a +0x7a:  add    $0x1c,%esp
087e212d +0x7d:  pop    %ebx
087e212e +0x7e:  pop    %esi
087e212f +0x7f:  pop    %edi
087e2130 +0x80:  pop    %ebp
087e2131 +0x81:  ret    $0x4
087e2134 +0x84:  mov    (%ebx),%eax
087e2136 +0x86:  mov    %ebx,(%esp)
087e2139 +0x89:  call   *0x14(%eax)
087e213c +0x8c:  test   %eax,%eax
087e213e +0x8e:  je     087e2122 <+0x72>
087e2140 +0x90:  mov    %eax,(%edi)
087e2142 +0x92:  add    $0x1c,%esp
087e2145 +0x95:  mov    %edi,%eax
087e2147 +0x97:  pop    %ebx
087e2148 +0x98:  pop    %esi
087e2149 +0x99:  pop    %edi
087e214a +0x9a:  pop    %ebp
087e214b +0x9b:  ret    $0x4
087e214e +0x9e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TiXmlHandle::FirstChildElement @ 0x87e20b0

/* TiXmlHandle::FirstChildElement(char const*) const */

char * TiXmlHandle::FirstChildElement(char *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_stack_00000008;
  char *in_stack_0000000c;
  
  if (*in_stack_00000008 != 0) {
    for (piVar2 = *(int **)(*in_stack_00000008 + 0x18); piVar2 != (int *)0x0;
        piVar2 = (int *)piVar2[10]) {
      iVar1 = strcmp((char *)piVar2[8],in_stack_0000000c);
      if (iVar1 == 0) goto LAB_087e20f8;
    }
  }
LAB_087e2122:
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  return param_1;
LAB_087e20f8:
  while (iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2), iVar1 == 0) {
    do {
      piVar2 = (int *)piVar2[10];
      if (piVar2 == (int *)0x0) goto LAB_087e2122;
      iVar1 = strcmp((char *)piVar2[8],in_stack_0000000c);
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2);
  if (iVar1 != 0) {
    *(int *)param_1 = iVar1;
    return param_1;
  }
  goto LAB_087e2122;
}
```
