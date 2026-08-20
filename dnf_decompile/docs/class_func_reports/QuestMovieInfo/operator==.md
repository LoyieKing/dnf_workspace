# operator==

`_ZN14QuestMovieInfoeqERKS_`

`QuestMovieInfo::operator==(QuestMovieInfo const&)`

| 类 | 地址 |
|---|---|
| `QuestMovieInfo` | `0x0891748e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0891748e  _ZN14QuestMovieInfoeqERKS_
#           QuestMovieInfo::operator==(QuestMovieInfo const&)
# range [0x0891748e, 0x089174d3]
0891748e +0x00:  push   %ebp
0891748f +0x01:  mov    %esp,%ebp
08917491 +0x03:  sub    $0x18,%esp
08917494 +0x06:  mov    0xc(%ebp),%edx
08917497 +0x09:  mov    0x8(%ebp),%eax
0891749a +0x0c:  mov    %edx,0x4(%esp)
0891749e +0x10:  mov    %eax,(%esp)
089174a1 +0x13:  call   08171273 <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x138>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x138
089174a6 +0x18:  test   %al,%al
089174a8 +0x1a:  je     089174cd <+0x3f>
089174aa +0x1c:  mov    0xc(%ebp),%eax
089174ad +0x1f:  lea    0x4(%eax),%edx
089174b0 +0x22:  mov    0x8(%ebp),%eax
089174b3 +0x25:  add    $0x4,%eax
089174b6 +0x28:  mov    %edx,0x4(%esp)
089174ba +0x2c:  mov    %eax,(%esp)
089174bd +0x2f:  call   08171273 <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x138>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x138
089174c2 +0x34:  test   %al,%al
089174c4 +0x36:  je     089174cd <+0x3f>
089174c6 +0x38:  mov    $0x1,%eax
089174cb +0x3d:  jmp    089174d2 <+0x44>
089174cd +0x3f:  mov    $0x0,%eax
089174d2 +0x44:  leave
089174d3 +0x45:  ret
```

## 反编译 C

```c
// QuestMovieInfo::operator== @ 0x891748e

/* QuestMovieInfo::TEMPNAMEPLACEHOLDERVALUE(QuestMovieInfo const&) */

undefined4 __thiscall QuestMovieInfo::operator==(QuestMovieInfo *this,QuestMovieInfo *param_1)

{
  char cVar1;
  
  cVar1 = std::operator==((string *)this,(string *)param_1);
  if ((cVar1 != '\0') &&
     (cVar1 = std::operator==((string *)(this + 4),(string *)(param_1 + 4)), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}
```
