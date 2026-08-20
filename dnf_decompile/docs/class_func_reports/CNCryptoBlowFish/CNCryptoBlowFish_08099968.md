# CNCryptoBlowFish

`_ZN16CNCryptoBlowFishC1ERKS_`

`CNCryptoBlowFish::CNCryptoBlowFish(CNCryptoBlowFish const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoBlowFish` | `0x08099968` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099968  _ZN16CNCryptoBlowFishC1ERKS_
#           CNCryptoBlowFish::CNCryptoBlowFish(CNCryptoBlowFish const&)
# range [0x08099968, 0x0809998b]
08099968 +0x00:  push   %ebp
08099969 +0x01:  mov    %esp,%ebp
0809996b +0x03:  sub    $0x18,%esp
0809996e +0x06:  mov    0x8(%ebp),%eax
08099971 +0x09:  movl   $0x2,0x4(%esp)
08099979 +0x11:  mov    %eax,(%esp)
0809997c +0x14:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
08099981 +0x19:  mov    0x8(%ebp),%eax
08099984 +0x1c:  movl   $&_ZTV16CNCryptoBlowFish+0x8,(%eax)
0809998a +0x22:  leave
0809998b +0x23:  ret
```

## 反编译 C

```c
// CNCryptoBlowFish::CNCryptoBlowFish @ 0x8099968

/* CNCryptoBlowFish::CNCryptoBlowFish(CNCryptoBlowFish const&) */

void __thiscall CNCryptoBlowFish::CNCryptoBlowFish(CNCryptoBlowFish *this,CNCryptoBlowFish *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,2);
  *(undefined ***)this = &PTR__CNCryptoBlowFish_08b136e8;
  return;
}
```
