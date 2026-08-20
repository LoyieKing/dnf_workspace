# GetRemainSeat

`_ZNK7WarRoom13GetRemainSeatEv`

`WarRoom::GetRemainSeat() const`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086babae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086babae  _ZNK7WarRoom13GetRemainSeatEv
#           WarRoom::GetRemainSeat() const
# range [0x086babae, 0x086babcb]
086babae +0x00:  push   %ebp
086babaf +0x01:  mov    %esp,%ebp
086babb1 +0x03:  sub    $0x18,%esp
086babb4 +0x06:  mov    0x8(%ebp),%eax
086babb7 +0x09:  mov    %eax,(%esp)
086babba +0x0c:  call   086babcc <_ZNK7WarRoom14GetWaiterCountEv>  ; WarRoom::GetWaiterCount() const
086babbf +0x11:  mov    $0x6,%edx
086babc4 +0x16:  mov    %edx,%ecx
086babc6 +0x18:  sub    %eax,%ecx
086babc8 +0x1a:  mov    %ecx,%eax
086babca +0x1c:  leave
086babcb +0x1d:  ret
```

## 反编译 C

```c
// WarRoom::GetRemainSeat @ 0x86babae

/* WarRoom::GetRemainSeat() const */

int __thiscall WarRoom::GetRemainSeat(WarRoom *this)

{
  int iVar1;
  
  iVar1 = GetWaiterCount(this);
  return 6 - iVar1;
}
```
