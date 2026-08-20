# SetInvisible

`_ZN15CUserCharacInfo12SetInvisibleEv`

`CUserCharacInfo::SetInvisible()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868bdac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868bdac  _ZN15CUserCharacInfo12SetInvisibleEv
#           CUserCharacInfo::SetInvisible()
# range [0x0868bdac, 0x0868bdc7]
0868bdac +0x00:  push   %ebp
0868bdad +0x01:  mov    %esp,%ebp
0868bdaf +0x03:  mov    0x8(%ebp),%eax
0868bdb2 +0x06:  mov    0x10(%eax),%eax
0868bdb5 +0x09:  movzbl 0xe40(%eax),%edx
0868bdbc +0x10:  and    $0xfffffffe,%edx
0868bdbf +0x13:  mov    %dl,0xe40(%eax)
0868bdc5 +0x19:  pop    %ebp
0868bdc6 +0x1a:  ret
0868bdc7 +0x1b:  nop
```

## 反编译 C

```c
// CUserCharacInfo::SetInvisible @ 0x868bdac

/* CUserCharacInfo::SetInvisible() */

void __thiscall CUserCharacInfo::SetInvisible(CUserCharacInfo *this)

{
  *(byte *)(*(int *)(this + 0x10) + 0xe40) = *(byte *)(*(int *)(this + 0x10) + 0xe40) & 0xfe;
  return;
}
```
