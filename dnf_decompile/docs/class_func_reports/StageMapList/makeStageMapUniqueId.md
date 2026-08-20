# makeStageMapUniqueId

`_ZN12StageMapList20makeStageMapUniqueIdEiii`

`StageMapList::makeStageMapUniqueId(int, int, int)`

| 类 | 地址 |
|---|---|
| `StageMapList` | `0x08364818` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08364818  _ZN12StageMapList20makeStageMapUniqueIdEiii
#           StageMapList::makeStageMapUniqueId(int, int, int)
# range [0x08364818, 0x08364847]
08364818 +0x00:  push   %ebp
08364819 +0x01:  mov    %esp,%ebp
0836481b +0x03:  addl   $0x64,0x8(%ebp)
0836481f +0x07:  addl   $0x3e8,0xc(%ebp)
08364826 +0x0e:  addl   $0x3e8,0x10(%ebp)
0836482d +0x15:  mov    0x8(%ebp),%eax
08364830 +0x18:  imul   $0x5f5e100,%eax,%edx
08364836 +0x1e:  mov    0xc(%ebp),%eax
08364839 +0x21:  imul   $0x2710,%eax,%eax
0836483f +0x27:  lea    (%edx,%eax,1),%eax
08364842 +0x2a:  add    0x10(%ebp),%eax
08364845 +0x2d:  pop    %ebp
08364846 +0x2e:  ret
08364847 +0x2f:  nop
```

## 反编译 C

```c
// StageMapList::makeStageMapUniqueId @ 0x8364818

/* StageMapList::makeStageMapUniqueId(int, int, int) */

int StageMapList::makeStageMapUniqueId(int param_1,int param_2,int param_3)

{
  return (param_1 + 100) * 100000000 + (param_2 + 1000) * 10000 + param_3 + 1000;
}
```
