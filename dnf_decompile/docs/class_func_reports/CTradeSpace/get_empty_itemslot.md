# get_empty_itemslot

`_ZN11CTradeSpace18get_empty_itemslotEi`

`CTradeSpace::get_empty_itemslot(int)`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x085299c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085299c0  _ZN11CTradeSpace18get_empty_itemslotEi
#           CTradeSpace::get_empty_itemslot(int)
# range [0x085299c0, 0x08529a17]
085299c0 +0x00:  push   %ebp
085299c1 +0x01:  mov    %esp,%ebp
085299c3 +0x03:  push   %ebx
085299c4 +0x04:  sub    $0x10,%esp
085299c7 +0x07:  movl   $0x3,-0x8(%ebp)
085299ce +0x0e:  jmp    08529a01 <+0x41>
085299d0 +0x10:  mov    0xc(%ebp),%ebx
085299d3 +0x13:  mov    -0x8(%ebp),%edx
085299d6 +0x16:  mov    0x8(%ebp),%ecx
085299d9 +0x19:  mov    %edx,%eax
085299db +0x1b:  shl    $0x3,%eax
085299de +0x1e:  add    %edx,%eax
085299e0 +0x20:  shl    $0x3,%eax
085299e3 +0x23:  imul   $0x798,%ebx,%edx
085299e9 +0x29:  add    %edx,%eax
085299eb +0x2b:  lea    (%ecx,%eax,1),%eax
085299ee +0x2e:  add    $0x30,%eax
085299f1 +0x31:  mov    0xb(%eax),%eax
085299f4 +0x34:  test   %eax,%eax
085299f6 +0x36:  jne    085299fd <+0x3d>
085299f8 +0x38:  mov    -0x8(%ebp),%eax
085299fb +0x3b:  jmp    08529a11 <+0x51>
085299fd +0x3d:  addl   $0x1,-0x8(%ebp)
08529a01 +0x41:  cmpl   $0x1a,-0x8(%ebp)
08529a05 +0x45:  setle  %al
08529a08 +0x48:  test   %al,%al
08529a0a +0x4a:  jne    085299d0 <+0x10>
08529a0c +0x4c:  mov    $0xffffffff,%eax
08529a11 +0x51:  add    $0x10,%esp
08529a14 +0x54:  pop    %ebx
08529a15 +0x55:  pop    %ebp
08529a16 +0x56:  ret
08529a17 +0x57:  nop
```

## 反编译 C

```c
// CTradeSpace::get_empty_itemslot @ 0x85299c0

/* CTradeSpace::get_empty_itemslot(int) */

int __thiscall CTradeSpace::get_empty_itemslot(CTradeSpace *this,int param_1)

{
  int local_c;
  
  local_c = 3;
  while( true ) {
    if (0x1a < local_c) {
      return -1;
    }
    if (*(int *)(this + local_c * 0x48 + param_1 * 0x798 + 0x3b) == 0) break;
    local_c = local_c + 1;
  }
  return local_c;
}
```
