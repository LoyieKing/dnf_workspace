# DB_UpdateGrowType

`_ZN17DB_UpdateGrowTypeC1Ev`

`DB_UpdateGrowType::DB_UpdateGrowType()`

| 类 | 地址 |
|---|---|
| `DB_UpdateGrowType` | `0x08418130` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08418130  _ZN17DB_UpdateGrowTypeC1Ev
#           DB_UpdateGrowType::DB_UpdateGrowType()
# range [0x08418130, 0x0841814b]
08418130 +0x00:  push   %ebp
08418131 +0x01:  mov    %esp,%ebp
08418133 +0x03:  sub    $0x18,%esp
08418136 +0x06:  mov    0x8(%ebp),%eax
08418139 +0x09:  mov    %eax,(%esp)
0841813c +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08418141 +0x11:  mov    0x8(%ebp),%eax
08418144 +0x14:  movl   $&_ZTV17DB_UpdateGrowType+0x8,(%eax)
0841814a +0x1a:  leave
0841814b +0x1b:  ret
```

## 反编译 C

```c
// DB_UpdateGrowType::DB_UpdateGrowType @ 0x8418130

/* DB_UpdateGrowType::DB_UpdateGrowType() */

void __thiscall DB_UpdateGrowType::DB_UpdateGrowType(DB_UpdateGrowType *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5f9d8;
  return;
}
```
