# sort

`_ZN6CCargo4sortEv`

`CCargo::sort()`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850bd0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850bd0c  _ZN6CCargo4sortEv
#           CCargo::sort()
# range [0x0850bd0c, 0x0850bd4f]
0850bd0c +0x00:  push   %ebp
0850bd0d +0x01:  mov    %esp,%ebp
0850bd0f +0x03:  sub    $0x18,%esp
0850bd12 +0x06:  mov    0x8(%ebp),%eax
0850bd15 +0x09:  movzbl 0x10(%eax),%eax
0850bd19 +0x0d:  xor    $0x1,%eax
0850bd1c +0x10:  test   %al,%al
0850bd1e +0x12:  je     0850bd4d <+0x41>
0850bd20 +0x14:  mov    0x8(%ebp),%eax
0850bd23 +0x17:  mov    0x4(%eax),%eax
0850bd26 +0x1a:  movl   $&_ZN6CCargo12_CompareSlotEPKvS1_,0xc(%esp)
0850bd2e +0x22:  movl   $0x3d,0x8(%esp)
0850bd36 +0x2a:  movl   $0x98,0x4(%esp)
0850bd3e +0x32:  mov    %eax,(%esp)
0850bd41 +0x35:  call   0807e870 <_init+0x1168>
0850bd46 +0x3a:  mov    0x8(%ebp),%eax
0850bd49 +0x3d:  movb   $0x1,0x10(%eax)
0850bd4d +0x41:  leave
0850bd4e +0x42:  ret
0850bd4f +0x43:  nop
```

## 反编译 C

```c
// CCargo::sort @ 0x850bd0c

/* CCargo::sort() */

void __thiscall CCargo::sort(CCargo *this)

{
  if (this[0x10] != (CCargo)0x1) {
    qsort(*(void **)(this + 4),0x98,0x3d,_CompareSlot);
    this[0x10] = (CCargo)0x1;
  }
  return;
}
```
