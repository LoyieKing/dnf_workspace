# SetVisible

`_ZN15CUserCharacInfo10SetVisibleEv`

`CUserCharacInfo::SetVisible()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868bdc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868bdc8  _ZN15CUserCharacInfo10SetVisibleEv
#           CUserCharacInfo::SetVisible()
# range [0x0868bdc8, 0x0868bde3]
0868bdc8 +0x00:  push   %ebp
0868bdc9 +0x01:  mov    %esp,%ebp
0868bdcb +0x03:  mov    0x8(%ebp),%eax
0868bdce +0x06:  mov    0x10(%eax),%eax
0868bdd1 +0x09:  movzbl 0xe40(%eax),%edx
0868bdd8 +0x10:  or     $0x1,%edx
0868bddb +0x13:  mov    %dl,0xe40(%eax)
0868bde1 +0x19:  pop    %ebp
0868bde2 +0x1a:  ret
0868bde3 +0x1b:  nop
```

## 反编译 C

```c
// CUserCharacInfo::SetVisible @ 0x868bdc8

/* CUserCharacInfo::SetVisible() */

void __thiscall CUserCharacInfo::SetVisible(CUserCharacInfo *this)

{
  *(byte *)(*(int *)(this + 0x10) + 0xe40) = *(byte *)(*(int *)(this + 0x10) + 0xe40) | 1;
  return;
}
```
