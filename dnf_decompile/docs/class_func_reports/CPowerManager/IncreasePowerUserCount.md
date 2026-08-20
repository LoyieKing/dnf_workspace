# IncreasePowerUserCount

`_ZN13CPowerManager22IncreasePowerUserCountEc`

`CPowerManager::IncreasePowerUserCount(char)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x08480102` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08480102  _ZN13CPowerManager22IncreasePowerUserCountEc
#           CPowerManager::IncreasePowerUserCount(char)
# range [0x08480102, 0x0848013b]
08480102 +0x00:  push   %ebp
08480103 +0x01:  mov    %esp,%ebp
08480105 +0x03:  sub    $0x4,%esp
08480108 +0x06:  mov    0xc(%ebp),%eax
0848010b +0x09:  mov    %al,-0x4(%ebp)
0848010e +0x0c:  cmpb   $0x1,-0x4(%ebp)
08480112 +0x10:  je     0848011a <+0x18>
08480114 +0x12:  cmpb   $0x3,-0x4(%ebp)
08480118 +0x16:  jne    0848012b <+0x29>
0848011a +0x18:  mov    0x8(%ebp),%eax
0848011d +0x1b:  mov    0x14(%eax),%eax
08480120 +0x1e:  lea    0x1(%eax),%edx
08480123 +0x21:  mov    0x8(%ebp),%eax
08480126 +0x24:  mov    %edx,0x14(%eax)
08480129 +0x27:  jmp    0848013a <+0x38>
0848012b +0x29:  mov    0x8(%ebp),%eax
0848012e +0x2c:  mov    0x18(%eax),%eax
08480131 +0x2f:  lea    0x1(%eax),%edx
08480134 +0x32:  mov    0x8(%ebp),%eax
08480137 +0x35:  mov    %edx,0x18(%eax)
0848013a +0x38:  leave
0848013b +0x39:  ret
```

## 反编译 C

```c
// CPowerManager::IncreasePowerUserCount @ 0x8480102

/* CPowerManager::IncreasePowerUserCount(char) */

void __thiscall CPowerManager::IncreasePowerUserCount(CPowerManager *this,char param_1)

{
  if ((param_1 == '\x01') || (param_1 == '\x03')) {
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  }
  else {
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  }
  return;
}
```
