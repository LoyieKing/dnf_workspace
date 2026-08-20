# findChangedString

`_ZN23RDARScriptStringManager17findChangedStringEiPKcPb`

`RDARScriptStringManager::findChangedString(int, char const*, bool*)`

| 类 | 地址 |
|---|---|
| `RDARScriptStringManager` | `0x08aa6448` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aa6448  _ZN23RDARScriptStringManager17findChangedStringEiPKcPb
#           RDARScriptStringManager::findChangedString(int, char const*, bool*)
# range [0x08aa6448, 0x08aa6550]
08aa6448 +0x000:  push   %ebp
08aa6449 +0x001:  mov    %esp,%ebp
08aa644b +0x003:  push   %edi
08aa644c +0x004:  push   %esi
08aa644d +0x005:  push   %ebx
08aa644e +0x006:  sub    $0x2c,%esp
08aa6451 +0x009:  mov    $&_ZGVZN23RDARScriptStringManager17findChangedStringEiPKcPbE3ret,%eax
08aa6456 +0x00e:  movzbl (%eax),%eax
08aa6459 +0x011:  test   %al,%al
08aa645b +0x013:  jne    08aa652a <+0xe2>
08aa6461 +0x019:  movl   $&_ZGVZN23RDARScriptStringManager17findChangedStringEiPKcPbE3ret,(%esp)
08aa6468 +0x020:  call   08725330 <__cxa_guard_acquire>
08aa646d +0x025:  test   %eax,%eax
08aa646f +0x027:  setne  %al
08aa6472 +0x02a:  test   %al,%al
08aa6474 +0x02c:  je     08aa652a <+0xe2>
08aa647a +0x032:  mov    $0x0,%ebx
08aa647f +0x037:  lea    -0x19(%ebp),%eax
08aa6482 +0x03a:  mov    %eax,(%esp)
08aa6485 +0x03d:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08aa648a +0x042:  mov    0x14(%ebp),%eax
08aa648d +0x045:  mov    %eax,0xc(%esp)
08aa6491 +0x049:  mov    0x10(%ebp),%eax
08aa6494 +0x04c:  mov    %eax,0x8(%esp)
08aa6498 +0x050:  mov    0xc(%ebp),%eax
08aa649b +0x053:  mov    %eax,0x4(%esp)
08aa649f +0x057:  mov    0x8(%ebp),%eax
08aa64a2 +0x05a:  mov    %eax,(%esp)
08aa64a5 +0x05d:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08aa64aa +0x062:  lea    -0x19(%ebp),%edx
08aa64ad +0x065:  mov    %edx,0x8(%esp)
08aa64b1 +0x069:  mov    %eax,0x4(%esp)
08aa64b5 +0x06d:  movl   $&_ZZN23RDARScriptStringManager17findChangedStringEiPKcPbE3ret,(%esp)
08aa64bc +0x074:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08aa64c1 +0x079:  movl   $&_ZGVZN23RDARScriptStringManager17findChangedStringEiPKcPbE3ret,(%esp)
08aa64c8 +0x080:  call   08725250 <__cxa_guard_release>
08aa64cd +0x085:  mov    $&_ZNSsD1Ev,%eax
08aa64d2 +0x08a:  movl   $&__dso_handle,0x8(%esp)
08aa64da +0x092:  movl   $&_ZZN23RDARScriptStringManager17findChangedStringEiPKcPbE3ret,0x4(%esp)
08aa64e2 +0x09a:  mov    %eax,(%esp)
08aa64e5 +0x09d:  call   0807ddd0 <_init+0x6c8>
08aa64ea +0x0a2:  lea    -0x19(%ebp),%eax
08aa64ed +0x0a5:  mov    %eax,(%esp)
08aa64f0 +0x0a8:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08aa64f5 +0x0ad:  jmp    08aa652a <+0xe2>
08aa64f7 +0x0af:  mov    %edx,%esi
08aa64f9 +0x0b1:  mov    %eax,%edi
08aa64fb +0x0b3:  lea    -0x19(%ebp),%eax
08aa64fe +0x0b6:  mov    %eax,(%esp)
08aa6501 +0x0b9:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08aa6506 +0x0be:  mov    %edi,%eax
08aa6508 +0x0c0:  mov    %esi,%edx
08aa650a +0x0c2:  mov    %edx,%esi
08aa650c +0x0c4:  mov    %eax,%edi
08aa650e +0x0c6:  test   %bl,%bl
08aa6510 +0x0c8:  jne    08aa651e <+0xd6>
08aa6512 +0x0ca:  movl   $&_ZGVZN23RDARScriptStringManager17findChangedStringEiPKcPbE3ret,(%esp)
08aa6519 +0x0d1:  call   087252c0 <__cxa_guard_abort>
08aa651e +0x0d6:  mov    %edi,%eax
08aa6520 +0x0d8:  mov    %esi,%edx
08aa6522 +0x0da:  mov    %eax,(%esp)
08aa6525 +0x0dd:  call   08ae3750 <_Unwind_Resume>
08aa652a +0x0e2:  movl   $&_ZZN23RDARScriptStringManager17findChangedStringEiPKcPbE3ret,0x4(%esp)
08aa6532 +0x0ea:  mov    0x8(%ebp),%eax
08aa6535 +0x0ed:  mov    %eax,(%esp)
08aa6538 +0x0f0:  call   08aa60b0 <_ZN23RDARScriptStringManager18changeSpacilTagStrERSs>  ; RDARScriptStringManager::changeSpacilTagStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
08aa653d +0x0f5:  movl   $&_ZZN23RDARScriptStringManager17findChangedStringEiPKcPbE3ret,(%esp)
08aa6544 +0x0fc:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08aa6549 +0x101:  add    $0x2c,%esp
08aa654c +0x104:  pop    %ebx
08aa654d +0x105:  pop    %esi
08aa654e +0x106:  pop    %edi
08aa654f +0x107:  pop    %ebp
08aa6550 +0x108:  ret
```

## 反编译 C

```c
// RDARScriptStringManager::findChangedString @ 0x8aa6448

/* RDARScriptStringManager::findChangedString(int, char const*, bool*) */

void __thiscall
RDARScriptStringManager::findChangedString
          (RDARScriptStringManager *this,int param_1,char *param_2,bool *param_3)

{
  int iVar1;
  char *pcVar2;
  allocator<char> local_1d [13];
  
  if (findChangedString(int,char_const*,bool*)::ret == '\0') {
    iVar1 = __cxa_guard_acquire(&findChangedString(int,char_const*,bool*)::ret);
    if (iVar1 != 0) {
      std::allocator<char>::allocator();
                    /* try { // try from 08aa64a5 to 08aa64c0 has its CatchHandler @ 08aa64f7 */
      pcVar2 = (char *)findString(this,param_1,param_2,param_3);
      std::string::string((string *)&findChangedString(int,char_const*,bool*)::ret,pcVar2,
                          (allocator *)local_1d);
      __cxa_guard_release(&findChangedString(int,char_const*,bool*)::ret);
      __cxa_atexit(std::string::~string,&findChangedString(int,char_const*,bool*)::ret,&__dso_handle
                  );
      std::allocator<char>::~allocator(local_1d);
    }
  }
  changeSpacilTagStr(this,(string *)&findChangedString(int,char_const*,bool*)::ret);
  std::string::c_str((string *)&findChangedString(int,char_const*,bool*)::ret);
  return;
}
```
