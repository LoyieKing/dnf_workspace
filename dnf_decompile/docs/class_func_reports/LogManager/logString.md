# logString

`_ZN10LogManager9logStringEiPKcS1_iS1_`

`LogManager::logString(int, char const*, char const*, int, char const*)`

| 类 | 地址 |
|---|---|
| `LogManager` | `0x08ad3da2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3da2  _ZN10LogManager9logStringEiPKcS1_iS1_
#           LogManager::logString(int, char const*, char const*, int, char const*)
# range [0x08ad3da2, 0x08ad3ef5]
08ad3da2 +0x000:  push   %ebp
08ad3da3 +0x001:  mov    %esp,%ebp
08ad3da5 +0x003:  push   %esi
08ad3da6 +0x004:  push   %ebx
08ad3da7 +0x005:  sub    $0x30,%esp
08ad3daa +0x008:  call   08ad3ba0 <_ZL11prepareDatav>  ; prepareData()
08ad3daf +0x00d:  mov    0x8(%ebp),%edx
08ad3db2 +0x010:  mov    &_ZL6s_data,%eax
08ad3db7 +0x015:  mov    %edx,0x4(%esp)
08ad3dbb +0x019:  mov    %eax,(%esp)
08ad3dbe +0x01c:  call   08ad435e <_GLOBAL__I__ZN9LogWriterC2Ev+0x3a7>  ; global constructors keyed to LogWriter::LogWriter()+0x3a7
08ad3dc3 +0x021:  mov    %eax,(%esp)
08ad3dc6 +0x024:  call   08ad436c <_GLOBAL__I__ZN9LogWriterC2Ev+0x3b5>  ; global constructors keyed to LogWriter::LogWriter()+0x3b5
08ad3dcb +0x029:  cmp    $0xffffffff,%eax
08ad3dce +0x02c:  setne  %al
08ad3dd1 +0x02f:  test   %al,%al
08ad3dd3 +0x031:  je     08ad3eee <+0x14c>
08ad3dd9 +0x037:  mov    &_ZL8s_indent,%eax
08ad3dde +0x03c:  test   %eax,%eax
08ad3de0 +0x03e:  jle    08ad3eaa <+0x108>
08ad3de6 +0x044:  lea    -0x10(%ebp),%eax
08ad3de9 +0x047:  mov    %eax,(%esp)
08ad3dec +0x04a:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ad3df1 +0x04f:  movl   $0x0,-0xc(%ebp)
08ad3df8 +0x056:  jmp    08ad3e11 <+0x6f>
08ad3dfa +0x058:  movl   $"\t",0x4(%esp)
08ad3e02 +0x060:  lea    -0x10(%ebp),%eax
08ad3e05 +0x063:  mov    %eax,(%esp)
08ad3e08 +0x066:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08ad3e0d +0x06b:  addl   $0x1,-0xc(%ebp)
08ad3e11 +0x06f:  mov    &_ZL8s_indent,%eax
08ad3e16 +0x074:  cmp    %eax,-0xc(%ebp)
08ad3e19 +0x077:  setl   %al
08ad3e1c +0x07a:  test   %al,%al
08ad3e1e +0x07c:  jne    08ad3dfa <+0x58>
08ad3e20 +0x07e:  mov    0x18(%ebp),%eax
08ad3e23 +0x081:  mov    %eax,0x4(%esp)
08ad3e27 +0x085:  lea    -0x10(%ebp),%eax
08ad3e2a +0x088:  mov    %eax,(%esp)
08ad3e2d +0x08b:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08ad3e32 +0x090:  mov    0x8(%ebp),%edx
08ad3e35 +0x093:  mov    &_ZL6s_data,%eax
08ad3e3a +0x098:  mov    %edx,0x4(%esp)
08ad3e3e +0x09c:  mov    %eax,(%esp)
08ad3e41 +0x09f:  call   08ad435e <_GLOBAL__I__ZN9LogWriterC2Ev+0x3a7>  ; global constructors keyed to LogWriter::LogWriter()+0x3a7
08ad3e46 +0x0a4:  mov    %eax,(%esp)
08ad3e49 +0x0a7:  call   08ad4386 <_GLOBAL__I__ZN9LogWriterC2Ev+0x3cf>  ; global constructors keyed to LogWriter::LogWriter()+0x3cf
08ad3e4e +0x0ac:  mov    %eax,%ebx
08ad3e50 +0x0ae:  mov    (%ebx),%eax
08ad3e52 +0x0b0:  add    $0x8,%eax
08ad3e55 +0x0b3:  mov    (%eax),%esi
08ad3e57 +0x0b5:  lea    -0x10(%ebp),%eax
08ad3e5a +0x0b8:  mov    %eax,(%esp)
08ad3e5d +0x0bb:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ad3e62 +0x0c0:  mov    %eax,0x10(%esp)
08ad3e66 +0x0c4:  mov    0x14(%ebp),%eax
08ad3e69 +0x0c7:  mov    %eax,0xc(%esp)
08ad3e6d +0x0cb:  mov    0x10(%ebp),%eax
08ad3e70 +0x0ce:  mov    %eax,0x8(%esp)
08ad3e74 +0x0d2:  mov    0xc(%ebp),%eax
08ad3e77 +0x0d5:  mov    %eax,0x4(%esp)
08ad3e7b +0x0d9:  mov    %ebx,(%esp)
08ad3e7e +0x0dc:  call   *%esi
08ad3e80 +0x0de:  jmp    08ad3e9d <+0xfb>
08ad3e82 +0x0e0:  mov    %edx,%ebx
08ad3e84 +0x0e2:  mov    %eax,%esi
08ad3e86 +0x0e4:  lea    -0x10(%ebp),%eax
08ad3e89 +0x0e7:  mov    %eax,(%esp)
08ad3e8c +0x0ea:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ad3e91 +0x0ef:  mov    %esi,%eax
08ad3e93 +0x0f1:  mov    %ebx,%edx
08ad3e95 +0x0f3:  mov    %eax,(%esp)
08ad3e98 +0x0f6:  call   08ae3750 <_Unwind_Resume>
08ad3e9d +0x0fb:  lea    -0x10(%ebp),%eax
08ad3ea0 +0x0fe:  mov    %eax,(%esp)
08ad3ea3 +0x101:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ad3ea8 +0x106:  jmp    08ad3eee <+0x14c>
08ad3eaa +0x108:  mov    0x8(%ebp),%edx
08ad3ead +0x10b:  mov    &_ZL6s_data,%eax
08ad3eb2 +0x110:  mov    %edx,0x4(%esp)
08ad3eb6 +0x114:  mov    %eax,(%esp)
08ad3eb9 +0x117:  call   08ad435e <_GLOBAL__I__ZN9LogWriterC2Ev+0x3a7>  ; global constructors keyed to LogWriter::LogWriter()+0x3a7
08ad3ebe +0x11c:  mov    %eax,(%esp)
08ad3ec1 +0x11f:  call   08ad4386 <_GLOBAL__I__ZN9LogWriterC2Ev+0x3cf>  ; global constructors keyed to LogWriter::LogWriter()+0x3cf
08ad3ec6 +0x124:  mov    (%eax),%edx
08ad3ec8 +0x126:  add    $0x8,%edx
08ad3ecb +0x129:  mov    (%edx),%ecx
08ad3ecd +0x12b:  mov    0x18(%ebp),%edx
08ad3ed0 +0x12e:  mov    %edx,0x10(%esp)
08ad3ed4 +0x132:  mov    0x14(%ebp),%edx
08ad3ed7 +0x135:  mov    %edx,0xc(%esp)
08ad3edb +0x139:  mov    0x10(%ebp),%edx
08ad3ede +0x13c:  mov    %edx,0x8(%esp)
08ad3ee2 +0x140:  mov    0xc(%ebp),%edx
08ad3ee5 +0x143:  mov    %edx,0x4(%esp)
08ad3ee9 +0x147:  mov    %eax,(%esp)
08ad3eec +0x14a:  call   *%ecx
08ad3eee +0x14c:  add    $0x30,%esp
08ad3ef1 +0x14f:  pop    %ebx
08ad3ef2 +0x150:  pop    %esi
08ad3ef3 +0x151:  pop    %ebp
08ad3ef4 +0x152:  ret
08ad3ef5 +0x153:  nop
```

## 反编译 C

```c
// LogManager::logString @ 0x8ad3da2

/* LogManager::logString(int, char const*, char const*, int, char const*) */

void LogManager::logString(int param_1,char *param_2,char *param_3,int param_4,char *param_5)

{
  code *pcVar1;
  __shared_ptr *this;
  LogWriter_ *pLVar2;
  __shared_ptr<LogWriter,(__gnu_cxx::_Lock_policy)2> *p_Var3;
  int *piVar4;
  undefined4 uVar5;
  string local_14 [4];
  int local_10;
  
  prepareData();
  this = (__shared_ptr *)std::array<std::shared_ptr<LogWriter>,64u>::operator[](s_data,param_1);
  pLVar2 = std::__shared_ptr::operator_cast_to__(this);
  if (pLVar2 != (LogWriter_ *)0xffffffff) {
    if (s_indent < 1) {
      p_Var3 = (__shared_ptr<LogWriter,(__gnu_cxx::_Lock_policy)2> *)
               std::array<std::shared_ptr<LogWriter>,64u>::operator[](s_data,param_1);
      piVar4 = (int *)std::__shared_ptr<LogWriter,(__gnu_cxx::_Lock_policy)2>::operator->(p_Var3);
      (**(code **)(*piVar4 + 8))(piVar4,param_2,param_3,param_4,param_5);
    }
    else {
      std::string::string(local_14);
      for (local_10 = 0; local_10 < s_indent; local_10 = local_10 + 1) {
                    /* try { // try from 08ad3e08 to 08ad3e7f has its CatchHandler @ 08ad3e82 */
        std::string::operator+=(local_14,"\t");
      }
      std::string::operator+=(local_14,param_5);
      p_Var3 = (__shared_ptr<LogWriter,(__gnu_cxx::_Lock_policy)2> *)
               std::array<std::shared_ptr<LogWriter>,64u>::operator[](s_data,param_1);
      piVar4 = (int *)std::__shared_ptr<LogWriter,(__gnu_cxx::_Lock_policy)2>::operator->(p_Var3);
      pcVar1 = *(code **)(*piVar4 + 8);
      uVar5 = std::string::c_str(local_14);
      (*pcVar1)(piVar4,param_2,param_3,param_4,uVar5);
      std::string::~string(local_14);
    }
  }
  return;
}
```
