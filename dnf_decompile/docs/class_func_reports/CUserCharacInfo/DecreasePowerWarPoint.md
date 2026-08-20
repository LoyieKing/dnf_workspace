# DecreasePowerWarPoint

`_ZN15CUserCharacInfo21DecreasePowerWarPointEs`

`CUserCharacInfo::DecreasePowerWarPoint(short)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08687f66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08687f66  _ZN15CUserCharacInfo21DecreasePowerWarPointEs
#           CUserCharacInfo::DecreasePowerWarPoint(short)
# range [0x08687f66, 0x08687fd7]
08687f66 +0x00:  push   %ebp
08687f67 +0x01:  mov    %esp,%ebp
08687f69 +0x03:  push   %ebx
08687f6a +0x04:  sub    $0x24,%esp
08687f6d +0x07:  mov    0xc(%ebp),%eax
08687f70 +0x0a:  mov    %ax,-0xc(%ebp)
08687f74 +0x0e:  mov    0x8(%ebp),%eax
08687f77 +0x11:  mov    0x10(%eax),%eax
08687f7a +0x14:  test   %eax,%eax
08687f7c +0x16:  je     08687fd1 <+0x6b>
08687f7e +0x18:  mov    0x8(%ebp),%eax
08687f81 +0x1b:  mov    %eax,(%esp)
08687f84 +0x1e:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
08687f89 +0x23:  mov    0x8(%ebp),%eax
08687f8c +0x26:  mov    0x10(%eax),%eax
08687f8f +0x29:  mov    0x8(%ebp),%edx
08687f92 +0x2c:  mov    0x10(%edx),%edx
08687f95 +0x2f:  movzwl 0x121f(%edx),%edx
08687f9c +0x36:  mov    %edx,%ecx
08687f9e +0x38:  movzwl -0xc(%ebp),%edx
08687fa2 +0x3c:  mov    %ecx,%ebx
08687fa4 +0x3e:  sub    %dx,%bx
08687fa7 +0x41:  mov    %ebx,%edx
08687fa9 +0x43:  mov    %dx,0x121f(%eax)
08687fb0 +0x4a:  mov    0x8(%ebp),%eax
08687fb3 +0x4d:  mov    0x10(%eax),%eax
08687fb6 +0x50:  movzwl 0x121f(%eax),%eax
08687fbd +0x57:  test   %ax,%ax
08687fc0 +0x5a:  jns    08687fd1 <+0x6b>
08687fc2 +0x5c:  mov    0x8(%ebp),%eax
08687fc5 +0x5f:  mov    0x10(%eax),%eax
08687fc8 +0x62:  movw   $0x0,0x121f(%eax)
08687fd1 +0x6b:  add    $0x24,%esp
08687fd4 +0x6e:  pop    %ebx
08687fd5 +0x6f:  pop    %ebp
08687fd6 +0x70:  ret
08687fd7 +0x71:  nop
```

## 反编译 C

```c
// CUserCharacInfo::DecreasePowerWarPoint @ 0x8687f66

/* CUserCharacInfo::DecreasePowerWarPoint(short) */

void __thiscall CUserCharacInfo::DecreasePowerWarPoint(CUserCharacInfo *this,short param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(short *)(*(int *)(this + 0x10) + 0x121f) =
         *(short *)(*(int *)(this + 0x10) + 0x121f) - param_1;
    if (*(short *)(*(int *)(this + 0x10) + 0x121f) < 0) {
      *(undefined2 *)(*(int *)(this + 0x10) + 0x121f) = 0;
    }
  }
  return;
}
```
