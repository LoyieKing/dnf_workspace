# test_change

`_ZN13random_option27CRandomOptionItemHandleTest11test_changeEv`

`random_option::CRandomOptionItemHandleTest::test_change()`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandleTest` | `0x085f3f9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f3f9a  _ZN13random_option27CRandomOptionItemHandleTest11test_changeEv
#           random_option::CRandomOptionItemHandleTest::test_change()
# range [0x085f3f9a, 0x085f3f9f]
085f3f9a +0x00:  push   %ebp
085f3f9b +0x01:  mov    %esp,%ebp
085f3f9d +0x03:  pop    %ebp
085f3f9e +0x04:  ret
085f3f9f +0x05:  nop
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandleTest::test_change @ 0x85f3f9a

/* random_option::CRandomOptionItemHandleTest::test_change() */

void random_option::CRandomOptionItemHandleTest::test_change(void)

{
  return;
}
```
