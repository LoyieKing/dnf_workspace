# check_slot_empty

`_ZNK6CCargo16check_slot_emptyEi`

`CCargo::check_slot_empty(int) const`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850bbca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850bbca  _ZNK6CCargo16check_slot_emptyEi
#           CCargo::check_slot_empty(int) const
# range [0x0850bbca, 0x0850bc13]
0850bbca +0x00:  push   %ebp
0850bbcb +0x01:  mov    %esp,%ebp
0850bbcd +0x03:  sub    $0x18,%esp
0850bbd0 +0x06:  mov    0xc(%ebp),%eax
0850bbd3 +0x09:  mov    %eax,0x4(%esp)
0850bbd7 +0x0d:  mov    0x8(%ebp),%eax
0850bbda +0x10:  mov    %eax,(%esp)
0850bbdd +0x13:  call   0850d39c <_GLOBAL__I_g_emptySlot+0x2d1>  ; global constructors keyed to g_emptySlot+0x2d1
0850bbe2 +0x18:  xor    $0x1,%eax
0850bbe5 +0x1b:  test   %al,%al
0850bbe7 +0x1d:  je     0850bbf0 <+0x26>
0850bbe9 +0x1f:  mov    $0x0,%eax
0850bbee +0x24:  jmp    0850bc12 <+0x48>
0850bbf0 +0x26:  mov    0x8(%ebp),%eax
0850bbf3 +0x29:  mov    0x4(%eax),%edx
0850bbf6 +0x2c:  mov    0xc(%ebp),%eax
0850bbf9 +0x2f:  imul   $0x3d,%eax,%eax
0850bbfc +0x32:  lea    (%edx,%eax,1),%eax
0850bbff +0x35:  mov    0x2(%eax),%eax
0850bc02 +0x38:  test   %eax,%eax
0850bc04 +0x3a:  jne    0850bc0d <+0x43>
0850bc06 +0x3c:  mov    $0x1,%eax
0850bc0b +0x41:  jmp    0850bc12 <+0x48>
0850bc0d +0x43:  mov    $0x0,%eax
0850bc12 +0x48:  leave
0850bc13 +0x49:  ret
```

## 反编译 C

```c
// CCargo::check_slot_empty @ 0x850bbca

/* CCargo::check_slot_empty(int) const */

undefined4 __thiscall CCargo::check_slot_empty(CCargo *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = IsOperatorable(this,param_1);
  if (cVar1 == '\x01') {
    if (*(int *)(*(int *)(this + 4) + param_1 * 0x3d + 2) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
