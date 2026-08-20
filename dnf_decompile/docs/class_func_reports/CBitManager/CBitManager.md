# CBitManager

`_ZN11CBitManagerC1Ev`

`CBitManager::CBitManager()`

| 类 | 地址 |
|---|---|
| `CBitManager` | `0x0831c09c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831c09c  _ZN11CBitManagerC1Ev
#           CBitManager::CBitManager()
# range [0x0831c09c, 0x0831c0c7]
0831c09c +0x00:  push   %ebp
0831c09d +0x01:  mov    %esp,%ebp
0831c09f +0x03:  mov    0x8(%ebp),%eax
0831c0a2 +0x06:  movl   $0x0,(%eax)
0831c0a8 +0x0c:  mov    0x8(%ebp),%eax
0831c0ab +0x0f:  movl   $0x0,0x4(%eax)
0831c0b2 +0x16:  mov    0x8(%ebp),%eax
0831c0b5 +0x19:  movl   $0x0,0x8(%eax)
0831c0bc +0x20:  mov    0x8(%ebp),%eax
0831c0bf +0x23:  movl   $0x0,0xc(%eax)
0831c0c6 +0x2a:  pop    %ebp
0831c0c7 +0x2b:  ret
```

## 反编译 C

```c
// CBitManager::CBitManager @ 0x831c09c

/* CBitManager::CBitManager() */

void __thiscall CBitManager::CBitManager(CBitManager *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```
