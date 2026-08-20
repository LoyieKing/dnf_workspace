# DecFatigueBatteryCharging

`_ZN15CUserCharacInfo25DecFatigueBatteryChargingEs`

`CUserCharacInfo::DecFatigueBatteryCharging(short)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08656784` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08656784  _ZN15CUserCharacInfo25DecFatigueBatteryChargingEs
#           CUserCharacInfo::DecFatigueBatteryCharging(short)
# range [0x08656784, 0x08656807]
08656784 +0x00:  push   %ebp
08656785 +0x01:  mov    %esp,%ebp
08656787 +0x03:  push   %ebx
08656788 +0x04:  sub    $0x34,%esp
0865678b +0x07:  mov    0xc(%ebp),%eax
0865678e +0x0a:  mov    %ax,-0x1c(%ebp)
08656792 +0x0e:  mov    0x8(%ebp),%eax
08656795 +0x11:  mov    0x10(%eax),%eax
08656798 +0x14:  test   %eax,%eax
0865679a +0x16:  je     08656801 <+0x7d>
0865679c +0x18:  mov    0x8(%ebp),%eax
0865679f +0x1b:  mov    %eax,(%esp)
086567a2 +0x1e:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
086567a7 +0x23:  mov    0x8(%ebp),%eax
086567aa +0x26:  mov    0x10(%eax),%eax
086567ad +0x29:  movzwl 0x4f(%eax),%eax
086567b1 +0x2d:  mov    %ax,-0xa(%ebp)
086567b5 +0x31:  mov    0x8(%ebp),%eax
086567b8 +0x34:  mov    0x10(%eax),%eax
086567bb +0x37:  mov    0x8(%ebp),%edx
086567be +0x3a:  mov    0x10(%edx),%edx
086567c1 +0x3d:  movzwl 0x4f(%edx),%edx
086567c5 +0x41:  mov    %edx,%ecx
086567c7 +0x43:  movzwl -0x1c(%ebp),%edx
086567cb +0x47:  mov    %ecx,%ebx
086567cd +0x49:  sub    %dx,%bx
086567d0 +0x4c:  mov    %ebx,%edx
086567d2 +0x4e:  mov    %dx,0x4f(%eax)
086567d6 +0x52:  mov    0x8(%ebp),%eax
086567d9 +0x55:  mov    0x10(%eax),%eax
086567dc +0x58:  movzwl 0x4f(%eax),%eax
086567e0 +0x5c:  test   %ax,%ax
086567e3 +0x5f:  js     086567f5 <+0x71>
086567e5 +0x61:  mov    0x8(%ebp),%eax
086567e8 +0x64:  mov    0x10(%eax),%eax
086567eb +0x67:  movzwl 0x4f(%eax),%eax
086567ef +0x6b:  cmp    -0xa(%ebp),%ax
086567f3 +0x6f:  jle    08656801 <+0x7d>
086567f5 +0x71:  mov    0x8(%ebp),%eax
086567f8 +0x74:  mov    0x10(%eax),%eax
086567fb +0x77:  movw   $0x0,0x4f(%eax)
08656801 +0x7d:  add    $0x34,%esp
08656804 +0x80:  pop    %ebx
08656805 +0x81:  pop    %ebp
08656806 +0x82:  ret
08656807 +0x83:  nop
```

## 反编译 C

```c
// CUserCharacInfo::DecFatigueBatteryCharging @ 0x8656784

/* CUserCharacInfo::DecFatigueBatteryCharging(short) */

void __thiscall CUserCharacInfo::DecFatigueBatteryCharging(CUserCharacInfo *this,short param_1)

{
  short sVar1;
  
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    sVar1 = *(short *)(*(int *)(this + 0x10) + 0x4f);
    *(short *)(*(int *)(this + 0x10) + 0x4f) = *(short *)(*(int *)(this + 0x10) + 0x4f) - param_1;
    if ((*(short *)(*(int *)(this + 0x10) + 0x4f) < 0) ||
       (sVar1 < *(short *)(*(int *)(this + 0x10) + 0x4f))) {
      *(undefined2 *)(*(int *)(this + 0x10) + 0x4f) = 0;
    }
  }
  return;
}
```
