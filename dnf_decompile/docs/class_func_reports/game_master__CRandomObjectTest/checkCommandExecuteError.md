# checkCommandExecuteError

`_ZN11game_master17CRandomObjectTest24checkCommandExecuteErrorEv`

`game_master::CRandomObjectTest::checkCommandExecuteError()`

| 类 | 地址 |
|---|---|
| `game_master::CRandomObjectTest` | `0x084b02be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b02be  _ZN11game_master17CRandomObjectTest24checkCommandExecuteErrorEv
#           game_master::CRandomObjectTest::checkCommandExecuteError()
# range [0x084b02be, 0x084b02e5]
084b02be +0x00:  push   %ebp
084b02bf +0x01:  mov    %esp,%ebp
084b02c1 +0x03:  mov    0x8(%ebp),%eax
084b02c4 +0x06:  mov    0xc(%eax),%eax
084b02c7 +0x09:  cmp    $&_ZL14gUnicodeBuffer+0xe174,%eax
084b02cc +0x0e:  jg     084b02d8 <+0x1a>
084b02ce +0x10:  mov    0x8(%ebp),%eax
084b02d1 +0x13:  mov    0xc(%eax),%eax
084b02d4 +0x16:  test   %eax,%eax
084b02d6 +0x18:  jns    084b02df <+0x21>
084b02d8 +0x1a:  mov    $"0 ~ 100000번 통계까지만 지원됩니다",%eax
084b02dd +0x1f:  jmp    084b02e4 <+0x26>
084b02df +0x21:  mov    $0x0,%eax
084b02e4 +0x26:  pop    %ebp
084b02e5 +0x27:  ret
```

## 反编译 C

```c
// game_master::CRandomObjectTest::checkCommandExecuteError @ 0x84b02be

/* game_master::CRandomObjectTest::checkCommandExecuteError() */

undefined * __thiscall
game_master::CRandomObjectTest::checkCommandExecuteError(CRandomObjectTest *this)

{
  undefined *puVar1;
  
  if ((*(int *)(this + 0xc) < 0x186a1) && (-1 < *(int *)(this + 0xc))) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_08c7ff64;
  }
  return puVar1;
}
```
