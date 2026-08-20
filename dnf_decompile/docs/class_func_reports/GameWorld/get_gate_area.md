# get_gate_area

`_ZNK9GameWorld13get_gate_areaEi`

`GameWorld::get_gate_area(int) const`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c497c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c497c  _ZNK9GameWorld13get_gate_areaEi
#           GameWorld::get_gate_area(int) const
# range [0x086c497c, 0x086c49b1]
086c497c +0x00:  push   %ebp
086c497d +0x01:  mov    %esp,%ebp
086c497f +0x03:  sub    $0x4,%esp
086c4982 +0x06:  cmpl   $0x0,0xc(%ebp)
086c4986 +0x0a:  js     086c4992 <+0x16>
086c4988 +0x0c:  mov    &MAX_VILLAGE_NUM,%eax
086c498d +0x11:  cmp    %eax,0xc(%ebp)
086c4990 +0x14:  jl     086c4999 <+0x1d>
086c4992 +0x16:  mov    $0xffffffff,%eax
086c4997 +0x1b:  jmp    086c49b0 <+0x34>
086c4999 +0x1d:  mov    0x8(%ebp),%eax
086c499c +0x20:  mov    0x1c(%eax),%edx
086c499f +0x23:  mov    0xc(%ebp),%eax
086c49a2 +0x26:  imul   $0x34,%eax,%eax
086c49a5 +0x29:  lea    (%edx,%eax,1),%eax
086c49a8 +0x2c:  mov    %eax,(%esp)
086c49ab +0x2f:  call   086c3b58 <_ZN7Village13get_gate_areaEv>  ; Village::get_gate_area()
086c49b0 +0x34:  leave
086c49b1 +0x35:  ret
```

## 反编译 C

```c
// GameWorld::get_gate_area @ 0x86c497c

/* GameWorld::get_gate_area(int) const */

undefined4 __thiscall GameWorld::get_gate_area(GameWorld *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (MAX_VILLAGE_NUM <= param_1)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = Village::get_gate_area((Village *)(*(int *)(this + 0x1c) + param_1 * 0x34));
  }
  return uVar1;
}
```
