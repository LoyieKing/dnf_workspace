# ~CSharedServerMessageManager

`_ZN27CSharedServerMessageManagerD1Ev`

`CSharedServerMessageManager::~CSharedServerMessageManager()`

| 类 | 地址 |
|---|---|
| `CSharedServerMessageManager` | `0x08600892` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08600892  _ZN27CSharedServerMessageManagerD1Ev
#           CSharedServerMessageManager::~CSharedServerMessageManager()
# range [0x08600892, 0x086008d7]
08600892 +0x00:  push   %ebp
08600893 +0x01:  mov    %esp,%ebp
08600895 +0x03:  push   %esi
08600896 +0x04:  push   %ebx
08600897 +0x05:  sub    $0x10,%esp
0860089a +0x08:  mov    0x8(%ebp),%eax
0860089d +0x0b:  add    $0x8,%eax
086008a0 +0x0e:  mov    %eax,(%esp)
086008a3 +0x11:  call   08601a30 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x7c>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x7c
086008a8 +0x16:  jmp    086008c5 <+0x33>
086008aa +0x18:  mov    %edx,%ebx
086008ac +0x1a:  mov    %eax,%esi
086008ae +0x1c:  mov    0x8(%ebp),%eax
086008b1 +0x1f:  mov    %eax,(%esp)
086008b4 +0x22:  call   086019fa <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x46>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x46
086008b9 +0x27:  mov    %esi,%eax
086008bb +0x29:  mov    %ebx,%edx
086008bd +0x2b:  mov    %eax,(%esp)
086008c0 +0x2e:  call   08ae3750 <_Unwind_Resume>
086008c5 +0x33:  mov    0x8(%ebp),%eax
086008c8 +0x36:  mov    %eax,(%esp)
086008cb +0x39:  call   086019fa <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x46>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x46
086008d0 +0x3e:  add    $0x10,%esp
086008d3 +0x41:  pop    %ebx
086008d4 +0x42:  pop    %esi
086008d5 +0x43:  pop    %ebp
086008d6 +0x44:  ret
086008d7 +0x45:  nop
```

## 反编译 C

```c
// CSharedServerMessageManager::~CSharedServerMessageManager @ 0x8600892

/* CSharedServerMessageManager::~CSharedServerMessageManager() */

void __thiscall
CSharedServerMessageManager::~CSharedServerMessageManager(CSharedServerMessageManager *this)

{
                    /* try { // try from 086008a3 to 086008a7 has its CatchHandler @ 086008aa */
  EVENT_SERVER_MESSAGE::~EVENT_SERVER_MESSAGE((EVENT_SERVER_MESSAGE *)(this + 8));
  CSharedServerMessageAdapter::~CSharedServerMessageAdapter((CSharedServerMessageAdapter *)this);
  return;
}
```
