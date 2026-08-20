# StartEvent

`_ZN17CAradRyosikaEvent10StartEventE10Word_Param`

`CAradRyosikaEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CAradRyosikaEvent` | `0x081a0f8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a0f8a  _ZN17CAradRyosikaEvent10StartEventE10Word_Param
#           CAradRyosikaEvent::StartEvent(Word_Param)
# range [0x081a0f8a, 0x081a0fbd]
081a0f8a +0x00:  push   %ebp
081a0f8b +0x01:  mov    %esp,%ebp
081a0f8d +0x03:  sub    $0x18,%esp
081a0f90 +0x06:  movzwl 0xc(%ebp),%eax
081a0f94 +0x0a:  movzwl %ax,%edx
081a0f97 +0x0d:  mov    0x8(%ebp),%eax
081a0f9a +0x10:  mov    %edx,0xc(%eax)
081a0f9d +0x13:  movzwl 0xe(%ebp),%eax
081a0fa1 +0x17:  movzwl %ax,%edx
081a0fa4 +0x1a:  mov    0x8(%ebp),%eax
081a0fa7 +0x1d:  mov    %edx,0x10(%eax)
081a0faa +0x20:  mov    0x8(%ebp),%eax
081a0fad +0x23:  mov    (%eax),%eax
081a0faf +0x25:  add    $0x8,%eax
081a0fb2 +0x28:  mov    (%eax),%edx
081a0fb4 +0x2a:  mov    0x8(%ebp),%eax
081a0fb7 +0x2d:  mov    %eax,(%esp)
081a0fba +0x30:  call   *%edx
081a0fbc +0x32:  leave
081a0fbd +0x33:  ret
```

## 反编译 C

```c
// CAradRyosikaEvent::StartEvent @ 0x81a0f8a

/* CAradRyosikaEvent::StartEvent(Word_Param) */

void __thiscall CAradRyosikaEvent::StartEvent(CAradRyosikaEvent *this,uint param_2)

{
  *(uint *)(this + 0xc) = param_2 & 0xffff;
  *(uint *)(this + 0x10) = param_2 >> 0x10;
  (**(code **)(*(int *)this + 8))(this);
  return;
}
```
