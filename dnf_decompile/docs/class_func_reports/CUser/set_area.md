# set_area

`_ZN5CUser8set_areaEi`

`CUser::set_area(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08647864` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08647864  _ZN5CUser8set_areaEi
#           CUser::set_area(int)
# range [0x08647864, 0x0864788f]
08647864 +0x00:  push   %ebp
08647865 +0x01:  mov    %esp,%ebp
08647867 +0x03:  sub    $0x18,%esp
0864786a +0x06:  mov    0x8(%ebp),%eax
0864786d +0x09:  mov    0x8cfbc(%eax),%eax
08647873 +0x0f:  mov    %eax,0x4(%esp)
08647877 +0x13:  mov    0x8(%ebp),%eax
0864787a +0x16:  mov    %eax,(%esp)
0864787d +0x19:  call   08697418 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3c6d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3c6d
08647882 +0x1e:  mov    0x8(%ebp),%eax
08647885 +0x21:  mov    0xc(%ebp),%edx
08647888 +0x24:  mov    %edx,0x8cfbc(%eax)
0864788e +0x2a:  leave
0864788f +0x2b:  ret
```

## 反编译 C

```c
// CUser::set_area @ 0x8647864

/* CUser::set_area(int) */

void __thiscall CUser::set_area(CUser *this,int param_1)

{
  set_before_area(this,*(int *)(this + 0x8cfbc));
  *(int *)(this + 0x8cfbc) = param_1;
  return;
}
```
