# LevelupSupportSciprt

`_ZN20LevelupSupportSciprtC1Ev`

`LevelupSupportSciprt::LevelupSupportSciprt()`

| 类 | 地址 |
|---|---|
| `LevelupSupportSciprt` | `0x08ab5124` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab5124  _ZN20LevelupSupportSciprtC1Ev
#           LevelupSupportSciprt::LevelupSupportSciprt()
# range [0x08ab5124, 0x08ab5137]
08ab5124 +0x00:  push   %ebp
08ab5125 +0x01:  mov    %esp,%ebp
08ab5127 +0x03:  sub    $0x18,%esp
08ab512a +0x06:  mov    0x8(%ebp),%eax
08ab512d +0x09:  mov    %eax,(%esp)
08ab5130 +0x0c:  call   08ab5aa0 <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x78>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x78
08ab5135 +0x11:  leave
08ab5136 +0x12:  ret
08ab5137 +0x13:  nop
```

## 反编译 C

```c
// LevelupSupportSciprt::LevelupSupportSciprt @ 0x8ab5124

/* LevelupSupportSciprt::LevelupSupportSciprt() */

void __thiscall LevelupSupportSciprt::LevelupSupportSciprt(LevelupSupportSciprt *this)

{
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::map((map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
         *)this);
  return;
}
```
