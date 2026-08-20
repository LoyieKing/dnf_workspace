# ~ChattingEmoticonBase

`_ZN20ChattingEmoticonBaseD0Ev`

`ChattingEmoticonBase::~ChattingEmoticonBase()`

| 类 | 地址 |
|---|---|
| `ChattingEmoticonBase` | `0x080e5c88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e5c88  _ZN20ChattingEmoticonBaseD0Ev
#           ChattingEmoticonBase::~ChattingEmoticonBase()
# range [0x080e5c88, 0x080e5ca5]
080e5c88 +0x00:  push   %ebp
080e5c89 +0x01:  mov    %esp,%ebp
080e5c8b +0x03:  sub    $0x18,%esp
080e5c8e +0x06:  mov    0x8(%ebp),%eax
080e5c91 +0x09:  mov    %eax,(%esp)
080e5c94 +0x0c:  call   080e5c54 <_ZN20ChattingEmoticonBaseD1Ev>  ; ChattingEmoticonBase::~ChattingEmoticonBase()
080e5c99 +0x11:  mov    0x8(%ebp),%eax
080e5c9c +0x14:  mov    %eax,(%esp)
080e5c9f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e5ca4 +0x1c:  leave
080e5ca5 +0x1d:  ret
```

## 反编译 C

```c
// ChattingEmoticonBase::~ChattingEmoticonBase @ 0x80e5c88

/* ChattingEmoticonBase::~ChattingEmoticonBase() */

void __thiscall ChattingEmoticonBase::~ChattingEmoticonBase(ChattingEmoticonBase *this)

{
  ~ChattingEmoticonBase(this);
  operator_delete(this);
  return;
}
```
