# ~BlueMarble

`_ZN10BlueMarbleD1Ev`

`BlueMarble::~BlueMarble()`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d8bae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d8bae  _ZN10BlueMarbleD1Ev
#           BlueMarble::~BlueMarble()
# range [0x080d8bae, 0x080d8c25]
080d8bae +0x00:  push   %ebp
080d8baf +0x01:  mov    %esp,%ebp
080d8bb1 +0x03:  push   %esi
080d8bb2 +0x04:  push   %ebx
080d8bb3 +0x05:  sub    $0x10,%esp
080d8bb6 +0x08:  mov    0x8(%ebp),%eax
080d8bb9 +0x0b:  mov    0x14(%eax),%eax
080d8bbc +0x0e:  test   %eax,%eax
080d8bbe +0x10:  je     080d8bd8 <+0x2a>
080d8bc0 +0x12:  mov    0x8(%ebp),%eax
080d8bc3 +0x15:  mov    0x14(%eax),%eax
080d8bc6 +0x18:  test   %eax,%eax
080d8bc8 +0x1a:  je     080d8bd8 <+0x2a>
080d8bca +0x1c:  mov    0x8(%ebp),%eax
080d8bcd +0x1f:  mov    0x14(%eax),%eax
080d8bd0 +0x22:  mov    %eax,(%esp)
080d8bd3 +0x25:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
080d8bd8 +0x2a:  mov    0x8(%ebp),%eax
080d8bdb +0x2d:  movl   $0x0,0x14(%eax)
080d8be2 +0x34:  mov    0x8(%ebp),%eax
080d8be5 +0x37:  add    $0x20,%eax
080d8be8 +0x3a:  mov    %eax,(%esp)
080d8beb +0x3d:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
080d8bf0 +0x42:  jmp    080d8c10 <+0x62>
080d8bf2 +0x44:  mov    %edx,%ebx
080d8bf4 +0x46:  mov    %eax,%esi
080d8bf6 +0x48:  mov    0x8(%ebp),%eax
080d8bf9 +0x4b:  add    $0x4,%eax
080d8bfc +0x4e:  mov    %eax,(%esp)
080d8bff +0x51:  call   080da78a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x927>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x927
080d8c04 +0x56:  mov    %esi,%eax
080d8c06 +0x58:  mov    %ebx,%edx
080d8c08 +0x5a:  mov    %eax,(%esp)
080d8c0b +0x5d:  call   08ae3750 <_Unwind_Resume>
080d8c10 +0x62:  mov    0x8(%ebp),%eax
080d8c13 +0x65:  add    $0x4,%eax
080d8c16 +0x68:  mov    %eax,(%esp)
080d8c19 +0x6b:  call   080da78a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x927>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x927
080d8c1e +0x70:  add    $0x10,%esp
080d8c21 +0x73:  pop    %ebx
080d8c22 +0x74:  pop    %esi
080d8c23 +0x75:  pop    %ebp
080d8c24 +0x76:  ret
080d8c25 +0x77:  nop
```

## 反编译 C

```c
// BlueMarble::~BlueMarble @ 0x80d8bae

/* BlueMarble::~BlueMarble() */

void __thiscall BlueMarble::~BlueMarble(BlueMarble *this)

{
  if ((*(int *)(this + 0x14) != 0) && (*(int *)(this + 0x14) != 0)) {
    operator_delete__(*(void **)(this + 0x14));
  }
  *(undefined4 *)(this + 0x14) = 0;
                    /* try { // try from 080d8beb to 080d8bef has its CatchHandler @ 080d8bf2 */
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x20));
  std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::~vector
            ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4));
  return;
}
```
