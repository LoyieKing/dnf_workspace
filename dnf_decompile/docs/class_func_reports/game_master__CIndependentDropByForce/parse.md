# parse

`_ZN11game_master23CIndependentDropByForce5parseEv`

`game_master::CIndependentDropByForce::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CIndependentDropByForce` | `0x084b1f8c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b1f8c  _ZN11game_master23CIndependentDropByForce5parseEv
#           game_master::CIndependentDropByForce::parse()
# range [0x084b1f8c, 0x084b1fd9]
084b1f8c +0x00:  push   %ebp
084b1f8d +0x01:  mov    %esp,%ebp
084b1f8f +0x03:  sub    $0x18,%esp
084b1f92 +0x06:  mov    0x8(%ebp),%eax
084b1f95 +0x09:  movb   $0x0,0x8(%eax)
084b1f99 +0x0d:  mov    0x8(%ebp),%eax
084b1f9c +0x10:  mov    0x4(%eax),%eax
084b1f9f +0x13:  add    $0xc,%eax
084b1fa2 +0x16:  mov    %eax,(%esp)
084b1fa5 +0x19:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084b1faa +0x1e:  mov    0x8(%ebp),%eax
084b1fad +0x21:  mov    0x4(%eax),%eax
084b1fb0 +0x24:  add    $0xc,%eax
084b1fb3 +0x27:  movl   $"on",0x4(%esp)
084b1fbb +0x2f:  mov    %eax,(%esp)
084b1fbe +0x32:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
084b1fc3 +0x37:  test   %al,%al
084b1fc5 +0x39:  je     084b1fd0 <+0x44>
084b1fc7 +0x3b:  mov    0x8(%ebp),%eax
084b1fca +0x3e:  movb   $0x1,0x8(%eax)
084b1fce +0x42:  jmp    084b1fd7 <+0x4b>
084b1fd0 +0x44:  mov    0x8(%ebp),%eax
084b1fd3 +0x47:  movb   $0x0,0x8(%eax)
084b1fd7 +0x4b:  leave
084b1fd8 +0x4c:  ret
084b1fd9 +0x4d:  nop
```

## 反编译 C

```c
// game_master::CIndependentDropByForce::parse @ 0x84b1f8c

/* game_master::CIndependentDropByForce::parse() */

void __thiscall game_master::CIndependentDropByForce::parse(CIndependentDropByForce *this)

{
  bool bVar1;
  
  this[8] = (CIndependentDropByForce)0x0;
  trim((string *)(*(int *)(this + 4) + 0xc));
  bVar1 = std::operator==((string *)(*(int *)(this + 4) + 0xc),"on");
  if (bVar1) {
    this[8] = (CIndependentDropByForce)0x1;
  }
  else {
    this[8] = (CIndependentDropByForce)0x0;
  }
  return;
}
```
