# ~Village

`_ZN7VillageD1Ev`

`Village::~Village()`

| 类 | 地址 |
|---|---|
| `Village` | `0x086c3300` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c3300  _ZN7VillageD1Ev
#           Village::~Village()
# range [0x086c3300, 0x086c3347]
086c3300 +0x00:  push   %ebp
086c3301 +0x01:  mov    %esp,%ebp
086c3303 +0x03:  push   %esi
086c3304 +0x04:  push   %ebx
086c3305 +0x05:  sub    $0x10,%esp
086c3308 +0x08:  mov    0x8(%ebp),%eax
086c330b +0x0b:  mov    %eax,(%esp)
086c330e +0x0e:  call   086c3348 <_ZN7Village7destroyEv>  ; Village::destroy()
086c3313 +0x13:  jmp    086c3333 <+0x33>
086c3315 +0x15:  mov    %edx,%ebx
086c3317 +0x17:  mov    %eax,%esi
086c3319 +0x19:  mov    0x8(%ebp),%eax
086c331c +0x1c:  add    $0x8,%eax
086c331f +0x1f:  mov    %eax,(%esp)
086c3322 +0x22:  call   086d2138 <_GLOBAL__I_MAX_VILLAGE_NUM+0x969>  ; global constructors keyed to MAX_VILLAGE_NUM+0x969
086c3327 +0x27:  mov    %esi,%eax
086c3329 +0x29:  mov    %ebx,%edx
086c332b +0x2b:  mov    %eax,(%esp)
086c332e +0x2e:  call   08ae3750 <_Unwind_Resume>
086c3333 +0x33:  mov    0x8(%ebp),%eax
086c3336 +0x36:  add    $0x8,%eax
086c3339 +0x39:  mov    %eax,(%esp)
086c333c +0x3c:  call   086d2138 <_GLOBAL__I_MAX_VILLAGE_NUM+0x969>  ; global constructors keyed to MAX_VILLAGE_NUM+0x969
086c3341 +0x41:  add    $0x10,%esp
086c3344 +0x44:  pop    %ebx
086c3345 +0x45:  pop    %esi
086c3346 +0x46:  pop    %ebp
086c3347 +0x47:  ret
```

## 反编译 C

```c
// Village::~Village @ 0x86c3300

/* Village::~Village() */

void __thiscall Village::~Village(Village *this)

{
                    /* try { // try from 086c330e to 086c3312 has its CatchHandler @ 086c3315 */
  destroy(this);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::~map((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
          *)(this + 8));
  return;
}
```
