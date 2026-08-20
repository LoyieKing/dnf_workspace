# IsCeraPointItem

`_ZN8WongWork14CMailBoxHelper15IsCeraPointItemEm`

`WongWork::CMailBoxHelper::IsCeraPointItem(unsigned long)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08553912` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08553912  _ZN8WongWork14CMailBoxHelper15IsCeraPointItemEm
#           WongWork::CMailBoxHelper::IsCeraPointItem(unsigned long)
# range [0x08553912, 0x08553935]
08553912 +0x00:  push   %ebp
08553913 +0x01:  mov    %esp,%ebp
08553915 +0x03:  cmpl   $0x28eba2,0x8(%ebp)
0855391c +0x0a:  je     08553927 <+0x15>
0855391e +0x0c:  cmpl   $0x28ec3d,0x8(%ebp)
08553925 +0x13:  jne    0855392e <+0x1c>
08553927 +0x15:  mov    $0x1,%eax
0855392c +0x1a:  jmp    08553933 <+0x21>
0855392e +0x1c:  mov    $0x0,%eax
08553933 +0x21:  pop    %ebp
08553934 +0x22:  ret
08553935 +0x23:  nop
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::IsCeraPointItem @ 0x8553912

/* WongWork::CMailBoxHelper::IsCeraPointItem(unsigned long) */

undefined4 WongWork::CMailBoxHelper::IsCeraPointItem(ulong param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0x28eba2) || (param_1 == 0x28ec3d)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
