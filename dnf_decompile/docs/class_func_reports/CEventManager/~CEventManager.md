# ~CEventManager

`_ZN13CEventManagerD1Ev`

`CEventManager::~CEventManager()`

| 类 | 地址 |
|---|---|
| `CEventManager` | `0x08114d4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08114d4e  _ZN13CEventManagerD1Ev
#           CEventManager::~CEventManager()
# range [0x08114d4e, 0x08114dcb]
08114d4e +0x00:  push   %ebp
08114d4f +0x01:  mov    %esp,%ebp
08114d51 +0x03:  push   %ebx
08114d52 +0x04:  sub    $0x24,%esp
08114d55 +0x07:  movl   $0x0,-0xc(%ebp)
08114d5c +0x0e:  jmp    08114d9a <+0x4c>
08114d5e +0x10:  mov    -0xc(%ebp),%edx
08114d61 +0x13:  mov    0x8(%ebp),%eax
08114d64 +0x16:  mov    (%eax,%edx,4),%eax
08114d67 +0x19:  test   %eax,%eax
08114d69 +0x1b:  je     08114d96 <+0x48>
08114d6b +0x1d:  mov    -0xc(%ebp),%edx
08114d6e +0x20:  mov    0x8(%ebp),%eax
08114d71 +0x23:  mov    (%eax,%edx,4),%eax
08114d74 +0x26:  test   %eax,%eax
08114d76 +0x28:  je     08114d96 <+0x48>
08114d78 +0x2a:  mov    -0xc(%ebp),%edx
08114d7b +0x2d:  mov    0x8(%ebp),%eax
08114d7e +0x30:  mov    (%eax,%edx,4),%eax
08114d81 +0x33:  mov    (%eax),%eax
08114d83 +0x35:  add    $0x4,%eax
08114d86 +0x38:  mov    (%eax),%ecx
08114d88 +0x3a:  mov    -0xc(%ebp),%edx
08114d8b +0x3d:  mov    0x8(%ebp),%eax
08114d8e +0x40:  mov    (%eax,%edx,4),%eax
08114d91 +0x43:  mov    %eax,(%esp)
08114d94 +0x46:  call   *%ecx
08114d96 +0x48:  addl   $0x1,-0xc(%ebp)
08114d9a +0x4c:  cmpl   $0xa5,-0xc(%ebp)
08114da1 +0x53:  setle  %al
08114da4 +0x56:  test   %al,%al
08114da6 +0x58:  jne    08114d5e <+0x10>
08114da8 +0x5a:  mov    0x8(%ebp),%eax
08114dab +0x5d:  mov    0x298(%eax),%ebx
08114db1 +0x63:  test   %ebx,%ebx
08114db3 +0x65:  je     08114dc5 <+0x77>
08114db5 +0x67:  mov    %ebx,(%esp)
08114db8 +0x6a:  call   0811639a <_ZN9CDeliveryD1Ev>  ; CDelivery::~CDelivery()
08114dbd +0x6f:  mov    %ebx,(%esp)
08114dc0 +0x72:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08114dc5 +0x77:  add    $0x24,%esp
08114dc8 +0x7a:  pop    %ebx
08114dc9 +0x7b:  pop    %ebp
08114dca +0x7c:  ret
08114dcb +0x7d:  nop
```

## 反编译 C

```c
// CEventManager::~CEventManager @ 0x8114d4e

/* CEventManager::~CEventManager() */

void __thiscall CEventManager::~CEventManager(CEventManager *this)

{
  CDelivery *this_00;
  int local_10;
  
  for (local_10 = 0; local_10 < 0xa6; local_10 = local_10 + 1) {
    if ((*(int *)(this + local_10 * 4) != 0) && (*(int *)(this + local_10 * 4) != 0)) {
      (**(code **)(**(int **)(this + local_10 * 4) + 4))(*(undefined4 *)(this + local_10 * 4));
    }
  }
  this_00 = *(CDelivery **)(this + 0x298);
  if (this_00 != (CDelivery *)0x0) {
    CDelivery::~CDelivery(this_00);
    operator_delete(this_00);
  }
  return;
}
```
