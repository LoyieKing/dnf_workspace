# IncFatigueBatteryCharging

`_ZN15CUserCharacInfo25IncFatigueBatteryChargingEs`

`CUserCharacInfo::IncFatigueBatteryCharging(short)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x086566e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086566e4  _ZN15CUserCharacInfo25IncFatigueBatteryChargingEs
#           CUserCharacInfo::IncFatigueBatteryCharging(short)
# range [0x086566e4, 0x08656783]
086566e4 +0x00:  push   %ebp
086566e5 +0x01:  mov    %esp,%ebp
086566e7 +0x03:  sub    $0x38,%esp
086566ea +0x06:  mov    0xc(%ebp),%eax
086566ed +0x09:  mov    %ax,-0x1c(%ebp)
086566f1 +0x0d:  mov    0x8(%ebp),%eax
086566f4 +0x10:  mov    0x10(%eax),%eax
086566f7 +0x13:  test   %eax,%eax
086566f9 +0x15:  je     08656782 <+0x9e>
086566ff +0x1b:  mov    0x8(%ebp),%eax
08656702 +0x1e:  mov    %eax,(%esp)
08656705 +0x21:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
0865670a +0x26:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865670f +0x2b:  add    $0x68,%eax
08656712 +0x2e:  mov    %eax,-0x10(%ebp)
08656715 +0x31:  mov    0x8(%ebp),%eax
08656718 +0x34:  mov    0x10(%eax),%eax
0865671b +0x37:  movzwl 0x4f(%eax),%eax
0865671f +0x3b:  mov    %ax,-0xa(%ebp)
08656723 +0x3f:  mov    0x8(%ebp),%eax
08656726 +0x42:  mov    0x10(%eax),%eax
08656729 +0x45:  mov    0x8(%ebp),%edx
0865672c +0x48:  mov    0x10(%edx),%edx
0865672f +0x4b:  movzwl 0x4f(%edx),%edx
08656733 +0x4f:  mov    %edx,%ecx
08656735 +0x51:  movzwl -0x1c(%ebp),%edx
08656739 +0x55:  lea    (%ecx,%edx,1),%edx
0865673c +0x58:  mov    %dx,0x4f(%eax)
08656740 +0x5c:  mov    0x8(%ebp),%eax
08656743 +0x5f:  mov    0x10(%eax),%eax
08656746 +0x62:  movzwl 0x4f(%eax),%eax
0865674a +0x66:  cmp    -0xa(%ebp),%ax
0865674e +0x6a:  jl     0865676e <+0x8a>
08656750 +0x6c:  mov    0x8(%ebp),%eax
08656753 +0x6f:  mov    0x10(%eax),%eax
08656756 +0x72:  movzwl 0x4f(%eax),%eax
0865675a +0x76:  movswl %ax,%edx
0865675d +0x79:  mov    -0x10(%ebp),%eax
08656760 +0x7c:  movzwl 0x5c0(%eax),%eax
08656767 +0x83:  movzwl %ax,%eax
0865676a +0x86:  cmp    %eax,%edx
0865676c +0x88:  jle    08656782 <+0x9e>
0865676e +0x8a:  mov    0x8(%ebp),%eax
08656771 +0x8d:  mov    0x10(%eax),%eax
08656774 +0x90:  mov    -0x10(%ebp),%edx
08656777 +0x93:  movzwl 0x5c0(%edx),%edx
0865677e +0x9a:  mov    %dx,0x4f(%eax)
08656782 +0x9e:  leave
08656783 +0x9f:  ret
```

## 反编译 C

```c
// CUserCharacInfo::IncFatigueBatteryCharging @ 0x86566e4

/* CUserCharacInfo::IncFatigueBatteryCharging(short) */

void __thiscall CUserCharacInfo::IncFatigueBatteryCharging(CUserCharacInfo *this,short param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    iVar2 = G_CDataManager();
    sVar1 = *(short *)(*(int *)(this + 0x10) + 0x4f);
    *(short *)(*(int *)(this + 0x10) + 0x4f) = *(short *)(*(int *)(this + 0x10) + 0x4f) + param_1;
    if ((*(short *)(*(int *)(this + 0x10) + 0x4f) < sVar1) ||
       ((int)(uint)*(ushort *)(iVar2 + 0x628) < (int)*(short *)(*(int *)(this + 0x10) + 0x4f))) {
      *(undefined2 *)(*(int *)(this + 0x10) + 0x4f) = *(undefined2 *)(iVar2 + 0x628);
    }
  }
  return;
}
```
