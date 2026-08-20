# CSwitchLog

`_ZN10CSwitchLogC1EPKciii`

`CSwitchLog::CSwitchLog(char const*, int, int, int)`

| 类 | 地址 |
|---|---|
| `CSwitchLog` | `0x0854fd3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854fd3c  _ZN10CSwitchLogC1EPKciii
#           CSwitchLog::CSwitchLog(char const*, int, int, int)
# range [0x0854fd3c, 0x0854fd63]
0854fd3c +0x00:  push   %ebp
0854fd3d +0x01:  mov    %esp,%ebp
0854fd3f +0x03:  mov    0x8(%ebp),%eax
0854fd42 +0x06:  mov    0xc(%ebp),%edx
0854fd45 +0x09:  mov    %edx,(%eax)
0854fd47 +0x0b:  mov    0x8(%ebp),%eax
0854fd4a +0x0e:  mov    0x10(%ebp),%edx
0854fd4d +0x11:  mov    %edx,0x4(%eax)
0854fd50 +0x14:  mov    0x8(%ebp),%eax
0854fd53 +0x17:  mov    0x14(%ebp),%edx
0854fd56 +0x1a:  mov    %edx,0x8(%eax)
0854fd59 +0x1d:  mov    0x8(%ebp),%eax
0854fd5c +0x20:  mov    0x18(%ebp),%edx
0854fd5f +0x23:  mov    %edx,0xc(%eax)
0854fd62 +0x26:  pop    %ebp
0854fd63 +0x27:  ret
```

## 反编译 C

```c
// CSwitchLog::CSwitchLog @ 0x854fd3c

/* CSwitchLog::CSwitchLog(char const*, int, int, int) */

void __thiscall
CSwitchLog::CSwitchLog(CSwitchLog *this,char *param_1,int param_2,int param_3,int param_4)

{
  *(char **)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  *(int *)(this + 0xc) = param_4;
  return;
}
```
