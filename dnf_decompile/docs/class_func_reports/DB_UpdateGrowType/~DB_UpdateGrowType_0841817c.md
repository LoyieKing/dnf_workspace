# ~DB_UpdateGrowType

`_ZN17DB_UpdateGrowTypeD0Ev`

`DB_UpdateGrowType::~DB_UpdateGrowType()`

| 类 | 地址 |
|---|---|
| `DB_UpdateGrowType` | `0x0841817c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841817c  _ZN17DB_UpdateGrowTypeD0Ev
#           DB_UpdateGrowType::~DB_UpdateGrowType()
# range [0x0841817c, 0x08418199]
0841817c +0x00:  push   %ebp
0841817d +0x01:  mov    %esp,%ebp
0841817f +0x03:  sub    $0x18,%esp
08418182 +0x06:  mov    0x8(%ebp),%eax
08418185 +0x09:  mov    %eax,(%esp)
08418188 +0x0c:  call   0841814c <_ZN17DB_UpdateGrowTypeD1Ev>  ; DB_UpdateGrowType::~DB_UpdateGrowType()
0841818d +0x11:  mov    0x8(%ebp),%eax
08418190 +0x14:  mov    %eax,(%esp)
08418193 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08418198 +0x1c:  leave
08418199 +0x1d:  ret
```

## 反编译 C

```c
// DB_UpdateGrowType::~DB_UpdateGrowType @ 0x841817c

/* DB_UpdateGrowType::~DB_UpdateGrowType() */

void __thiscall DB_UpdateGrowType::~DB_UpdateGrowType(DB_UpdateGrowType *this)

{
  ~DB_UpdateGrowType(this);
  operator_delete(this);
  return;
}
```
