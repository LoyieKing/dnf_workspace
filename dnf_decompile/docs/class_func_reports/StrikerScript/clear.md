# clear

`_ZN13StrikerScript5clearEv`

`StrikerScript::clear()`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9dbb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9dbb4  _ZN13StrikerScript5clearEv
#           StrikerScript::clear()
# range [0x08a9dbb4, 0x08a9dc6f]
08a9dbb4 +0x00:  push   %ebp
08a9dbb5 +0x01:  mov    %esp,%ebp
08a9dbb7 +0x03:  sub    $0x18,%esp
08a9dbba +0x06:  mov    0x8(%ebp),%eax
08a9dbbd +0x09:  movl   $0x0,(%eax)
08a9dbc3 +0x0f:  mov    0x8(%ebp),%eax
08a9dbc6 +0x12:  movl   $0x0,0x4(%eax)
08a9dbcd +0x19:  mov    0x8(%ebp),%eax
08a9dbd0 +0x1c:  movl   $0x0,0x8(%eax)
08a9dbd7 +0x23:  mov    0x8(%ebp),%eax
08a9dbda +0x26:  movl   $0x0,0xc(%eax)
08a9dbe1 +0x2d:  mov    0x8(%ebp),%eax
08a9dbe4 +0x30:  movl   $0x1f4,0x10(%eax)
08a9dbeb +0x37:  mov    0x8(%ebp),%eax
08a9dbee +0x3a:  add    $0x14,%eax
08a9dbf1 +0x3d:  mov    %eax,(%esp)
08a9dbf4 +0x40:  call   08a9f09c <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x3af>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x3af
08a9dbf9 +0x45:  mov    0x8(%ebp),%eax
08a9dbfc +0x48:  add    $0x20,%eax
08a9dbff +0x4b:  mov    %eax,(%esp)
08a9dc02 +0x4e:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a9dc07 +0x53:  mov    0x8(%ebp),%eax
08a9dc0a +0x56:  movl   $0x0,0x38(%eax)
08a9dc11 +0x5d:  mov    0x8(%ebp),%eax
08a9dc14 +0x60:  movl   $0x0,0x3c(%eax)
08a9dc1b +0x67:  mov    0x8(%ebp),%eax
08a9dc1e +0x6a:  movl   $0x0,0x90(%eax)
08a9dc28 +0x74:  mov    0x8(%ebp),%eax
08a9dc2b +0x77:  movb   $0x0,0xa0(%eax)
08a9dc32 +0x7e:  mov    0x8(%ebp),%eax
08a9dc35 +0x81:  movl   $0x0,0x64(%eax)
08a9dc3c +0x88:  mov    0x8(%ebp),%eax
08a9dc3f +0x8b:  movl   $0x0,0x68(%eax)
08a9dc46 +0x92:  mov    0x8(%ebp),%eax
08a9dc49 +0x95:  movl   $0x0,0xa4(%eax)
08a9dc53 +0x9f:  mov    0x8(%ebp),%eax
08a9dc56 +0xa2:  movl   $0x0,0xac(%eax)
08a9dc60 +0xac:  mov    0x8(%ebp),%eax
08a9dc63 +0xaf:  movl   $0x63,0xb0(%eax)
08a9dc6d +0xb9:  leave
08a9dc6e +0xba:  ret
08a9dc6f +0xbb:  nop
```

## 反编译 C

```c
// StrikerScript::clear @ 0x8a9dbb4

/* StrikerScript::clear() */

void __thiscall StrikerScript::clear(StrikerScript *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 500;
  std::vector<ContentsType::T,std::allocator<ContentsType::T>>::clear
            ((vector<ContentsType::T,std::allocator<ContentsType::T>> *)(this + 0x14));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  this[0xa0] = (StrikerScript)0x0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 99;
  return;
}
```
