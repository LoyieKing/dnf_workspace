# generateRandomItem

`_ZN8WongWork12CClearReward18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE`

`WongWork::CClearReward::generateRandomItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::CClearReward` | `0x0853873a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0853873a  _ZN8WongWork12CClearReward18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE
#           WongWork::CClearReward::generateRandomItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)
# range [0x0853873a, 0x085387bf]
0853873a +0x00:  push   %ebp
0853873b +0x01:  mov    %esp,%ebp
0853873d +0x03:  sub    $0x28,%esp
08538740 +0x06:  mov    0x8(%ebp),%eax
08538743 +0x09:  add    $0x8,%eax
08538746 +0x0c:  movl   $0x2710,0x8(%esp)
0853874e +0x14:  movl   $0x1,0x4(%esp)
08538756 +0x1c:  mov    %eax,(%esp)
08538759 +0x1f:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
0853875e +0x24:  mov    0x8(%ebp),%edx
08538761 +0x27:  mov    0xa8(%edx),%edx
08538767 +0x2d:  cmp    %edx,%eax
08538769 +0x2f:  setl   %al
0853876c +0x32:  test   %al,%al
0853876e +0x34:  je     085387a1 <+0x67>
08538770 +0x36:  mov    0xc(%ebp),%eax
08538773 +0x39:  mov    0x4(%eax),%edx
08538776 +0x3c:  mov    0xc(%ebp),%eax
08538779 +0x3f:  mov    (%eax),%eax
0853877b +0x41:  mov    0xc(%ebp),%ecx
0853877e +0x44:  add    $0x34,%ecx
08538781 +0x47:  mov    %edx,0x10(%esp)
08538785 +0x4b:  mov    0x10(%ebp),%edx
08538788 +0x4e:  mov    %edx,0xc(%esp)
0853878c +0x52:  mov    %eax,0x8(%esp)
08538790 +0x56:  mov    %ecx,0x4(%esp)
08538794 +0x5a:  mov    0x8(%ebp),%eax
08538797 +0x5d:  mov    %eax,(%esp)
0853879a +0x60:  call   085387c0 <_ZN8WongWork12CClearReward19_generateRandomItemERKNS_26stGenerateRefClearReward_tEiRNS_18stGenerateResult_tEf>  ; WongWork::CClearReward::_generateRandomItem(WongWork::stGenerateRefClearReward_t const&, int, WongWork::stGenerateResult_t&, float)
0853879f +0x65:  jmp    085387bd <+0x83>
085387a1 +0x67:  mov    0xc(%ebp),%eax
085387a4 +0x6a:  lea    0x34(%eax),%edx
085387a7 +0x6d:  mov    0x10(%ebp),%eax
085387aa +0x70:  mov    %eax,0x8(%esp)
085387ae +0x74:  mov    %edx,0x4(%esp)
085387b2 +0x78:  mov    0x8(%ebp),%eax
085387b5 +0x7b:  mov    %eax,(%esp)
085387b8 +0x7e:  call   08538bf8 <_ZN8WongWork12CClearReward21_generateSpecificItemERKNS_26stGenerateRefClearReward_tERNS_18stGenerateResult_tE>  ; WongWork::CClearReward::_generateSpecificItem(WongWork::stGenerateRefClearReward_t const&, WongWork::stGenerateResult_t&)
085387bd +0x83:  leave
085387be +0x84:  ret
085387bf +0x85:  nop
```

## 反编译 C

```c
// WongWork::CClearReward::generateRandomItem @ 0x853873a

/* WongWork::CClearReward::generateRandomItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CClearReward::generateRandomItem
          (CClearReward *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  int iVar1;
  
  iVar1 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),1,10000);
  if (iVar1 < *(int *)(this + 0xa8)) {
    _generateRandomItem(this,(stGenerateRefClearReward_t *)(param_1 + 0x34),*(int *)param_1,param_2,
                        *(float *)(param_1 + 4));
  }
  else {
    _generateSpecificItem(this,(stGenerateRefClearReward_t *)(param_1 + 0x34),param_2);
  }
  return;
}
```
