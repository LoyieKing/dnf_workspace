# IItemUpgrade

`_GLOBAL__I__ZN8WongWork12IItemUpgradeC2Ev`

`global constructors keyed to WongWork::IItemUpgrade::IItemUpgrade()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::IItemUpgrade` | `0x080fc968` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fc968  _GLOBAL__I__ZN8WongWork12IItemUpgradeC2Ev
#           global constructors keyed to WongWork::IItemUpgrade::IItemUpgrade()
# range [0x080fc968, 0x080fc983]
080fc968 +0x00:  push   %ebp
080fc969 +0x01:  mov    %esp,%ebp
080fc96b +0x03:  sub    $0x18,%esp
080fc96e +0x06:  movl   $0xffff,0x4(%esp)
080fc976 +0x0e:  movl   $0x1,(%esp)
080fc97d +0x15:  call   080fc928 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080fc982 +0x1a:  leave
080fc983 +0x1b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x80fc968

/* WongWork::IItemUpgrade::IItemUpgrade() */

void WongWork::IItemUpgrade::_GLOBAL__I_IItemUpgrade(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
