# ProcessIPGUserData

`_ZN18ItemVendingMachine18ProcessIPGUserDataEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream`

`ItemVendingMachine::ProcessIPGUserData(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x0854c4f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854c4f6  _ZN18ItemVendingMachine18ProcessIPGUserDataEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream
#           ItemVendingMachine::ProcessIPGUserData(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)
# range [0x0854c4f6, 0x0854c524]
0854c4f6 +0x00:  push   %ebp
0854c4f7 +0x01:  mov    %esp,%ebp
0854c4f9 +0x03:  sub    $0x28,%esp
0854c4fc +0x06:  mov    0x18(%ebp),%eax
0854c4ff +0x09:  mov    %eax,0x10(%esp)
0854c503 +0x0d:  mov    0x14(%ebp),%eax
0854c506 +0x10:  mov    %eax,0xc(%esp)
0854c50a +0x14:  mov    0x10(%ebp),%eax
0854c50d +0x17:  mov    %eax,0x8(%esp)
0854c511 +0x1b:  mov    0xc(%ebp),%eax
0854c514 +0x1e:  mov    %eax,0x4(%esp)
0854c518 +0x22:  mov    0x8(%ebp),%eax
0854c51b +0x25:  mov    %eax,(%esp)
0854c51e +0x28:  call   081783ea <_ZN18ItemVendingMachine23ProcessIPGUserDataJpnExEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream>  ; ItemVendingMachine::ProcessIPGUserDataJpnEx(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)
0854c523 +0x2d:  leave
0854c524 +0x2e:  ret
```

## 反编译 C

```c
// ItemVendingMachine::ProcessIPGUserData @ 0x854c4f6

/* ItemVendingMachine::ProcessIPGUserData(CUser*, WongWork::IPG::SIPGData*,
   WongWork::IPG::SIPGData*, Stream*) */

void __thiscall
ItemVendingMachine::ProcessIPGUserData
          (ItemVendingMachine *this,CUser *param_1,SIPGData *param_2,SIPGData *param_3,
          Stream *param_4)

{
  ProcessIPGUserDataJpnEx(this,param_1,param_2,param_3,param_4);
  return;
}
```
