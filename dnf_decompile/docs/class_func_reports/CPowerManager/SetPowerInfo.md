# SetPowerInfo

`_ZN13CPowerManager12SetPowerInfoEcii`

`CPowerManager::SetPowerInfo(char, int, int)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x0847eb76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847eb76  _ZN13CPowerManager12SetPowerInfoEcii
#           CPowerManager::SetPowerInfo(char, int, int)
# range [0x0847eb76, 0x0847eb9f]
0847eb76 +0x00:  push   %ebp
0847eb77 +0x01:  mov    %esp,%ebp
0847eb79 +0x03:  sub    $0x4,%esp
0847eb7c +0x06:  mov    0xc(%ebp),%eax
0847eb7f +0x09:  mov    %al,-0x4(%ebp)
0847eb82 +0x0c:  mov    0x8(%ebp),%eax
0847eb85 +0x0f:  movzbl -0x4(%ebp),%edx
0847eb89 +0x13:  mov    %dl,(%eax)
0847eb8b +0x15:  mov    0x8(%ebp),%eax
0847eb8e +0x18:  mov    0x10(%ebp),%edx
0847eb91 +0x1b:  mov    %edx,0x4(%eax)
0847eb94 +0x1e:  mov    0x8(%ebp),%eax
0847eb97 +0x21:  mov    0x14(%ebp),%edx
0847eb9a +0x24:  mov    %edx,0x8(%eax)
0847eb9d +0x27:  leave
0847eb9e +0x28:  ret
0847eb9f +0x29:  nop
```

## 反编译 C

```c
// CPowerManager::SetPowerInfo @ 0x847eb76

/* CPowerManager::SetPowerInfo(char, int, int) */

void __thiscall
CPowerManager::SetPowerInfo(CPowerManager *this,char param_1,int param_2,int param_3)

{
  *this = (CPowerManager)param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  return;
}
```
