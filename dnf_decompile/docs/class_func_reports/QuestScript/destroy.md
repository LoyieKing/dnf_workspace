# destroy

`_ZN11QuestScript7destroyEv`

`QuestScript::destroy()`

| 类 | 地址 |
|---|---|
| `QuestScript` | `0x08a6130a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a6130a  _ZN11QuestScript7destroyEv
#           QuestScript::destroy()
# range [0x08a6130a, 0x08a6143e]
08a6130a +0x000:  push   %ebp
08a6130b +0x001:  mov    %esp,%ebp
08a6130d +0x003:  push   %ebx
08a6130e +0x004:  sub    $0x24,%esp
08a61311 +0x007:  movl   $0x0,-0xc(%ebp)
08a61318 +0x00e:  jmp    08a6142a <+0x120>
08a6131d +0x013:  mov    -0xc(%ebp),%edx
08a61320 +0x016:  mov    0x8(%ebp),%eax
08a61323 +0x019:  add    $0x4,%edx
08a61326 +0x01c:  mov    0x8(%eax,%edx,4),%eax
08a6132a +0x020:  test   %eax,%eax
08a6132c +0x022:  je     08a6134f <+0x45>
08a6132e +0x024:  mov    -0xc(%ebp),%edx
08a61331 +0x027:  mov    0x8(%ebp),%eax
08a61334 +0x02a:  add    $0x4,%edx
08a61337 +0x02d:  mov    0x8(%eax,%edx,4),%ebx
08a6133b +0x031:  test   %ebx,%ebx
08a6133d +0x033:  je     08a6134f <+0x45>
08a6133f +0x035:  mov    %ebx,(%esp)
08a61342 +0x038:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a61347 +0x03d:  mov    %ebx,(%esp)
08a6134a +0x040:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08a6134f +0x045:  mov    -0xc(%ebp),%edx
08a61352 +0x048:  mov    0x8(%ebp),%eax
08a61355 +0x04b:  add    $0x4,%edx
08a61358 +0x04e:  movl   $0x0,0x8(%eax,%edx,4)
08a61360 +0x056:  mov    -0xc(%ebp),%edx
08a61363 +0x059:  mov    0x8(%ebp),%eax
08a61366 +0x05c:  add    $0x10,%edx
08a61369 +0x05f:  mov    0x4(%eax,%edx,4),%eax
08a6136d +0x063:  test   %eax,%eax
08a6136f +0x065:  je     08a61392 <+0x88>
08a61371 +0x067:  mov    -0xc(%ebp),%edx
08a61374 +0x06a:  mov    0x8(%ebp),%eax
08a61377 +0x06d:  add    $0x10,%edx
08a6137a +0x070:  mov    0x4(%eax,%edx,4),%ebx
08a6137e +0x074:  test   %ebx,%ebx
08a61380 +0x076:  je     08a61392 <+0x88>
08a61382 +0x078:  mov    %ebx,(%esp)
08a61385 +0x07b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a6138a +0x080:  mov    %ebx,(%esp)
08a6138d +0x083:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08a61392 +0x088:  mov    -0xc(%ebp),%edx
08a61395 +0x08b:  mov    0x8(%ebp),%eax
08a61398 +0x08e:  add    $0x10,%edx
08a6139b +0x091:  movl   $0x0,0x4(%eax,%edx,4)
08a613a3 +0x099:  mov    -0xc(%ebp),%edx
08a613a6 +0x09c:  mov    0x8(%ebp),%eax
08a613a9 +0x09f:  add    $0x1c,%edx
08a613ac +0x0a2:  mov    (%eax,%edx,4),%eax
08a613af +0x0a5:  test   %eax,%eax
08a613b1 +0x0a7:  je     08a613d3 <+0xc9>
08a613b3 +0x0a9:  mov    -0xc(%ebp),%edx
08a613b6 +0x0ac:  mov    0x8(%ebp),%eax
08a613b9 +0x0af:  add    $0x1c,%edx
08a613bc +0x0b2:  mov    (%eax,%edx,4),%ebx
08a613bf +0x0b5:  test   %ebx,%ebx
08a613c1 +0x0b7:  je     08a613d3 <+0xc9>
08a613c3 +0x0b9:  mov    %ebx,(%esp)
08a613c6 +0x0bc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a613cb +0x0c1:  mov    %ebx,(%esp)
08a613ce +0x0c4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08a613d3 +0x0c9:  mov    -0xc(%ebp),%edx
08a613d6 +0x0cc:  mov    0x8(%ebp),%eax
08a613d9 +0x0cf:  add    $0x1c,%edx
08a613dc +0x0d2:  movl   $0x0,(%eax,%edx,4)
08a613e3 +0x0d9:  mov    -0xc(%ebp),%edx
08a613e6 +0x0dc:  mov    0x8(%ebp),%eax
08a613e9 +0x0df:  add    $0x24,%edx
08a613ec +0x0e2:  mov    0xc(%eax,%edx,4),%eax
08a613f0 +0x0e6:  test   %eax,%eax
08a613f2 +0x0e8:  je     08a61415 <+0x10b>
08a613f4 +0x0ea:  mov    -0xc(%ebp),%edx
08a613f7 +0x0ed:  mov    0x8(%ebp),%eax
08a613fa +0x0f0:  add    $0x24,%edx
08a613fd +0x0f3:  mov    0xc(%eax,%edx,4),%ebx
08a61401 +0x0f7:  test   %ebx,%ebx
08a61403 +0x0f9:  je     08a61415 <+0x10b>
08a61405 +0x0fb:  mov    %ebx,(%esp)
08a61408 +0x0fe:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a6140d +0x103:  mov    %ebx,(%esp)
08a61410 +0x106:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08a61415 +0x10b:  mov    -0xc(%ebp),%edx
08a61418 +0x10e:  mov    0x8(%ebp),%eax
08a6141b +0x111:  add    $0x24,%edx
08a6141e +0x114:  movl   $0x0,0xc(%eax,%edx,4)
08a61426 +0x11c:  addl   $0x1,-0xc(%ebp)
08a6142a +0x120:  cmpl   $0xa,-0xc(%ebp)
08a6142e +0x124:  setle  %al
08a61431 +0x127:  test   %al,%al
08a61433 +0x129:  jne    08a6131d <+0x13>
08a61439 +0x12f:  add    $0x24,%esp
08a6143c +0x132:  pop    %ebx
08a6143d +0x133:  pop    %ebp
08a6143e +0x134:  ret
```

## 反编译 C

```c
// QuestScript::destroy @ 0x8a6130a

/* QuestScript::destroy() */

void __thiscall QuestScript::destroy(QuestScript *this)

{
  string *psVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    if ((*(int *)(this + (local_10 + 4) * 4 + 8) != 0) &&
       (psVar1 = *(string **)(this + (local_10 + 4) * 4 + 8), psVar1 != (string *)0x0)) {
      std::string::~string(psVar1);
      operator_delete(psVar1);
    }
    *(undefined4 *)(this + (local_10 + 4) * 4 + 8) = 0;
    if ((*(int *)(this + (local_10 + 0x10) * 4 + 4) != 0) &&
       (psVar1 = *(string **)(this + (local_10 + 0x10) * 4 + 4), psVar1 != (string *)0x0)) {
      std::string::~string(psVar1);
      operator_delete(psVar1);
    }
    *(undefined4 *)(this + (local_10 + 0x10) * 4 + 4) = 0;
    if ((*(int *)(this + (local_10 + 0x1c) * 4) != 0) &&
       (psVar1 = *(string **)(this + (local_10 + 0x1c) * 4), psVar1 != (string *)0x0)) {
      std::string::~string(psVar1);
      operator_delete(psVar1);
    }
    *(undefined4 *)(this + (local_10 + 0x1c) * 4) = 0;
    if ((*(int *)(this + (local_10 + 0x24) * 4 + 0xc) != 0) &&
       (psVar1 = *(string **)(this + (local_10 + 0x24) * 4 + 0xc), psVar1 != (string *)0x0)) {
      std::string::~string(psVar1);
      operator_delete(psVar1);
    }
    *(undefined4 *)(this + (local_10 + 0x24) * 4 + 0xc) = 0;
  }
  return;
}
```
