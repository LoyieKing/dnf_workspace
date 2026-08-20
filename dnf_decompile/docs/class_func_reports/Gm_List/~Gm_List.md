# ~Gm_List

`_ZN7Gm_ListD1Ev`

`Gm_List::~Gm_List()`

| 类 | 地址 |
|---|---|
| `Gm_List` | `0x08299948` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08299948  _ZN7Gm_ListD1Ev
#           Gm_List::~Gm_List()
# range [0x08299948, 0x0829996b]
08299948 +0x00:  push   %ebp
08299949 +0x01:  mov    %esp,%ebp
0829994b +0x03:  sub    $0x18,%esp
0829994e +0x06:  cmpl   $0x0,0x8(%ebp)
08299952 +0x0a:  je     0829996a <+0x22>
08299954 +0x0c:  mov    0x8(%ebp),%eax
08299957 +0x0f:  mov    %eax,(%esp)
0829995a +0x12:  call   08299948 <+0x0>
0829995f +0x17:  mov    0x8(%ebp),%eax
08299962 +0x1a:  mov    %eax,(%esp)
08299965 +0x1d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829996a +0x22:  leave
0829996b +0x23:  ret
```

## 反编译 C

```c
// Gm_List::~Gm_List @ 0x8299948

/* Gm_List::~Gm_List() */

void __thiscall Gm_List::~Gm_List(Gm_List *this)

{
  if (this != (Gm_List *)0x0) {
    ~Gm_List(this);
    operator_delete(this);
  }
  return;
}
```
