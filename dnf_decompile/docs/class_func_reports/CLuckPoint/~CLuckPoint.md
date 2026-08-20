# ~CLuckPoint

`_ZN10CLuckPointD1Ev`

`CLuckPoint::~CLuckPoint()`

| 类 | 地址 |
|---|---|
| `CLuckPoint` | `0x085508ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085508ec  _ZN10CLuckPointD1Ev
#           CLuckPoint::~CLuckPoint()
# range [0x085508ec, 0x08550931]
085508ec +0x00:  push   %ebp
085508ed +0x01:  mov    %esp,%ebp
085508ef +0x03:  push   %esi
085508f0 +0x04:  push   %ebx
085508f1 +0x05:  sub    $0x10,%esp
085508f4 +0x08:  mov    0x8(%ebp),%eax
085508f7 +0x0b:  add    $0xc,%eax
085508fa +0x0e:  mov    %eax,(%esp)
085508fd +0x11:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08550902 +0x16:  jmp    0855091f <+0x33>
08550904 +0x18:  mov    %edx,%ebx
08550906 +0x1a:  mov    %eax,%esi
08550908 +0x1c:  mov    0x8(%ebp),%eax
0855090b +0x1f:  mov    %eax,(%esp)
0855090e +0x22:  call   082f1b32 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18b6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18b6
08550913 +0x27:  mov    %esi,%eax
08550915 +0x29:  mov    %ebx,%edx
08550917 +0x2b:  mov    %eax,(%esp)
0855091a +0x2e:  call   08ae3750 <_Unwind_Resume>
0855091f +0x33:  mov    0x8(%ebp),%eax
08550922 +0x36:  mov    %eax,(%esp)
08550925 +0x39:  call   082f1b32 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18b6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18b6
0855092a +0x3e:  add    $0x10,%esp
0855092d +0x41:  pop    %ebx
0855092e +0x42:  pop    %esi
0855092f +0x43:  pop    %ebp
08550930 +0x44:  ret
08550931 +0x45:  nop
```

## 反编译 C

```c
// CLuckPoint::~CLuckPoint @ 0x85508ec

/* CLuckPoint::~CLuckPoint() */

void __thiscall CLuckPoint::~CLuckPoint(CLuckPoint *this)

{
                    /* try { // try from 085508fd to 08550901 has its CatchHandler @ 08550904 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xc));
  std::vector<CUser*,std::allocator<CUser*>>::~vector((vector<CUser*,std::allocator<CUser*>> *)this)
  ;
  return;
}
```
