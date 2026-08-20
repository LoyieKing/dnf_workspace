# SetIndex

`_ZN7WarRoom8SetIndexEi`

`WarRoom::SetIndex(int)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086ba834` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ba834  _ZN7WarRoom8SetIndexEi
#           WarRoom::SetIndex(int)
# range [0x086ba834, 0x086ba84f]
086ba834 +0x00:  push   %ebp
086ba835 +0x01:  mov    %esp,%ebp
086ba837 +0x03:  sub    $0x18,%esp
086ba83a +0x06:  mov    0x8(%ebp),%eax
086ba83d +0x09:  mov    0xc(%ebp),%edx
086ba840 +0x0c:  mov    %edx,0x4(%eax)
086ba843 +0x0f:  mov    0x8(%ebp),%eax
086ba846 +0x12:  mov    %eax,(%esp)
086ba849 +0x15:  call   086baa14 <_ZN7WarRoom5ResetEv>  ; WarRoom::Reset()
086ba84e +0x1a:  leave
086ba84f +0x1b:  ret
```

## 反编译 C

```c
// WarRoom::SetIndex @ 0x86ba834

/* WarRoom::SetIndex(int) */

void __thiscall WarRoom::SetIndex(WarRoom *this,int param_1)

{
  *(int *)(this + 4) = param_1;
  Reset(this);
  return;
}
```
