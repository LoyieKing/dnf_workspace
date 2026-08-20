# dungeonEventHanaseStruct

`_ZN24dungeonEventHanaseStructC1Ev`

`dungeonEventHanaseStruct::dungeonEventHanaseStruct()`

| 类 | 地址 |
|---|---|
| `dungeonEventHanaseStruct` | `0x08a60f78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a60f78  _ZN24dungeonEventHanaseStructC1Ev
#           dungeonEventHanaseStruct::dungeonEventHanaseStruct()
# range [0x08a60f78, 0x08a6100d]
08a60f78 +0x00:  push   %ebp
08a60f79 +0x01:  mov    %esp,%ebp
08a60f7b +0x03:  sub    $0x28,%esp
08a60f7e +0x06:  mov    0x8(%ebp),%eax
08a60f81 +0x09:  movl   $0x0,(%eax)
08a60f87 +0x0f:  mov    0x8(%ebp),%eax
08a60f8a +0x12:  movl   $0x0,0x4(%eax)
08a60f91 +0x19:  mov    0x8(%ebp),%eax
08a60f94 +0x1c:  movl   $0x0,0x8(%eax)
08a60f9b +0x23:  mov    0x8(%ebp),%eax
08a60f9e +0x26:  movl   $0x0,0xc(%eax)
08a60fa5 +0x2d:  mov    0x8(%ebp),%eax
08a60fa8 +0x30:  movb   $0x0,0x10(%eax)
08a60fac +0x34:  mov    0x8(%ebp),%eax
08a60faf +0x37:  movl   $0x0,0x14(%eax)
08a60fb6 +0x3e:  mov    0x8(%ebp),%eax
08a60fb9 +0x41:  movl   $0x0,0x18(%eax)
08a60fc0 +0x48:  mov    0x8(%ebp),%eax
08a60fc3 +0x4b:  movl   $0x0,0x1c(%eax)
08a60fca +0x52:  mov    0x8(%ebp),%eax
08a60fcd +0x55:  add    $0x20,%eax
08a60fd0 +0x58:  mov    %eax,(%esp)
08a60fd3 +0x5b:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a60fd8 +0x60:  mov    0x8(%ebp),%eax
08a60fdb +0x63:  movl   $0x0,0x24(%eax)
08a60fe2 +0x6a:  movl   $0x0,-0xc(%ebp)
08a60fe9 +0x71:  jmp    08a61000 <+0x88>
08a60feb +0x73:  mov    -0xc(%ebp),%edx
08a60fee +0x76:  mov    0x8(%ebp),%eax
08a60ff1 +0x79:  add    $0x8,%edx
08a60ff4 +0x7c:  movl   $0x0,0x8(%eax,%edx,4)
08a60ffc +0x84:  addl   $0x1,-0xc(%ebp)
08a61000 +0x88:  cmpl   $0xa,-0xc(%ebp)
08a61004 +0x8c:  setle  %al
08a61007 +0x8f:  test   %al,%al
08a61009 +0x91:  jne    08a60feb <+0x73>
08a6100b +0x93:  leave
08a6100c +0x94:  ret
08a6100d +0x95:  nop
```

## 反编译 C

```c
// dungeonEventHanaseStruct::dungeonEventHanaseStruct @ 0x8a60f78

/* dungeonEventHanaseStruct::dungeonEventHanaseStruct() */

void __thiscall dungeonEventHanaseStruct::dungeonEventHanaseStruct(dungeonEventHanaseStruct *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = (dungeonEventHanaseStruct)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  std::string::string((string *)(this + 0x20));
  *(undefined4 *)(this + 0x24) = 0;
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 8) * 4 + 8) = 0;
  }
  return;
}
```
