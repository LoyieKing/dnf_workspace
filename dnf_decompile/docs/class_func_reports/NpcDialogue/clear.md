# clear

`_ZN11NpcDialogue5clearEv`

`NpcDialogue::clear()`

| 类 | 地址 |
|---|---|
| `NpcDialogue` | `0x089fb71c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089fb71c  _ZN11NpcDialogue5clearEv
#           NpcDialogue::clear()
# range [0x089fb71c, 0x089fb78d]
089fb71c +0x00:  push   %ebp
089fb71d +0x01:  mov    %esp,%ebp
089fb71f +0x03:  sub    $0x28,%esp
089fb722 +0x06:  mov    0x8(%ebp),%eax
089fb725 +0x09:  movl   $0x0,(%eax)
089fb72b +0x0f:  movl   $0x0,-0xc(%ebp)
089fb732 +0x16:  jmp    089fb746 <+0x2a>
089fb734 +0x18:  mov    -0xc(%ebp),%edx
089fb737 +0x1b:  mov    0x8(%ebp),%eax
089fb73a +0x1e:  movl   $0x0,0x4(%eax,%edx,4)
089fb742 +0x26:  addl   $0x1,-0xc(%ebp)
089fb746 +0x2a:  cmpl   $0x1,-0xc(%ebp)
089fb74a +0x2e:  setle  %al
089fb74d +0x31:  test   %al,%al
089fb74f +0x33:  jne    089fb734 <+0x18>
089fb751 +0x35:  mov    0x8(%ebp),%eax
089fb754 +0x38:  add    $0xc,%eax
089fb757 +0x3b:  movl   $"",0x4(%esp)
089fb75f +0x43:  mov    %eax,(%esp)
089fb762 +0x46:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
089fb767 +0x4b:  mov    0x8(%ebp),%eax
089fb76a +0x4e:  add    $0x10,%eax
089fb76d +0x51:  movl   $"",0x4(%esp)
089fb775 +0x59:  mov    %eax,(%esp)
089fb778 +0x5c:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
089fb77d +0x61:  mov    0x8(%ebp),%eax
089fb780 +0x64:  add    $0x14,%eax
089fb783 +0x67:  mov    %eax,(%esp)
089fb786 +0x6a:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
089fb78b +0x6f:  leave
089fb78c +0x70:  ret
089fb78d +0x71:  nop
```

## 反编译 C

```c
// NpcDialogue::clear @ 0x89fb71c

/* NpcDialogue::clear() */

void __thiscall NpcDialogue::clear(NpcDialogue *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    *(undefined4 *)(this + local_10 * 4 + 4) = 0;
  }
  std::string::operator=((string *)(this + 0xc),"");
  std::string::operator=((string *)(this + 0x10),"");
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x14));
  return;
}
```
