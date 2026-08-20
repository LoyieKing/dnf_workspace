# check_error

`_ZNK12advancealtar20Dispatcher_ResetStar11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE`

`advancealtar::Dispatcher_ResetStar::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_ResetStar` | `0x0814108a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814108a  _ZNK12advancealtar20Dispatcher_ResetStar11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE
#           advancealtar::Dispatcher_ResetStar::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
# range [0x0814108a, 0x081410a9]
0814108a +0x00:  push   %ebp
0814108b +0x01:  mov    %esp,%ebp
0814108d +0x03:  sub    $0x8,%esp
08141090 +0x06:  call   0812cfea <_ZN12advancealtar18isOpenAdvanceAltarEv>  ; advancealtar::isOpenAdvanceAltar()
08141095 +0x0b:  xor    $0x1,%eax
08141098 +0x0e:  test   %al,%al
0814109a +0x10:  je     081410a3 <+0x19>
0814109c +0x12:  mov    $0x1,%eax
081410a1 +0x17:  jmp    081410a8 <+0x1e>
081410a3 +0x19:  mov    $0x0,%eax
081410a8 +0x1e:  leave
081410a9 +0x1f:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_ResetStar::check_error @ 0x814108a

/* advancealtar::Dispatcher_ResetStar::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const */

bool advancealtar::Dispatcher_ResetStar::check_error(CUser *param_1,STBaseRequest *param_2)

{
  char cVar1;
  
  cVar1 = isOpenAdvanceAltar();
  return cVar1 != '\x01';
}
```
