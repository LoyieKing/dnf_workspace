# CEventEntity

`_ZN13EventClassify12CEventEntityC1Ev`

`EventClassify::CEventEntity::CEventEntity()`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventEntity` | `0x0810af40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810af40  _ZN13EventClassify12CEventEntityC1Ev
#           EventClassify::CEventEntity::CEventEntity()
# range [0x0810af40, 0x0810afc3]
0810af40 +0x00:  push   %ebp
0810af41 +0x01:  mov    %esp,%ebp
0810af43 +0x03:  push   %esi
0810af44 +0x04:  push   %ebx
0810af45 +0x05:  sub    $0x10,%esp
0810af48 +0x08:  mov    0x8(%ebp),%eax
0810af4b +0x0b:  movl   $&_ZTVN13EventClassify12CEventEntityE+0x8,(%eax)
0810af51 +0x11:  mov    0x8(%ebp),%eax
0810af54 +0x14:  movb   $0x0,0x4(%eax)
0810af58 +0x18:  mov    0x8(%ebp),%eax
0810af5b +0x1b:  add    $0x8,%eax
0810af5e +0x1e:  mov    %eax,(%esp)
0810af61 +0x21:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0810af66 +0x26:  mov    0x8(%ebp),%eax
0810af69 +0x29:  movl   $0x0,0xc(%eax)
0810af70 +0x30:  mov    0x8(%ebp),%eax
0810af73 +0x33:  movl   $0x0,0x10(%eax)
0810af7a +0x3a:  mov    0x8(%ebp),%eax
0810af7d +0x3d:  movl   $0x0,0x14(%eax)
0810af84 +0x44:  mov    0x8(%ebp),%eax
0810af87 +0x47:  movl   $0x0,0x18(%eax)
0810af8e +0x4e:  mov    0x8(%ebp),%eax
0810af91 +0x51:  add    $0x8,%eax
0810af94 +0x54:  mov    %eax,(%esp)
0810af97 +0x57:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
0810af9c +0x5c:  jmp    0810afbc <+0x7c>
0810af9e +0x5e:  mov    %edx,%ebx
0810afa0 +0x60:  mov    %eax,%esi
0810afa2 +0x62:  mov    0x8(%ebp),%eax
0810afa5 +0x65:  add    $0x8,%eax
0810afa8 +0x68:  mov    %eax,(%esp)
0810afab +0x6b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0810afb0 +0x70:  mov    %esi,%eax
0810afb2 +0x72:  mov    %ebx,%edx
0810afb4 +0x74:  mov    %eax,(%esp)
0810afb7 +0x77:  call   08ae3750 <_Unwind_Resume>
0810afbc +0x7c:  add    $0x10,%esp
0810afbf +0x7f:  pop    %ebx
0810afc0 +0x80:  pop    %esi
0810afc1 +0x81:  pop    %ebp
0810afc2 +0x82:  ret
0810afc3 +0x83:  nop
```

## 反编译 C

```c
// EventClassify::CEventEntity::CEventEntity @ 0x810af40

/* EventClassify::CEventEntity::CEventEntity() */

void __thiscall EventClassify::CEventEntity::CEventEntity(CEventEntity *this)

{
  *(undefined ***)this = &PTR__CEventEntity_08b4d848;
  this[4] = (CEventEntity)0x0;
  std::string::string((string *)(this + 8));
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
                    /* try { // try from 0810af97 to 0810af9b has its CatchHandler @ 0810af9e */
  std::string::clear((string *)(this + 8));
  return;
}
```
