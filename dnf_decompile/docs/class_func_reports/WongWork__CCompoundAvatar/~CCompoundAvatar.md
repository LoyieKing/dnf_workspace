# ~CCompoundAvatar

`_ZN8WongWork15CCompoundAvatarD1Ev`

`WongWork::CCompoundAvatar::~CCompoundAvatar()`

| 类 | 地址 |
|---|---|
| `WongWork::CCompoundAvatar` | `0x08331ea2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08331ea2  _ZN8WongWork15CCompoundAvatarD1Ev
#           WongWork::CCompoundAvatar::~CCompoundAvatar()
# range [0x08331ea2, 0x08331efd]
08331ea2 +0x00:  push   %ebp
08331ea3 +0x01:  mov    %esp,%ebp
08331ea5 +0x03:  push   %ebx
08331ea6 +0x04:  sub    $0x14,%esp
08331ea9 +0x07:  mov    0x8(%ebp),%eax
08331eac +0x0a:  mov    0x84(%eax),%eax
08331eb2 +0x10:  test   %eax,%eax
08331eb4 +0x12:  je     08331ec7 <+0x25>
08331eb6 +0x14:  mov    0x8(%ebp),%eax
08331eb9 +0x17:  mov    0x84(%eax),%eax
08331ebf +0x1d:  mov    %eax,(%esp)
08331ec2 +0x20:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08331ec7 +0x25:  mov    0x8(%ebp),%eax
08331eca +0x28:  movl   $0x0,0x84(%eax)
08331ed4 +0x32:  mov    0x8(%ebp),%eax
08331ed7 +0x35:  test   %eax,%eax
08331ed9 +0x37:  je     08331ef8 <+0x56>
08331edb +0x39:  mov    0x8(%ebp),%eax
08331ede +0x3c:  lea    0x84(%eax),%ebx
08331ee4 +0x42:  mov    0x8(%ebp),%eax
08331ee7 +0x45:  cmp    %eax,%ebx
08331ee9 +0x47:  je     08331ef8 <+0x56>
08331eeb +0x49:  sub    $0xc,%ebx
08331eee +0x4c:  mov    %ebx,(%esp)
08331ef1 +0x4f:  call   08334330 <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x12e>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x12e
08331ef6 +0x54:  jmp    08331ee4 <+0x42>
08331ef8 +0x56:  add    $0x14,%esp
08331efb +0x59:  pop    %ebx
08331efc +0x5a:  pop    %ebp
08331efd +0x5b:  ret
```

## 反编译 C

```c
// WongWork::CCompoundAvatar::~CCompoundAvatar @ 0x8331ea2

/* WongWork::CCompoundAvatar::~CCompoundAvatar() */

void __thiscall WongWork::CCompoundAvatar::~CCompoundAvatar(CCompoundAvatar *this)

{
  tagCompoundAvatarTable *this_00;
  
  if (*(int *)(this + 0x84) != 0) {
    operator_delete(*(void **)(this + 0x84));
  }
  *(undefined4 *)(this + 0x84) = 0;
  if (this != (CCompoundAvatar *)0x0) {
    this_00 = (tagCompoundAvatarTable *)(this + 0x84);
    while (this_00 != (tagCompoundAvatarTable *)this) {
      this_00 = this_00 + -0xc;
      tagCompoundAvatarTable::~tagCompoundAvatarTable(this_00);
    }
  }
  return;
}
```
