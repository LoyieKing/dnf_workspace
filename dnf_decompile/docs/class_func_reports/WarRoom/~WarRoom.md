# ~WarRoom

`_ZN7WarRoomD1Ev`

`WarRoom::~WarRoom()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086ba7e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ba7e6  _ZN7WarRoomD1Ev
#           WarRoom::~WarRoom()
# range [0x086ba7e6, 0x086ba833]
086ba7e6 +0x00:  push   %ebp
086ba7e7 +0x01:  mov    %esp,%ebp
086ba7e9 +0x03:  push   %esi
086ba7ea +0x04:  push   %ebx
086ba7eb +0x05:  sub    $0x10,%esp
086ba7ee +0x08:  mov    0x8(%ebp),%eax
086ba7f1 +0x0b:  add    $0x1d8,%eax
086ba7f6 +0x10:  mov    %eax,(%esp)
086ba7f9 +0x13:  call   0844d4bc <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xd2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xd2
086ba7fe +0x18:  jmp    086ba81e <+0x38>
086ba800 +0x1a:  mov    %edx,%ebx
086ba802 +0x1c:  mov    %eax,%esi
086ba804 +0x1e:  mov    0x8(%ebp),%eax
086ba807 +0x21:  add    $0x34,%eax
086ba80a +0x24:  mov    %eax,(%esp)
086ba80d +0x27:  call   086c0ba4 <_GLOBAL__I__ZN7WarRoomC2Ev+0x9d>  ; global constructors keyed to WarRoom::WarRoom()+0x9d
086ba812 +0x2c:  mov    %esi,%eax
086ba814 +0x2e:  mov    %ebx,%edx
086ba816 +0x30:  mov    %eax,(%esp)
086ba819 +0x33:  call   08ae3750 <_Unwind_Resume>
086ba81e +0x38:  mov    0x8(%ebp),%eax
086ba821 +0x3b:  add    $0x34,%eax
086ba824 +0x3e:  mov    %eax,(%esp)
086ba827 +0x41:  call   086c0ba4 <_GLOBAL__I__ZN7WarRoomC2Ev+0x9d>  ; global constructors keyed to WarRoom::WarRoom()+0x9d
086ba82c +0x46:  add    $0x10,%esp
086ba82f +0x49:  pop    %ebx
086ba830 +0x4a:  pop    %esi
086ba831 +0x4b:  pop    %ebp
086ba832 +0x4c:  ret
086ba833 +0x4d:  nop
```

## 反编译 C

```c
// WarRoom::~WarRoom @ 0x86ba7e6

/* WarRoom::~WarRoom() */

void __thiscall WarRoom::~WarRoom(WarRoom *this)

{
                    /* try { // try from 086ba7f9 to 086ba7fd has its CatchHandler @ 086ba800 */
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  ~map((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
        *)(this + 0x1d8));
  WarField::~WarField((WarField *)(this + 0x34));
  return;
}
```
