# LevelupSupportEventManger

`_ZN25LevelupSupportEventMangerC1Ev`

`LevelupSupportEventManger::LevelupSupportEventManger()`

| 类 | 地址 |
|---|---|
| `LevelupSupportEventManger` | `0x08146d30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08146d30  _ZN25LevelupSupportEventMangerC1Ev
#           LevelupSupportEventManger::LevelupSupportEventManger()
# range [0x08146d30, 0x08146dbf]
08146d30 +0x00:  push   %ebp
08146d31 +0x01:  mov    %esp,%ebp
08146d33 +0x03:  push   %esi
08146d34 +0x04:  push   %ebx
08146d35 +0x05:  sub    $0x10,%esp
08146d38 +0x08:  mov    0x8(%ebp),%eax
08146d3b +0x0b:  mov    %eax,(%esp)
08146d3e +0x0e:  call   08147b56 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x49>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x49
08146d43 +0x13:  mov    0x8(%ebp),%eax
08146d46 +0x16:  mov    %eax,(%esp)
08146d49 +0x19:  call   080e2454 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1fa>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1fa
08146d4e +0x1e:  mov    0x8(%ebp),%eax
08146d51 +0x21:  movl   $&_ZTV25LevelupSupportEventManger+0x8,(%eax)
08146d57 +0x27:  mov    0x8(%ebp),%eax
08146d5a +0x2a:  add    $0x4,%eax
08146d5d +0x2d:  mov    %eax,(%esp)
08146d60 +0x30:  call   08ab5124 <_ZN20LevelupSupportSciprtC1Ev>  ; LevelupSupportSciprt::LevelupSupportSciprt()
08146d65 +0x35:  mov    0x8(%ebp),%eax
08146d68 +0x38:  add    $0x1c,%eax
08146d6b +0x3b:  mov    %eax,(%esp)
08146d6e +0x3e:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
08146d73 +0x43:  mov    0x8(%ebp),%eax
08146d76 +0x46:  add    $0x34,%eax
08146d79 +0x49:  mov    %eax,(%esp)
08146d7c +0x4c:  call   08147b5c <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x4f>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x4f
08146d81 +0x51:  jmp    08146db9 <+0x89>
08146d83 +0x53:  mov    %edx,%ebx
08146d85 +0x55:  mov    %eax,%esi
08146d87 +0x57:  mov    0x8(%ebp),%eax
08146d8a +0x5a:  add    $0x1c,%eax
08146d8d +0x5d:  mov    %eax,(%esp)
08146d90 +0x60:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08146d95 +0x65:  mov    %esi,%eax
08146d97 +0x67:  mov    %ebx,%edx
08146d99 +0x69:  jmp    08146d9b <+0x6b>
08146d9b +0x6b:  mov    %edx,%ebx
08146d9d +0x6d:  mov    %eax,%esi
08146d9f +0x6f:  mov    0x8(%ebp),%eax
08146da2 +0x72:  add    $0x4,%eax
08146da5 +0x75:  mov    %eax,(%esp)
08146da8 +0x78:  call   08ab5138 <_ZN20LevelupSupportSciprtD1Ev>  ; LevelupSupportSciprt::~LevelupSupportSciprt()
08146dad +0x7d:  mov    %esi,%eax
08146daf +0x7f:  mov    %ebx,%edx
08146db1 +0x81:  mov    %eax,(%esp)
08146db4 +0x84:  call   08ae3750 <_Unwind_Resume>
08146db9 +0x89:  add    $0x10,%esp
08146dbc +0x8c:  pop    %ebx
08146dbd +0x8d:  pop    %esi
08146dbe +0x8e:  pop    %ebp
08146dbf +0x8f:  ret
```

## 反编译 C

```c
// LevelupSupportEventManger::LevelupSupportEventManger @ 0x8146d30

/* LevelupSupportEventManger::LevelupSupportEventManger() */

void __thiscall
LevelupSupportEventManger::LevelupSupportEventManger(LevelupSupportEventManger *this)

{
  ARAD::Singleton<LevelupSupportEventManger>::Singleton();
  ARAD::ScriptInterface::ScriptInterface((ScriptInterface *)this);
  *(undefined ***)this = &PTR_Load_08b73c88;
  LevelupSupportSciprt::LevelupSupportSciprt((LevelupSupportSciprt *)(this + 4));
                    /* try { // try from 08146d6e to 08146d72 has its CatchHandler @ 08146d9b */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
                    /* try { // try from 08146d7c to 08146d80 has its CatchHandler @ 08146d83 */
  std::
  vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
  ::vector((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
            *)(this + 0x34));
  return;
}
```
