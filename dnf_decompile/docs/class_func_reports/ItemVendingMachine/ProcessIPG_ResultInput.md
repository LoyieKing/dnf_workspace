# ProcessIPG_ResultInput

`_ZN18ItemVendingMachine22ProcessIPG_ResultInputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream`

`ItemVendingMachine::ProcessIPG_ResultInput(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x0817866c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817866c  _ZN18ItemVendingMachine22ProcessIPG_ResultInputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream
#           ItemVendingMachine::ProcessIPG_ResultInput(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)
# range [0x0817866c, 0x08178675]
0817866c +0x00:  push   %ebp
0817866d +0x01:  mov    %esp,%ebp
0817866f +0x03:  cmpl   $0x0,0xc(%ebp)
08178673 +0x07:  pop    %ebp
08178674 +0x08:  ret
08178675 +0x09:  nop
```

## 反编译 C

```c
// ItemVendingMachine::ProcessIPG_ResultInput @ 0x817866c

/* ItemVendingMachine::ProcessIPG_ResultInput(CUser*, WongWork::IPG::SIPGData*,
   WongWork::IPG::SIPGData*, Stream*) */

void ItemVendingMachine::ProcessIPG_ResultInput
               (CUser *param_1,SIPGData *param_2,SIPGData *param_3,Stream *param_4)

{
  return;
}
```
