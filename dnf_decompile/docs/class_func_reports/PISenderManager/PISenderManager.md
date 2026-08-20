# PISenderManager

`_ZN15PISenderManagerC1Ev`

`PISenderManager::PISenderManager()`

| 类 | 地址 |
|---|---|
| `PISenderManager` | `0x0808be58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808be58  _ZN15PISenderManagerC1Ev
#           PISenderManager::PISenderManager()
# range [0x0808be58, 0x0808be6d]
0808be58 +0x00:  push   %ebp
0808be59 +0x01:  mov    %esp,%ebp
0808be5b +0x03:  mov    0x8(%ebp),%eax
0808be5e +0x06:  movl   $&_ZTV15PISenderManager+0x8,(%eax)
0808be64 +0x0c:  mov    0x8(%ebp),%eax
0808be67 +0x0f:  movb   $0x27,0x4(%eax)
0808be6b +0x13:  pop    %ebp
0808be6c +0x14:  ret
0808be6d +0x15:  nop
```

## 反编译 C

```c
// PISenderManager::PISenderManager @ 0x808be58

/* PISenderManager::PISenderManager() */

void __thiscall PISenderManager::PISenderManager(PISenderManager *this)

{
  *(undefined ***)this = &PTR__PISenderManager_08af34a8;
  this[4] = (PISenderManager)0x27;
  return;
}
```
