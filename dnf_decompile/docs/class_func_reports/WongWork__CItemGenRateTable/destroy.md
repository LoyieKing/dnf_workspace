# destroy

`_ZN8WongWork17CItemGenRateTable7destroyEv`

`WongWork::CItemGenRateTable::destroy()`

| 类 | 地址 |
|---|---|
| `WongWork::CItemGenRateTable` | `0x08534638` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08534638  _ZN8WongWork17CItemGenRateTable7destroyEv
#           WongWork::CItemGenRateTable::destroy()
# range [0x08534638, 0x0853466b]
08534638 +0x00:  push   %ebp
08534639 +0x01:  mov    %esp,%ebp
0853463b +0x03:  sub    $0x18,%esp
0853463e +0x06:  mov    0x8(%ebp),%eax
08534641 +0x09:  mov    &_ZL14gUnicodeBuffer+0x19024(%eax),%eax
08534647 +0x0f:  test   %eax,%eax
08534649 +0x11:  je     08534669 <+0x31>
0853464b +0x13:  mov    0x8(%ebp),%eax
0853464e +0x16:  mov    &_ZL14gUnicodeBuffer+0x19024(%eax),%eax
08534654 +0x1c:  mov    %eax,(%esp)
08534657 +0x1f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0853465c +0x24:  mov    0x8(%ebp),%eax
0853465f +0x27:  movl   $0x0,&_ZL14gUnicodeBuffer+0x19024(%eax)
08534669 +0x31:  leave
0853466a +0x32:  ret
0853466b +0x33:  nop
```

## 反编译 C

```c
// WongWork::CItemGenRateTable::destroy @ 0x8534638

/* WongWork::CItemGenRateTable::destroy() */

void __thiscall WongWork::CItemGenRateTable::destroy(CItemGenRateTable *this)

{
  if (*(int *)(this + 0x23550) != 0) {
    operator_delete(*(void **)(this + 0x23550));
    *(undefined4 *)(this + 0x23550) = 0;
  }
  return;
}
```
