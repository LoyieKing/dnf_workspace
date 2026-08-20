# GetCargoRef

`_ZNK6CCargo11GetCargoRefEi`

`CCargo::GetCargoRef(int) const`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850b390` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850b390  _ZNK6CCargo11GetCargoRefEi
#           CCargo::GetCargoRef(int) const
# range [0x0850b390, 0x0850b3c7]
0850b390 +0x00:  push   %ebp
0850b391 +0x01:  mov    %esp,%ebp
0850b393 +0x03:  sub    $0x18,%esp
0850b396 +0x06:  mov    0xc(%ebp),%eax
0850b399 +0x09:  mov    %eax,0x4(%esp)
0850b39d +0x0d:  mov    0x8(%ebp),%eax
0850b3a0 +0x10:  mov    %eax,(%esp)
0850b3a3 +0x13:  call   0850d39c <_GLOBAL__I_g_emptySlot+0x2d1>  ; global constructors keyed to g_emptySlot+0x2d1
0850b3a8 +0x18:  xor    $0x1,%eax
0850b3ab +0x1b:  test   %al,%al
0850b3ad +0x1d:  je     0850b3b6 <+0x26>
0850b3af +0x1f:  mov    $0x0,%eax
0850b3b4 +0x24:  jmp    0850b3c5 <+0x35>
0850b3b6 +0x26:  mov    0x8(%ebp),%eax
0850b3b9 +0x29:  mov    0x4(%eax),%edx
0850b3bc +0x2c:  mov    0xc(%ebp),%eax
0850b3bf +0x2f:  imul   $0x3d,%eax,%eax
0850b3c2 +0x32:  lea    (%edx,%eax,1),%eax
0850b3c5 +0x35:  leave
0850b3c6 +0x36:  ret
0850b3c7 +0x37:  nop
```

## 反编译 C

```c
// CCargo::GetCargoRef @ 0x850b390

/* CCargo::GetCargoRef(int) const */

int __thiscall CCargo::GetCargoRef(CCargo *this,int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = IsOperatorable(this,param_1);
  if (cVar1 == '\x01') {
    iVar2 = *(int *)(this + 4) + param_1 * 0x3d;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
```
