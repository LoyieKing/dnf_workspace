# ~CNexonMsgTable

`_ZN14CNexonMsgTableD1Ev`

`CNexonMsgTable::~CNexonMsgTable()`

| 类 | 地址 |
|---|---|
| `CNexonMsgTable` | `0x085800f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085800f8  _ZN14CNexonMsgTableD1Ev
#           CNexonMsgTable::~CNexonMsgTable()
# range [0x085800f8, 0x0858010b]
085800f8 +0x00:  push   %ebp
085800f9 +0x01:  mov    %esp,%ebp
085800fb +0x03:  sub    $0x18,%esp
085800fe +0x06:  mov    0x8(%ebp),%eax
08580101 +0x09:  mov    %eax,(%esp)
08580104 +0x0c:  call   080c6ab2 <_GLOBAL__I_g_ServerString_+0x1d>  ; global constructors keyed to g_ServerString_+0x1d
08580109 +0x11:  leave
0858010a +0x12:  ret
0858010b +0x13:  nop
```

## 反编译 C

```c
// CNexonMsgTable::~CNexonMsgTable @ 0x85800f8

/* CNexonMsgTable::~CNexonMsgTable() */

void __thiscall CNexonMsgTable::~CNexonMsgTable(CNexonMsgTable *this)

{
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::~map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )this);
  return;
}
```
