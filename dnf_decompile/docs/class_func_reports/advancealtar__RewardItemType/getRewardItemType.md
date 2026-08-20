# getRewardItemType

`_ZN12advancealtar14RewardItemType17getRewardItemTypeERKSsRNS0_1TE`

`advancealtar::RewardItemType::getRewardItemType(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, advancealtar::RewardItemType::T&)`

| 类 | 地址 |
|---|---|
| `advancealtar::RewardItemType` | `0x0889acaa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889acaa  _ZN12advancealtar14RewardItemType17getRewardItemTypeERKSsRNS0_1TE
#           advancealtar::RewardItemType::getRewardItemType(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, advancealtar::RewardItemType::T&)
# range [0x0889acaa, 0x0889ad05]
0889acaa +0x00:  push   %ebp
0889acab +0x01:  mov    %esp,%ebp
0889acad +0x03:  sub    $0x18,%esp
0889acb0 +0x06:  movl   $"normal",0x4(%esp)
0889acb8 +0x0e:  mov    0x8(%ebp),%eax
0889acbb +0x11:  mov    %eax,(%esp)
0889acbe +0x14:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889acc3 +0x19:  test   %al,%al
0889acc5 +0x1b:  je     0889acd7 <+0x2d>
0889acc7 +0x1d:  mov    0xc(%ebp),%eax
0889acca +0x20:  movl   $0x0,(%eax)
0889acd0 +0x26:  mov    $0x1,%eax
0889acd5 +0x2b:  jmp    0889ad03 <+0x59>
0889acd7 +0x2d:  movl   $"event",0x4(%esp)
0889acdf +0x35:  mov    0x8(%ebp),%eax
0889ace2 +0x38:  mov    %eax,(%esp)
0889ace5 +0x3b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889acea +0x40:  test   %al,%al
0889acec +0x42:  je     0889acfe <+0x54>
0889acee +0x44:  mov    0xc(%ebp),%eax
0889acf1 +0x47:  movl   $0x1,(%eax)
0889acf7 +0x4d:  mov    $0x1,%eax
0889acfc +0x52:  jmp    0889ad03 <+0x59>
0889acfe +0x54:  mov    $0x0,%eax
0889ad03 +0x59:  leave
0889ad04 +0x5a:  ret
0889ad05 +0x5b:  nop
```

## 反编译 C

```c
// advancealtar::RewardItemType::getRewardItemType @ 0x889acaa

/* advancealtar::RewardItemType::getRewardItemType(std::string const&,
   advancealtar::RewardItemType::T&) */

undefined4 advancealtar::RewardItemType::getRewardItemType(string *param_1,T *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = std::operator==((string *)param_1,"normal");
  if (bVar1) {
    *(undefined4 *)param_2 = 0;
    uVar2 = 1;
  }
  else {
    bVar1 = std::operator==((string *)param_1,"event");
    if (bVar1) {
      *(undefined4 *)param_2 = 1;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
