# CSharedServerMessageManager

`_ZN27CSharedServerMessageManagerC1Ev`

`CSharedServerMessageManager::CSharedServerMessageManager()`

| 类 | 地址 |
|---|---|
| `CSharedServerMessageManager` | `0x0860079c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860079c  _ZN27CSharedServerMessageManagerC1Ev
#           CSharedServerMessageManager::CSharedServerMessageManager()
# range [0x0860079c, 0x0860080d]
0860079c +0x00:  push   %ebp
0860079d +0x01:  mov    %esp,%ebp
0860079f +0x03:  push   %esi
086007a0 +0x04:  push   %ebx
086007a1 +0x05:  sub    $0x10,%esp
086007a4 +0x08:  mov    0x8(%ebp),%eax
086007a7 +0x0b:  mov    %eax,(%esp)
086007aa +0x0e:  call   086019ec <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x38>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x38
086007af +0x13:  mov    0x8(%ebp),%eax
086007b2 +0x16:  add    $0x8,%eax
086007b5 +0x19:  mov    %eax,(%esp)
086007b8 +0x1c:  call   08601a1a <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x66>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x66
086007bd +0x21:  mov    0x8(%ebp),%eax
086007c0 +0x24:  movb   $0x0,0x4(%eax)
086007c4 +0x28:  mov    0x8(%ebp),%eax
086007c7 +0x2b:  add    $0x8,%eax
086007ca +0x2e:  mov    %eax,(%esp)
086007cd +0x31:  call   086019d0 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x1c>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x1c
086007d2 +0x36:  jmp    08600807 <+0x6b>
086007d4 +0x38:  mov    %edx,%ebx
086007d6 +0x3a:  mov    %eax,%esi
086007d8 +0x3c:  mov    0x8(%ebp),%eax
086007db +0x3f:  add    $0x8,%eax
086007de +0x42:  mov    %eax,(%esp)
086007e1 +0x45:  call   08601a30 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x7c>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x7c
086007e6 +0x4a:  mov    %esi,%eax
086007e8 +0x4c:  mov    %ebx,%edx
086007ea +0x4e:  jmp    086007ec <+0x50>
086007ec +0x50:  mov    %edx,%ebx
086007ee +0x52:  mov    %eax,%esi
086007f0 +0x54:  mov    0x8(%ebp),%eax
086007f3 +0x57:  mov    %eax,(%esp)
086007f6 +0x5a:  call   086019fa <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x46>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x46
086007fb +0x5f:  mov    %esi,%eax
086007fd +0x61:  mov    %ebx,%edx
086007ff +0x63:  mov    %eax,(%esp)
08600802 +0x66:  call   08ae3750 <_Unwind_Resume>
08600807 +0x6b:  add    $0x10,%esp
0860080a +0x6e:  pop    %ebx
0860080b +0x6f:  pop    %esi
0860080c +0x70:  pop    %ebp
0860080d +0x71:  ret
```

## 反编译 C

```c
// CSharedServerMessageManager::CSharedServerMessageManager @ 0x860079c

/* CSharedServerMessageManager::CSharedServerMessageManager() */

void __thiscall
CSharedServerMessageManager::CSharedServerMessageManager(CSharedServerMessageManager *this)

{
  CSharedServerMessageAdapter::CSharedServerMessageAdapter((CSharedServerMessageAdapter *)this);
                    /* try { // try from 086007b8 to 086007bc has its CatchHandler @ 086007ec */
  EVENT_SERVER_MESSAGE::EVENT_SERVER_MESSAGE((EVENT_SERVER_MESSAGE *)(this + 8));
  this[4] = (CSharedServerMessageManager)0x0;
                    /* try { // try from 086007cd to 086007d1 has its CatchHandler @ 086007d4 */
  EVENT_SERVER_MESSAGE::clear((EVENT_SERVER_MESSAGE *)(this + 8));
  return;
}
```
