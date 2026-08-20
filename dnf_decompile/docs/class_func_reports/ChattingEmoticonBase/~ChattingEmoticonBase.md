# ~ChattingEmoticonBase

`_ZN20ChattingEmoticonBaseD1Ev`

`ChattingEmoticonBase::~ChattingEmoticonBase()`

| 类 | 地址 |
|---|---|
| `ChattingEmoticonBase` | `0x080e5c54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e5c54  _ZN20ChattingEmoticonBaseD1Ev
#           ChattingEmoticonBase::~ChattingEmoticonBase()
# range [0x080e5c54, 0x080e5c87]
080e5c54 +0x00:  push   %ebp
080e5c55 +0x01:  mov    %esp,%ebp
080e5c57 +0x03:  sub    $0x18,%esp
080e5c5a +0x06:  mov    0x8(%ebp),%eax
080e5c5d +0x09:  movl   $&_ZTV20ChattingEmoticonBase+0x8,(%eax)
080e5c63 +0x0f:  mov    0x8(%ebp),%eax
080e5c66 +0x12:  add    $0x8,%eax
080e5c69 +0x15:  mov    %eax,(%esp)
080e5c6c +0x18:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
080e5c71 +0x1d:  mov    $0x0,%eax
080e5c76 +0x22:  test   %al,%al
080e5c78 +0x24:  je     080e5c85 <+0x31>
080e5c7a +0x26:  mov    0x8(%ebp),%eax
080e5c7d +0x29:  mov    %eax,(%esp)
080e5c80 +0x2c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e5c85 +0x31:  leave
080e5c86 +0x32:  ret
080e5c87 +0x33:  nop
```

## 反编译 C

```c
// ChattingEmoticonBase::~ChattingEmoticonBase @ 0x80e5c54

/* WARNING: Removing unreachable block (ram,0x080e5c7a) */
/* ChattingEmoticonBase::~ChattingEmoticonBase() */

void __thiscall ChattingEmoticonBase::~ChattingEmoticonBase(ChattingEmoticonBase *this)

{
  *(undefined ***)this = &PTR__ChattingEmoticonBase_08b30748;
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 8));
  return;
}
```
