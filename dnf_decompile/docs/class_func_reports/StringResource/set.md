# set

`_ZN14StringResource3setEiRK10CharString`

`StringResource::set(int, CharString const&)`

| 类 | 地址 |
|---|---|
| `StringResource` | `0x08ad48e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad48e6  _ZN14StringResource3setEiRK10CharString
#           StringResource::set(int, CharString const&)
# range [0x08ad48e6, 0x08ad490e]
08ad48e6 +0x00:  push   %ebp
08ad48e7 +0x01:  mov    %esp,%ebp
08ad48e9 +0x03:  sub    $0x18,%esp
08ad48ec +0x06:  mov    0x8(%ebp),%eax
08ad48ef +0x09:  lea    0xc(%ebp),%edx
08ad48f2 +0x0c:  mov    %edx,0x4(%esp)
08ad48f6 +0x10:  mov    %eax,(%esp)
08ad48f9 +0x13:  call   08ad5718 <_ZN3app6getStrEi+0x24c>  ; app::getStr(int)+0x24c
08ad48fe +0x18:  mov    0x10(%ebp),%edx
08ad4901 +0x1b:  mov    %edx,0x4(%esp)
08ad4905 +0x1f:  mov    %eax,(%esp)
08ad4908 +0x22:  call   08ad70de <_ZN10CharStringaSERKS_>  ; CharString::operator=(CharString const&)
08ad490d +0x27:  leave
08ad490e +0x28:  ret
```

## 反编译 C

```c
// StringResource::set @ 0x8ad48e6

/* StringResource::set(int, CharString const&) */

void __thiscall StringResource::set(StringResource *this,int param_1,CharString *param_2)

{
  CharString *this_00;
  
  this_00 = (CharString *)
            std::map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>>
            ::operator[]((map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>>
                          *)this,&param_1);
  CharString::operator=(this_00,(CharString *)param_2);
  return;
}
```
