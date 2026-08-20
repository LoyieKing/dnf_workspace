# delete_party_index

`_ZN10QuickParty11CQuickParty18delete_party_indexEi`

`QuickParty::CQuickParty::delete_party_index(int)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x0826980e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826980e  _ZN10QuickParty11CQuickParty18delete_party_indexEi
#           QuickParty::CQuickParty::delete_party_index(int)
# range [0x0826980e, 0x08269855]
0826980e +0x00:  push   %ebp
0826980f +0x01:  mov    %esp,%ebp
08269811 +0x03:  sub    $0x10,%esp
08269814 +0x06:  movl   $0x0,-0x4(%ebp)
0826981b +0x0d:  jmp    08269843 <+0x35>
0826981d +0x0f:  mov    -0x4(%ebp),%edx
08269820 +0x12:  mov    0x8(%ebp),%eax
08269823 +0x15:  mov    (%eax,%edx,4),%eax
08269826 +0x18:  cmp    0xc(%ebp),%eax
08269829 +0x1b:  jne    0826983f <+0x31>
0826982b +0x1d:  mov    -0x4(%ebp),%edx
0826982e +0x20:  mov    0x8(%ebp),%eax
08269831 +0x23:  movl   $0xffffffff,(%eax,%edx,4)
08269838 +0x2a:  mov    $0x1,%eax
0826983d +0x2f:  jmp    08269853 <+0x45>
0826983f +0x31:  addl   $0x1,-0x4(%ebp)
08269843 +0x35:  cmpl   $0x3,-0x4(%ebp)
08269847 +0x39:  setle  %al
0826984a +0x3c:  test   %al,%al
0826984c +0x3e:  jne    0826981d <+0xf>
0826984e +0x40:  mov    $0x0,%eax
08269853 +0x45:  leave
08269854 +0x46:  ret
08269855 +0x47:  nop
```

## 反编译 C

```c
// QuickParty::CQuickParty::delete_party_index @ 0x826980e

/* QuickParty::CQuickParty::delete_party_index(int) */

undefined4 __thiscall QuickParty::CQuickParty::delete_party_index(CQuickParty *this,int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 0;
    }
    if (*(int *)(this + local_8 * 4) == param_1) break;
    local_8 = local_8 + 1;
  }
  *(undefined4 *)(this + local_8 * 4) = 0xffffffff;
  return 1;
}
```
