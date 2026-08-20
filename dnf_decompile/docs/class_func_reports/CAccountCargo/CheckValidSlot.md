# CheckValidSlot

`_ZNK13CAccountCargo14CheckValidSlotEi`

`CAccountCargo::CheckValidSlot(int) const`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828a554` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828a554  _ZNK13CAccountCargo14CheckValidSlotEi
#           CAccountCargo::CheckValidSlot(int) const
# range [0x0828a554, 0x0828a57f]
0828a554 +0x00:  push   %ebp
0828a555 +0x01:  mov    %esp,%ebp
0828a557 +0x03:  cmpl   $0x0,0xc(%ebp)
0828a55b +0x07:  js     0828a571 <+0x1d>
0828a55d +0x09:  mov    0x8(%ebp),%eax
0828a560 +0x0c:  mov    0xd60(%eax),%eax
0828a566 +0x12:  cmp    0xc(%ebp),%eax
0828a569 +0x15:  jle    0828a571 <+0x1d>
0828a56b +0x17:  cmpl   $0x37,0xc(%ebp)
0828a56f +0x1b:  jle    0828a578 <+0x24>
0828a571 +0x1d:  mov    $0x0,%eax
0828a576 +0x22:  jmp    0828a57d <+0x29>
0828a578 +0x24:  mov    $0x1,%eax
0828a57d +0x29:  pop    %ebp
0828a57e +0x2a:  ret
0828a57f +0x2b:  nop
```

## 反编译 C

```c
// CAccountCargo::CheckValidSlot @ 0x828a554

/* CAccountCargo::CheckValidSlot(int) const */

undefined4 __thiscall CAccountCargo::CheckValidSlot(CAccountCargo *this,int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 < 0) || (*(int *)(this + 0xd60) <= param_1)) || (0x37 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
