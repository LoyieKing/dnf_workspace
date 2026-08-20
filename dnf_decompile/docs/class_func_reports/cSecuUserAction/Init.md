# Init

`_ZN15cSecuUserAction4InitEv`

`cSecuUserAction::Init()`

| 类 | 地址 |
|---|---|
| `cSecuUserAction` | `0x0827b3f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b3f4  _ZN15cSecuUserAction4InitEv
#           cSecuUserAction::Init()
# range [0x0827b3f4, 0x0827b401]
0827b3f4 +0x00:  push   %ebp
0827b3f5 +0x01:  mov    %esp,%ebp
0827b3f7 +0x03:  mov    0x8(%ebp),%eax
0827b3fa +0x06:  movl   $0x0,(%eax)
0827b400 +0x0c:  pop    %ebp
0827b401 +0x0d:  ret
```

## 反编译 C

```c
// cSecuUserAction::Init @ 0x827b3f4

/* cSecuUserAction::Init() */

void __thiscall cSecuUserAction::Init(cSecuUserAction *this)

{
  *(undefined4 *)this = 0;
  return;
}
```
