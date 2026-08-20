# ComputeFatigueBatteryCharging

`_ZN21CFatigueBatteryHandle29ComputeFatigueBatteryChargingEiii`

`CFatigueBatteryHandle::ComputeFatigueBatteryCharging(int, int, int)`

| 类 | 地址 |
|---|---|
| `CFatigueBatteryHandle` | `0x084a8004` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8004  _ZN21CFatigueBatteryHandle29ComputeFatigueBatteryChargingEiii
#           CFatigueBatteryHandle::ComputeFatigueBatteryCharging(int, int, int)
# range [0x084a8004, 0x084a8093]
084a8004 +0x00:  push   %ebp
084a8005 +0x01:  mov    %esp,%ebp
084a8007 +0x03:  sub    $0x38,%esp
084a800a +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a800f +0x0b:  add    $0x68,%eax
084a8012 +0x0e:  mov    %eax,-0x10(%ebp)
084a8015 +0x11:  mov    0xc(%ebp),%eax
084a8018 +0x14:  imul   0x10(%ebp),%eax
084a801c +0x18:  mov    -0x10(%ebp),%edx
084a801f +0x1b:  movzbl 0x5c8(%edx),%edx
084a8026 +0x22:  movzbl %dl,%edx
084a8029 +0x25:  mov    %edx,-0x2c(%ebp)
084a802c +0x28:  mov    %eax,%edx
084a802e +0x2a:  sar    $0x1f,%edx
084a8031 +0x2d:  idivl  -0x2c(%ebp)
084a8034 +0x30:  mov    %eax,-0x1c(%ebp)
084a8037 +0x33:  fildl  -0x1c(%ebp)
084a803a +0x36:  fildl  0x14(%ebp)
084a803d +0x39:  mov    -0x10(%ebp),%eax
084a8040 +0x3c:  flds   0x5c4(%eax)
084a8046 +0x42:  fmulp  %st,%st(1)
084a8048 +0x44:  fld1
084a804a +0x46:  faddp  %st,%st(1)
084a804c +0x48:  fmulp  %st,%st(1)
084a804e +0x4a:  fnstcw -0x1e(%ebp)
084a8051 +0x4d:  movzwl -0x1e(%ebp),%eax
084a8055 +0x51:  mov    $0xc,%ah
084a8057 +0x53:  mov    %ax,-0x20(%ebp)
084a805b +0x57:  fldcw  -0x20(%ebp)
084a805e +0x5a:  fistpll -0x28(%ebp)
084a8061 +0x5d:  fldcw  -0x1e(%ebp)
084a8064 +0x60:  mov    -0x28(%ebp),%eax
084a8067 +0x63:  mov    -0x24(%ebp),%edx
084a806a +0x66:  mov    %eax,-0xc(%ebp)
084a806d +0x69:  mov    -0x10(%ebp),%eax
084a8070 +0x6c:  movzwl 0x5c0(%eax),%eax
084a8077 +0x73:  movzwl %ax,%eax
084a807a +0x76:  cmp    -0xc(%ebp),%eax
084a807d +0x79:  jae    084a808f <+0x8b>
084a807f +0x7b:  mov    -0x10(%ebp),%eax
084a8082 +0x7e:  movzwl 0x5c0(%eax),%eax
084a8089 +0x85:  movzwl %ax,%eax
084a808c +0x88:  mov    %eax,-0xc(%ebp)
084a808f +0x8b:  mov    -0xc(%ebp),%eax
084a8092 +0x8e:  leave
084a8093 +0x8f:  ret
```

## 反编译 C

```c
// CFatigueBatteryHandle::ComputeFatigueBatteryCharging @ 0x84a8004

/* CFatigueBatteryHandle::ComputeFatigueBatteryCharging(int, int, int) */

undefined8 __thiscall
CFatigueBatteryHandle::ComputeFatigueBatteryCharging
          (CFatigueBatteryHandle *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_10;
  
  iVar2 = G_CDataManager();
  lVar1 = (longlong)
          ROUND((*(float *)(iVar2 + 0x62c) * (float)param_3 + 1.0) *
                (float)((param_1 * param_2) / (int)(uint)*(byte *)(iVar2 + 0x630)));
  local_2c = (uint)lVar1;
  uStack_28 = (undefined4)((ulonglong)lVar1 >> 0x20);
  local_10 = local_2c;
  if (*(ushort *)(iVar2 + 0x628) < local_2c) {
    local_10 = (uint)*(ushort *)(iVar2 + 0x628);
  }
  return CONCAT44(uStack_28,local_10);
}
```
