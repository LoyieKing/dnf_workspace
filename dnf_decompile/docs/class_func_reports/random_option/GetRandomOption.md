# GetRandomOption

`_ZN13random_option15GetRandomOptionEv`

`random_option::GetRandomOption()`

| 类 | 地址 |
|---|---|
| `random_option` | `0x085f0eb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f0eb0  _ZN13random_option15GetRandomOptionEv
#           random_option::GetRandomOption()
# range [0x085f0eb0, 0x085f0ec1]
085f0eb0 +0x00:  push   %ebp
085f0eb1 +0x01:  mov    %esp,%ebp
085f0eb3 +0x03:  sub    $0x8,%esp
085f0eb6 +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085f0ebb +0x0b:  add    $0x4e10,%eax
085f0ec0 +0x10:  leave
085f0ec1 +0x11:  ret
```

## 反编译 C

```c
// random_option::GetRandomOption @ 0x85f0eb0

/* random_option::GetRandomOption() */

int random_option::GetRandomOption(void)

{
  int iVar1;
  
  iVar1 = G_CDataManager();
  return iVar1 + 0x4e10;
}
```
