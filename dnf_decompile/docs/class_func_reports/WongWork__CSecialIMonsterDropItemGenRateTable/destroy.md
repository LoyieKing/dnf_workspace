# destroy

`_ZN8WongWork35CSecialIMonsterDropItemGenRateTable7destroyEv`

`WongWork::CSecialIMonsterDropItemGenRateTable::destroy()`

| 类 | 地址 |
|---|---|
| `WongWork::CSecialIMonsterDropItemGenRateTable` | `0x08534c9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08534c9c  _ZN8WongWork35CSecialIMonsterDropItemGenRateTable7destroyEv
#           WongWork::CSecialIMonsterDropItemGenRateTable::destroy()
# range [0x08534c9c, 0x08534ccf]
08534c9c +0x00:  push   %ebp
08534c9d +0x01:  mov    %esp,%ebp
08534c9f +0x03:  sub    $0x18,%esp
08534ca2 +0x06:  mov    0x8(%ebp),%eax
08534ca5 +0x09:  mov    0x211fb0(%eax),%eax
08534cab +0x0f:  test   %eax,%eax
08534cad +0x11:  je     08534ccd <+0x31>
08534caf +0x13:  mov    0x8(%ebp),%eax
08534cb2 +0x16:  mov    0x211fb0(%eax),%eax
08534cb8 +0x1c:  mov    %eax,(%esp)
08534cbb +0x1f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08534cc0 +0x24:  mov    0x8(%ebp),%eax
08534cc3 +0x27:  movl   $0x0,0x211fb0(%eax)
08534ccd +0x31:  leave
08534cce +0x32:  ret
08534ccf +0x33:  nop
```

## 反编译 C

```c
// WongWork::CSecialIMonsterDropItemGenRateTable::destroy @ 0x8534c9c

/* WongWork::CSecialIMonsterDropItemGenRateTable::destroy() */

void __thiscall
WongWork::CSecialIMonsterDropItemGenRateTable::destroy(CSecialIMonsterDropItemGenRateTable *this)

{
  if (*(int *)(this + 0x211fb0) != 0) {
    operator_delete(*(void **)(this + 0x211fb0));
    *(undefined4 *)(this + 0x211fb0) = 0;
  }
  return;
}
```
