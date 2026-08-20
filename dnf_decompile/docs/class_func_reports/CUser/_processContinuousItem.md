# _processContinuousItem

`_ZN5CUser22_processContinuousItemEjP14CStackableItem`

`CUser::_processContinuousItem(unsigned int, CStackableItem*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865ea62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865ea62  _ZN5CUser22_processContinuousItemEjP14CStackableItem
#           CUser::_processContinuousItem(unsigned int, CStackableItem*)
# range [0x0865ea62, 0x0865eb0b]
0865ea62 +0x00:  push   %ebp
0865ea63 +0x01:  mov    %esp,%ebp
0865ea65 +0x03:  sub    $0x28,%esp
0865ea68 +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0865ea6f +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0865ea74 +0x12:  mov    %eax,-0xc(%ebp)
0865ea77 +0x15:  cmpl   $0x0,0x10(%ebp)
0865ea7b +0x19:  je     0865eaf7 <+0x95>
0865ea7d +0x1b:  lea    -0xf(%ebp),%eax
0865ea80 +0x1e:  mov    0x10(%ebp),%edx
0865ea83 +0x21:  mov    %edx,0x4(%esp)
0865ea87 +0x25:  mov    %eax,(%esp)
0865ea8a +0x28:  call   086946d2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xf27>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xf27
0865ea8f +0x2d:  sub    $0x4,%esp
0865ea92 +0x30:  movzbl -0xd(%ebp),%eax
0865ea96 +0x34:  test   %al,%al
0865ea98 +0x36:  je     0865eaba <+0x58>
0865ea9a +0x38:  mov    -0xc(%ebp),%eax
0865ea9d +0x3b:  mov    %eax,0xc(%esp)
0865eaa1 +0x3f:  mov    0xc(%ebp),%eax
0865eaa4 +0x42:  mov    %eax,0x8(%esp)
0865eaa8 +0x46:  mov    0x10(%ebp),%eax
0865eaab +0x49:  mov    %eax,0x4(%esp)
0865eaaf +0x4d:  mov    0x8(%ebp),%eax
0865eab2 +0x50:  mov    %eax,(%esp)
0865eab5 +0x53:  call   0865eb0c <_ZN5CUser20_processCoolTimeItemEP14CStackableItemjj>  ; CUser::_processCoolTimeItem(CStackableItem*, unsigned int, unsigned int)
0865eaba +0x58:  lea    -0x12(%ebp),%eax
0865eabd +0x5b:  mov    0x10(%ebp),%edx
0865eac0 +0x5e:  mov    %edx,0x4(%esp)
0865eac4 +0x62:  mov    %eax,(%esp)
0865eac7 +0x65:  call   086946f4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xf49>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xf49
0865eacc +0x6a:  sub    $0x4,%esp
0865eacf +0x6d:  movzbl -0x10(%ebp),%eax
0865ead3 +0x71:  test   %al,%al
0865ead5 +0x73:  je     0865eaf7 <+0x95>
0865ead7 +0x75:  mov    -0xc(%ebp),%eax
0865eada +0x78:  mov    %eax,0xc(%esp)
0865eade +0x7c:  mov    0xc(%ebp),%eax
0865eae1 +0x7f:  mov    %eax,0x8(%esp)
0865eae5 +0x83:  mov    0x10(%ebp),%eax
0865eae8 +0x86:  mov    %eax,0x4(%esp)
0865eaec +0x8a:  mov    0x8(%ebp),%eax
0865eaef +0x8d:  mov    %eax,(%esp)
0865eaf2 +0x90:  call   0865ec0e <_ZN5CUser18_processEffectItemEP14CStackableItemjj>  ; CUser::_processEffectItem(CStackableItem*, unsigned int, unsigned int)
0865eaf7 +0x95:  mov    0xc(%ebp),%eax
0865eafa +0x98:  mov    %eax,0x4(%esp)
0865eafe +0x9c:  mov    0x8(%ebp),%eax
0865eb01 +0x9f:  mov    %eax,(%esp)
0865eb04 +0xa2:  call   08659b60 <_ZN5CUser33_processSpeicalContinuousTimeItemEj>  ; CUser::_processSpeicalContinuousTimeItem(unsigned int)
0865eb09 +0xa7:  leave
0865eb0a +0xa8:  ret
0865eb0b +0xa9:  nop
```

## 反编译 C

```c
// CUser::_processContinuousItem @ 0x865ea62

/* CUser::_processContinuousItem(unsigned int, CStackableItem*) */

void __thiscall CUser::_processContinuousItem(CUser *this,uint param_1,CStackableItem *param_2)

{
  uint uVar1;
  char local_14;
  char local_11;
  
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (param_2 != (CStackableItem *)0x0) {
    CStackableItem::GetCoolTimeOption();
    if (local_11 != '\0') {
      _processCoolTimeItem(this,param_2,param_1,uVar1);
    }
    CStackableItem::GetEffectItemOption();
    if (local_14 != '\0') {
      _processEffectItem(this,param_2,param_1,uVar1);
    }
  }
  _processSpeicalContinuousTimeItem(this,param_1);
  return;
}
```
