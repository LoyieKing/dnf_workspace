# getAvatarList

`_ZN14AvatarRoulette13getAvatarListERb17ENUM_CHARACTERJOBRSt6vectorIS2_ISt4pairImiESaIS4_EESaIS6_EE`

`AvatarRoulette::getAvatarList(bool&, ENUM_CHARACTERJOB, std::vector<std::vector<std::pair<unsigned long, int>, std::allocator<std::pair<unsigned long, int> > >, std::allocator<std::vector<std::pair<unsigned long, int>, std::allocator<std::pair<unsigned long, int> > > > >&)`

| 类 | 地址 |
|---|---|
| `AvatarRoulette` | `0x08911db0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08911db0  _ZN14AvatarRoulette13getAvatarListERb17ENUM_CHARACTERJOBRSt6vectorIS2_ISt4pairImiESaIS4_EESaIS6_EE
#           AvatarRoulette::getAvatarList(bool&, ENUM_CHARACTERJOB, std::vector<std::vector<std::pair<unsigned long, int>, std::allocator<std::pair<unsigned long, int> > >, std::allocator<std::vector<std::pair<unsigned long, int>, std::allocator<std::pair<unsigned long, int> > > > >&)
# range [0x08911db0, 0x08911dfd]
08911db0 +0x00:  push   %ebp
08911db1 +0x01:  mov    %esp,%ebp
08911db3 +0x03:  sub    $0x18,%esp
08911db6 +0x06:  mov    0xc(%ebp),%eax
08911db9 +0x09:  movb   $0x0,(%eax)
08911dbc +0x0c:  mov    0x10(%ebp),%eax
08911dbf +0x0f:  test   %eax,%eax
08911dc1 +0x11:  js     08911df7 <+0x47>
08911dc3 +0x13:  mov    0x10(%ebp),%eax
08911dc6 +0x16:  cmp    $0xa,%eax
08911dc9 +0x19:  jg     08911dfa <+0x4a>
08911dcb +0x1b:  mov    0x10(%ebp),%edx
08911dce +0x1e:  mov    %edx,%eax
08911dd0 +0x20:  add    %eax,%eax
08911dd2 +0x22:  add    %edx,%eax
08911dd4 +0x24:  shl    $0x2,%eax
08911dd7 +0x27:  add    $0x10,%eax
08911dda +0x2a:  add    0x8(%ebp),%eax
08911ddd +0x2d:  add    $0x4,%eax
08911de0 +0x30:  mov    %eax,0x4(%esp)
08911de4 +0x34:  mov    0x14(%ebp),%eax
08911de7 +0x37:  mov    %eax,(%esp)
08911dea +0x3a:  call   08920dd2 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x7ab1>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x7ab1
08911def +0x3f:  mov    0xc(%ebp),%eax
08911df2 +0x42:  movb   $0x1,(%eax)
08911df5 +0x45:  jmp    08911dfb <+0x4b>
08911df7 +0x47:  nop
08911df8 +0x48:  jmp    08911dfb <+0x4b>
08911dfa +0x4a:  nop
08911dfb +0x4b:  leave
08911dfc +0x4c:  ret
08911dfd +0x4d:  nop
```

## 反编译 C

```c
// AvatarRoulette::getAvatarList @ 0x8911db0

/* AvatarRoulette::getAvatarList(bool&, ENUM_CHARACTERJOB,
   std::vector<std::vector<std::pair<unsigned long, int>, std::allocator<std::pair<unsigned long,
   int> > >, std::allocator<std::vector<std::pair<unsigned long, int>,
   std::allocator<std::pair<unsigned long, int> > > > >&) */

void __thiscall
AvatarRoulette::getAvatarList
          (AvatarRoulette *this,undefined1 *param_1,int param_3,
          vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
          *param_4)

{
  *param_1 = 0;
  if ((-1 < param_3) && (param_3 < 0xb)) {
    std::
    vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
    ::operator=(param_4,(vector *)(this + param_3 * 0xc + 0x14));
    *param_1 = 1;
  }
  return;
}
```
