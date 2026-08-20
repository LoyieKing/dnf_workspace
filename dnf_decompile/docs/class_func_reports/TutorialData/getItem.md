# getItem

`_ZN12TutorialData7getItemEv`

`TutorialData::getItem()`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab8d5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab8d5c  _ZN12TutorialData7getItemEv
#           TutorialData::getItem()
# range [0x08ab8d5c, 0x08ab8d89]
08ab8d5c +0x00:  push   %ebp
08ab8d5d +0x01:  mov    %esp,%ebp
08ab8d5f +0x03:  push   %ebx
08ab8d60 +0x04:  sub    $0x14,%esp
08ab8d63 +0x07:  mov    0x8(%ebp),%ebx
08ab8d66 +0x0a:  mov    %ebx,%eax
08ab8d68 +0x0c:  mov    0xc(%ebp),%edx
08ab8d6b +0x0f:  add    $0x13c,%edx
08ab8d71 +0x15:  mov    %edx,0x4(%esp)
08ab8d75 +0x19:  mov    %eax,(%esp)
08ab8d78 +0x1c:  call   08aba2d6 <_GLOBAL__I__ZN12TutorialDataC2Ev+0xb11>  ; global constructors keyed to TutorialData::TutorialData()+0xb11
08ab8d7d +0x21:  mov    %ebx,%eax
08ab8d7f +0x23:  mov    %ebx,%eax
08ab8d81 +0x25:  add    $0x14,%esp
08ab8d84 +0x28:  pop    %ebx
08ab8d85 +0x29:  pop    %ebp
08ab8d86 +0x2a:  ret    $0x4
08ab8d89 +0x2d:  nop
```

## 反编译 C

```c
// TutorialData::getItem @ 0x8ab8d5c

/* TutorialData::getItem() */

vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>> *
TutorialData::getItem(void)

{
  vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>> *in_stack_00000004;
  int in_stack_00000008;
  
  std::vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>>::vector
            (in_stack_00000004,(vector *)(in_stack_00000008 + 0x13c));
  return in_stack_00000004;
}
```
