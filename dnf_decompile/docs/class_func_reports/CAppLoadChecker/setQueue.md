# setQueue

`_ZN15CAppLoadChecker8setQueueEiiii`

`CAppLoadChecker::setQueue(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CAppLoadChecker` | `0x086004b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086004b0  _ZN15CAppLoadChecker8setQueueEiiii
#           CAppLoadChecker::setQueue(int, int, int, int)
# range [0x086004b0, 0x086004d7]
086004b0 +0x00:  push   %ebp
086004b1 +0x01:  mov    %esp,%ebp
086004b3 +0x03:  mov    0x8(%ebp),%eax
086004b6 +0x06:  mov    0xc(%ebp),%edx
086004b9 +0x09:  mov    %edx,(%eax)
086004bb +0x0b:  mov    0x8(%ebp),%eax
086004be +0x0e:  mov    0x10(%ebp),%edx
086004c1 +0x11:  mov    %edx,0x4(%eax)
086004c4 +0x14:  mov    0x8(%ebp),%eax
086004c7 +0x17:  mov    0x14(%ebp),%edx
086004ca +0x1a:  mov    %edx,0x8(%eax)
086004cd +0x1d:  mov    0x8(%ebp),%eax
086004d0 +0x20:  mov    0x18(%ebp),%edx
086004d3 +0x23:  mov    %edx,0xc(%eax)
086004d6 +0x26:  pop    %ebp
086004d7 +0x27:  ret
```

## 反编译 C

```c
// CAppLoadChecker::setQueue @ 0x86004b0

/* CAppLoadChecker::setQueue(int, int, int, int) */

void __thiscall
CAppLoadChecker::setQueue(CAppLoadChecker *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  *(int *)(this + 0xc) = param_4;
  return;
}
```
