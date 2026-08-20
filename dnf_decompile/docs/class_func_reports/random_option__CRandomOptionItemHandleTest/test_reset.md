# test_reset

`_ZN13random_option27CRandomOptionItemHandleTest10test_resetEv`

`random_option::CRandomOptionItemHandleTest::test_reset()`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandleTest` | `0x085f3fa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f3fa0  _ZN13random_option27CRandomOptionItemHandleTest10test_resetEv
#           random_option::CRandomOptionItemHandleTest::test_reset()
# range [0x085f3fa0, 0x085f3fa4]
085f3fa0 +0x00:  push   %ebp
085f3fa1 +0x01:  mov    %esp,%ebp
085f3fa3 +0x03:  pop    %ebp
085f3fa4 +0x04:  ret
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandleTest::test_reset @ 0x85f3fa0

/* random_option::CRandomOptionItemHandleTest::test_reset() */

void random_option::CRandomOptionItemHandleTest::test_reset(void)

{
  return;
}
```
