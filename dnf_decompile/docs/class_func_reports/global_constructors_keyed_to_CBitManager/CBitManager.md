# CBitManager

`_GLOBAL__I__ZN11CBitManagerC2Ev`

`global constructors keyed to CBitManager::CBitManager()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CBitManager` | `0x0831c3af` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831c3af  _GLOBAL__I__ZN11CBitManagerC2Ev
#           global constructors keyed to CBitManager::CBitManager()
# range [0x0831c3af, 0x0831c3cb]
0831c3af +0x00:  push   %ebp
0831c3b0 +0x01:  mov    %esp,%ebp
0831c3b2 +0x03:  sub    $0x18,%esp
0831c3b5 +0x06:  movl   $0xffff,0x4(%esp)
0831c3bd +0x0e:  movl   $0x1,(%esp)
0831c3c4 +0x15:  call   0831c36f <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0831c3c9 +0x1a:  leave
0831c3ca +0x1b:  ret
0831c3cb +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x831c3af

/* CBitManager::CBitManager() */

void CBitManager::_GLOBAL__I_CBitManager(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
