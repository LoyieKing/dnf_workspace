# test_unseal

`_ZN13random_option27CRandomOptionItemHandleTest11test_unsealEv`

`random_option::CRandomOptionItemHandleTest::test_unseal()`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandleTest` | `0x085f3cbe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f3cbe  _ZN13random_option27CRandomOptionItemHandleTest11test_unsealEv
#           random_option::CRandomOptionItemHandleTest::test_unseal()
# range [0x085f3cbe, 0x085f3cc3]
085f3cbe +0x00:  push   %ebp
085f3cbf +0x01:  mov    %esp,%ebp
085f3cc1 +0x03:  pop    %ebp
085f3cc2 +0x04:  ret
085f3cc3 +0x05:  nop
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandleTest::test_unseal @ 0x85f3cbe

/* random_option::CRandomOptionItemHandleTest::test_unseal() */

void random_option::CRandomOptionItemHandleTest::test_unseal(void)

{
  return;
}
```
