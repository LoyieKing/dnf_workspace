# ~ThreadInterface

`_ZN15ThreadInterfaceD1Ev`

`ThreadInterface::~ThreadInterface()`

| 类 | 地址 |
|---|---|
| `ThreadInterface` | `0x08630b46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08630b46  _ZN15ThreadInterfaceD1Ev
#           ThreadInterface::~ThreadInterface()
# range [0x08630b46, 0x08630b6b]
08630b46 +0x00:  push   %ebp
08630b47 +0x01:  mov    %esp,%ebp
08630b49 +0x03:  sub    $0x18,%esp
08630b4c +0x06:  mov    0x8(%ebp),%eax
08630b4f +0x09:  movl   $&_ZTV15ThreadInterface+0x8,(%eax)
08630b55 +0x0f:  mov    $0x0,%eax
08630b5a +0x14:  test   %al,%al
08630b5c +0x16:  je     08630b69 <+0x23>
08630b5e +0x18:  mov    0x8(%ebp),%eax
08630b61 +0x1b:  mov    %eax,(%esp)
08630b64 +0x1e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08630b69 +0x23:  leave
08630b6a +0x24:  ret
08630b6b +0x25:  nop
```

## 反编译 C

```c
// ThreadInterface::~ThreadInterface @ 0x8630b46

/* WARNING: Removing unreachable block (ram,0x08630b5e) */
/* ThreadInterface::~ThreadInterface() */

void __thiscall ThreadInterface::~ThreadInterface(ThreadInterface *this)

{
  *(undefined ***)this = &PTR_stop_08ce6b98;
  return;
}
```
