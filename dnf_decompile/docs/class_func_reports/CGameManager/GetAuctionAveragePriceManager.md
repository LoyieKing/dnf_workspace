# GetAuctionAveragePriceManager

`_ZN12CGameManager29GetAuctionAveragePriceManagerEv`

`CGameManager::GetAuctionAveragePriceManager()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08299028` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08299028  _ZN12CGameManager29GetAuctionAveragePriceManagerEv
#           CGameManager::GetAuctionAveragePriceManager()
# range [0x08299028, 0x082990a5]
08299028 +0x00:  push   %ebp
08299029 +0x01:  mov    %esp,%ebp
0829902b +0x03:  push   %edi
0829902c +0x04:  push   %esi
0829902d +0x05:  push   %ebx
0829902e +0x06:  sub    $0x1c,%esp
08299031 +0x09:  mov    0x8(%ebp),%eax
08299034 +0x0c:  mov    0x314(%eax),%eax
0829903a +0x12:  test   %eax,%eax
0829903c +0x14:  jne    08299095 <+0x6d>
0829903e +0x16:  movl   $&_ZSt7nothrow,0x4(%esp)
08299046 +0x1e:  movl   $0x18,(%esp)
0829904d +0x25:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
08299052 +0x2a:  mov    %eax,%ebx
08299054 +0x2c:  mov    %ebx,%eax
08299056 +0x2e:  test   %eax,%eax
08299058 +0x30:  je     0829908a <+0x62>
0829905a +0x32:  mov    %ebx,%eax
0829905c +0x34:  mov    %eax,(%esp)
0829905f +0x37:  call   082f5a94 <_ZN20CAuctionAveragePriceC1Ev>  ; CAuctionAveragePrice::CAuctionAveragePrice()
08299064 +0x3c:  jmp    08299086 <+0x5e>
08299066 +0x3e:  mov    %edx,%esi
08299068 +0x40:  mov    %eax,%edi
0829906a +0x42:  movl   $&_ZSt7nothrow,0x4(%esp)
08299072 +0x4a:  mov    %ebx,(%esp)
08299075 +0x4d:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829907a +0x52:  mov    %edi,%eax
0829907c +0x54:  mov    %esi,%edx
0829907e +0x56:  mov    %eax,(%esp)
08299081 +0x59:  call   08ae3750 <_Unwind_Resume>
08299086 +0x5e:  mov    %ebx,%eax
08299088 +0x60:  jmp    0829908c <+0x64>
0829908a +0x62:  mov    %ebx,%eax
0829908c +0x64:  mov    0x8(%ebp),%edx
0829908f +0x67:  mov    %eax,0x314(%edx)
08299095 +0x6d:  mov    0x8(%ebp),%eax
08299098 +0x70:  mov    0x314(%eax),%eax
0829909e +0x76:  add    $0x1c,%esp
082990a1 +0x79:  pop    %ebx
082990a2 +0x7a:  pop    %esi
082990a3 +0x7b:  pop    %edi
082990a4 +0x7c:  pop    %ebp
082990a5 +0x7d:  ret
```

## 反编译 C

```c
// CGameManager::GetAuctionAveragePriceManager @ 0x8299028

/* CGameManager::GetAuctionAveragePriceManager() */

undefined4 __thiscall CGameManager::GetAuctionAveragePriceManager(CGameManager *this)

{
  CAuctionAveragePrice *this_00;
  
  if (*(int *)(this + 0x314) == 0) {
    this_00 = operator_new(0x18,(nothrow_t *)&std::nothrow);
    if (this_00 != (CAuctionAveragePrice *)0x0) {
                    /* try { // try from 0829905f to 08299063 has its CatchHandler @ 08299066 */
      CAuctionAveragePrice::CAuctionAveragePrice(this_00);
    }
    *(CAuctionAveragePrice **)(this + 0x314) = this_00;
  }
  return *(undefined4 *)(this + 0x314);
}
```
