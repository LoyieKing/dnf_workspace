# operator()

`_ZNKSt4hashISt10error_codeEclES0_`

`std::hash<std::error_code>::operator()(std::error_code) const`

| 类 | 地址 |
|---|---|
| `std::hash<std::error_code>` | `0x086d9f90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d9f90  _ZNKSt4hashISt10error_codeEclES0_
#           std::hash<std::error_code>::operator()(std::error_code) const
# range [0x086d9f90, 0x086d9fbf]
086d9f90 +0x00:  push   %ebp
086d9f91 +0x01:  mov    $0x811c9dc5,%eax
086d9f96 +0x06:  mov    %esp,%ebp
086d9f98 +0x08:  lea    0xc(%ebp),%edx
086d9f9b +0x0b:  push   %ebx
086d9f9c +0x0c:  lea    0x14(%ebp),%ebx
086d9f9f +0x0f:  nop
086d9fa0 +0x10:  movsbl (%edx),%ecx
086d9fa3 +0x13:  add    $0x1,%edx
086d9fa6 +0x16:  xor    %eax,%ecx
086d9fa8 +0x18:  imul   $0x1000193,%ecx,%eax
086d9fae +0x1e:  cmp    %ebx,%edx
086d9fb0 +0x20:  jne    086d9fa0 <+0x10>
086d9fb2 +0x22:  pop    %ebx
086d9fb3 +0x23:  pop    %ebp
086d9fb4 +0x24:  ret
086d9fb5 +0x25:  nop
086d9fb6 +0x26:  nop
086d9fb7 +0x27:  nop
086d9fb8 +0x28:  nop
086d9fb9 +0x29:  nop
086d9fba +0x2a:  nop
086d9fbb +0x2b:  nop
086d9fbc +0x2c:  nop
086d9fbd +0x2d:  nop
086d9fbe +0x2e:  nop
086d9fbf +0x2f:  nop
```

## 反编译 C

```c
// std::hash<std::error_code>::operator @ 0x86d9f90

/* std::hash<std::error_code>::TEMPNAMEPLACEHOLDERVALUE(std::error_code) const */

uint __thiscall std::hash<std::error_code>::operator()(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0x811c9dc5;
  pcVar3 = &stack0x00000008;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    uVar2 = ((int)cVar1 ^ uVar2) * 0x1000193;
  } while (pcVar3 != &stack0x00000010);
  return uVar2;
}
```
