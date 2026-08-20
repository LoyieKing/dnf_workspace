# setElement

`_ZN10AttackInfo10setElementE12ENUM_ELEMENT`

`AttackInfo::setElement(ENUM_ELEMENT)`

| 类 | 地址 |
|---|---|
| `AttackInfo` | `0x0889079a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889079a  _ZN10AttackInfo10setElementE12ENUM_ELEMENT
#           AttackInfo::setElement(ENUM_ELEMENT)
# range [0x0889079a, 0x088907fd]
0889079a +0x00:  push   %ebp
0889079b +0x01:  mov    %esp,%ebp
0889079d +0x03:  sub    $0x28,%esp
088907a0 +0x06:  mov    0xc(%ebp),%eax
088907a3 +0x09:  cmp    $0x4,%eax
088907a6 +0x0c:  jne    088907ba <+0x20>
088907a8 +0x0e:  mov    0x8(%ebp),%eax
088907ab +0x11:  add    $0xa4,%eax
088907b0 +0x16:  mov    %eax,(%esp)
088907b3 +0x19:  call   08890dd8 <_ZN10AttackInfo13getAttackTypeERSs+0x512>  ; AttackInfo::getAttackType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x512
088907b8 +0x1e:  jmp    088907fb <+0x61>
088907ba +0x20:  movl   $0x4,-0x14(%ebp)
088907c1 +0x27:  mov    0x8(%ebp),%eax
088907c4 +0x2a:  lea    0xa4(%eax),%edx
088907ca +0x30:  lea    -0x14(%ebp),%eax
088907cd +0x33:  mov    %eax,0x4(%esp)
088907d1 +0x37:  mov    %edx,(%esp)
088907d4 +0x3a:  call   08890e08 <_ZN10AttackInfo13getAttackTypeERSs+0x542>  ; AttackInfo::getAttackType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x542
088907d9 +0x3f:  mov    0x8(%ebp),%eax
088907dc +0x42:  lea    0xa4(%eax),%ecx
088907e2 +0x48:  lea    -0x10(%ebp),%eax
088907e5 +0x4b:  lea    0xc(%ebp),%edx
088907e8 +0x4e:  mov    %edx,0x8(%esp)
088907ec +0x52:  mov    %ecx,0x4(%esp)
088907f0 +0x56:  mov    %eax,(%esp)
088907f3 +0x59:  call   08890e22 <_ZN10AttackInfo13getAttackTypeERSs+0x55c>  ; AttackInfo::getAttackType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x55c
088907f8 +0x5e:  sub    $0x4,%esp
088907fb +0x61:  leave
088907fc +0x62:  ret
088907fd +0x63:  nop
```

## 反编译 C

```c
// AttackInfo::setElement @ 0x889079a

/* AttackInfo::setElement(ENUM_ELEMENT) */

void __thiscall AttackInfo::setElement(AttackInfo *this,int param_2)

{
  ENUM_ELEMENT local_14 [16];
  
  if (param_2 == 4) {
    std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::clear
              ((set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>> *)
               (this + 0xa4));
  }
  else {
    std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::erase(this + 0xa4);
    std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::insert(local_14);
  }
  return;
}
```
