# isAllowLocationGeoState

`_ZN5CUser23isAllowLocationGeoStateEv`

`CUser::isAllowLocationGeoState()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692f36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692f36  _ZN5CUser23isAllowLocationGeoStateEv
#           CUser::isAllowLocationGeoState()
# range [0x08692f36, 0x08692f45]
08692f36 +0x00:  push   %ebp
08692f37 +0x01:  mov    %esp,%ebp
08692f39 +0x03:  mov    0x8(%ebp),%eax
08692f3c +0x06:  movzbl 0x6effa(%eax),%eax
08692f43 +0x0d:  pop    %ebp
08692f44 +0x0e:  ret
08692f45 +0x0f:  nop
```

## 反编译 C

```c
// CUser::isAllowLocationGeoState @ 0x8692f36

/* CUser::isAllowLocationGeoState() */

CUser __thiscall CUser::isAllowLocationGeoState(CUser *this)

{
  return this[0x6effa];
}
```
