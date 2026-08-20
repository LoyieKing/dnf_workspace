# _updateTimeCount

`_ZN8WongWork19CSecurityCardCenter16_updateTimeCountEv`

`WongWork::CSecurityCardCenter::_updateTimeCount()`

| 类 | 地址 |
|---|---|
| `WongWork::CSecurityCardCenter` | `0x085fe026` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fe026  _ZN8WongWork19CSecurityCardCenter16_updateTimeCountEv
#           WongWork::CSecurityCardCenter::_updateTimeCount()
# range [0x085fe026, 0x085fe05d]
085fe026 +0x00:  push   %ebp
085fe027 +0x01:  mov    %esp,%ebp
085fe029 +0x03:  mov    0x8(%ebp),%eax
085fe02c +0x06:  movzwl 0x484(%eax),%eax
085fe033 +0x0d:  lea    0x1(%eax),%edx
085fe036 +0x10:  mov    0x8(%ebp),%eax
085fe039 +0x13:  mov    %dx,0x484(%eax)
085fe040 +0x1a:  mov    0x8(%ebp),%eax
085fe043 +0x1d:  movzwl 0x484(%eax),%eax
085fe04a +0x24:  cmp    $0xc34f,%ax
085fe04e +0x28:  jbe    085fe05c <+0x36>
085fe050 +0x2a:  mov    0x8(%ebp),%eax
085fe053 +0x2d:  movw   $0x1,0x484(%eax)
085fe05c +0x36:  pop    %ebp
085fe05d +0x37:  ret
```

## 反编译 C

```c
// WongWork::CSecurityCardCenter::_updateTimeCount @ 0x85fe026

/* WongWork::CSecurityCardCenter::_updateTimeCount() */

void __thiscall WongWork::CSecurityCardCenter::_updateTimeCount(CSecurityCardCenter *this)

{
  *(short *)(this + 0x484) = *(short *)(this + 0x484) + 1;
  if (49999 < *(ushort *)(this + 0x484)) {
    *(undefined2 *)(this + 0x484) = 1;
  }
  return;
}
```
