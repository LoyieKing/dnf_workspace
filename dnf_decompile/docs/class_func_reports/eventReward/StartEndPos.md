# StartEndPos

`_ZNK11eventReward11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_i`

`eventReward::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&, int) const`

| 类 | 地址 |
|---|---|
| `eventReward` | `0x080f0d22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f0d22  _ZNK11eventReward11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_i
#           eventReward::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&, int) const
# range [0x080f0d22, 0x080f0d6d]
080f0d22 +0x00:  push   %ebp
080f0d23 +0x01:  mov    %esp,%ebp
080f0d25 +0x03:  sub    $0x28,%esp
080f0d28 +0x06:  mov    0x8(%ebp),%eax
080f0d2b +0x09:  lea    0x18(%eax),%edx
080f0d2e +0x0c:  mov    0x14(%ebp),%eax
080f0d31 +0x0f:  mov    %eax,0x10(%esp)
080f0d35 +0x13:  mov    0x10(%ebp),%eax
080f0d38 +0x16:  mov    %eax,0xc(%esp)
080f0d3c +0x1a:  mov    0x18(%ebp),%eax
080f0d3f +0x1d:  mov    %eax,0x8(%esp)
080f0d43 +0x21:  mov    0xc(%ebp),%eax
080f0d46 +0x24:  mov    %eax,0x4(%esp)
080f0d4a +0x28:  mov    %edx,(%esp)
080f0d4d +0x2b:  call   080f1096 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x118>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x118
080f0d52 +0x30:  xor    $0x1,%eax
080f0d55 +0x33:  test   %al,%al
080f0d57 +0x35:  je     080f0d6b <+0x49>
080f0d59 +0x37:  mov    0x10(%ebp),%eax
080f0d5c +0x3a:  movl   $0x0,(%eax)
080f0d62 +0x40:  mov    0x14(%ebp),%eax
080f0d65 +0x43:  movl   $0x0,(%eax)
080f0d6b +0x49:  leave
080f0d6c +0x4a:  ret
080f0d6d +0x4b:  nop
```

## 反编译 C

```c
// eventReward::StartEndPos @ 0x80f0d22

/* eventReward::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&, int) const */

void __thiscall
eventReward::StartEndPos
          (eventReward *this,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
          undefined4 param_5)

{
  char cVar1;
  
  cVar1 = CSlotBoundChecker::get_slot_bound
                    ((CSlotBoundChecker *)(this + 0x18),param_2,param_5,param_3,param_4);
  if (cVar1 != '\x01') {
    *param_3 = 0;
    *param_4 = 0;
  }
  return;
}
```
