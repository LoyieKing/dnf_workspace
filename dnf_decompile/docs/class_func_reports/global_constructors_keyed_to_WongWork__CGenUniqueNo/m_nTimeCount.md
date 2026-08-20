# m_nTimeCount

`_GLOBAL__I__ZN8WongWork12CGenUniqueNo12m_nTimeCountE`

`global constructors keyed to WongWork::CGenUniqueNo::m_nTimeCount`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::CGenUniqueNo` | `0x084b7850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7850  _GLOBAL__I__ZN8WongWork12CGenUniqueNo12m_nTimeCountE
#           global constructors keyed to WongWork::CGenUniqueNo::m_nTimeCount
# range [0x084b7850, 0x084b786b]
084b7850 +0x00:  push   %ebp
084b7851 +0x01:  mov    %esp,%ebp
084b7853 +0x03:  sub    $0x18,%esp
084b7856 +0x06:  movl   $0xffff,0x4(%esp)
084b785e +0x0e:  movl   $0x1,(%esp)
084b7865 +0x15:  call   084b7810 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
084b786a +0x1a:  leave
084b786b +0x1b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x84b7850

/* WongWork::CGenUniqueNo::m_nTimeCount */

void WongWork::CGenUniqueNo::_GLOBAL__I_m_nTimeCount(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
