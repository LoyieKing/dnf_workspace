# NpcMovieData

`_ZN12NpcMovieDataC1Ev`

`NpcMovieData::NpcMovieData()`

| 类 | 地址 |
|---|---|
| `NpcMovieData` | `0x089fb78e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089fb78e  _ZN12NpcMovieDataC1Ev
#           NpcMovieData::NpcMovieData()
# range [0x089fb78e, 0x089fb7cf]
089fb78e +0x00:  push   %ebp
089fb78f +0x01:  mov    %esp,%ebp
089fb791 +0x03:  push   %esi
089fb792 +0x04:  push   %ebx
089fb793 +0x05:  sub    $0x10,%esp
089fb796 +0x08:  mov    0x8(%ebp),%eax
089fb799 +0x0b:  mov    %eax,(%esp)
089fb79c +0x0e:  call   08a0146e <_GLOBAL__I_g_npcScriptBaseDirectory+0xb00>  ; global constructors keyed to g_npcScriptBaseDirectory+0xb00
089fb7a1 +0x13:  mov    0x8(%ebp),%eax
089fb7a4 +0x16:  mov    %eax,(%esp)
089fb7a7 +0x19:  call   089fb7d0 <_ZN12NpcMovieData5clearEv>  ; NpcMovieData::clear()
089fb7ac +0x1e:  jmp    089fb7c9 <+0x3b>
089fb7ae +0x20:  mov    %edx,%ebx
089fb7b0 +0x22:  mov    %eax,%esi
089fb7b2 +0x24:  mov    0x8(%ebp),%eax
089fb7b5 +0x27:  mov    %eax,(%esp)
089fb7b8 +0x2a:  call   085828a0 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1032>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1032
089fb7bd +0x2f:  mov    %esi,%eax
089fb7bf +0x31:  mov    %ebx,%edx
089fb7c1 +0x33:  mov    %eax,(%esp)
089fb7c4 +0x36:  call   08ae3750 <_Unwind_Resume>
089fb7c9 +0x3b:  add    $0x10,%esp
089fb7cc +0x3e:  pop    %ebx
089fb7cd +0x3f:  pop    %esi
089fb7ce +0x40:  pop    %ebp
089fb7cf +0x41:  ret
```

## 反编译 C

```c
// NpcMovieData::NpcMovieData @ 0x89fb78e

/* NpcMovieData::NpcMovieData() */

void __thiscall NpcMovieData::NpcMovieData(NpcMovieData *this)

{
  std::deque<std::string,std::allocator<std::string>>::deque
            ((deque<std::string,std::allocator<std::string>> *)this);
                    /* try { // try from 089fb7a7 to 089fb7ab has its CatchHandler @ 089fb7ae */
  clear(this);
  return;
}
```
