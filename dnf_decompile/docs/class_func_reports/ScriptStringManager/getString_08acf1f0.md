# getString

`_ZNK19ScriptStringManager9getStringEi`

`ScriptStringManager::getString(int) const`

| 类 | 地址 |
|---|---|
| `ScriptStringManager` | `0x08acf1f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acf1f0  _ZNK19ScriptStringManager9getStringEi
#           ScriptStringManager::getString(int) const
# range [0x08acf1f0, 0x08acf29c]
08acf1f0 +0x00:  push   %ebp
08acf1f1 +0x01:  mov    %esp,%ebp
08acf1f3 +0x03:  sub    $0x28,%esp
08acf1f6 +0x06:  cmpb   $0x0,&_ZGVZNK19ScriptStringManager9getStringEiE14DEFAULT_STRING
08acf1fd +0x0d:  mov    %ebx,-0x8(%ebp)
08acf200 +0x10:  mov    0xc(%ebp),%ebx
08acf203 +0x13:  mov    %esi,-0x4(%ebp)
08acf206 +0x16:  mov    0x8(%ebp),%esi
08acf209 +0x19:  je     08acf230 <+0x40>
08acf20b +0x1b:  test   %ebx,%ebx
08acf20d +0x1d:  js     08acf221 <+0x31>
08acf20f +0x1f:  mov    0x4(%esi),%eax
08acf212 +0x22:  mov    0x8(%esi),%edx
08acf215 +0x25:  sub    %eax,%edx
08acf217 +0x27:  sar    $0x2,%edx
08acf21a +0x2a:  cmp    %edx,%ebx
08acf21c +0x2c:  lea    (%eax,%ebx,4),%eax
08acf21f +0x2f:  jl     08acf226 <+0x36>
08acf221 +0x31:  mov    $&_ZZNK19ScriptStringManager9getStringEiE14DEFAULT_STRING,%eax
08acf226 +0x36:  mov    -0x8(%ebp),%ebx
08acf229 +0x39:  mov    -0x4(%ebp),%esi
08acf22c +0x3c:  mov    %ebp,%esp
08acf22e +0x3e:  pop    %ebp
08acf22f +0x3f:  ret
08acf230 +0x40:  movl   $&_ZGVZNK19ScriptStringManager9getStringEiE14DEFAULT_STRING,(%esp)
08acf237 +0x47:  call   08725330 <__cxa_guard_acquire>
08acf23c +0x4c:  test   %eax,%eax
08acf23e +0x4e:  je     08acf20b <+0x1b>
08acf240 +0x50:  lea    -0x9(%ebp),%eax
08acf243 +0x53:  mov    %eax,0x8(%esp)
08acf247 +0x57:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
08acf24f +0x5f:  movl   $&_ZZNK19ScriptStringManager9getStringEiE14DEFAULT_STRING,(%esp)
08acf256 +0x66:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08acf25b +0x6b:  movl   $&_ZGVZNK19ScriptStringManager9getStringEiE14DEFAULT_STRING,(%esp)
08acf262 +0x72:  call   08725250 <__cxa_guard_release>
08acf267 +0x77:  movl   $&__dso_handle,0x8(%esp)
08acf26f +0x7f:  movl   $&_ZZNK19ScriptStringManager9getStringEiE14DEFAULT_STRING,0x4(%esp)
08acf277 +0x87:  movl   $&_ZNSsD1Ev,(%esp)
08acf27e +0x8e:  call   0807ddd0 <_init+0x6c8>
08acf283 +0x93:  jmp    08acf20b <+0x1b>
08acf285 +0x95:  mov    %eax,%ebx
08acf287 +0x97:  movl   $&_ZGVZNK19ScriptStringManager9getStringEiE14DEFAULT_STRING,(%esp)
08acf28e +0x9e:  call   087252c0 <__cxa_guard_abort>
08acf293 +0xa3:  mov    %ebx,(%esp)
08acf296 +0xa6:  call   08ae3750 <_Unwind_Resume>
08acf29b +0xab:  nop
08acf29c +0xac:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// ScriptStringManager::getString @ 0x8acf1f0

/* DWARF original prototype: string * getString(ScriptStringManager * this, int index) */

string * __thiscall ScriptStringManager::getString(ScriptStringManager *this,int index)

{
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar1;
  string *psVar2;
  int iVar3;
  allocator local_d;
  
  if (getString(int)::DEFAULT_STRING == '\0') {
    iVar3 = __cxa_guard_acquire(&getString(int)::DEFAULT_STRING);
    if (iVar3 != 0) {
                    /* try { // try from 08acf256 to 08acf25a has its CatchHandler @ 08acf285 */
      std::string::string((string *)&getString::lexical_block_0::DEFAULT_STRING,"",&local_d);
      __cxa_guard_release(&getString(int)::DEFAULT_STRING);
      __cxa_atexit(std::string::~string,&getString::lexical_block_0::DEFAULT_STRING,&__dso_handle);
    }
  }
  if ((index < 0) ||
     (pbVar1 = (this->strings_).
               super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
               ._M_impl._M_start, psVar2 = pbVar1 + index,
     (int)(this->strings_).
          super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
          ._M_impl._M_finish - (int)pbVar1 >> 2 <= index)) {
    psVar2 = &getString::lexical_block_0::DEFAULT_STRING;
  }
  return psVar2;
}
```
