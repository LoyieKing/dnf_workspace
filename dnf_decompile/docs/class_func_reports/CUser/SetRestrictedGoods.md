# SetRestrictedGoods

`_ZN5CUser18SetRestrictedGoodsEi`

`CUser::SetRestrictedGoods(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864d84e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864d84e  _ZN5CUser18SetRestrictedGoodsEi
#           CUser::SetRestrictedGoods(int)
# range [0x0864d84e, 0x0864d877]
0864d84e +0x00:  push   %ebp
0864d84f +0x01:  mov    %esp,%ebp
0864d851 +0x03:  sub    $0x18,%esp
0864d854 +0x06:  mov    0xc(%ebp),%eax
0864d857 +0x09:  test   %eax,%eax
0864d859 +0x0b:  je     0864d875 <+0x27>
0864d85b +0x0d:  mov    0x8(%ebp),%eax
0864d85e +0x10:  lea    0x711ec(%eax),%edx
0864d864 +0x16:  lea    0xc(%ebp),%eax
0864d867 +0x19:  mov    %eax,0x4(%esp)
0864d86b +0x1d:  mov    %edx,(%esp)
0864d86e +0x20:  call   0826cbae <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x147c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x147c
0864d873 +0x25:  jmp    0864d876 <+0x28>
0864d875 +0x27:  nop
0864d876 +0x28:  leave
0864d877 +0x29:  ret
```

## 反编译 C

```c
// CUser::SetRestrictedGoods @ 0x864d84e

/* CUser::SetRestrictedGoods(int) */

void __thiscall CUser::SetRestrictedGoods(CUser *this,int param_1)

{
  if (param_1 != 0) {
    std::list<int,std::allocator<int>>::push_back
              ((list<int,std::allocator<int>> *)(this + 0x711ec),&param_1);
  }
  return;
}
```
