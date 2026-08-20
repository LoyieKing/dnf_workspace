# ~AvatarFixedHiddenOptionServer

`_ZN29AvatarFixedHiddenOptionServerD1Ev`

`AvatarFixedHiddenOptionServer::~AvatarFixedHiddenOptionServer()`

| 类 | 地址 |
|---|---|
| `AvatarFixedHiddenOptionServer` | `0x0817e0e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817e0e6  _ZN29AvatarFixedHiddenOptionServerD1Ev
#           AvatarFixedHiddenOptionServer::~AvatarFixedHiddenOptionServer()
# range [0x0817e0e6, 0x0817e153]
0817e0e6 +0x00:  push   %ebp
0817e0e7 +0x01:  mov    %esp,%ebp
0817e0e9 +0x03:  push   %esi
0817e0ea +0x04:  push   %ebx
0817e0eb +0x05:  sub    $0x10,%esp
0817e0ee +0x08:  mov    0x8(%ebp),%eax
0817e0f1 +0x0b:  movl   $&_ZTV29AvatarFixedHiddenOptionServer+0x8,(%eax)
0817e0f7 +0x11:  mov    0x8(%ebp),%eax
0817e0fa +0x14:  add    $0x50,%eax
0817e0fd +0x17:  test   %eax,%eax
0817e0ff +0x19:  je     0817e13f <+0x59>
0817e101 +0x1b:  mov    0x8(%ebp),%eax
0817e104 +0x1e:  add    $0x50,%eax
0817e107 +0x21:  lea    0x48(%eax),%ebx
0817e10a +0x24:  mov    0x8(%ebp),%eax
0817e10d +0x27:  add    $0x50,%eax
0817e110 +0x2a:  cmp    %eax,%ebx
0817e112 +0x2c:  je     0817e13f <+0x59>
0817e114 +0x2e:  sub    $0xc,%ebx
0817e117 +0x31:  mov    %ebx,(%esp)
0817e11a +0x34:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0817e11f +0x39:  jmp    0817e10a <+0x24>
0817e121 +0x3b:  mov    %edx,%ebx
0817e123 +0x3d:  mov    %eax,%esi
0817e125 +0x3f:  mov    0x8(%ebp),%eax
0817e128 +0x42:  add    $0x4,%eax
0817e12b +0x45:  mov    %eax,(%esp)
0817e12e +0x48:  call   088aed5e <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionD1Ev>  ; ARAD::SCRIPT::AvatarFixedHiddenOption::~AvatarFixedHiddenOption()
0817e133 +0x4d:  mov    %esi,%eax
0817e135 +0x4f:  mov    %ebx,%edx
0817e137 +0x51:  mov    %eax,(%esp)
0817e13a +0x54:  call   08ae3750 <_Unwind_Resume>
0817e13f +0x59:  mov    0x8(%ebp),%eax
0817e142 +0x5c:  add    $0x4,%eax
0817e145 +0x5f:  mov    %eax,(%esp)
0817e148 +0x62:  call   088aed5e <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionD1Ev>  ; ARAD::SCRIPT::AvatarFixedHiddenOption::~AvatarFixedHiddenOption()
0817e14d +0x67:  add    $0x10,%esp
0817e150 +0x6a:  pop    %ebx
0817e151 +0x6b:  pop    %esi
0817e152 +0x6c:  pop    %ebp
0817e153 +0x6d:  ret
```

## 反编译 C

```c
// AvatarFixedHiddenOptionServer::~AvatarFixedHiddenOptionServer @ 0x817e0e6

/* AvatarFixedHiddenOptionServer::~AvatarFixedHiddenOptionServer() */

void __thiscall
AvatarFixedHiddenOptionServer::~AvatarFixedHiddenOptionServer(AvatarFixedHiddenOptionServer *this)

{
  vector<int,std::allocator<int>> *this_00;
  
  *(undefined ***)this = &PTR_Load_08b8ac60;
  if (this != (AvatarFixedHiddenOptionServer *)0xffffffb0) {
    this_00 = (vector<int,std::allocator<int>> *)(this + 0x98);
    while (this_00 != (vector<int,std::allocator<int>> *)(this + 0x50)) {
      this_00 = this_00 + -0xc;
                    /* try { // try from 0817e11a to 0817e11e has its CatchHandler @ 0817e121 */
      std::vector<int,std::allocator<int>>::~vector(this_00);
    }
  }
  ARAD::SCRIPT::AvatarFixedHiddenOption::~AvatarFixedHiddenOption
            ((AvatarFixedHiddenOption *)(this + 4));
  return;
}
```
