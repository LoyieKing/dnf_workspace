# beginCollectHackInfo

`_ZN8WongWork13CHackAnalyzer20beginCollectHackInfoEP5CUser`

`WongWork::CHackAnalyzer::beginCollectHackInfo(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f79e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f79e8  _ZN8WongWork13CHackAnalyzer20beginCollectHackInfoEP5CUser
#           WongWork::CHackAnalyzer::beginCollectHackInfo(CUser*)
# range [0x080f79e8, 0x080f7a21]
080f79e8 +0x00:  push   %ebp
080f79e9 +0x01:  mov    %esp,%ebp
080f79eb +0x03:  sub    $0x18,%esp
080f79ee +0x06:  mov    0x8(%ebp),%eax
080f79f1 +0x09:  mov    0xc(%ebp),%edx
080f79f4 +0x0c:  mov    %edx,(%eax)
080f79f6 +0x0e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
080f79fd +0x15:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
080f7a02 +0x1a:  mov    0x8(%ebp),%edx
080f7a05 +0x1d:  mov    %eax,0x20(%edx)
080f7a08 +0x20:  mov    0x8(%ebp),%eax
080f7a0b +0x23:  movl   $0x0,0x24(%eax)
080f7a12 +0x2a:  mov    0x8(%ebp),%eax
080f7a15 +0x2d:  add    $0x14,%eax
080f7a18 +0x30:  mov    %eax,(%esp)
080f7a1b +0x33:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
080f7a20 +0x38:  leave
080f7a21 +0x39:  ret
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::beginCollectHackInfo @ 0x80f79e8

/* WongWork::CHackAnalyzer::beginCollectHackInfo(CUser*) */

void __thiscall WongWork::CHackAnalyzer::beginCollectHackInfo(CHackAnalyzer *this,CUser *param_1)

{
  undefined4 uVar1;
  
  *(CUser **)this = param_1;
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x14));
  return;
}
```
