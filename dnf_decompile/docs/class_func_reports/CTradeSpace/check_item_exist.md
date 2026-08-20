# check_item_exist

`_ZN11CTradeSpace16check_item_existEii`

`CTradeSpace::check_item_exist(int, int)`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x08529a18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08529a18  _ZN11CTradeSpace16check_item_existEii
#           CTradeSpace::check_item_exist(int, int)
# range [0x08529a18, 0x08529a71]
08529a18 +0x00:  push   %ebp
08529a19 +0x01:  mov    %esp,%ebp
08529a1b +0x03:  push   %ebx
08529a1c +0x04:  sub    $0x10,%esp
08529a1f +0x07:  movl   $0x3,-0x8(%ebp)
08529a26 +0x0e:  jmp    08529a5c <+0x44>
08529a28 +0x10:  mov    0xc(%ebp),%ebx
08529a2b +0x13:  mov    -0x8(%ebp),%edx
08529a2e +0x16:  mov    0x8(%ebp),%ecx
08529a31 +0x19:  mov    %edx,%eax
08529a33 +0x1b:  shl    $0x3,%eax
08529a36 +0x1e:  add    %edx,%eax
08529a38 +0x20:  shl    $0x3,%eax
08529a3b +0x23:  imul   $0x798,%ebx,%edx
08529a41 +0x29:  add    %edx,%eax
08529a43 +0x2b:  lea    (%ecx,%eax,1),%eax
08529a46 +0x2e:  add    $0x30,%eax
08529a49 +0x31:  mov    0xb(%eax),%edx
08529a4c +0x34:  mov    0x10(%ebp),%eax
08529a4f +0x37:  cmp    %eax,%edx
08529a51 +0x39:  jne    08529a58 <+0x40>
08529a53 +0x3b:  mov    -0x8(%ebp),%eax
08529a56 +0x3e:  jmp    08529a6c <+0x54>
08529a58 +0x40:  addl   $0x1,-0x8(%ebp)
08529a5c +0x44:  cmpl   $0x1a,-0x8(%ebp)
08529a60 +0x48:  setle  %al
08529a63 +0x4b:  test   %al,%al
08529a65 +0x4d:  jne    08529a28 <+0x10>
08529a67 +0x4f:  mov    $0xffffffff,%eax
08529a6c +0x54:  add    $0x10,%esp
08529a6f +0x57:  pop    %ebx
08529a70 +0x58:  pop    %ebp
08529a71 +0x59:  ret
```

## 反编译 C

```c
// CTradeSpace::check_item_exist @ 0x8529a18

/* CTradeSpace::check_item_exist(int, int) */

int __thiscall CTradeSpace::check_item_exist(CTradeSpace *this,int param_1,int param_2)

{
  int local_c;
  
  local_c = 3;
  while( true ) {
    if (0x1a < local_c) {
      return -1;
    }
    if (*(int *)(this + local_c * 0x48 + param_1 * 0x798 + 0x3b) == param_2) break;
    local_c = local_c + 1;
  }
  return local_c;
}
```
