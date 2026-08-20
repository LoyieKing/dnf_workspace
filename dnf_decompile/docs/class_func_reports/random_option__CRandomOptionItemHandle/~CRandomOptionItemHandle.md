# ~CRandomOptionItemHandle

`_ZN13random_option23CRandomOptionItemHandleD1Ev`

`random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle()`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f0e46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f0e46  _ZN13random_option23CRandomOptionItemHandleD1Ev
#           random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle()
# range [0x085f0e46, 0x085f0e83]
085f0e46 +0x00:  push   %ebp
085f0e47 +0x01:  mov    %esp,%ebp
085f0e49 +0x03:  sub    $0x18,%esp
085f0e4c +0x06:  mov    0x8(%ebp),%eax
085f0e4f +0x09:  movl   $&_ZTVN13random_option23CRandomOptionItemHandleE+0x8,(%eax)
085f0e55 +0x0f:  mov    0x8(%ebp),%eax
085f0e58 +0x12:  mov    0x4(%eax),%eax
085f0e5b +0x15:  test   %eax,%eax
085f0e5d +0x17:  je     085f0e6d <+0x27>
085f0e5f +0x19:  mov    0x8(%ebp),%eax
085f0e62 +0x1c:  mov    0x4(%eax),%eax
085f0e65 +0x1f:  mov    %eax,(%esp)
085f0e68 +0x22:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
085f0e6d +0x27:  mov    $0x0,%eax
085f0e72 +0x2c:  test   %al,%al
085f0e74 +0x2e:  je     085f0e81 <+0x3b>
085f0e76 +0x30:  mov    0x8(%ebp),%eax
085f0e79 +0x33:  mov    %eax,(%esp)
085f0e7c +0x36:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085f0e81 +0x3b:  leave
085f0e82 +0x3c:  ret
085f0e83 +0x3d:  nop
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle @ 0x85f0e46

/* WARNING: Removing unreachable block (ram,0x085f0e76) */
/* random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle() */

void __thiscall
random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle(CRandomOptionItemHandle *this)

{
  *(undefined ***)this = &PTR__CRandomOptionItemHandle_08cd11a0;
  if (*(int *)(this + 4) != 0) {
    operator_delete__(*(void **)(this + 4));
  }
  return;
}
```
