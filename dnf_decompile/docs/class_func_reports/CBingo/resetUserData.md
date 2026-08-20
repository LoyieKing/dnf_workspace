# resetUserData

`_ZN6CBingo13resetUserDataER9BingoData`

`CBingo::resetUserData(BingoData&)`

| 类 | 地址 |
|---|---|
| `CBingo` | `0x080cadfe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080cadfe  _ZN6CBingo13resetUserDataER9BingoData
#           CBingo::resetUserData(BingoData&)
# range [0x080cadfe, 0x080cae11]
080cadfe +0x00:  push   %ebp
080cadff +0x01:  mov    %esp,%ebp
080cae01 +0x03:  sub    $0x18,%esp
080cae04 +0x06:  mov    0xc(%ebp),%eax
080cae07 +0x09:  mov    %eax,(%esp)
080cae0a +0x0c:  call   080cbc6c <_GLOBAL__I__ZN10BingoEventC2Ev+0xab9>  ; global constructors keyed to BingoEvent::BingoEvent()+0xab9
080cae0f +0x11:  leave
080cae10 +0x12:  ret
080cae11 +0x13:  nop
```

## 反编译 C

```c
// CBingo::resetUserData @ 0x80cadfe

/* CBingo::resetUserData(BingoData&) */

void __thiscall CBingo::resetUserData(CBingo *this,BingoData *param_1)

{
  BingoData::clear(param_1);
  return;
}
```
