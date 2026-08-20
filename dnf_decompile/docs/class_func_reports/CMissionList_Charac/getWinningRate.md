# getWinningRate

`_ZNK19CMissionList_Charac14getWinningRateEv`

`CMissionList_Charac::getWinningRate() const`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e513a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e513a  _ZNK19CMissionList_Charac14getWinningRateEv
#           CMissionList_Charac::getWinningRate() const
# range [0x085e513a, 0x085e5193]
085e513a +0x00:  push   %ebp
085e513b +0x01:  mov    %esp,%ebp
085e513d +0x03:  sub    $0x10,%esp
085e5140 +0x06:  mov    0x8(%ebp),%eax
085e5143 +0x09:  movzwl 0x14c(%eax),%eax
085e514a +0x10:  mov    %ax,-0xa(%ebp)
085e514e +0x14:  movl   $0x0,-0x8(%ebp)
085e5155 +0x1b:  movl   $0x0,-0x4(%ebp)
085e515c +0x22:  jmp    085e517b <+0x41>
085e515e +0x24:  movzwl -0xa(%ebp),%eax
085e5162 +0x28:  and    $0x1,%eax
085e5165 +0x2b:  test   %al,%al
085e5167 +0x2d:  je     085e516d <+0x33>
085e5169 +0x2f:  addl   $0x1,-0x8(%ebp)
085e516d +0x33:  movzwl -0xa(%ebp),%eax
085e5171 +0x37:  sar    %eax
085e5173 +0x39:  mov    %ax,-0xa(%ebp)
085e5177 +0x3d:  addl   $0x1,-0x4(%ebp)
085e517b +0x41:  cmpl   $0x9,-0x4(%ebp)
085e517f +0x45:  setle  %al
085e5182 +0x48:  test   %al,%al
085e5184 +0x4a:  jne    085e515e <+0x24>
085e5186 +0x4c:  mov    -0x8(%ebp),%edx
085e5189 +0x4f:  mov    %edx,%eax
085e518b +0x51:  shl    $0x2,%eax
085e518e +0x54:  add    %edx,%eax
085e5190 +0x56:  add    %eax,%eax
085e5192 +0x58:  leave
085e5193 +0x59:  ret
```

## 反编译 C

```c
// CMissionList_Charac::getWinningRate @ 0x85e513a

/* CMissionList_Charac::getWinningRate() const */

int __thiscall CMissionList_Charac::getWinningRate(CMissionList_Charac *this)

{
  ushort local_e;
  int local_c;
  int local_8;
  
  local_e = *(ushort *)(this + 0x14c);
  local_c = 0;
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    if ((local_e & 1) != 0) {
      local_c = local_c + 1;
    }
    local_e = (ushort)((int)(uint)local_e >> 1);
  }
  return local_c * 10;
}
```
