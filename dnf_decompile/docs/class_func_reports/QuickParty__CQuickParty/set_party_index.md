# set_party_index

`_ZN10QuickParty11CQuickParty15set_party_indexEi`

`QuickParty::CQuickParty::set_party_index(int)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x0826978c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826978c  _ZN10QuickParty11CQuickParty15set_party_indexEi
#           QuickParty::CQuickParty::set_party_index(int)
# range [0x0826978c, 0x082697c7]
0826978c +0x00:  push   %ebp
0826978d +0x01:  mov    %esp,%ebp
0826978f +0x03:  sub    $0x10,%esp
08269792 +0x06:  movl   $0x0,-0x4(%ebp)
08269799 +0x0d:  jmp    082697bb <+0x2f>
0826979b +0x0f:  mov    -0x4(%ebp),%edx
0826979e +0x12:  mov    0x8(%ebp),%eax
082697a1 +0x15:  mov    (%eax,%edx,4),%eax
082697a4 +0x18:  cmp    $0xffffffff,%eax
082697a7 +0x1b:  jne    082697b7 <+0x2b>
082697a9 +0x1d:  mov    -0x4(%ebp),%edx
082697ac +0x20:  mov    0x8(%ebp),%eax
082697af +0x23:  mov    0xc(%ebp),%ecx
082697b2 +0x26:  mov    %ecx,(%eax,%edx,4)
082697b5 +0x29:  jmp    082697c6 <+0x3a>
082697b7 +0x2b:  addl   $0x1,-0x4(%ebp)
082697bb +0x2f:  cmpl   $0x3,-0x4(%ebp)
082697bf +0x33:  setle  %al
082697c2 +0x36:  test   %al,%al
082697c4 +0x38:  jne    0826979b <+0xf>
082697c6 +0x3a:  leave
082697c7 +0x3b:  ret
```

## 反编译 C

```c
// QuickParty::CQuickParty::set_party_index @ 0x826978c

/* QuickParty::CQuickParty::set_party_index(int) */

void __thiscall QuickParty::CQuickParty::set_party_index(CQuickParty *this,int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return;
    }
    if (*(int *)(this + local_8 * 4) == -1) break;
    local_8 = local_8 + 1;
  }
  *(int *)(this + local_8 * 4) = param_1;
  return;
}
```
