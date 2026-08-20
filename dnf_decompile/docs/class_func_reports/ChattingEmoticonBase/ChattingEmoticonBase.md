# ChattingEmoticonBase

`_ZN20ChattingEmoticonBaseC1Ev`

`ChattingEmoticonBase::ChattingEmoticonBase()`

| 类 | 地址 |
|---|---|
| `ChattingEmoticonBase` | `0x080e5c2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e5c2a  _ZN20ChattingEmoticonBaseC1Ev
#           ChattingEmoticonBase::ChattingEmoticonBase()
# range [0x080e5c2a, 0x080e5c53]
080e5c2a +0x00:  push   %ebp
080e5c2b +0x01:  mov    %esp,%ebp
080e5c2d +0x03:  sub    $0x18,%esp
080e5c30 +0x06:  mov    0x8(%ebp),%eax
080e5c33 +0x09:  movl   $&_ZTV20ChattingEmoticonBase+0x8,(%eax)
080e5c39 +0x0f:  mov    0x8(%ebp),%eax
080e5c3c +0x12:  add    $0x8,%eax
080e5c3f +0x15:  mov    %eax,(%esp)
080e5c42 +0x18:  call   080da3dc <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x579>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x579
080e5c47 +0x1d:  mov    0x8(%ebp),%eax
080e5c4a +0x20:  movl   $0x0,0x4(%eax)
080e5c51 +0x27:  leave
080e5c52 +0x28:  ret
080e5c53 +0x29:  nop
```

## 反编译 C

```c
// ChattingEmoticonBase::ChattingEmoticonBase @ 0x80e5c2a

/* ChattingEmoticonBase::ChattingEmoticonBase() */

void __thiscall ChattingEmoticonBase::ChattingEmoticonBase(ChattingEmoticonBase *this)

{
  *(undefined ***)this = &PTR__ChattingEmoticonBase_08b30748;
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 8));
  *(undefined4 *)(this + 4) = 0;
  return;
}
```
