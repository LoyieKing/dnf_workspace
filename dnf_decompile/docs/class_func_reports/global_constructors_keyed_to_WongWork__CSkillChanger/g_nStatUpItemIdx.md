# g_nStatUpItemIdx

`_GLOBAL__I__ZN8WongWork13CSkillChanger16g_nStatUpItemIdxE`

`global constructors keyed to WongWork::CSkillChanger::g_nStatUpItemIdx`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::CSkillChanger` | `0x0860a995` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860a995  _GLOBAL__I__ZN8WongWork13CSkillChanger16g_nStatUpItemIdxE
#           global constructors keyed to WongWork::CSkillChanger::g_nStatUpItemIdx
# range [0x0860a995, 0x0860a9b3]
0860a995 +0x00:  push   %ebp
0860a996 +0x01:  mov    %esp,%ebp
0860a998 +0x03:  sub    $0x18,%esp
0860a99b +0x06:  movl   $0xffff,0x4(%esp)
0860a9a3 +0x0e:  movl   $0x1,(%esp)
0860a9aa +0x15:  call   0860a955 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0860a9af +0x1a:  leave
0860a9b0 +0x1b:  ret
0860a9b1 +0x1c:  nop
0860a9b2 +0x1d:  nop
0860a9b3 +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x860a995

/* WongWork::CSkillChanger::g_nStatUpItemIdx */

void WongWork::CSkillChanger::_GLOBAL__I_g_nStatUpItemIdx(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
