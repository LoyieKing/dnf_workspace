# Village

`_ZN7VillageC1Ev`

`Village::Village()`

| 类 | 地址 |
|---|---|
| `Village` | `0x086c32e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c32e0  _ZN7VillageC1Ev
#           Village::Village()
# range [0x086c32e0, 0x086c32ff]
086c32e0 +0x00:  push   %ebp
086c32e1 +0x01:  mov    %esp,%ebp
086c32e3 +0x03:  sub    $0x18,%esp
086c32e6 +0x06:  mov    0x8(%ebp),%eax
086c32e9 +0x09:  add    $0x8,%eax
086c32ec +0x0c:  mov    %eax,(%esp)
086c32ef +0x0f:  call   086d2e08 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1639>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1639
086c32f4 +0x14:  mov    0x8(%ebp),%eax
086c32f7 +0x17:  movl   $0x0,0x28(%eax)
086c32fe +0x1e:  leave
086c32ff +0x1f:  ret
```

## 反编译 C

```c
// Village::Village @ 0x86c32e0

/* Village::Village() */

void __thiscall Village::Village(Village *this)

{
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::map((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
         *)(this + 8));
  *(undefined4 *)(this + 0x28) = 0;
  return;
}
```
