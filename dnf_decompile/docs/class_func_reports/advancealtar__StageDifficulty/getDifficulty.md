# getDifficulty

`_ZN12advancealtar15StageDifficulty13getDifficultyERKSsRNS0_1TE`

`advancealtar::StageDifficulty::getDifficulty(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, advancealtar::StageDifficulty::T&)`

| 类 | 地址 |
|---|---|
| `advancealtar::StageDifficulty` | `0x08899038` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899038  _ZN12advancealtar15StageDifficulty13getDifficultyERKSsRNS0_1TE
#           advancealtar::StageDifficulty::getDifficulty(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, advancealtar::StageDifficulty::T&)
# range [0x08899038, 0x088990b9]
08899038 +0x00:  push   %ebp
08899039 +0x01:  mov    %esp,%ebp
0889903b +0x03:  sub    $0x18,%esp
0889903e +0x06:  movl   $"easy",0x4(%esp)
08899046 +0x0e:  mov    0x8(%ebp),%eax
08899049 +0x11:  mov    %eax,(%esp)
0889904c +0x14:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08899051 +0x19:  test   %al,%al
08899053 +0x1b:  je     08899065 <+0x2d>
08899055 +0x1d:  mov    0xc(%ebp),%eax
08899058 +0x20:  movl   $0x0,(%eax)
0889905e +0x26:  mov    $0x1,%eax
08899063 +0x2b:  jmp    088990b8 <+0x80>
08899065 +0x2d:  movl   $"medium",0x4(%esp)
0889906d +0x35:  mov    0x8(%ebp),%eax
08899070 +0x38:  mov    %eax,(%esp)
08899073 +0x3b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08899078 +0x40:  test   %al,%al
0889907a +0x42:  je     0889908c <+0x54>
0889907c +0x44:  mov    0xc(%ebp),%eax
0889907f +0x47:  movl   $0x1,(%eax)
08899085 +0x4d:  mov    $0x1,%eax
0889908a +0x52:  jmp    088990b8 <+0x80>
0889908c +0x54:  movl   $"hard",0x4(%esp)
08899094 +0x5c:  mov    0x8(%ebp),%eax
08899097 +0x5f:  mov    %eax,(%esp)
0889909a +0x62:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889909f +0x67:  test   %al,%al
088990a1 +0x69:  je     088990b3 <+0x7b>
088990a3 +0x6b:  mov    0xc(%ebp),%eax
088990a6 +0x6e:  movl   $0x2,(%eax)
088990ac +0x74:  mov    $0x1,%eax
088990b1 +0x79:  jmp    088990b8 <+0x80>
088990b3 +0x7b:  mov    $0x0,%eax
088990b8 +0x80:  leave
088990b9 +0x81:  ret
```

## 反编译 C

```c
// advancealtar::StageDifficulty::getDifficulty @ 0x8899038

/* advancealtar::StageDifficulty::getDifficulty(std::string const&,
   advancealtar::StageDifficulty::T&) */

undefined4 advancealtar::StageDifficulty::getDifficulty(string *param_1,T *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = std::operator==((string *)param_1,"easy");
  if (bVar1) {
    *(undefined4 *)param_2 = 0;
    uVar2 = 1;
  }
  else {
    bVar1 = std::operator==((string *)param_1,"medium");
    if (bVar1) {
      *(undefined4 *)param_2 = 1;
      uVar2 = 1;
    }
    else {
      bVar1 = std::operator==((string *)param_1,"hard");
      if (bVar1) {
        *(undefined4 *)param_2 = 2;
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
```
