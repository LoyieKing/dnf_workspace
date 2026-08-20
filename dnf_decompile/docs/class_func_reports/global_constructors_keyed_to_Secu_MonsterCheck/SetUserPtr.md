# SetUserPtr

`_GLOBAL__I__ZN17Secu_MonsterCheck10SetUserPtrEP5CUser`

`global constructors keyed to Secu_MonsterCheck::SetUserPtr(CUser*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Secu_MonsterCheck` | `0x0827b3c3` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b3c3  _GLOBAL__I__ZN17Secu_MonsterCheck10SetUserPtrEP5CUser
#           global constructors keyed to Secu_MonsterCheck::SetUserPtr(CUser*)
# range [0x0827b3c3, 0x0827b3df]
0827b3c3 +0x00:  push   %ebp
0827b3c4 +0x01:  mov    %esp,%ebp
0827b3c6 +0x03:  sub    $0x18,%esp
0827b3c9 +0x06:  movl   $0xffff,0x4(%esp)
0827b3d1 +0x0e:  movl   $0x1,(%esp)
0827b3d8 +0x15:  call   0827b383 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0827b3dd +0x1a:  leave
0827b3de +0x1b:  ret
0827b3df +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x827b3c3

/* Secu_MonsterCheck::SetUserPtr(CUser*) */

void Secu_MonsterCheck::_GLOBAL__I_SetUserPtr(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
