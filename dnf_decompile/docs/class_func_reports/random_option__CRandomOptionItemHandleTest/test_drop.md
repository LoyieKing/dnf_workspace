# test_drop

`_ZN13random_option27CRandomOptionItemHandleTest9test_dropEv`

`random_option::CRandomOptionItemHandleTest::test_drop()`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandleTest` | `0x085f3cb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f3cb8  _ZN13random_option27CRandomOptionItemHandleTest9test_dropEv
#           random_option::CRandomOptionItemHandleTest::test_drop()
# range [0x085f3cb8, 0x085f3cbd]
085f3cb8 +0x00:  push   %ebp
085f3cb9 +0x01:  mov    %esp,%ebp
085f3cbb +0x03:  pop    %ebp
085f3cbc +0x04:  ret
085f3cbd +0x05:  nop
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandleTest::test_drop @ 0x85f3cb8

/* random_option::CRandomOptionItemHandleTest::test_drop() */

void random_option::CRandomOptionItemHandleTest::test_drop(void)

{
  return;
}
```
