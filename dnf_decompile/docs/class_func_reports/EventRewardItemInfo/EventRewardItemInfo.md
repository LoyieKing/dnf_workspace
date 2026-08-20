# EventRewardItemInfo

`_ZN19EventRewardItemInfoC1Ev`

`EventRewardItemInfo::EventRewardItemInfo()`

| 类 | 地址 |
|---|---|
| `EventRewardItemInfo` | `0x0891548a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0891548a  _ZN19EventRewardItemInfoC1Ev
#           EventRewardItemInfo::EventRewardItemInfo()
# range [0x0891548a, 0x089154bb]
0891548a +0x00:  push   %ebp
0891548b +0x01:  mov    %esp,%ebp
0891548d +0x03:  sub    $0x18,%esp
08915490 +0x06:  mov    0x8(%ebp),%eax
08915493 +0x09:  add    $0xc,%eax
08915496 +0x0c:  mov    %eax,(%esp)
08915499 +0x0f:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0891549e +0x14:  mov    0x8(%ebp),%eax
089154a1 +0x17:  movl   $0x0,(%eax)
089154a7 +0x1d:  mov    0x8(%ebp),%eax
089154aa +0x20:  movl   $0x0,0x4(%eax)
089154b1 +0x27:  mov    0x8(%ebp),%eax
089154b4 +0x2a:  movw   $0x0,0x8(%eax)
089154ba +0x30:  leave
089154bb +0x31:  ret
```

## 反编译 C

```c
// EventRewardItemInfo::EventRewardItemInfo @ 0x891548a

/* EventRewardItemInfo::EventRewardItemInfo() */

void __thiscall EventRewardItemInfo::EventRewardItemInfo(EventRewardItemInfo *this)

{
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xc));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined2 *)(this + 8) = 0;
  return;
}
```
