# startPremium

`_ZN8WongWork12CUserPremium12startPremiumEib`

`WongWork::CUserPremium::startPremium(int, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CUserPremium` | `0x086adc6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086adc6a  _ZN8WongWork12CUserPremium12startPremiumEib
#           WongWork::CUserPremium::startPremium(int, bool)
# range [0x086adc6a, 0x086add9b]
086adc6a +0x000:  push   %ebp
086adc6b +0x001:  mov    %esp,%ebp
086adc6d +0x003:  sub    $0x38,%esp
086adc70 +0x006:  mov    0x10(%ebp),%eax
086adc73 +0x009:  mov    %al,-0x1c(%ebp)
086adc76 +0x00c:  movzbl -0x1c(%ebp),%eax
086adc7a +0x010:  xor    $0x1,%eax
086adc7d +0x013:  test   %al,%al
086adc7f +0x015:  je     086adca8 <+0x3e>
086adc81 +0x017:  mov    0xc(%ebp),%edx
086adc84 +0x01a:  mov    0x8(%ebp),%ecx
086adc87 +0x01d:  mov    %edx,%eax
086adc89 +0x01f:  shl    $0x2,%eax
086adc8c +0x022:  add    %edx,%eax
086adc8e +0x024:  shl    $0x2,%eax
086adc91 +0x027:  lea    (%ecx,%eax,1),%eax
086adc94 +0x02a:  add    $0x10,%eax
086adc97 +0x02d:  mov    (%eax),%eax
086adc99 +0x02f:  cmp    $0x2,%eax
086adc9c +0x032:  je     086adca8 <+0x3e>
086adc9e +0x034:  mov    $0x0,%eax
086adca3 +0x039:  jmp    086add9a <+0x130>
086adca8 +0x03e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086adcaf +0x045:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086adcb4 +0x04a:  mov    %eax,-0xc(%ebp)
086adcb7 +0x04d:  mov    0xc(%ebp),%edx
086adcba +0x050:  mov    %edx,%eax
086adcbc +0x052:  shl    $0x3,%eax
086adcbf +0x055:  add    %edx,%eax
086adcc1 +0x057:  shl    $0x5,%eax
086adcc4 +0x05a:  mov    &g_SPremiumInfo+0x4(%eax),%eax
086adcca +0x060:  test   %eax,%eax
086adccc +0x062:  je     086add35 <+0xcb>
086adcce +0x064:  mov    0xc(%ebp),%edx
086adcd1 +0x067:  mov    0x8(%ebp),%ecx
086adcd4 +0x06a:  mov    %edx,%eax
086adcd6 +0x06c:  shl    $0x2,%eax
086adcd9 +0x06f:  add    %edx,%eax
086adcdb +0x071:  shl    $0x2,%eax
086adcde +0x074:  lea    (%ecx,%eax,1),%eax
086adce1 +0x077:  add    $0x4,%eax
086adce4 +0x07a:  mov    (%eax),%eax
086adce6 +0x07c:  cmp    -0xc(%ebp),%eax
086adce9 +0x07f:  jle    086add11 <+0xa7>
086adceb +0x081:  mov    0xc(%ebp),%edx
086adcee +0x084:  mov    0x8(%ebp),%ecx
086adcf1 +0x087:  mov    %edx,%eax
086adcf3 +0x089:  shl    $0x2,%eax
086adcf6 +0x08c:  add    %edx,%eax
086adcf8 +0x08e:  shl    $0x2,%eax
086adcfb +0x091:  lea    (%ecx,%eax,1),%eax
086adcfe +0x094:  add    $0x10,%eax
086add01 +0x097:  movl   $0x2,(%eax)
086add07 +0x09d:  mov    $0x0,%eax
086add0c +0x0a2:  jmp    086add9a <+0x130>
086add11 +0x0a7:  mov    0xc(%ebp),%edx
086add14 +0x0aa:  mov    0x8(%ebp),%ecx
086add17 +0x0ad:  mov    %edx,%eax
086add19 +0x0af:  shl    $0x2,%eax
086add1c +0x0b2:  add    %edx,%eax
086add1e +0x0b4:  shl    $0x2,%eax
086add21 +0x0b7:  lea    (%ecx,%eax,1),%eax
086add24 +0x0ba:  add    $0x8,%eax
086add27 +0x0bd:  mov    (%eax),%eax
086add29 +0x0bf:  cmp    -0xc(%ebp),%eax
086add2c +0x0c2:  jg     086add35 <+0xcb>
086add2e +0x0c4:  mov    $0x0,%eax
086add33 +0x0c9:  jmp    086add9a <+0x130>
086add35 +0x0cb:  mov    0xc(%ebp),%edx
086add38 +0x0ce:  mov    %edx,%eax
086add3a +0x0d0:  shl    $0x3,%eax
086add3d +0x0d3:  add    %edx,%eax
086add3f +0x0d5:  shl    $0x5,%eax
086add42 +0x0d8:  mov    &g_SPremiumInfo(%eax),%eax
086add48 +0x0de:  cmp    $0x1,%eax
086add4b +0x0e1:  jne    086add64 <+0xfa>
086add4d +0x0e3:  mov    0x8(%ebp),%eax
086add50 +0x0e6:  mov    0x848(%eax),%eax
086add56 +0x0ec:  lea    0x1(%eax),%edx
086add59 +0x0ef:  mov    0x8(%ebp),%eax
086add5c +0x0f2:  mov    %edx,0x848(%eax)
086add62 +0x0f8:  jmp    086add79 <+0x10f>
086add64 +0x0fa:  mov    0x8(%ebp),%eax
086add67 +0x0fd:  mov    0x84c(%eax),%eax
086add6d +0x103:  lea    0x1(%eax),%edx
086add70 +0x106:  mov    0x8(%ebp),%eax
086add73 +0x109:  mov    %edx,0x84c(%eax)
086add79 +0x10f:  mov    0xc(%ebp),%edx
086add7c +0x112:  mov    0x8(%ebp),%ecx
086add7f +0x115:  mov    %edx,%eax
086add81 +0x117:  shl    $0x2,%eax
086add84 +0x11a:  add    %edx,%eax
086add86 +0x11c:  shl    $0x2,%eax
086add89 +0x11f:  lea    (%ecx,%eax,1),%eax
086add8c +0x122:  add    $0x10,%eax
086add8f +0x125:  movl   $0x1,(%eax)
086add95 +0x12b:  mov    $0x1,%eax
086add9a +0x130:  leave
086add9b +0x131:  ret
```

## 反编译 C

```c
// WongWork::CUserPremium::startPremium @ 0x86adc6a

/* WongWork::CUserPremium::startPremium(int, bool) */

undefined4 __thiscall
WongWork::CUserPremium::startPremium(CUserPremium *this,int param_1,bool param_2)

{
  int iVar1;
  
  if ((!param_2) && (*(int *)(this + param_1 * 0x14 + 0x10) != 2)) {
    return 0;
  }
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (*(int *)(g_SPremiumInfo + param_1 * 0x120 + 4) != 0) {
    if (iVar1 < *(int *)(this + param_1 * 0x14 + 4)) {
      *(undefined4 *)(this + param_1 * 0x14 + 0x10) = 2;
      return 0;
    }
    if (*(int *)(this + param_1 * 0x14 + 8) <= iVar1) {
      return 0;
    }
  }
  if (*(int *)(g_SPremiumInfo + param_1 * 0x120) == 1) {
    *(int *)(this + 0x848) = *(int *)(this + 0x848) + 1;
  }
  else {
    *(int *)(this + 0x84c) = *(int *)(this + 0x84c) + 1;
  }
  *(undefined4 *)(this + param_1 * 0x14 + 0x10) = 1;
  return 1;
}
```
