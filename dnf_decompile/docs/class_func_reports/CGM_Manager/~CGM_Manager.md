# ~CGM_Manager

`_ZN11CGM_ManagerD1Ev`

`CGM_Manager::~CGM_Manager()`

| 类 | 地址 |
|---|---|
| `CGM_Manager` | `0x0829915a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829915a  _ZN11CGM_ManagerD1Ev
#           CGM_Manager::~CGM_Manager()
# range [0x0829915a, 0x0829917b]
0829915a +0x00:  push   %ebp
0829915b +0x01:  mov    %esp,%ebp
0829915d +0x03:  sub    $0x18,%esp
08299160 +0x06:  mov    0x8(%ebp),%eax
08299163 +0x09:  add    $0x1c,%eax
08299166 +0x0c:  mov    %eax,(%esp)
08299169 +0x0f:  call   082a3c64 <_GLOBAL__I__ZN4CLog5this_E+0x8b>  ; global constructors keyed to CLog::this_+0x8b
0829916e +0x14:  mov    0x8(%ebp),%eax
08299171 +0x17:  mov    %eax,(%esp)
08299174 +0x1a:  call   082aa826 <_GLOBAL__I__ZN4CLog5this_E+0x6c4d>  ; global constructors keyed to CLog::this_+0x6c4d
08299179 +0x1f:  leave
0829917a +0x20:  ret
0829917b +0x21:  nop
```

## 反编译 C

```c
// CGM_Manager::~CGM_Manager @ 0x829915a

/* CGM_Manager::~CGM_Manager() */

void __thiscall CGM_Manager::~CGM_Manager(CGM_Manager *this)

{
  rwLock::~rwLock((rwLock *)(this + 0x1c));
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::~map((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
          *)this);
  return;
}
```
