# getStageType

`_ZN12advancealtar9StageType12getStageTypeERKSsRNS0_1TE`

`advancealtar::StageType::getStageType(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, advancealtar::StageType::T&)`

| 类 | 地址 |
|---|---|
| `advancealtar::StageType` | `0x088990ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088990ba  _ZN12advancealtar9StageType12getStageTypeERKSsRNS0_1TE
#           advancealtar::StageType::getStageType(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, advancealtar::StageType::T&)
# range [0x088990ba, 0x0889911d]
088990ba +0x00:  push   %ebp
088990bb +0x01:  mov    %esp,%ebp
088990bd +0x03:  sub    $0x18,%esp
088990c0 +0x06:  movl   $"normal",0x4(%esp)
088990c8 +0x0e:  mov    0x8(%ebp),%eax
088990cb +0x11:  mov    %eax,(%esp)
088990ce +0x14:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088990d3 +0x19:  test   %al,%al
088990d5 +0x1b:  je     088990e7 <+0x2d>
088990d7 +0x1d:  mov    0xc(%ebp),%eax
088990da +0x20:  movl   $0x0,(%eax)
088990e0 +0x26:  mov    $0x1,%eax
088990e5 +0x2b:  jmp    0889911c <+0x62>
088990e7 +0x2d:  movl   $"survival",0x4(%esp)
088990ef +0x35:  mov    0x8(%ebp),%eax
088990f2 +0x38:  mov    %eax,(%esp)
088990f5 +0x3b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088990fa +0x40:  test   %al,%al
088990fc +0x42:  je     0889910e <+0x54>
088990fe +0x44:  mov    0xc(%ebp),%eax
08899101 +0x47:  movl   $0x1,(%eax)
08899107 +0x4d:  mov    $0x1,%eax
0889910c +0x52:  jmp    0889911c <+0x62>
0889910e +0x54:  mov    0xc(%ebp),%eax
08899111 +0x57:  movl   $0x0,(%eax)
08899117 +0x5d:  mov    $0x1,%eax
0889911c +0x62:  leave
0889911d +0x63:  ret
```

## 反编译 C

```c
// advancealtar::StageType::getStageType @ 0x88990ba

/* advancealtar::StageType::getStageType(std::string const&, advancealtar::StageType::T&) */

undefined4 advancealtar::StageType::getStageType(string *param_1,T *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==((string *)param_1,"normal");
  if (bVar1) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    bVar1 = std::operator==((string *)param_1,"survival");
    if (bVar1) {
      *(undefined4 *)param_2 = 1;
    }
    else {
      *(undefined4 *)param_2 = 0;
    }
  }
  return 1;
}
```
