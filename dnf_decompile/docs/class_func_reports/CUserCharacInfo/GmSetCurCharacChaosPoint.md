# GmSetCurCharacChaosPoint

`_ZN15CUserCharacInfo24GmSetCurCharacChaosPointEi`

`CUserCharacInfo::GmSetCurCharacChaosPoint(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08646010` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08646010  _ZN15CUserCharacInfo24GmSetCurCharacChaosPointEi
#           CUserCharacInfo::GmSetCurCharacChaosPoint(int)
# range [0x08646010, 0x0864607d]
08646010 +0x00:  push   %ebp
08646011 +0x01:  mov    %esp,%ebp
08646013 +0x03:  sub    $0x18,%esp
08646016 +0x06:  mov    0x8(%ebp),%eax
08646019 +0x09:  mov    0x10(%eax),%eax
0864601c +0x0c:  test   %eax,%eax
0864601e +0x0e:  je     0864607b <+0x6b>
08646020 +0x10:  mov    0x8(%ebp),%eax
08646023 +0x13:  mov    %eax,(%esp)
08646026 +0x16:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
0864602b +0x1b:  mov    0x8(%ebp),%eax
0864602e +0x1e:  mov    0x10(%eax),%eax
08646031 +0x21:  mov    0xc(%ebp),%edx
08646034 +0x24:  mov    %edx,0xe49(%eax)
0864603a +0x2a:  mov    0x8(%ebp),%eax
0864603d +0x2d:  mov    0x10(%eax),%eax
08646040 +0x30:  mov    0xe49(%eax),%eax
08646046 +0x36:  test   %eax,%eax
08646048 +0x38:  jns    0864605a <+0x4a>
0864604a +0x3a:  mov    0x8(%ebp),%eax
0864604d +0x3d:  mov    0x10(%eax),%eax
08646050 +0x40:  movl   $0x0,0xe49(%eax)
0864605a +0x4a:  mov    0x8(%ebp),%eax
0864605d +0x4d:  mov    0x10(%eax),%eax
08646060 +0x50:  mov    0xe49(%eax),%eax
08646066 +0x56:  cmp    $0x64,%eax
08646069 +0x59:  jle    0864607b <+0x6b>
0864606b +0x5b:  mov    0x8(%ebp),%eax
0864606e +0x5e:  mov    0x10(%eax),%eax
08646071 +0x61:  movl   $0x64,0xe49(%eax)
0864607b +0x6b:  leave
0864607c +0x6c:  ret
0864607d +0x6d:  nop
```

## 反编译 C

```c
// CUserCharacInfo::GmSetCurCharacChaosPoint @ 0x8646010

/* CUserCharacInfo::GmSetCurCharacChaosPoint(int) */

void __thiscall CUserCharacInfo::GmSetCurCharacChaosPoint(CUserCharacInfo *this,int param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(int *)(*(int *)(this + 0x10) + 0xe49) = param_1;
    if (*(int *)(*(int *)(this + 0x10) + 0xe49) < 0) {
      *(undefined4 *)(*(int *)(this + 0x10) + 0xe49) = 0;
    }
    if (100 < *(int *)(*(int *)(this + 0x10) + 0xe49)) {
      *(undefined4 *)(*(int *)(this + 0x10) + 0xe49) = 100;
    }
  }
  return;
}
```
