# _reportIncurrectReport

`_ZN8WongWork13CHackAnalyzer22_reportIncurrectReportEv`

`WongWork::CHackAnalyzer::_reportIncurrectReport()`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f8032` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f8032  _ZN8WongWork13CHackAnalyzer22_reportIncurrectReportEv
#           WongWork::CHackAnalyzer::_reportIncurrectReport()
# range [0x080f8032, 0x080f807f]
080f8032 +0x00:  push   %ebp
080f8033 +0x01:  mov    %esp,%ebp
080f8035 +0x03:  sub    $0x18,%esp
080f8038 +0x06:  movl   $0x40,0x4(%esp)
080f8040 +0x0e:  mov    0x8(%ebp),%eax
080f8043 +0x11:  mov    %eax,(%esp)
080f8046 +0x14:  call   080f9876 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x82>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x82
080f804b +0x19:  test   %al,%al
080f804d +0x1b:  jne    080f807d <+0x4b>
080f804f +0x1d:  mov    0x8(%ebp),%eax
080f8052 +0x20:  mov    (%eax),%eax
080f8054 +0x22:  mov    %eax,(%esp)
080f8057 +0x25:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
080f805c +0x2a:  mov    %eax,0xc(%esp)
080f8060 +0x2e:  movl   $0x3c4,0x8(%esp)
080f8068 +0x36:  movl   $0x40,0x4(%esp)
080f8070 +0x3e:  mov    0x8(%ebp),%eax
080f8073 +0x41:  mov    %eax,(%esp)
080f8076 +0x44:  call   080f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>  ; WongWork::CHackAnalyzer::_addHackInfo(ENUM_REPORT_4_HACK_FLAG, WongWork::ENUM_HACKTYPE, int)
080f807b +0x49:  jmp    080f807e <+0x4c>
080f807d +0x4b:  nop
080f807e +0x4c:  leave
080f807f +0x4d:  ret
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::_reportIncurrectReport @ 0x80f8032

/* WongWork::CHackAnalyzer::_reportIncurrectReport() */

void __thiscall WongWork::CHackAnalyzer::_reportIncurrectReport(CHackAnalyzer *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = checkCollectedHack(this,0x40);
  if (cVar1 == '\0') {
    uVar2 = CUser::get_state(*(CUser **)this);
    _addHackInfo(this,0x40,0x3c4,uVar2);
  }
  return;
}
```
