# PIReceiverManager

`_ZN17PIReceiverManagerC1Ev`

`PIReceiverManager::PIReceiverManager()`

| 类 | 地址 |
|---|---|
| `PIReceiverManager` | `0x0808bf68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808bf68  _ZN17PIReceiverManagerC1Ev
#           PIReceiverManager::PIReceiverManager()
# range [0x0808bf68, 0x0808bf7d]
0808bf68 +0x00:  push   %ebp
0808bf69 +0x01:  mov    %esp,%ebp
0808bf6b +0x03:  mov    0x8(%ebp),%eax
0808bf6e +0x06:  movl   $&_ZTV17PIReceiverManager+0x8,(%eax)
0808bf74 +0x0c:  mov    0x8(%ebp),%eax
0808bf77 +0x0f:  movb   $0x27,0x4(%eax)
0808bf7b +0x13:  pop    %ebp
0808bf7c +0x14:  ret
0808bf7d +0x15:  nop
```

## 反编译 C

```c
// PIReceiverManager::PIReceiverManager @ 0x808bf68

/* PIReceiverManager::PIReceiverManager() */

void __thiscall PIReceiverManager::PIReceiverManager(PIReceiverManager *this)

{
  *(undefined ***)this = &PTR__PIReceiverManager_08af3498;
  this[4] = (PIReceiverManager)0x27;
  return;
}
```
