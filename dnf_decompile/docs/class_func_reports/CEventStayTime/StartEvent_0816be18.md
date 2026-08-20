# StartEvent

`_ZN14CEventStayTime10StartEventE10Word_Param`

`CEventStayTime::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CEventStayTime` | `0x0816be18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816be18  _ZN14CEventStayTime10StartEventE10Word_Param
#           CEventStayTime::StartEvent(Word_Param)
# range [0x0816be18, 0x0816be5f]
0816be18 +0x00:  push   %ebp
0816be19 +0x01:  mov    %esp,%ebp
0816be1b +0x03:  sub    $0x18,%esp
0816be1e +0x06:  movzwl 0xc(%ebp),%eax
0816be22 +0x0a:  movzwl %ax,%eax
0816be25 +0x0d:  shl    $0x2,%eax
0816be28 +0x10:  mov    %eax,%edx
0816be2a +0x12:  shl    $0x4,%edx
0816be2d +0x15:  sub    %eax,%edx
0816be2f +0x17:  mov    0x8(%ebp),%eax
0816be32 +0x1a:  mov    %edx,0xc(%eax)
0816be35 +0x1d:  movzwl 0xe(%ebp),%eax
0816be39 +0x21:  movzwl %ax,%eax
0816be3c +0x24:  shl    $0x2,%eax
0816be3f +0x27:  mov    %eax,%edx
0816be41 +0x29:  shl    $0x4,%edx
0816be44 +0x2c:  sub    %eax,%edx
0816be46 +0x2e:  mov    0x8(%ebp),%eax
0816be49 +0x31:  mov    %edx,0x10(%eax)
0816be4c +0x34:  mov    0x8(%ebp),%eax
0816be4f +0x37:  mov    (%eax),%eax
0816be51 +0x39:  add    $0x8,%eax
0816be54 +0x3c:  mov    (%eax),%edx
0816be56 +0x3e:  mov    0x8(%ebp),%eax
0816be59 +0x41:  mov    %eax,(%esp)
0816be5c +0x44:  call   *%edx
0816be5e +0x46:  leave
0816be5f +0x47:  ret
```

## 反编译 C

```c
// CEventStayTime::StartEvent @ 0x816be18

/* CEventStayTime::StartEvent(Word_Param) */

void __thiscall CEventStayTime::StartEvent(CEventStayTime *this,uint param_2)

{
  *(uint *)(this + 0xc) = (param_2 & 0xffff) * 0x3c;
  *(uint *)(this + 0x10) = (param_2 >> 0x10) * 0x3c;
  (**(code **)(*(int *)this + 8))(this);
  return;
}
```
