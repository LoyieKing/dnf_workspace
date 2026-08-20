# ~LevelupSupportEventManger

`_ZN25LevelupSupportEventMangerD1Ev`

`LevelupSupportEventManger::~LevelupSupportEventManger()`

| 类 | 地址 |
|---|---|
| `LevelupSupportEventManger` | `0x08146dc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08146dc0  _ZN25LevelupSupportEventMangerD1Ev
#           LevelupSupportEventManger::~LevelupSupportEventManger()
# range [0x08146dc0, 0x08146e3b]
08146dc0 +0x00:  push   %ebp
08146dc1 +0x01:  mov    %esp,%ebp
08146dc3 +0x03:  push   %esi
08146dc4 +0x04:  push   %ebx
08146dc5 +0x05:  sub    $0x10,%esp
08146dc8 +0x08:  mov    0x8(%ebp),%eax
08146dcb +0x0b:  movl   $&_ZTV25LevelupSupportEventManger+0x8,(%eax)
08146dd1 +0x11:  mov    0x8(%ebp),%eax
08146dd4 +0x14:  add    $0x34,%eax
08146dd7 +0x17:  mov    %eax,(%esp)
08146dda +0x1a:  call   08147b70 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x63>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x63
08146ddf +0x1f:  jmp    08146df9 <+0x39>
08146de1 +0x21:  mov    %edx,%ebx
08146de3 +0x23:  mov    %eax,%esi
08146de5 +0x25:  mov    0x8(%ebp),%eax
08146de8 +0x28:  add    $0x1c,%eax
08146deb +0x2b:  mov    %eax,(%esp)
08146dee +0x2e:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08146df3 +0x33:  mov    %esi,%eax
08146df5 +0x35:  mov    %ebx,%edx
08146df7 +0x37:  jmp    08146e09 <+0x49>
08146df9 +0x39:  mov    0x8(%ebp),%eax
08146dfc +0x3c:  add    $0x1c,%eax
08146dff +0x3f:  mov    %eax,(%esp)
08146e02 +0x42:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08146e07 +0x47:  jmp    08146e27 <+0x67>
08146e09 +0x49:  mov    %edx,%ebx
08146e0b +0x4b:  mov    %eax,%esi
08146e0d +0x4d:  mov    0x8(%ebp),%eax
08146e10 +0x50:  add    $0x4,%eax
08146e13 +0x53:  mov    %eax,(%esp)
08146e16 +0x56:  call   08ab5138 <_ZN20LevelupSupportSciprtD1Ev>  ; LevelupSupportSciprt::~LevelupSupportSciprt()
08146e1b +0x5b:  mov    %esi,%eax
08146e1d +0x5d:  mov    %ebx,%edx
08146e1f +0x5f:  mov    %eax,(%esp)
08146e22 +0x62:  call   08ae3750 <_Unwind_Resume>
08146e27 +0x67:  mov    0x8(%ebp),%eax
08146e2a +0x6a:  add    $0x4,%eax
08146e2d +0x6d:  mov    %eax,(%esp)
08146e30 +0x70:  call   08ab5138 <_ZN20LevelupSupportSciprtD1Ev>  ; LevelupSupportSciprt::~LevelupSupportSciprt()
08146e35 +0x75:  add    $0x10,%esp
08146e38 +0x78:  pop    %ebx
08146e39 +0x79:  pop    %esi
08146e3a +0x7a:  pop    %ebp
08146e3b +0x7b:  ret
```

## 反编译 C

```c
// LevelupSupportEventManger::~LevelupSupportEventManger @ 0x8146dc0

/* LevelupSupportEventManger::~LevelupSupportEventManger() */

void __thiscall
LevelupSupportEventManger::~LevelupSupportEventManger(LevelupSupportEventManger *this)

{
  *(undefined ***)this = &PTR_Load_08b73c88;
                    /* try { // try from 08146dda to 08146dde has its CatchHandler @ 08146de1 */
  std::
  vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
  ::~vector((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
             *)(this + 0x34));
                    /* try { // try from 08146e02 to 08146e06 has its CatchHandler @ 08146e09 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  LevelupSupportSciprt::~LevelupSupportSciprt((LevelupSupportSciprt *)(this + 4));
  return;
}
```
