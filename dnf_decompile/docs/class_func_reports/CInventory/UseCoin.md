# UseCoin

`_ZN10CInventory7UseCoinE14eCoinSubReason`

`CInventory::UseCoin(eCoinSubReason)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084faa98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084faa98  _ZN10CInventory7UseCoinE14eCoinSubReason
#           CInventory::UseCoin(eCoinSubReason)
# range [0x084faa98, 0x084fac6f]
084faa98 +0x000:  push   %ebp
084faa99 +0x001:  mov    %esp,%ebp
084faa9b +0x003:  sub    $0x48,%esp
084faa9e +0x006:  mov    0x8(%ebp),%eax
084faaa1 +0x009:  mov    0x8(%eax),%eax
084faaa4 +0x00c:  test   %eax,%eax
084faaa6 +0x00e:  je     084fab30 <+0x98>
084faaac +0x014:  mov    0x8(%ebp),%eax
084faaaf +0x017:  mov    0x8(%eax),%eax
084faab2 +0x01a:  lea    -0x1(%eax),%edx
084faab5 +0x01d:  mov    0x8(%ebp),%eax
084faab8 +0x020:  mov    %edx,0x8(%eax)
084faabb +0x023:  mov    0x8(%ebp),%eax
084faabe +0x026:  mov    (%eax),%eax
084faac0 +0x028:  test   %eax,%eax
084faac2 +0x02a:  je     084faaf5 <+0x5d>
084faac4 +0x02c:  mov    0x8(%ebp),%eax
084faac7 +0x02f:  mov    0x8(%eax),%eax
084faaca +0x032:  mov    0x8(%ebp),%edx
084faacd +0x035:  mov    (%edx),%edx
084faacf +0x037:  lea    0x79700(%edx),%ecx
084faad5 +0x03d:  mov    0xc(%ebp),%edx
084faad8 +0x040:  mov    %edx,0xc(%esp)
084faadc +0x044:  movl   $0x1,0x8(%esp)
084faae4 +0x04c:  mov    %eax,0x4(%esp)
084faae8 +0x050:  mov    %ecx,(%esp)
084faaeb +0x053:  call   08683bc2 <_ZN15cUserHistoryLog7CoinSubEii14eCoinSubReason>  ; cUserHistoryLog::CoinSub(int, int, eCoinSubReason)
084faaf0 +0x058:  jmp    084fac68 <+0x1d0>
084faaf5 +0x05d:  movl   $0x5,0xc(%esp)
084faafd +0x065:  movl   $0x28e,0x8(%esp)
084fab05 +0x06d:  movl   $&_ZZN10CInventory7UseCoinE14eCoinSubReasonE19__PRETTY_FUNCTION__,0x4(%esp)
084fab0d +0x075:  lea    -0x38(%ebp),%eax
084fab10 +0x078:  mov    %eax,(%esp)
084fab13 +0x07b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084fab18 +0x080:  movl   $"History ERROR, m_pParent NULL, CoinSub",0x4(%esp)
084fab20 +0x088:  lea    -0x38(%ebp),%eax
084fab23 +0x08b:  mov    %eax,(%esp)
084fab26 +0x08e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084fab2b +0x093:  jmp    084fac68 <+0x1d0>
084fab30 +0x098:  mov    0x8(%ebp),%eax
084fab33 +0x09b:  mov    0x10(%eax),%eax
084fab36 +0x09e:  test   %eax,%eax
084fab38 +0x0a0:  je     084fabc2 <+0x12a>
084fab3e +0x0a6:  mov    0x8(%ebp),%eax
084fab41 +0x0a9:  mov    0x10(%eax),%eax
084fab44 +0x0ac:  lea    -0x1(%eax),%edx
084fab47 +0x0af:  mov    0x8(%ebp),%eax
084fab4a +0x0b2:  mov    %edx,0x10(%eax)
084fab4d +0x0b5:  mov    0x8(%ebp),%eax
084fab50 +0x0b8:  mov    (%eax),%eax
084fab52 +0x0ba:  test   %eax,%eax
084fab54 +0x0bc:  je     084fab87 <+0xef>
084fab56 +0x0be:  mov    0x8(%ebp),%eax
084fab59 +0x0c1:  mov    0x10(%eax),%eax
084fab5c +0x0c4:  mov    0x8(%ebp),%edx
084fab5f +0x0c7:  mov    (%edx),%edx
084fab61 +0x0c9:  lea    0x79700(%edx),%ecx
084fab67 +0x0cf:  mov    0xc(%ebp),%edx
084fab6a +0x0d2:  mov    %edx,0xc(%esp)
084fab6e +0x0d6:  movl   $0x1,0x8(%esp)
084fab76 +0x0de:  mov    %eax,0x4(%esp)
084fab7a +0x0e2:  mov    %ecx,(%esp)
084fab7d +0x0e5:  call   08683c8a <_ZN15cUserHistoryLog12EventCoinSubEii14eCoinSubReason>  ; cUserHistoryLog::EventCoinSub(int, int, eCoinSubReason)
084fab82 +0x0ea:  jmp    084fac68 <+0x1d0>
084fab87 +0x0ef:  movl   $0x5,0xc(%esp)
084fab8f +0x0f7:  movl   $0x29d,0x8(%esp)
084fab97 +0x0ff:  movl   $&_ZZN10CInventory7UseCoinE14eCoinSubReasonE19__PRETTY_FUNCTION__,0x4(%esp)
084fab9f +0x107:  lea    -0x28(%ebp),%eax
084faba2 +0x10a:  mov    %eax,(%esp)
084faba5 +0x10d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084fabaa +0x112:  movl   $"History ERROR, m_pParent NULL, EventCoinSub",0x4(%esp)
084fabb2 +0x11a:  lea    -0x28(%ebp),%eax
084fabb5 +0x11d:  mov    %eax,(%esp)
084fabb8 +0x120:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084fabbd +0x125:  jmp    084fac68 <+0x1d0>
084fabc2 +0x12a:  mov    0x8(%ebp),%eax
084fabc5 +0x12d:  mov    0xc(%eax),%eax
084fabc8 +0x130:  test   %eax,%eax
084fabca +0x132:  je     084fac4a <+0x1b2>
084fabcc +0x134:  mov    0x8(%ebp),%eax
084fabcf +0x137:  mov    0xc(%eax),%eax
084fabd2 +0x13a:  lea    -0x1(%eax),%edx
084fabd5 +0x13d:  mov    0x8(%ebp),%eax
084fabd8 +0x140:  mov    %edx,0xc(%eax)
084fabdb +0x143:  mov    0x8(%ebp),%eax
084fabde +0x146:  mov    (%eax),%eax
084fabe0 +0x148:  test   %eax,%eax
084fabe2 +0x14a:  je     084fac12 <+0x17a>
084fabe4 +0x14c:  mov    0x8(%ebp),%eax
084fabe7 +0x14f:  mov    0xc(%eax),%eax
084fabea +0x152:  mov    0x8(%ebp),%edx
084fabed +0x155:  mov    (%edx),%edx
084fabef +0x157:  lea    0x79700(%edx),%ecx
084fabf5 +0x15d:  mov    0xc(%ebp),%edx
084fabf8 +0x160:  mov    %edx,0xc(%esp)
084fabfc +0x164:  movl   $0x1,0x8(%esp)
084fac04 +0x16c:  mov    %eax,0x4(%esp)
084fac08 +0x170:  mov    %ecx,(%esp)
084fac0b +0x173:  call   08683c26 <_ZN15cUserHistoryLog10PayCoinSubEii14eCoinSubReason>  ; cUserHistoryLog::PayCoinSub(int, int, eCoinSubReason)
084fac10 +0x178:  jmp    084fac68 <+0x1d0>
084fac12 +0x17a:  movl   $0x5,0xc(%esp)
084fac1a +0x182:  movl   $0x2ad,0x8(%esp)
084fac22 +0x18a:  movl   $&_ZZN10CInventory7UseCoinE14eCoinSubReasonE19__PRETTY_FUNCTION__,0x4(%esp)
084fac2a +0x192:  lea    -0x18(%ebp),%eax
084fac2d +0x195:  mov    %eax,(%esp)
084fac30 +0x198:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084fac35 +0x19d:  movl   $"History ERROR, m_pParent NULL, PayCoinSub",0x4(%esp)
084fac3d +0x1a5:  lea    -0x18(%ebp),%eax
084fac40 +0x1a8:  mov    %eax,(%esp)
084fac43 +0x1ab:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084fac48 +0x1b0:  jmp    084fac68 <+0x1d0>
084fac4a +0x1b2:  mov    0x8(%ebp),%eax
084fac4d +0x1b5:  movl   $0x0,0x8(%eax)
084fac54 +0x1bc:  mov    0x8(%ebp),%eax
084fac57 +0x1bf:  movl   $0x0,0xc(%eax)
084fac5e +0x1c6:  mov    0x8(%ebp),%eax
084fac61 +0x1c9:  movl   $0x0,0x10(%eax)
084fac68 +0x1d0:  mov    0x8(%ebp),%eax
084fac6b +0x1d3:  mov    0x8(%eax),%eax
084fac6e +0x1d6:  leave
084fac6f +0x1d7:  ret
```

## 反编译 C

```c
// CInventory::UseCoin @ 0x84faa98

/* CInventory::UseCoin(eCoinSubReason) */

undefined4 __thiscall CInventory::UseCoin(CInventory *this,undefined4 param_2)

{
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 8) == 0) {
    if (*(int *)(this + 0x10) == 0) {
      if (*(int *)(this + 0xc) == 0) {
        *(undefined4 *)(this + 8) = 0;
        *(undefined4 *)(this + 0xc) = 0;
        *(undefined4 *)(this + 0x10) = 0;
      }
      else {
        *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
        if (*(int *)this == 0) {
          cMyTrace::cMyTrace(local_1c,"int CInventory::UseCoin(eCoinSubReason)",0x2ad,5);
          cMyTrace::operator()(local_1c,"History ERROR, m_pParent NULL, PayCoinSub");
        }
        else {
          cUserHistoryLog::PayCoinSub
                    ((cUserHistoryLog *)(*(int *)this + 0x79700),*(undefined4 *)(this + 0xc),1,
                     param_2);
        }
      }
    }
    else {
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
      if (*(int *)this == 0) {
        cMyTrace::cMyTrace(local_2c,"int CInventory::UseCoin(eCoinSubReason)",0x29d,5);
        cMyTrace::operator()(local_2c,"History ERROR, m_pParent NULL, EventCoinSub");
      }
      else {
        cUserHistoryLog::EventCoinSub
                  ((cUserHistoryLog *)(*(int *)this + 0x79700),*(undefined4 *)(this + 0x10),1,
                   param_2);
      }
    }
  }
  else {
    *(int *)(this + 8) = *(int *)(this + 8) + -1;
    if (*(int *)this == 0) {
      cMyTrace::cMyTrace(local_3c,"int CInventory::UseCoin(eCoinSubReason)",0x28e,5);
      cMyTrace::operator()(local_3c,"History ERROR, m_pParent NULL, CoinSub");
    }
    else {
      cUserHistoryLog::CoinSub
                ((cUserHistoryLog *)(*(int *)this + 0x79700),*(undefined4 *)(this + 8),1,param_2);
    }
  }
  return *(undefined4 *)(this + 8);
}
```
