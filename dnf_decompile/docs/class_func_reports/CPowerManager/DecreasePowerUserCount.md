# DecreasePowerUserCount

`_ZN13CPowerManager22DecreasePowerUserCountEc`

`CPowerManager::DecreasePowerUserCount(char)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x0848013c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848013c  _ZN13CPowerManager22DecreasePowerUserCountEc
#           CPowerManager::DecreasePowerUserCount(char)
# range [0x0848013c, 0x084801a1]
0848013c +0x00:  push   %ebp
0848013d +0x01:  mov    %esp,%ebp
0848013f +0x03:  sub    $0x4,%esp
08480142 +0x06:  mov    0xc(%ebp),%eax
08480145 +0x09:  mov    %al,-0x4(%ebp)
08480148 +0x0c:  cmpb   $0x1,-0x4(%ebp)
0848014c +0x10:  je     08480154 <+0x18>
0848014e +0x12:  cmpb   $0x3,-0x4(%ebp)
08480152 +0x16:  jne    08480179 <+0x3d>
08480154 +0x18:  mov    0x8(%ebp),%eax
08480157 +0x1b:  mov    0x14(%eax),%eax
0848015a +0x1e:  lea    -0x1(%eax),%edx
0848015d +0x21:  mov    0x8(%ebp),%eax
08480160 +0x24:  mov    %edx,0x14(%eax)
08480163 +0x27:  mov    0x8(%ebp),%eax
08480166 +0x2a:  mov    0x14(%eax),%eax
08480169 +0x2d:  test   %eax,%eax
0848016b +0x2f:  jns    0848019e <+0x62>
0848016d +0x31:  mov    0x8(%ebp),%eax
08480170 +0x34:  movl   $0x0,0x14(%eax)
08480177 +0x3b:  jmp    0848019f <+0x63>
08480179 +0x3d:  mov    0x8(%ebp),%eax
0848017c +0x40:  mov    0x18(%eax),%eax
0848017f +0x43:  lea    -0x1(%eax),%edx
08480182 +0x46:  mov    0x8(%ebp),%eax
08480185 +0x49:  mov    %edx,0x18(%eax)
08480188 +0x4c:  mov    0x8(%ebp),%eax
0848018b +0x4f:  mov    0x18(%eax),%eax
0848018e +0x52:  test   %eax,%eax
08480190 +0x54:  jns    0848019f <+0x63>
08480192 +0x56:  mov    0x8(%ebp),%eax
08480195 +0x59:  movl   $0x0,0x18(%eax)
0848019c +0x60:  jmp    0848019f <+0x63>
0848019e +0x62:  nop
0848019f +0x63:  leave
084801a0 +0x64:  ret
084801a1 +0x65:  nop
```

## 反编译 C

```c
// CPowerManager::DecreasePowerUserCount @ 0x848013c

/* CPowerManager::DecreasePowerUserCount(char) */

void __thiscall CPowerManager::DecreasePowerUserCount(CPowerManager *this,char param_1)

{
  if ((param_1 == '\x01') || (param_1 == '\x03')) {
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
    if (*(int *)(this + 0x14) < 0) {
      *(undefined4 *)(this + 0x14) = 0;
    }
  }
  else {
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    if (*(int *)(this + 0x18) < 0) {
      *(undefined4 *)(this + 0x18) = 0;
    }
  }
  return;
}
```
