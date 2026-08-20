# IncreasePowerWarPoint

`_ZN15CUserCharacInfo21IncreasePowerWarPointEs`

`CUserCharacInfo::IncreasePowerWarPoint(short)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08687efc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08687efc  _ZN15CUserCharacInfo21IncreasePowerWarPointEs
#           CUserCharacInfo::IncreasePowerWarPoint(short)
# range [0x08687efc, 0x08687f65]
08687efc +0x00:  push   %ebp
08687efd +0x01:  mov    %esp,%ebp
08687eff +0x03:  sub    $0x28,%esp
08687f02 +0x06:  mov    0xc(%ebp),%eax
08687f05 +0x09:  mov    %ax,-0xc(%ebp)
08687f09 +0x0d:  mov    0x8(%ebp),%eax
08687f0c +0x10:  mov    0x10(%eax),%eax
08687f0f +0x13:  test   %eax,%eax
08687f11 +0x15:  je     08687f63 <+0x67>
08687f13 +0x17:  mov    0x8(%ebp),%eax
08687f16 +0x1a:  mov    %eax,(%esp)
08687f19 +0x1d:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
08687f1e +0x22:  mov    0x8(%ebp),%eax
08687f21 +0x25:  mov    0x10(%eax),%eax
08687f24 +0x28:  mov    0x8(%ebp),%edx
08687f27 +0x2b:  mov    0x10(%edx),%edx
08687f2a +0x2e:  movzwl 0x121f(%edx),%edx
08687f31 +0x35:  mov    %edx,%ecx
08687f33 +0x37:  movzwl -0xc(%ebp),%edx
08687f37 +0x3b:  lea    (%ecx,%edx,1),%edx
08687f3a +0x3e:  mov    %dx,0x121f(%eax)
08687f41 +0x45:  mov    0x8(%ebp),%eax
08687f44 +0x48:  mov    0x10(%eax),%eax
08687f47 +0x4b:  movzwl 0x121f(%eax),%eax
08687f4e +0x52:  cmp    $0x270f,%ax
08687f52 +0x56:  jle    08687f63 <+0x67>
08687f54 +0x58:  mov    0x8(%ebp),%eax
08687f57 +0x5b:  mov    0x10(%eax),%eax
08687f5a +0x5e:  movw   $0x270f,0x121f(%eax)
08687f63 +0x67:  leave
08687f64 +0x68:  ret
08687f65 +0x69:  nop
```

## 反编译 C

```c
// CUserCharacInfo::IncreasePowerWarPoint @ 0x8687efc

/* CUserCharacInfo::IncreasePowerWarPoint(short) */

void __thiscall CUserCharacInfo::IncreasePowerWarPoint(CUserCharacInfo *this,short param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(short *)(*(int *)(this + 0x10) + 0x121f) =
         *(short *)(*(int *)(this + 0x10) + 0x121f) + param_1;
    if (9999 < *(short *)(*(int *)(this + 0x10) + 0x121f)) {
      *(undefined2 *)(*(int *)(this + 0x10) + 0x121f) = 9999;
    }
  }
  return;
}
```
